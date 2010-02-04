/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "DataDictionary.h"
#include "Message.h"
#include <fstream>
#include <memory>

#ifdef HAVE_LIBXML
#include "LIBXML_DOMDocument.h"
#elif _MSC_VER
#include "MSXML_DOMDocument.h"
#else
#include "LIBXML_DOMDocument.h"
#endif

#ifdef _MSC_VER
#define RESET_AUTO_PTR(OLD, NEW) OLD = NEW;
#else
#define RESET_AUTO_PTR(OLD, NEW) OLD.reset( NEW.release() );
#endif

namespace FIX
{
DataDictionary::DataDictionary()
: m_hasVersion( false ), m_checkFieldsOutOfOrder( true ),
  m_checkFieldsHaveValues( true ), m_checkUserDefinedFields( true ),
  m_orderedFieldsArray(0) {}

DataDictionary::DataDictionary( std::istream& stream )
throw( ConfigError )
: m_hasVersion( false ), m_checkFieldsOutOfOrder( true ),
  m_checkFieldsHaveValues( true ), m_checkUserDefinedFields( true ),
  m_orderedFieldsArray(0)
{
  readFromStream( stream );
}

DataDictionary::DataDictionary( const std::string& url )
throw( ConfigError )
: m_hasVersion( false ), m_checkFieldsOutOfOrder( true ),
  m_checkFieldsHaveValues( true ), m_checkUserDefinedFields( true ),
  m_orderedFieldsArray(0)
{
  readFromURL( url );
}

DataDictionary::DataDictionary( const DataDictionary& copy )
{
  *this = copy;
}

DataDictionary::~DataDictionary()
{
  FieldToGroup::iterator i;
  for ( i = m_groups.begin(); i != m_groups.end(); ++i )
    delete i->second.second;
  if( m_orderedFieldsArray )
    delete [] m_orderedFieldsArray;
}

DataDictionary& DataDictionary::operator=( const DataDictionary& rhs )
{ QF_STACK_PUSH(DataDictionary::operator=)

  m_hasVersion = rhs.m_hasVersion;
  m_checkFieldsOutOfOrder = rhs.m_checkFieldsOutOfOrder;
  m_checkFieldsHaveValues = rhs.m_checkFieldsHaveValues;
  m_checkUserDefinedFields = rhs.m_checkUserDefinedFields;
  m_beginString = rhs.m_beginString;
  m_messageFields = rhs.m_messageFields;
  m_requiredFields = rhs.m_requiredFields;
  m_messages = rhs.m_messages;
  m_fields = rhs.m_fields;
  m_orderedFields = rhs.m_orderedFields;
  m_orderedFieldsArray = 0;
  m_headerFields = rhs.m_headerFields;
  m_trailerFields = rhs.m_trailerFields;
  m_fieldTypes = rhs.m_fieldTypes;
  m_fieldValues = rhs.m_fieldValues;
  m_fieldNames = rhs.m_fieldNames;
  m_names = rhs.m_names;
  m_valueNames = rhs.m_valueNames;

  FieldToGroup::const_iterator i = rhs.m_groups.begin();
  for ( ; i != rhs.m_groups.end(); ++i )
  {
    addGroup( i->first.first, i->first.second,
              i->second.first, *i->second.second );
  }
  return *this;

  QF_STACK_POP
}

void DataDictionary::validate( const Message& message,
                               const DataDictionary* const pSessionDD,
                               const DataDictionary* const pAppDD )
throw( FIX::Exception )
{ QF_STACK_PUSH( DataDictionary::validate )
  
  const bool bodyOnly = pSessionDD == 0;
  const Header& header = message.getHeader();
  const BeginString& beginString = FIELD_GET_REF( header, BeginString );
  const MsgType& msgType = FIELD_GET_REF( header, MsgType );
  if ( pSessionDD != 0 && pSessionDD->m_hasVersion )
  {
    if( pSessionDD->getVersion() != beginString )
    {
      throw UnsupportedVersion();
    }
  }

  int field = 0;
  if( (pSessionDD !=0 && pSessionDD->m_checkFieldsOutOfOrder) 
      || (pAppDD != 0 && pAppDD->m_checkFieldsOutOfOrder) )
  {
    if ( !message.hasValidStructure(field) )
      throw TagOutOfOrder(field);
  }

  if ( pAppDD != 0 && pAppDD->m_hasVersion )
  {
    pAppDD->checkMsgType( msgType );
    pAppDD->checkHasRequired( message.getHeader(), message, message.getTrailer(), msgType );
  }

  if( !bodyOnly )
  {
    pSessionDD->iterate( message.getHeader(), msgType );
    pSessionDD->iterate( message.getTrailer(), msgType );
  }

  pAppDD->iterate( message, msgType );

  QF_STACK_POP
}

void DataDictionary::iterate( const FieldMap& map, const MsgType& msgType ) const
{ QF_STACK_PUSH(DataDictionary::iterate)

  int lastField = 0;

  FieldMap::iterator i;
  for ( i = map.begin(); i != map.end(); ++i )
  {
    const FieldBase& field = i->second;
    if( i != map.begin() && (field.getField() == lastField) )
      throw RepeatedTag( lastField );
    checkHasValue( field );

    if ( m_hasVersion )
    {
      checkValidFormat( field );
      checkValue( field );
    }

    if ( m_beginString.getValue().length() && shouldCheckTag(field) )
    {
      checkValidTagNumber( field );
      if ( !Message::isHeaderField( field, this )
           && !Message::isTrailerField( field, this ) )
      {
        checkIsInMessage( field, msgType );
        checkGroupCount( field, map, msgType );
      }
    }
    lastField = field.getField();
  }

  QF_STACK_POP
}

void DataDictionary::readFromURL( const std::string& url )
throw( ConfigError )
{ QF_STACK_PUSH(DataDictionary::readFromURL)

#ifdef HAVE_LIBXML
  DOMDocumentPtr pDoc = DOMDocumentPtr(new LIBXML_DOMDocument());
#elif _MSC_VER
  DOMDocumentPtr pDoc = DOMDocumentPtr(new MSXML_DOMDocument());
#else
  DOMDocumentPtr pDoc = DOMDocumentPtr(new LIBXML_DOMDocument());
#endif

  if(!pDoc->load(url))
    throw ConfigError(url + ": Could not parse data dictionary file");

  try
  {
    readFromDocument( pDoc );
  }
  catch( ConfigError& e )
  {
    throw ConfigError( url + ": " + e.what() );
  }

  QF_STACK_POP
}

void DataDictionary::readFromStream( std::istream& stream )
throw( ConfigError )
{ QF_STACK_PUSH(DataDictionary::readFromStream)

#ifdef HAVE_LIBXML
  DOMDocumentPtr pDoc = DOMDocumentPtr(new LIBXML_DOMDocument());
#elif _MSC_VER
  DOMDocumentPtr pDoc = DOMDocumentPtr(new MSXML_DOMDocument());
#else
  DOMDocumentPtr pDoc = DOMDocumentPtr(new LIBXML_DOMDocument());
#endif

  if(!pDoc->load(stream))
    throw ConfigError("Could not parse data dictionary stream");

  readFromDocument( pDoc );

  QF_STACK_POP
}

void DataDictionary::readFromDocument( DOMDocumentPtr pDoc )
throw( ConfigError )
{ QF_STACK_PUSH(DataDictionary::readFromDocument)

  // VERSION
  DOMNodePtr pFixNode = pDoc->getNode("/fix");
  if(!pFixNode.get())
    throw ConfigError("Could not parse data dictionary file"
                      ", or no <fix> node found at root");
  DOMAttributesPtr attrs = pFixNode->getAttributes();
  std::string type = "FIX";
  if(attrs->get("type", type))
  {
    if(type != "FIX" && type != "FIXT")
      throw ConfigError("type attribute must be FIX or FIXT");
  }
  std::string major;
  if(!attrs->get("major", major))
    throw ConfigError("major attribute not found on <fix>");
  std::string minor;
  if(!attrs->get("minor", minor))
    throw ConfigError("minor attribute not found on <fix>");
  setVersion(type + "." + major + "." + minor);

  // FIELDS
  DOMNodePtr pFieldsNode = pDoc->getNode("/fix/fields");
  if(!pFieldsNode.get())
    throw ConfigError("<fields> section not found in data dictionary");

  DOMNodePtr pFieldNode = pFieldsNode->getFirstChildNode();
  if(!pFieldNode.get()) throw ConfigError("No fields defined");

  while(pFieldNode.get())
  {
    if(pFieldNode->getName() == "field")
    {
      DOMAttributesPtr attrs = pFieldNode->getAttributes();
      std::string name;
      if(!attrs->get("name", name))
        throw ConfigError("<field> does not have a name attribute");
      std::string number;
      if(!attrs->get("number", number))
        throw ConfigError("<field> " + name + " does not have a number attribute");
      int num = atol(number.c_str());
      std::string type;
      if(!attrs->get("type", type))
        throw ConfigError("<field> " + name + " does not have a type attribute");
      addField(num);
      addFieldType(num, XMLTypeToType(type));
      addFieldName(num, name);

      DOMNodePtr pFieldValueNode = pFieldNode->getFirstChildNode();
      while(pFieldValueNode.get())
      {
        if(pFieldValueNode->getName() == "value")
        {
          DOMAttributesPtr attrs = pFieldValueNode->getAttributes();
          std::string enumeration;
          if(!attrs->get("enum", enumeration))
            throw ConfigError("<value> does not have enum attribute in field " + name);
          addFieldValue(num, enumeration);
          std::string description;
          if(attrs->get("description", description))
            addValueName(num, enumeration, description);
        }
        RESET_AUTO_PTR(pFieldValueNode, pFieldValueNode->getNextSiblingNode());
      }
    }
    RESET_AUTO_PTR(pFieldNode, pFieldNode->getNextSiblingNode());
  }

  // HEADER
  if( type == "FIXT" || (type == "FIX" && major < "5") )
  {
    DOMNodePtr pHeaderNode = pDoc->getNode("/fix/header");
    if(!pHeaderNode.get())
      throw ConfigError("<header> section not found in data dictionary");

    DOMNodePtr pHeaderFieldNode = pHeaderNode->getFirstChildNode();
    if(!pHeaderFieldNode.get()) throw ConfigError("No header fields defined");

    while(pHeaderFieldNode.get())
    {
      if(pHeaderFieldNode->getName() == "field" || pHeaderFieldNode->getName() == "group" )
      {
        DOMAttributesPtr attrs = pHeaderFieldNode->getAttributes();
        std::string name;
        if(!attrs->get("name", name))
          throw ConfigError("<field> does not have a name attribute");
        std::string required = "false";
        attrs->get("required", required);
        addHeaderField(lookupXMLFieldNumber(pDoc.get(), name), required == "true");
      }
      if(pHeaderFieldNode->getName() == "group")
      {
        DOMAttributesPtr attrs = pHeaderFieldNode->getAttributes();
        std::string required;
        attrs->get("required", required);
        bool isRequired = (required == "Y" || required == "y");
        addXMLGroup(pDoc.get(), pHeaderFieldNode.get(), "_header_", *this, isRequired);
      }

      RESET_AUTO_PTR(pHeaderFieldNode, pHeaderFieldNode->getNextSiblingNode());
    }
  }

  // TRAILER
    if( type == "FIXT" || (type == "FIX" && major < "5") )
    {
    DOMNodePtr pTrailerNode = pDoc->getNode("/fix/trailer");
    if(!pTrailerNode.get())
      throw ConfigError("<trailer> section not found in data dictionary");

    DOMNodePtr pTrailerFieldNode = pTrailerNode->getFirstChildNode();
    if(!pTrailerFieldNode.get()) throw ConfigError("No trailer fields defined");

    while(pTrailerFieldNode.get())
    {
      if(pTrailerFieldNode->getName() == "field" || pTrailerFieldNode->getName() == "group" )
      {
        DOMAttributesPtr attrs = pTrailerFieldNode->getAttributes();
        std::string name;
        if(!attrs->get("name", name))
          throw ConfigError("<field> does not have a name attribute");
        std::string required = "false";
        attrs->get("required", required);
        addTrailerField(lookupXMLFieldNumber(pDoc.get(), name), required == "true");
      }
      if(pTrailerFieldNode->getName() == "group")
      {
        DOMAttributesPtr attrs = pTrailerFieldNode->getAttributes();
        std::string required;
        attrs->get("required", required);
        bool isRequired = (required == "Y" || required == "y");
        addXMLGroup(pDoc.get(), pTrailerFieldNode.get(), "_trailer_", *this, isRequired);
      }

      RESET_AUTO_PTR(pTrailerFieldNode, pTrailerFieldNode->getNextSiblingNode());
    }
  }

  // MSGTYPE
  DOMNodePtr pMessagesNode = pDoc->getNode("/fix/messages");
  if(!pMessagesNode.get())
    throw ConfigError("<messages> section not found in data dictionary");

  DOMNodePtr pMessageNode = pMessagesNode->getFirstChildNode();
  if(!pMessageNode.get()) throw ConfigError("No messages defined");

  while(pMessageNode.get())
  {
    if(pMessageNode->getName() == "message")
    {
      DOMAttributesPtr attrs = pMessageNode->getAttributes();
      std::string msgtype;
      if(!attrs->get("msgtype", msgtype))
        throw ConfigError("<field> does not have a name attribute");
      addMsgType(msgtype);

      std::string name;
      if(attrs->get("name", name))
        addValueName( 35, msgtype, name );

      DOMNodePtr pMessageFieldNode = pMessageNode->getFirstChildNode();
      if( !pMessageFieldNode.get() )
        throw ConfigError("<message> contains no fields");
      while( pMessageFieldNode.get() )
      {
        if(pMessageFieldNode->getName() == "field"
           || pMessageFieldNode->getName() == "group")
        {
          DOMAttributesPtr attrs = pMessageFieldNode->getAttributes();
          std::string name;
          if(!attrs->get("name", name))
            throw ConfigError("<field> does not have a name attribute");
          int num = lookupXMLFieldNumber(pDoc.get(), name);
          addMsgField(msgtype, num);

          std::string required;
          if(attrs->get("required", required)
             && (required == "Y" || required == "y"))
          {
            addRequiredField(msgtype, num);
          }
        }
        else if(pMessageFieldNode->getName() == "component")
        {
          DOMAttributesPtr attrs = pMessageFieldNode->getAttributes();
          std::string required;
          attrs->get("required", required);
          bool isRequired = (required == "Y" || required == "y");
          addXMLComponentFields(pDoc.get(), pMessageFieldNode.get(),
                                msgtype, *this, isRequired);
        }
        if(pMessageFieldNode->getName() == "group")
        {
          DOMAttributesPtr attrs = pMessageFieldNode->getAttributes();
          std::string required;
          attrs->get("required", required);
          bool isRequired = (required == "Y" || required == "y");
          addXMLGroup(pDoc.get(), pMessageFieldNode.get(), msgtype, *this, isRequired);
        }
        RESET_AUTO_PTR(pMessageFieldNode,
                       pMessageFieldNode->getNextSiblingNode());
      }
    }
    RESET_AUTO_PTR(pMessageNode, pMessageNode->getNextSiblingNode());
  }

  QF_STACK_POP
}

int* DataDictionary::getOrderedFields() const
{ QF_STACK_PUSH(DataDictionary::getOrderedFields)

  if( m_orderedFieldsArray ) return m_orderedFieldsArray;
  m_orderedFieldsArray = new int[m_orderedFields.size() + 1];

  int* i = m_orderedFieldsArray;
  OrderedFields::const_iterator iter;
  for( iter = m_orderedFields.begin(); iter != m_orderedFields.end(); *(i++) = *(iter++) ) {}
  *i = 0;
  return m_orderedFieldsArray;

  QF_STACK_POP
}

int DataDictionary::lookupXMLFieldNumber( DOMDocument* pDoc, DOMNode* pNode ) const
{ QF_STACK_PUSH(DataDictionary::lookupXMLFieldNumber)

  DOMAttributesPtr attrs = pNode->getAttributes();
  std::string name;
  if(!attrs->get("name", name))
    throw ConfigError("No name given to field");
  return lookupXMLFieldNumber( pDoc, name );

  QF_STACK_POP
}

int DataDictionary::lookupXMLFieldNumber
( DOMDocument* pDoc, const std::string& name ) const
{ QF_STACK_PUSH(DataDictionary::lookupXMLFieldNumber)

  NameToField::const_iterator i = m_names.find(name);
  if( i == m_names.end() )
    throw ConfigError("Field " + name + " not defined in fields section");
  return i->second;

  QF_STACK_POP
}

int DataDictionary::addXMLComponentFields( DOMDocument* pDoc, DOMNode* pNode,
                                            const std::string& msgtype,
                                            DataDictionary& DD,
                                            bool componentRequired )
{ QF_STACK_PUSH(DataDictionary::addXMLComponentFields)

  int firstField = 0;

  DOMAttributesPtr attrs = pNode->getAttributes();
  std::string name;
  if(!attrs->get("name", name))
    throw ConfigError("No name given to component");

  DOMNodePtr pComponentNode =
    pDoc->getNode("/fix/components/component[@name='" + name + "']");
  if(pComponentNode.get() == 0)
    throw ConfigError("Component not found");

  DOMNodePtr pComponentFieldNode = pComponentNode->getFirstChildNode();
  while(pComponentFieldNode.get())
  {
    if(pComponentFieldNode->getName() == "field"
       || pComponentFieldNode->getName() == "group")
    {
      DOMAttributesPtr attrs = pComponentFieldNode->getAttributes();
      std::string name;
      if(!attrs->get("name", name))
        throw ConfigError("No name given to field");
      int field = lookupXMLFieldNumber(pDoc, name);
      if( firstField == 0 ) firstField = field;

      std::string required;
      if(attrs->get("required", required)
         && (required == "Y" || required =="y")
         && componentRequired)
      {
        addRequiredField(msgtype, field);
      }

      DD.addField(field);
      DD.addMsgField(msgtype, field);
    }
    if(pComponentFieldNode->getName() == "component")
    {
      DOMAttributesPtr attrs = pComponentFieldNode->getAttributes();
      std::string required;
      attrs->get("required", required);
      bool isRequired = (required == "Y" || required == "y");
      addXMLComponentFields(pDoc, pComponentFieldNode.get(),
                            msgtype, *this, isRequired);
    }
    if(pComponentFieldNode->getName() == "group")
    {
      DOMAttributesPtr attrs = pComponentFieldNode->getAttributes();
      std::string required;
      attrs->get("required", required);
      bool isRequired = (required == "Y" || required == "y");
      addXMLGroup(pDoc, pComponentFieldNode.get(), msgtype, DD, isRequired);
    }
    RESET_AUTO_PTR(pComponentFieldNode,
      pComponentFieldNode->getNextSiblingNode());
  }
  return firstField;

  QF_STACK_POP
}

void DataDictionary::addXMLGroup( DOMDocument* pDoc, DOMNode* pNode,
                                  const std::string& msgtype,
                                  DataDictionary& DD, bool groupRequired  )
{ QF_STACK_PUSH(DataDictionary::addXMLGroup)

  DOMAttributesPtr attrs = pNode->getAttributes();
  std::string name;
  if(!attrs->get("name", name))
    throw ConfigError("No name given to group");
  int group = lookupXMLFieldNumber( pDoc, name );
  int delim = 0;
  int field = 0;
  DataDictionary groupDD;
  DOMNodePtr node = pNode->getFirstChildNode();
  while(node.get())
  {
    if( node->getName() == "field" )
    {
      field = lookupXMLFieldNumber( pDoc, node.get() );
      groupDD.addField( field );

      DOMAttributesPtr attrs = node->getAttributes();
      std::string required;
      if( attrs->get("required", required)
         && ( required == "Y" || required =="y" )
         && groupRequired )
      {
        groupDD.addRequiredField(msgtype, field);
      }
    }
    else if( node->getName() == "component" )
    {
      field = addXMLComponentFields( pDoc, node.get(), msgtype, groupDD, false );
    }
    else if( node->getName() == "group" )
    {
      field = lookupXMLFieldNumber( pDoc, node.get() );
      groupDD.addField( field );
      DOMAttributesPtr attrs = node->getAttributes();
      std::string required;
      if( attrs->get("required", required )
         && ( required == "Y" || required =="y" )
         && groupRequired)
      {
        groupDD.addRequiredField(msgtype, field);
      }
	    bool isRequired = false;
	    if( attrs->get("required", required) )
		  isRequired = (required == "Y" || required == "y");
      addXMLGroup( pDoc, node.get(), msgtype, groupDD, isRequired );
    }
    if( delim == 0 ) delim = field;
    RESET_AUTO_PTR(node, node->getNextSiblingNode());
  }

  if( delim ) DD.addGroup( msgtype, group, delim, groupDD );

  QF_STACK_POP
}

TYPE::Type DataDictionary::XMLTypeToType( const std::string& type ) const
{ QF_STACK_PUSH(DataDictionary::XMLTypeToType)

  if ( m_beginString < "FIX.4.2" && type == "CHAR" )
    return TYPE::String;

  if ( type == "STRING" ) return TYPE::String;
  if ( type == "CHAR" ) return TYPE::Char;
  if ( type == "PRICE" ) return TYPE::Price;
  if ( type == "INT" ) return TYPE::Int;
  if ( type == "AMT" ) return TYPE::Amt;
  if ( type == "QTY" ) return TYPE::Qty;
  if ( type == "CURRENCY" ) return TYPE::Currency;
  if ( type == "MULTIPLEVALUESTRING" ) return TYPE::MultipleValueString;
  if ( type == "MULTIPLESTRINGVALUE" ) return TYPE::MultipleStringValue;
  if ( type == "MULTIPLECHARVALUE" ) return TYPE::MultipleCharValue;
  if ( type == "EXCHANGE" ) return TYPE::Exchange;
  if ( type == "UTCTIMESTAMP" ) return TYPE::UtcTimeStamp;
  if ( type == "BOOLEAN" ) return TYPE::Boolean;
  if ( type == "LOCALMKTDATE" ) return TYPE::LocalMktDate;
  if ( type == "DATA" ) return TYPE::Data;
  if ( type == "FLOAT" ) return TYPE::Float;
  if ( type == "PRICEOFFSET" ) return TYPE::PriceOffset;
  if ( type == "MONTHYEAR" ) return TYPE::MonthYear;
  if ( type == "DAYOFMONTH" ) return TYPE::DayOfMonth;
  if ( type == "UTCDATE" ) return TYPE::UtcDate;
  if ( type == "UTCDATEONLY" ) return TYPE::UtcDateOnly;
  if ( type == "UTCTIMEONLY" ) return TYPE::UtcTimeOnly;
  if ( type == "NUMINGROUP" ) return TYPE::NumInGroup;
  if ( type == "PERCENTAGE" ) return TYPE::Percentage;
  if ( type == "SEQNUM" ) return TYPE::SeqNum;
  if ( type == "LENGTH" ) return TYPE::Length;
  if ( type == "COUNTRY" ) return TYPE::Country;
  if ( type == "TIME" ) return TYPE::UtcTimeStamp;
  return TYPE::Unknown;

  QF_STACK_POP
}
}
