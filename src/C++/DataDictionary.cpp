/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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
  m_checkFieldsHaveValues( true ) {}

DataDictionary::DataDictionary( const std::string& url )
: m_hasVersion( false ), m_checkFieldsOutOfOrder( true ),
  m_checkFieldsHaveValues( true )
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

}

DataDictionary& DataDictionary::operator=( const DataDictionary& rhs )
{ QF_STACK_PUSH(DataDictionary::operator=)

  m_hasVersion = rhs.m_hasVersion;
  m_checkFieldsOutOfOrder = rhs.m_checkFieldsOutOfOrder;
  m_checkFieldsHaveValues = rhs.m_checkFieldsHaveValues;
  m_beginString = rhs.m_beginString;
  m_messageFields = rhs.m_messageFields;
  m_requiredFields = rhs.m_requiredFields;
  m_messages = rhs.m_messages;
  m_headerFields = rhs.m_headerFields;
  m_trailerFields = rhs.m_trailerFields;
  m_fields = rhs.m_fields;
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

void DataDictionary::validate( const Message& message )
throw( std::exception& )
{ QF_STACK_PUSH(DataDictionary::validate)

  BeginString beginString;
  MsgType msgType;
  message.getHeader().getField( beginString );
  message.getHeader().getField( msgType );

  std::string ddBeginString = getVersion();
  if ( m_hasVersion && m_beginString != beginString )
    throw UnsupportedVersion();

  int field = 0;
  if ( m_checkFieldsOutOfOrder && !message.hasValidStructure(field) )
    throw TagOutOfOrder(field);

  if ( m_hasVersion )
  {
    checkMsgType( msgType );
    checkHasRequired( message, msgType );
  }

  iterate( message.getHeader(), msgType );
  iterate( message.getTrailer(), msgType );
  iterate( message, msgType );

  QF_STACK_POP
}

void DataDictionary::iterate( const FieldMap& map, const MsgType& msgType )
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

    if ( m_beginString.getValue().length() )
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

  // VERSION
  DOMNodePtr pFixNode = pDoc->getNode("/fix");
  if(!pFixNode.get())
    throw ConfigError(url + ": Could not parse data dictionary file"
                            ", or no <fix> node found at root");
  DOMAttributesPtr attrs = pFixNode->getAttributes();
  std::string major;
  if(!attrs->get("major", major))
    throw ConfigError(url + ": major attribute not found on <fix>");
  std::string minor;
  if(!attrs->get("minor", minor))
    throw ConfigError(url + ": minor attribute not found on <fix>");
  setVersion("FIX." + major + "." + minor);

  // FIELDS
  DOMNodePtr pFieldsNode = pDoc->getNode("/fix/fields");
  if(!pFieldsNode.get())
    throw ConfigError(url + ": <fields> section not found in data dictionary");

  DOMNodePtr pFieldNode = pFieldsNode->getFirstChildNode();
  if(!pFieldNode.get()) throw ConfigError(url + ": No fields defined");

  while(pFieldNode.get())
  {
    if(pFieldNode->getName() == "field")
    {
      DOMAttributesPtr attrs = pFieldNode->getAttributes();
      std::string name;
      if(!attrs->get("name", name))
        throw ConfigError(url + ": <field> does not have a name attribute");
      std::string number;
      if(!attrs->get("number", number))
        throw ConfigError(url + ": <field> " + name + " does not have a number attribute");
      int num = atol(number.c_str());
      std::string type;
      if(!attrs->get("type", type))
        throw ConfigError(url + ": <field> " + name + " does not have a type attribute");
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
            throw ConfigError(url + ": <value> does not have enum attribute in field " + name);
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
  DOMNodePtr pHeaderNode = pDoc->getNode("/fix/header");
  if(!pHeaderNode.get())
    throw ConfigError(url + ": <header> section not found in data dictionary");

  DOMNodePtr pHeaderFieldNode = pHeaderNode->getFirstChildNode();
  if(!pHeaderFieldNode.get()) throw ConfigError(url + ": No header fields defined");

  while(pHeaderFieldNode.get())
  {
    if(pHeaderFieldNode->getName() == "field")
    {
      DOMAttributesPtr attrs = pHeaderFieldNode->getAttributes();
      std::string name;
      if(!attrs->get("name", name))
        throw ConfigError(url + ": <field> does not have a name attribute");
      addHeaderField(lookupXMLFieldNumber(pDoc.get(), name));
    }
    RESET_AUTO_PTR(pHeaderFieldNode, pHeaderFieldNode->getNextSiblingNode());
  }

  // TRAILER
  DOMNodePtr pTrailerNode = pDoc->getNode("/fix/trailer");
  if(!pTrailerNode.get())
    throw ConfigError(url + ": <trailer> section not found in data dictionary");

  DOMNodePtr pTrailerFieldNode = pTrailerNode->getFirstChildNode();
  if(!pTrailerFieldNode.get()) throw ConfigError(url + ": No trailer fields defined");

  while(pTrailerFieldNode.get())
  {
    if(pTrailerFieldNode->getName() == "field")
    {
      DOMAttributesPtr attrs = pTrailerFieldNode->getAttributes();
      std::string name;
      if(!attrs->get("name", name))
        throw ConfigError(url + ": <field> does not have a name attribute");
      addTrailerField(lookupXMLFieldNumber(pDoc.get(), name));
    }
    RESET_AUTO_PTR(pTrailerFieldNode, pTrailerFieldNode->getNextSiblingNode());
  }

  // MSGTYPE
  DOMNodePtr pMessagesNode = pDoc->getNode("/fix/messages");
  if(!pMessagesNode.get())
    throw ConfigError(url + ": <messages> section not found in data dictionary");

  DOMNodePtr pMessageNode = pMessagesNode->getFirstChildNode();
  if(!pMessageNode.get()) throw ConfigError(url + ": No messages defined");

  while(pMessageNode.get())
  {
    if(pMessageNode->getName() == "message")
    {
      DOMAttributesPtr attrs = pMessageNode->getAttributes();
      std::string msgtype;
      if(!attrs->get("msgtype", msgtype))
        throw ConfigError(url + ": <field> does not have a name attribute");
      addMsgType(msgtype);

      std::string name;
      if(attrs->get("name", name))
        addValueName( 35, msgtype, name );

      DOMNodePtr pMessageFieldNode = pMessageNode->getFirstChildNode();
      if( !pMessageFieldNode.get() )
        throw ConfigError(url + ": <message> contains no fields");
      while( pMessageFieldNode.get() )
      {
        if(pMessageFieldNode->getName() == "field"
           || pMessageFieldNode->getName() == "group")
        {
          DOMAttributesPtr attrs = pMessageFieldNode->getAttributes();
          std::string name;
          if(!attrs->get("name", name))
            throw ConfigError(url + ": <field> does not have a name attribute");
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
          addXMLGroup(pDoc.get(), pMessageFieldNode.get(), msgtype, *this);
        }
        RESET_AUTO_PTR(pMessageFieldNode,
                       pMessageFieldNode->getNextSiblingNode());
      }
    }
    RESET_AUTO_PTR(pMessageNode, pMessageNode->getNextSiblingNode());
  }

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
    if(pComponentFieldNode->getName() == "group")
    {
      addXMLGroup(pDoc, pComponentFieldNode.get(), msgtype, DD);
    }
    RESET_AUTO_PTR(pComponentFieldNode,
      pComponentFieldNode->getNextSiblingNode());
  }
  return firstField;

  QF_STACK_POP
}

void DataDictionary::addXMLGroup( DOMDocument* pDoc, DOMNode* pNode,
                                  const std::string& msgtype,
                                  DataDictionary& DD )
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
    }
    else if( node->getName() == "component" )
    {
      field = addXMLComponentFields( pDoc, node.get(), msgtype, groupDD, false );
    }
    else if( node->getName() == "group" )
    {
      field = lookupXMLFieldNumber( pDoc, node.get() ); 
      groupDD.addField( field );
      addXMLGroup( pDoc, node.get(), msgtype, groupDD );
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
