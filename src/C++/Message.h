/* -*- C++ -*- */
/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2001 ThoughtWorks, Inc.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by
 *        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact quickfix-users@lists.sourceforge.net.
 *
 * 5. Products derived from this software may not be called "QuickFIX",
 *    nor may "QuickFIX" appear in their name, without prior written
 *    permission of ThoughtWorks, Inc.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 */

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
#include <vector>
#include <memory>

namespace FIX
{
typedef FieldMap Header;
typedef FieldMap Trailer;

static FIELD::Field const headerOrder[] =
  {
    FIELD::BeginString,
    FIELD::BodyLength,
    FIELD::MsgType
  };

/*! \addtogroup user
 *  @{
 */ 
/**
 * Base class for all %FIX messages.
 *
 * A message consists of a three field maps.  On for the header, the body,
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
  throw( InvalidMessage& );

  /// Construct a message from a string using a data dictionary
  Message( const std::string& string, const DataDictionary& dataDictionary )
  throw( InvalidMessage& );

  /// Set global data dictionary for encoding messages into XML
  static bool InitializeXML( const std::string& string );

  void addGroup( Group& group )
  {
    FieldMap::addGroup( group.field(), group );
  }

  Group& getGroup( unsigned num, Group& group ) const throw( FieldNotFound& )
  {
    group.clear();
    return static_cast < Group& > ( FieldMap::getGroup( num, group.field(), group ) );
  }

  bool hasGroup( unsigned num, Group& group )
  {
    return FieldMap::hasGroup( num, group.field(), group );
  }

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
  std::string getString() const;
  /// Get a XML representation of the message
  std::string getXML() const;

  /**
   * Set a message based on a string representation
   * This will fill in the fields on the message by parsing out the string
   * that is passed in.  It will return true on success and false
   * on failure.
   */
  bool setString( const std::string& string,
                  bool validate = true,
                  const DataDictionary* pDataDictionary = 0 );

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

  bool hasValidStructure() const { return m_validStructure; }

  int bodyLength() const
  {
    return m_header.calculateLength()
           + calculateLength()
           + m_trailer.calculateLength();
  }

  int checkSum() const
  {
    return ( m_header.calculateTotal()
             + calculateTotal()
             + m_trailer.calculateTotal() ) % 256;
  }

  static bool isAdminMsgType( const MsgType& msgType )
  {
    if ( !msgType.getValue().length() ) return false;
    return strchr
           ( "0A12345",
             msgType.getValue().c_str() [ 0 ] ) != 0;
  }

  static bool isHeaderField( int field )
  {
    switch ( field )
    {
      case FIELD::BeginString:
      case FIELD::BodyLength:
      case FIELD::MsgType:
      case FIELD::SenderCompID:
      case FIELD::TargetCompID:
      case FIELD::OnBehalfOfCompID:
      case FIELD::DeliverToCompID:
      case FIELD::SecureDataLen:
      case FIELD::MsgSeqNum:
      case FIELD::SenderSubID:
      case FIELD::SenderLocationID:
      case FIELD::TargetSubID:
      case FIELD::TargetLocationID:
      case FIELD::OnBehalfOfSubID:
      case FIELD::OnBehalfOfLocationID:
      case FIELD::DeliverToSubID:
      case FIELD::DeliverToLocationID:
      case FIELD::PossDupFlag:
      case FIELD::PossResend:
      case FIELD::SendingTime:
      case FIELD::OrigSendingTime:
      case FIELD::XmlDataLen:
      case FIELD::XmlData:
      case FIELD::MessageEncoding:
      case FIELD::LastMsgSeqNumProcessed:
      case FIELD::OnBehalfOfSendingTime:
      return true;
      default:
      return false;
    };
  }
  static bool isHeaderField( const FieldBase& field, const DataDictionary* pD = 0 )
  {
    if ( isHeaderField( field.getField() ) ) return true;
    if ( pD ) return pD->isHeaderField( field.getField() );
    return false;
  }

  static bool isTrailerField( int field )
  {
    switch ( field )
    {
      case FIELD::SignatureLength:
      case FIELD::Signature:
      case FIELD::CheckSum:
      return true;
      default:
      return false;
    };
  }

  static bool isTrailerField( const FieldBase& field, const DataDictionary* pD = 0 )
  {
    if ( isTrailerField( field.getField() ) ) return true;
    if ( pD ) return pD->isTrailerField( field.getField() );
    return false;
  }

  /// Returns the session ID of the intended recipient
  SessionID getSessionID() throw( FieldNotFound& )
  {
    BeginString beginString;
    SenderCompID senderCompID;
    TargetCompID targetCompID;

    getHeader().getField( beginString );
    getHeader().getField( senderCompID );
    getHeader().getField( targetCompID );

    return SessionID( beginString, senderCompID, targetCompID );
  }

  /// Sets the session ID of the intended recipient
  void setSessionID( const SessionID& sessionID )
  {
    getHeader().setField( sessionID.getBeginString() );
    getHeader().setField( sessionID.getSenderCompID() );
    getHeader().setField( sessionID.getTargetCompID() );
  }

private:
  FieldBase extractField
  ( const std::string& string, std::string::size_type& pos );

  void clear()
  {
    m_header.clear();
    FieldMap::clear();
    m_trailer.clear();
  }

  bool validate()
  {
    try
    {
      BodyLength aBodyLength;
      m_header.getField( aBodyLength );
      if ( aBodyLength != bodyLength() )
        return false;

      CheckSum aCheckSum;
      m_trailer.getField( aCheckSum );
      return aCheckSum == checkSum();
    }
  catch ( FieldNotFound& ) { return false; }
  }

std::string getXMLFields(const FieldMap& fields, int space) const;

protected:
  mutable FieldMap m_header;
  mutable FieldMap m_trailer;
  bool m_validStructure;
  static std::auto_ptr<DataDictionary> s_dataDictionary;
};
/*! @} */

inline std::ostream& operator <<
( std::ostream& stream, const Message& message )
{
  stream << message.getString();
  return stream;
}

/// Parse the type of a message from a string.
inline MsgType identifyType( const std::string& message )
throw( MessageParseError& )
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
