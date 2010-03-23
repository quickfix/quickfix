/* -*- C++ -*- */

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

#ifndef FIX_MESSAGE
#define FIX_MESSAGE

#ifdef _MSC_VER
#pragma warning( disable: 4786 )
#endif

#include "FieldMap.h"
#include "Fields.h"
#include "Group.h"
#include "SessionID.h"
#include "DataDictionary.h"
#include "CallStack.h"
#include "Values.h"
#include <vector>
#include <memory>

namespace FIX
{
typedef FieldMap Header;
typedef FieldMap Trailer;

static int const headerOrder[] =
  {
    FIELD::BeginString,
    FIELD::BodyLength,
    FIELD::MsgType
  };

/**
 * Base class for all %FIX messages.
 *
 * A message consists of three field maps.  One for the header, the body,
 * and the trailer.
 */
class Message : public FieldMap
{
  friend class DataDictionary;
  friend class Session;

  enum field_type { header, body, trailer };

public:
  Message();

  /// Construct a message from a string
  Message( const std::string& string, bool validate = true )
  throw( InvalidMessage );

  /// Construct a message from a string using a data dictionary
  Message( const std::string& string, const FIX::DataDictionary& dataDictionary,
           bool validate = true )
  throw( InvalidMessage );

  /// Construct a message from a string using a session and application data dictionary
  Message( const std::string& string, const FIX::DataDictionary& sessionDataDictionary,
           const FIX::DataDictionary& applicationDataDictionary, bool validate = true )
  throw( InvalidMessage );

  Message( const Message& copy )
  : FieldMap( copy ),
    m_header( message_order( message_order::header ) ),
    m_trailer( message_order( message_order::trailer ) )
  {
    m_header = copy.m_header;
    m_trailer = copy.m_trailer;
    m_validStructure = copy.m_validStructure;
    m_field = copy.m_field;
  }

  /// Set global data dictionary for encoding messages into XML
  static bool InitializeXML( const std::string& string );

  void addGroup( FIX::Group& group )
  { FieldMap::addGroup( group.field(), group ); }

  void replaceGroup( unsigned num, FIX::Group& group )
  { FieldMap::replaceGroup( num, group.field(), group ); }

  Group& getGroup( unsigned num, FIX::Group& group ) const throw( FieldNotFound )
  { group.clear();
    return static_cast < Group& >
      ( FieldMap::getGroup( num, group.field(), group ) );
  }

  void removeGroup( unsigned num, FIX::Group& group )
  { FieldMap::removeGroup( num, group.field() ); }
  void removeGroup( FIX::Group& group )
  { FieldMap::removeGroup( group.field() ); }

  bool hasGroup( const FIX::Group& group ) const
  { return FieldMap::hasGroup( group.field() ); }
  bool hasGroup( unsigned num, FIX::Group& group ) const
  { return FieldMap::hasGroup( num, group.field() ); }

protected:
  // Constructor for derived classes
  Message( const BeginString& beginString, const MsgType& msgType )
  : m_header( message_order( message_order::header ) ),
  m_trailer( message_order( message_order::trailer ) ),
  m_validStructure( true )
  {
    m_header.setField( beginString );
    m_header.setField( msgType );
  }

public:
  /// Get a string representation of the message
  std::string toString( int beginStringField = FIELD::BeginString,
                        int bodyLengthField = FIELD::BodyLength,
                        int checkSumField = FIELD::CheckSum ) const;
  /// Get a string representation without making a copy
  std::string& toString( std::string&,
                         int beginStringField = FIELD::BeginString,
                         int bodyLengthField = FIELD::BodyLength, 
                         int checkSumField = FIELD::CheckSum ) const;
  /// Get a XML representation of the message
  std::string toXML() const;
  /// Get a XML representation without making a copy
  std::string& toXML( std::string& ) const;

  /**
   * Add header informations depending on a source message.
   * This can be used to add routing informations like OnBehalfOfCompID
   * and DeliverToCompID to a message.
   */
  void reverseRoute( const Header& );

  /**
   * Set a message based on a string representation
   * This will fill in the fields on the message by parsing out the string
   * that is passed in.  It will return true on success and false
   * on failure.
   */
  void setString( const std::string& string )
  { setString(string, true); }
  void setString( const std::string& string, bool validate )
  { setString(string, validate, 0); }
  void setString( const std::string& string,
                  bool validate,
                  const FIX::DataDictionary* pDataDictionary )
  throw( InvalidMessage )
  { setString(string, validate, pDataDictionary, pDataDictionary); }

  void setString( const std::string& string,
                  bool validate,
                  const FIX::DataDictionary* pSessionDataDictionary,
                  const FIX::DataDictionary* pApplicationDataDictionary )
  throw( InvalidMessage );

  void setGroup( const std::string& msg, const FieldBase& field,
                 const std::string& string, std::string::size_type& pos,
                 FieldMap& map, const DataDictionary& dataDictionary );

  /**
   * Set a messages header from a string
   * This is an optimization that can be used to get useful information
   * from the header of a FIX string without parsing the whole thing.
   */
  bool setStringHeader( const std::string& string );

  /// Getter for the message header
  const Header& getHeader() const { return m_header; }
  /// Mutable getter for the message header
  Header& getHeader() { return m_header; }
  /// Getter for the message trailer
  const Header& getTrailer() const { return m_trailer; }
  /// Mutable getter for the message trailer
  Trailer& getTrailer() { return m_trailer; }

  bool hasValidStructure(int& field) const
  { field = m_field;
    return m_validStructure;
  }

  int bodyLength( int beginStringField = FIELD::BeginString, 
                  int bodyLengthField = FIELD::BodyLength, 
                  int checkSumField = FIELD::CheckSum ) const
  { return m_header.calculateLength(beginStringField, bodyLengthField, checkSumField)
           + calculateLength(beginStringField, bodyLengthField, checkSumField)
           + m_trailer.calculateLength(beginStringField, bodyLengthField, checkSumField);
  }

  int checkSum( int checkSumField = FIELD::CheckSum ) const
  { return ( m_header.calculateTotal(checkSumField)
             + calculateTotal(checkSumField)
             + m_trailer.calculateTotal(checkSumField) ) % 256;
  }

  bool isAdmin() const
  { 
    if( m_header.isSetField(FIELD::MsgType) )
    {
      const MsgType& msgType = FIELD_GET_REF( m_header, MsgType );
      return isAdminMsgType( msgType );
    }
    return false;
  }

  bool isApp() const
  { 
    if( m_header.isSetField(FIELD::MsgType) )
    {
      const MsgType& msgType = FIELD_GET_REF( m_header, MsgType );
      return !isAdminMsgType( msgType );
    }
    return false;
  }

  bool isEmpty()
  { return m_header.isEmpty() && FieldMap::isEmpty() && m_trailer.isEmpty(); }

  void clear()
  { 
    m_field = 0;
    m_header.clear();
    FieldMap::clear();
    m_trailer.clear();
  }

  static bool isAdminMsgType( const MsgType& msgType )
  { if ( msgType.getValue().length() != 1 ) return false;
    return strchr
           ( "0A12345",
             msgType.getValue().c_str() [ 0 ] ) != 0;
  }

  static ApplVerID toApplVerID(const BeginString& value)
  { QF_STACK_PUSH(SessionFactory::toApplVerID)

    if( value == BeginString_FIX40 )
      return ApplVerID(ApplVerID_FIX40);
    if( value == BeginString_FIX41 )
      return ApplVerID(ApplVerID_FIX41);
    if( value == BeginString_FIX42 )
      return ApplVerID(ApplVerID_FIX42);
    if( value == BeginString_FIX43 )
      return ApplVerID(ApplVerID_FIX43);
    if( value == BeginString_FIX44 )
      return ApplVerID(ApplVerID_FIX44);
    if( value == BeginString_FIX50 )
      return ApplVerID(ApplVerID_FIX50);
    if( value == "FIX.5.0SP1" )
      return ApplVerID(ApplVerID_FIX50SP1);
    if( value == "FIX.5.0SP2" )
      return ApplVerID(ApplVerID_FIX50SP2);
    return ApplVerID(ApplVerID(value));

    QF_STACK_POP
  }

  static BeginString toBeginString( const ApplVerID& applVerID )
  {
    if( applVerID == ApplVerID_FIX40 )
      return BeginString(BeginString_FIX40);
    else if( applVerID == ApplVerID_FIX41 )
      return BeginString(BeginString_FIX41);
    else if( applVerID == ApplVerID_FIX42 )
      return BeginString(BeginString_FIX42);
    else if( applVerID == ApplVerID_FIX43 )
      return BeginString(BeginString_FIX43);
    else if( applVerID == ApplVerID_FIX44 )
      return BeginString(BeginString_FIX44);
    else if( applVerID == ApplVerID_FIX50 )
      return BeginString(BeginString_FIX50);
    else if( applVerID == ApplVerID_FIX50SP1 )
      return BeginString(BeginString_FIX50);
    else if( applVerID == ApplVerID_FIX50SP2 )
      return BeginString(BeginString_FIX50);
    else
      return BeginString("");
  }

  static bool isHeaderField( int field );
  static bool isHeaderField( const FieldBase& field,
                             const DataDictionary* pD = 0 );

  static bool isTrailerField( int field );
  static bool isTrailerField( const FieldBase& field,
                              const DataDictionary* pD = 0 );

  /// Returns the session ID of the intended recipient
  SessionID getSessionID( const std::string& qualifier = "" ) const
  throw( FieldNotFound );
  /// Sets the session ID of the intended recipient
  void setSessionID( const SessionID& sessionID );

private:
  FieldBase extractField
  ( const std::string& string, std::string::size_type& pos,
    const DataDictionary* pSessionDD = 0, const DataDictionary* pAppDD = 0,
    const Group* pGroup = 0)
  { QF_STACK_PUSH(extractField)

    std::string::size_type equalSign
      = string.find_first_of( '=', pos );
    if( equalSign == std::string::npos )
      throw InvalidMessage("Equal sign not found in field");

    char* pEnd = 0;
    int field = strtol( string.c_str() + pos, &pEnd, 0 );

    std::string::size_type soh =
      string.find_first_of( '\001', equalSign + 1 );
    if ( soh == std::string::npos )
      throw InvalidMessage("SOH not found at end of field");

    if ( (pSessionDD && pSessionDD->isDataField(field)) || (pAppDD && pAppDD->isDataField(field)) )
    {
      std::string fieldLength;
      // Assume length field is 1 less.
      int lenField = field - 1;
      // Special case for Signature which violates above assumption.
      if ( field == 89 ) lenField = 93;

      if ( pGroup && pGroup->isSetField( lenField ) )
      {
        fieldLength = pGroup->getField( lenField );
        soh = equalSign + 1 + atol( fieldLength.c_str() );
      }
      else if ( isSetField( lenField ) )
      {
        fieldLength = getField( lenField );
        soh = equalSign + 1 + atol( fieldLength.c_str() );
      }
    }

    pos = soh + 1;
    return FieldBase (
      field,
      string.substr( equalSign + 1, soh - ( equalSign + 1 ) ) );

    QF_STACK_POP
  }

  void validate();
  std::string toXMLFields(const FieldMap& fields, int space) const;

protected:
  mutable FieldMap m_header;
  mutable FieldMap m_trailer;
  bool m_validStructure;
  int m_field;
  static std::auto_ptr<DataDictionary> s_dataDictionary;
};
/*! @} */

inline std::ostream& operator <<
( std::ostream& stream, const Message& message )
{
  std::string str;
  stream << message.toString( str );
  return stream;
}

/// Parse the type of a message from a string.
inline MsgType identifyType( const std::string& message )
throw( MessageParseError )
{
  std::string::size_type pos = message.find( "\00135=" );
  if ( pos == std::string::npos ) throw MessageParseError();

  std::string::size_type startValue = pos + 4;
  std::string::size_type soh = message.find_first_of( '\001', startValue );
  if ( soh == std::string::npos ) throw MessageParseError();

  std::string value = message.substr( startValue, soh - startValue );
  return MsgType( value );
}
}

#endif //FIX_MESSAGE
