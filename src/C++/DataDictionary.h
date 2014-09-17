/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2014
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

#ifndef FIX_DATADICTIONARY_H
#define FIX_DATADICTIONARY_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Fields.h"
#include "FieldMap.h"
#include "DOMDocument.h"
#include "Exceptions.h"
#include <set>
#include <map>
#include <string.h>

namespace FIX
{
class FieldMap;
class Message;

/**
 * Represents a data dictionary for a version of %FIX.
 *
 * Generally loaded from an XML document.  The DataDictionary is also
 * responsible for validation beyond the basic structure of a message.
 */

class DataDictionary
{
  typedef std::set < int > MsgFields;
  typedef std::map < std::string, MsgFields > MsgTypeToField;
  typedef std::set < std::string > MsgTypes;
  typedef std::set < int > Fields;
  typedef std::map < int, bool > NonBodyFields;
  typedef std::vector< int > OrderedFields;
  typedef message_order OrderedFieldsArray;
  typedef std::map < int, TYPE::Type > FieldTypes;
  typedef std::set < std::string > Values;
  typedef std::map < int, Values > FieldToValue;
  typedef std::map < int, std::string > FieldToName;
  typedef std::map < std::string, int > NameToField;
  typedef std::map < std::pair < int, std::string > , std::string  > ValueToName;
  // while FieldToGroup structure seems to be overcomplicated
  // in reality it yields a lot of performance because:
  // 1) avoids memory copying;
  // 2) first lookup is done by comparing integers and not string objects
  // TODO: use hash_map with good hashing algorithm
  typedef std::map < std::string, std::pair < int, DataDictionary* > > FieldPresenceMap;
  typedef std::map < int, FieldPresenceMap > FieldToGroup;

public:
  DataDictionary();
  DataDictionary( const DataDictionary& copy );
  DataDictionary( std::istream& stream ) throw( ConfigError );
  DataDictionary( const std::string& url ) throw( ConfigError );
  virtual ~DataDictionary();

  void readFromURL( const std::string& url ) throw( ConfigError );
  void readFromDocument( DOMDocumentPtr pDoc ) throw( ConfigError );
  void readFromStream( std::istream& stream ) throw( ConfigError );

  message_order const& getOrderedFields() const;

  // storage functions
  void setVersion( const std::string& beginString )
  {
    m_beginString = beginString;
    m_hasVersion = true;
  }
  std::string getVersion() const
  {
    return m_beginString.getString();
  }

  void addField( int field )
  {
    m_fields.insert( field );
    m_orderedFields.push_back( field );
  }

  void addFieldName( int field, const std::string& name )
  {
    if( m_names.insert( std::make_pair(name, field) ).second == false )
      throw ConfigError( "Field named " + name + " defined multiple times" );
    m_fieldNames[field] = name;
  }

  bool getFieldName( int field, std::string& name ) const
  {
    FieldToName::const_iterator i = m_fieldNames.find( field );
    if(i == m_fieldNames.end()) return false;
    name = i->second;
    return true;
  }

  bool getFieldTag( const std::string& name, int& field ) const
  {
    NameToField::const_iterator i = m_names.find( name );
    if(i == m_names.end()) return false;
    field = i->second;
    return true;
  }

  void addValueName( int field, const std::string& value, const std::string& name )
  {
    m_valueNames[std::make_pair(field, value)] = name;
  }

  bool getValueName( int field, const std::string& value, std::string& name ) const
  {
    ValueToName::const_iterator i = m_valueNames.find( std::make_pair(field, value) );
    if(i == m_valueNames.end()) return false;
    name = i->second;
    return true;
  }

  bool isField( int field ) const
  {
    return m_fields.find( field ) != m_fields.end();
  }

  void addMsgType( const std::string& msgType )
  {
    m_messages.insert( msgType );
  }

  bool isMsgType( const std::string& msgType ) const
  {
    return m_messages.find( msgType ) != m_messages.end();
  }

  void addMsgField( const std::string& msgType, int field )
  {
    m_messageFields[ msgType ].insert( field );
  }

  bool isMsgField( const std::string& msgType, int field ) const
  {
    MsgTypeToField::const_iterator i = m_messageFields.find( msgType );
    if ( i == m_messageFields.end() ) return false;
    return i->second.find( field ) != i->second.end();
  }

  void addHeaderField( int field, bool required )
  {
    m_headerFields[ field ] = required;
  }

  bool isHeaderField( int field ) const
  {
    return m_headerFields.find( field ) != m_headerFields.end();
  }

  void addTrailerField( int field, bool required )
  {
    m_trailerFields[ field ] = required;
  }

  bool isTrailerField( int field ) const
  {
    return m_trailerFields.find( field ) != m_trailerFields.end();
  }

  void addFieldType( int field, FIX::TYPE::Type type )
  {
    m_fieldTypes[ field ] = type;

    if( type == FIX::TYPE::Data )
      m_dataFields.insert( field );
  }

  bool getFieldType( int field, FIX::TYPE::Type& type ) const
  {
    FieldTypes::const_iterator i = m_fieldTypes.find( field );
    if ( i == m_fieldTypes.end() ) return false;
    type = i->second;
    return true;
  }

  void addRequiredField( const std::string& msgType, int field )
  {
    m_requiredFields[ msgType ].insert( field );
  }

  bool isRequiredField( const std::string& msgType, int field ) const
  {
    MsgTypeToField::const_iterator i = m_requiredFields.find( msgType );
    if ( i == m_requiredFields.end() ) return false;
    return i->second.find( field ) != i->second.end();
  }

  void addFieldValue( int field, const std::string& value )
  {
    m_fieldValues[ field ].insert( value );
  }

  bool hasFieldValue( int field ) const
  {
    FieldToValue::const_iterator i = m_fieldValues.find( field );
    return i != m_fieldValues.end();
  }

  bool isFieldValue( int field, const std::string& value ) const
  {
    FieldToValue::const_iterator i = m_fieldValues.find( field );
    if ( i == m_fieldValues.end() )
      return false;
    if( !isMultipleValueField( field ) )
      return i->second.find( value ) != i->second.end();

    // MultipleValue
    std::string::size_type startPos = 0;
    std::string::size_type endPos = 0;
    do
    {
      endPos = value.find_first_of(' ', startPos);
      std::string singleValue =
        value.substr( startPos, endPos - startPos );
      if( i->second.find( singleValue ) == i->second.end() )
        return false;
      startPos = endPos + 1;
    } while( endPos != std::string::npos );
    return true;
  }

  void addGroup( const std::string& msg, int field, int delim,
                 const DataDictionary& dataDictionary )
  {
    DataDictionary * pDD = new DataDictionary( dataDictionary );
    pDD->setVersion( getVersion() );

    FieldPresenceMap& presenceMap = m_groups[ field ];
    presenceMap[ msg ] = std::make_pair( delim, pDD );
  }

  bool isGroup( const std::string& msg, int field ) const
  {
    FieldToGroup::const_iterator i = m_groups.find( field );
    if ( i == m_groups.end() ) return false;

    const FieldPresenceMap& presenceMap = i->second;

    FieldPresenceMap::const_iterator iter = presenceMap.find( msg );
    return ( iter != presenceMap.end() );
  }

  bool getGroup( const std::string& msg, int field, int& delim,
                 const DataDictionary*& pDataDictionary ) const
  {
    FieldToGroup::const_iterator i = m_groups.find( field );
    if ( i == m_groups.end() ) return false;

    const FieldPresenceMap& presenceMap = i->second;

    FieldPresenceMap::const_iterator iter = presenceMap.find( msg );
    if( iter == presenceMap.end() ) return false;

    std::pair < int, DataDictionary* > pair = iter->second;
    delim = pair.first;
    pDataDictionary = pair.second;
    return true;
  }

  bool isDataField( int field ) const
  {
    MsgFields::const_iterator iter = m_dataFields.find( field );
    return iter != m_dataFields.end();
  }

  bool isMultipleValueField( int field ) const
  {
    FieldTypes::const_iterator i = m_fieldTypes.find( field );
    return i != m_fieldTypes.end() 
      && (i->second == TYPE::MultipleValueString 
          || i->second == TYPE::MultipleCharValue 
          || i->second == TYPE::MultipleStringValue );
  }

  void checkFieldsOutOfOrder( bool value )
  { m_checkFieldsOutOfOrder = value; }
  void checkFieldsHaveValues( bool value )
  { m_checkFieldsHaveValues = value; }
  void checkUserDefinedFields( bool value )
  { m_checkUserDefinedFields = value; }

  /// Validate a message.
  static void validate( const Message& message,
                        const DataDictionary* const pSessionDD,
                        const DataDictionary* const pAppID ) throw( FIX::Exception );

  void validate( const Message& message ) const throw ( FIX::Exception )
  { validate( message, false ); }
  void validate( const Message& message, bool bodyOnly ) const throw( FIX::Exception )
  { validate( message, bodyOnly ? (DataDictionary*)0 : this, this ); }

  DataDictionary& operator=( const DataDictionary& rhs );

private:
  /// Iterate through fields while applying checks.
  void iterate( const FieldMap& map, const MsgType& msgType ) const;

  /// Check if message type is defined in spec.
  void checkMsgType( const MsgType& msgType ) const
  {
    if ( !isMsgType( msgType.getValue() ) )
      throw InvalidMessageType();
  }

  /// If we need to check for the tag in the dictionary
  bool shouldCheckTag( const FieldBase& field ) const
  {
    if( !m_checkUserDefinedFields && field.getTag() >= FIELD::UserMin )
      return false;
    else
      return true;
  }

  /// Check if field tag number is defined in spec.
  void checkValidTagNumber( const FieldBase& field ) const
  throw( InvalidTagNumber )
  {
    if( m_fields.find( field.getTag() ) == m_fields.end() )
      throw InvalidTagNumber( field.getTag() );
  }

  void checkValidFormat( const FieldBase& field ) const
  throw( IncorrectDataFormat )
  {
    try
    {
      TYPE::Type type = TYPE::Unknown;
      getFieldType( field.getTag(), type );
      switch ( type )
      {
      case TYPE::String:
        STRING_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Char:
        CHAR_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Price:
        PRICE_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Int:
        INT_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Amt:
        AMT_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Qty:
        QTY_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Currency:
        CURRENCY_CONVERTOR::convert( field.getString() ); break;
      case TYPE::MultipleValueString:
        MULTIPLEVALUESTRING_CONVERTOR::convert( field.getString() ); break;
      case TYPE::MultipleStringValue:
        MULTIPLESTRINGVALUE_CONVERTOR::convert( field.getString() ); break;
      case TYPE::MultipleCharValue:
        MULTIPLECHARVALUE_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Exchange:
        EXCHANGE_CONVERTOR::convert( field.getString() ); break;
      case TYPE::UtcTimeStamp:
        UTCTIMESTAMP_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Boolean:
        BOOLEAN_CONVERTOR::convert( field.getString() ); break;
      case TYPE::LocalMktDate:
        LOCALMKTDATE_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Data:
        DATA_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Float:
        FLOAT_CONVERTOR::convert( field.getString() ); break;
      case TYPE::PriceOffset:
        PRICEOFFSET_CONVERTOR::convert( field.getString() ); break;
      case TYPE::MonthYear:
        MONTHYEAR_CONVERTOR::convert( field.getString() ); break;
      case TYPE::DayOfMonth:
        DAYOFMONTH_CONVERTOR::convert( field.getString() ); break;
      case TYPE::UtcDate:
        UTCDATE_CONVERTOR::convert( field.getString() ); break;
      case TYPE::UtcTimeOnly:
        UTCTIMEONLY_CONVERTOR::convert( field.getString() ); break;
      case TYPE::NumInGroup:
        NUMINGROUP_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Percentage:
        PERCENTAGE_CONVERTOR::convert( field.getString() ); break;
      case TYPE::SeqNum:
        SEQNUM_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Length:
        LENGTH_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Country:
        COUNTRY_CONVERTOR::convert( field.getString() ); break;
      case TYPE::TzTimeOnly:
        TZTIMEONLY_CONVERTOR::convert( field.getString() ); break;
      case TYPE::TzTimeStamp:
        TZTIMESTAMP_CONVERTOR::convert( field.getString() ); break;
      case TYPE::XmlData:
        XMLDATA_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Language:
        LANGUAGE_CONVERTOR::convert( field.getString() ); break;
      case TYPE::Unknown: break;
      }
    }
    catch ( FieldConvertError& )
    { throw IncorrectDataFormat( field.getTag(), field.getString() ); }
  }

  void checkValue( const FieldBase& field ) const
  throw( IncorrectTagValue )
  {
    if ( !hasFieldValue( field.getTag() ) ) return ;

    const std::string& value = field.getString();
    if ( !isFieldValue( field.getTag(), value ) )
      throw IncorrectTagValue( field.getTag() );
  }

  /// Check if a field has a value.
  void checkHasValue( const FieldBase& field ) const
  throw( NoTagValue )
  {
    if ( m_checkFieldsHaveValues && !field.getString().length() )
      throw NoTagValue( field.getTag() );
  }

  /// Check if a field is in this message type.
  void checkIsInMessage
  ( const FieldBase& field, const MsgType& msgType ) const
  throw( TagNotDefinedForMessage )
  {
    if ( !isMsgField( msgType, field.getTag() ) )
      throw TagNotDefinedForMessage( field.getTag() );
  }

  /// Check if group count matches number of groups in
  void checkGroupCount
  ( const FieldBase& field, const FieldMap& fieldMap, const MsgType& msgType ) const
  throw( RepeatingGroupCountMismatch )
  {
    int fieldNum = field.getTag();
    if( isGroup(msgType, fieldNum) )
    {
      if( (int)fieldMap.groupCount(fieldNum)
        != IntConvertor::convert(field.getString()) )
      throw RepeatingGroupCountMismatch(fieldNum);
    }
  }

  /// Check if a message has all required fields.
  void checkHasRequired
  ( const FieldMap& header, const FieldMap& body, const FieldMap& trailer,
    const MsgType& msgType ) const
  throw( RequiredTagMissing )
  {
    NonBodyFields::const_iterator iNBF;
    for( iNBF = m_headerFields.begin(); iNBF != m_headerFields.end(); ++iNBF )
    {
      if( iNBF->second == true && !header.isSetField(iNBF->first) )
        throw RequiredTagMissing( iNBF->first );
    }

    for( iNBF = m_trailerFields.begin(); iNBF != m_trailerFields.end(); ++iNBF )
    {
      if( iNBF->second == true && !trailer.isSetField(iNBF->first) )
        throw RequiredTagMissing( iNBF->first );
    }

    MsgTypeToField::const_iterator iM
      = m_requiredFields.find( msgType.getString() );
    if ( iM == m_requiredFields.end() ) return ;

    const MsgFields& fields = iM->second;
    MsgFields::const_iterator iF;
    for( iF = fields.begin(); iF != fields.end(); ++iF )
    {
      if( !body.isSetField(*iF) )
        throw RequiredTagMissing( *iF );
    }

    FieldMap::g_iterator groups;
    for( groups = body.g_begin(); groups != body.g_end(); ++groups )
    {
      int delim;
      const DataDictionary* DD = 0;
      int field = groups->first;
      if( getGroup( msgType.getValue(), field, delim, DD ) )
      {
        std::vector<FieldMap*>::const_iterator group;
        for( group = groups->second.begin(); group != groups->second.end(); ++group )
          DD->checkHasRequired( **group, **group, **group, msgType );
      }
    }
  }

  int lookupXMLFieldNumber( DOMDocument*, DOMNode* ) const;
  int lookupXMLFieldNumber( DOMDocument*, const std::string& name ) const;
  int addXMLComponentFields( DOMDocument*, DOMNode*, const std::string& msgtype, DataDictionary&, bool );
  void addXMLGroup( DOMDocument*, DOMNode*, const std::string& msgtype, DataDictionary&, bool );
  TYPE::Type XMLTypeToType( const std::string& xmlType ) const;

  bool m_hasVersion;
  bool m_checkFieldsOutOfOrder;
  bool m_checkFieldsHaveValues;
  bool m_checkUserDefinedFields;
  BeginString m_beginString;
  MsgTypeToField m_messageFields;
  MsgTypeToField m_requiredFields;
  MsgTypes m_messages;
  Fields m_fields;
  OrderedFields m_orderedFields;
  mutable OrderedFieldsArray m_orderedFieldsArray;
  NonBodyFields m_headerFields;
  NonBodyFields m_trailerFields;
  FieldTypes m_fieldTypes;
  FieldToValue m_fieldValues;
  FieldToName m_fieldNames;
  NameToField m_names;
  ValueToName m_valueNames;
  FieldToGroup m_groups;
  MsgFields m_dataFields;
};
}

#endif //FIX_DATADICTIONARY_H
