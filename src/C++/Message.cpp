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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "Message.h"
#include "Utility.h"
#include "Values.h"
#include <iomanip>

namespace FIX
{

int const headerOrder[] =
{
  FIELD::BeginString,
  FIELD::BodyLength,
  FIELD::MsgType
};

SmartPtr<DataDictionary> Message::s_dataDictionary;

Message::Message()
: m_validStructure( true )
, m_tag( 0 )
{
  
}

Message::Message(const message_order &hdrOrder, const message_order &trlOrder, const message_order& order)
: FieldMap(order), m_header(hdrOrder),
  m_trailer(trlOrder), m_validStructure( true ) {}

Message::Message( const std::string& string, bool validate )
EXCEPT ( InvalidMessage )
: m_validStructure( true )
, m_tag( 0 )
{
  setString( string, validate );
}

Message::Message( const std::string& string,
                  const DataDictionary& dataDictionary,
                  bool validate )
EXCEPT ( InvalidMessage )
: m_validStructure( true )
, m_tag( 0 )
{
  setString( string, validate, &dataDictionary, &dataDictionary );
}

Message::Message( const std::string& string,
                  const DataDictionary& sessionDataDictionary,
                  const DataDictionary& applicationDataDictionary,
                  bool validate )
EXCEPT ( InvalidMessage )
: m_validStructure( true )
, m_tag( 0 )
{
    setString( string, validate, &sessionDataDictionary, &applicationDataDictionary );
}

Message::Message( const message_order &hdrOrder,
                  const message_order &trlOrder,
                  const message_order& order,
                  const std::string& string,
                  const DataDictionary& dataDictionary,
                  bool validate )
EXCEPT ( InvalidMessage )
: FieldMap(order), m_header(hdrOrder),
  m_trailer(trlOrder), m_validStructure( true )
{
  setString( string, validate, &dataDictionary, &dataDictionary );
}

Message::Message( const message_order &hdrOrder,
                  const message_order &trlOrder,
                  const message_order& order,
                  const std::string& string,
                  const DataDictionary& sessionDataDictionary,
                  const DataDictionary& applicationDataDictionary,
                  bool validate )
EXCEPT ( InvalidMessage )
: FieldMap(order), m_header(hdrOrder),
  m_trailer(trlOrder), m_validStructure( true )
{
  setStringHeader( string );
  if( isAdmin() )
    setString( string, validate, &sessionDataDictionary, &sessionDataDictionary );
  else
    setString( string, validate, &sessionDataDictionary, &applicationDataDictionary );
}

Message::Message( const BeginString& beginString, const MsgType& msgType )
: m_validStructure(true)
, m_tag( 0 )
{
  m_header.setField(beginString);
  m_header.setField(msgType);
}

Message::Message(const Message& copy)
: FieldMap(copy)
, m_header(copy.m_header)
, m_trailer(copy.m_trailer)
, m_validStructure(copy.m_validStructure)
, m_tag(copy.m_tag)
#ifdef HAVE_EMX
, m_subMsgType(copy.m_subMsgType)
#endif
{

}

Message::~Message()
{
}

bool Message::InitializeXML( const std::string& url )
{
  try
  {
    s_dataDictionary.reset(new DataDictionary(url));
    return true;
  }
  catch( ConfigError& )
  { return false; }
}

void Message::reverseRoute( const Header& header )
{
  // required routing tags
  BeginString beginString;
  SenderCompID senderCompID;
  TargetCompID targetCompID;

  m_header.removeField( beginString.getTag() );
  m_header.removeField( senderCompID.getTag() );
  m_header.removeField( targetCompID.getTag() );

  if( header.getFieldIfSet( beginString ) )
  {
    if( beginString.getValue().size() )
      m_header.setField( beginString );

    OnBehalfOfLocationID onBehalfOfLocationID;
    DeliverToLocationID deliverToLocationID;

    m_header.removeField( onBehalfOfLocationID.getTag() );
    m_header.removeField( deliverToLocationID.getTag() );

    if( beginString >= BeginString_FIX41 )
    {
      if( header.getFieldIfSet( onBehalfOfLocationID ) )
      {
        if( onBehalfOfLocationID.getValue().size() )
          m_header.setField( DeliverToLocationID( onBehalfOfLocationID ) );
      }

      if( header.getFieldIfSet( deliverToLocationID ) )
      {
        if( deliverToLocationID.getValue().size() )
          m_header.setField( OnBehalfOfLocationID( deliverToLocationID ) );
      }
    }
  }

  if( header.getFieldIfSet( senderCompID ) )
  {
    if( senderCompID.getValue().size() )
      m_header.setField( TargetCompID( senderCompID ) );
  }

  if( header.getFieldIfSet( targetCompID ) )
  {
    if( targetCompID.getValue().size() )
      m_header.setField( SenderCompID( targetCompID ) );
  }

  // optional routing tags
  OnBehalfOfCompID onBehalfOfCompID;
  OnBehalfOfSubID onBehalfOfSubID;
  DeliverToCompID deliverToCompID;
  DeliverToSubID deliverToSubID;

  m_header.removeField( onBehalfOfCompID.getTag() );
  m_header.removeField( onBehalfOfSubID.getTag() );
  m_header.removeField( deliverToCompID.getTag() );
  m_header.removeField( deliverToSubID.getTag() );

  if( header.getFieldIfSet( onBehalfOfCompID ) )
  {
    if( onBehalfOfCompID.getValue().size() )
      m_header.setField( DeliverToCompID( onBehalfOfCompID ) );
  }

  if( header.getFieldIfSet( onBehalfOfSubID ) )
  {
    if( onBehalfOfSubID.getValue().size() )
      m_header.setField( DeliverToSubID( onBehalfOfSubID ) );
  }

  if( header.getFieldIfSet( deliverToCompID ) )
  {
    if( deliverToCompID.getValue().size() )
      m_header.setField( OnBehalfOfCompID( deliverToCompID ) );
  }

  if( header.getFieldIfSet( deliverToSubID ) )
  {
    if( deliverToSubID.getValue().size() )
      m_header.setField( OnBehalfOfSubID( deliverToSubID ) );
  }
}

std::string Message::toString( int beginStringField, 
                               int bodyLengthField, 
                               int checkSumField ) const
{
  std::string str;
  toString( str, beginStringField, bodyLengthField, checkSumField );
  return str;
}

std::string& Message::toString( std::string& str, 
                                int beginStringField,
                                int bodyLengthField, 
                                int checkSumField ) const
{
  int length = bodyLength( beginStringField, bodyLengthField, checkSumField );
  m_header.setField( IntField(bodyLengthField, length) );
  m_trailer.setField( CheckSumField(checkSumField, checkSum(checkSumField)) );

#if defined(_MSC_VER) && _MSC_VER < 1300
  str = "";
#else
  str.clear();
#endif

  /*small speculation about the space needed for FIX string*/
  str.reserve( length + 64 );

  m_header.calculateString( str );
  FieldMap::calculateString( str );
  m_trailer.calculateString( str );

  return str;
}

std::string Message::toXML() const
{
  std::string str;
  toXML( str );
  return str;
}

std::string& Message::toXML( std::string& str ) const
{
  std::stringstream stream;
  stream << "<message>"                         << std::endl
         << std::setw(2) << " " << "<header>"   << std::endl
         << toXMLFields(getHeader(), 4)
         << std::setw(2) << " " << "</header>"  << std::endl
         << std::setw(2) << " " << "<body>"     << std::endl
         << toXMLFields(*this, 4)
         << std::setw(2) << " " << "</body>"    << std::endl
         << std::setw(2) << " " << "<trailer>"  << std::endl
         << toXMLFields(getTrailer(), 4)
         << std::setw(2) << " " << "</trailer>" << std::endl
         << "</message>";

  return str = stream.str();
}

std::string Message::toXMLFields(const FieldMap& fields, int space) const
{
  std::stringstream stream;
  FieldMap::const_iterator i;
  std::string name;
  for(i = fields.begin(); i != fields.end(); ++i)
  {
    int field = i->getTag();
    std::string value = i->getString();

    stream << std::setw(space) << " " << "<field ";
    if(s_dataDictionary.get() && s_dataDictionary->getFieldName(field, name))
    {
      stream << "name=\"" << name << "\" ";
    }
    stream << "number=\"" << field << "\"";
    if(s_dataDictionary.get()
       && s_dataDictionary->getValueName(field, value, name))
    {
      stream << " enum=\"" << name << "\"";
    }
    stream << ">";
    stream << "<![CDATA[" << value << "]]>";
    stream << "</field>" << std::endl;
  }

  FieldMap::g_const_iterator j;
  for(j = fields.g_begin(); j != fields.g_end(); ++j)
  {
    std::vector<FieldMap*>::const_iterator k;
    for(k = j->second.begin(); k != j->second.end(); ++k)
    {
      stream << std::setw(space) << " " << "<group>" << std::endl
             << toXMLFields(*(*k), space+2)
             << std::setw(space) << " " << "</group>" << std::endl;
    }
  }

  return stream.str();
}

void Message::setString( const std::string& string,
                         bool doValidation,
                         const DataDictionary* pSessionDataDictionary,
                         const DataDictionary* pApplicationDataDictionary )
EXCEPT ( InvalidMessage )
{
  clear();

  std::string::size_type pos = 0;
  int count = 0;

  FIX::MsgType msg;

  field_type type = header;

  while ( pos < string.size() )
  {
    FieldBase field = extractField( string, pos, pSessionDataDictionary, pApplicationDataDictionary );
    if ( count < 3 && headerOrder[ count++ ] != field.getTag() )
      if ( doValidation ) throw InvalidMessage("Header fields out of order");

    if ( isHeaderField( field, pSessionDataDictionary ) )
    {
      if ( type != header )
      {
        if(m_tag == 0) m_tag = field.getTag();
        m_validStructure = false;
      }

      if ( field.getTag() == FIELD::MsgType )
      {
        msg.setString( field.getString() );
        if ( isAdminMsgType( msg ) )
        {
          pApplicationDataDictionary = pSessionDataDictionary;
#ifdef HAVE_EMX
          m_subMsgType.assign(msg);
        }
        else
        {
          std::string::size_type equalSign = string.find("\0019426=", pos);
          if (equalSign == std::string::npos)
            throw InvalidMessage("EMX message type (9426) not found");

          equalSign += 6;
          std::string::size_type soh = string.find_first_of('\001', equalSign);
          if (soh == std::string::npos)
            throw InvalidMessage("EMX message type (9426) soh char not found");
          m_subMsgType.assign(string.substr(equalSign, soh - equalSign ));
#endif
        }
      }

      m_header.appendField( field );

      if ( pSessionDataDictionary )
        setGroup( "_header_", field, string, pos, getHeader(), *pSessionDataDictionary );
    }
    else if ( isTrailerField( field, pSessionDataDictionary ) )
    {
      type = trailer;
      m_trailer.appendField( field );

      if ( pSessionDataDictionary )
        setGroup( "_trailer_", field, string, pos, getTrailer(), *pSessionDataDictionary );
    }
    else
    {
      if ( type == trailer )
      {
        if(m_tag == 0) m_tag = field.getTag();
        m_validStructure = false;
      }

      type = body;
      appendField( field );

      if ( pApplicationDataDictionary )
#ifdef HAVE_EMX
        setGroup(m_subMsgType, field, string, pos, *this, *pApplicationDataDictionary);
#else
        setGroup( msg, field, string, pos, *this, *pApplicationDataDictionary );
#endif
    }
  }

  // sort fields
  m_header.sortFields();
  sortFields();
  m_trailer.sortFields();

  if ( doValidation )
    validate();
}

void Message::setGroup( const std::string& msg, const FieldBase& field,
                        const std::string& string,
                        std::string::size_type& pos, FieldMap& map,
                        const DataDictionary& dataDictionary )
{
  int group = field.getTag();
  int delim;
  const DataDictionary* pDD = 0;
  if ( !dataDictionary.getGroup( msg, group, delim, pDD ) ) return ;
  SmartPtr<Group> pGroup;

  while ( pos < string.size() )
  {
    std::string::size_type oldPos = pos;
    FieldBase field = extractField( string, pos, &dataDictionary, &dataDictionary, pGroup.get() );
       
    // Start a new group because...
    if (// found delimiter
    (field.getTag() == delim) ||
    // no delimiter, but field belongs to group OR field already processed
    (pDD->isField( field.getTag() ) && (pGroup.get() == 0 || pGroup->isSetField( field.getTag() )) ))
    {
      if ( pGroup.get() )
      {
        map.addGroupPtr( group, pGroup.release(), false );
      }
      pGroup.reset( new Group( field.getTag(), delim, pDD->getOrderedFields() ) );
    }
    else if ( !pDD->isField( field.getTag() ) )
    {
      if ( pGroup.get() )
      {
        map.addGroupPtr( group, pGroup.release(), false );
      }
      pos = oldPos;
      return ;
    }

    if ( !pGroup.get() ) return ;
    pGroup->addField( field );
    setGroup( msg, field, string, pos, *pGroup, *pDD );
  }
}

bool Message::setStringHeader( const std::string& string )
{
  clear();

  std::string::size_type pos = 0;
  int count = 0;

  while ( pos < string.size() )
  {
    FieldBase field = extractField( string, pos );
    if ( count < 3 && headerOrder[ count++ ] != field.getTag() )
      return false;

    if ( isHeaderField( field ) )
      m_header.appendField( field );
    else break;
  }

  m_header.sortFields();
  return true;
}

bool Message::isHeaderField( int field )
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
    case FIELD::ApplVerID:
    case FIELD::CstmApplVerID:
    case FIELD::NoHops:
    return true;
    default:
    return false;
  };
}

bool Message::isHeaderField( const FieldBase& field,
                             const DataDictionary* pD )
{
  return isHeaderField( field.getTag(), pD );
}

bool Message::isHeaderField( int field, 
                             const DataDictionary * pD )
{
  if ( isHeaderField( field ) ) return true;
  if ( pD ) return pD->isHeaderField( field );
  return false;
}

bool Message::isTrailerField( int field )
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

bool Message::isTrailerField( const FieldBase& field,
                              const DataDictionary* pD )
{
  return isTrailerField( field.getTag(), pD );
}

bool Message::isTrailerField( int field, const DataDictionary * pD )
{
  if ( isTrailerField( field ) ) return true;
  if ( pD ) return pD->isTrailerField( field );
  return false;
}

SessionID Message::getSessionID( const std::string& qualifier ) const
EXCEPT ( FieldNotFound )
{
  BeginString beginString;
  SenderCompID senderCompID;
  TargetCompID targetCompID;

  getHeader().getField( beginString );
  getHeader().getField( senderCompID );
  getHeader().getField( targetCompID );

  return SessionID( beginString, senderCompID, targetCompID, qualifier );
}

void Message::setSessionID( const SessionID& sessionID )
{
  getHeader().setField( sessionID.getBeginString() );
  getHeader().setField( sessionID.getSenderCompID() );
  getHeader().setField( sessionID.getTargetCompID() );
}

void Message::validate() const
{
  try
  {
    const BodyLength& aBodyLength = FIELD_GET_REF( m_header, BodyLength );

    const int expectedLength = (int)aBodyLength;
    const int actualLength = bodyLength();

    if ( expectedLength != actualLength )
    {
      std::stringstream text;
      text << "Expected BodyLength=" << actualLength
           << ", Received BodyLength=" << expectedLength;
      throw InvalidMessage(text.str());
    }

    const CheckSum& aCheckSum = FIELD_GET_REF( m_trailer, CheckSum );

    const int expectedChecksum = (int)aCheckSum;
    const int actualChecksum = checkSum();

    if ( expectedChecksum != actualChecksum )
    {
      std::stringstream text;
      text << "Expected CheckSum=" << actualChecksum
           << ", Received CheckSum=" << expectedChecksum;
      throw InvalidMessage(text.str());
    }
  }
  catch ( FieldNotFound& e )
  {
    const std::string fieldName = ( e.field == FIX::FIELD::BodyLength ) ? "BodyLength" : "CheckSum";
    throw InvalidMessage( fieldName + std::string(" is missing") );
  }
  catch ( IncorrectDataFormat& e )
  {
    const std::string fieldName = ( e.field == FIX::FIELD::BodyLength ) ? "BodyLength" : "CheckSum";
    throw InvalidMessage( fieldName + std::string(" has wrong format: ") + e.detail );
  }
}

FIX::FieldBase Message::extractField( const std::string& string, std::string::size_type& pos, 
                                      const DataDictionary* pSessionDD /*= 0*/, const DataDictionary* pAppDD /*= 0*/, 
                                      const Group* pGroup /*= 0*/ ) const
{
  std::string::const_iterator const tagStart = string.begin() + pos;
  std::string::const_iterator const strEnd = string.end();

  std::string::const_iterator const equalSign = std::find( tagStart, strEnd, '=' );
  if( equalSign == strEnd )
    throw InvalidMessage("Equal sign not found in field");

  int field = 0;
  if( !IntConvertor::convert( tagStart, equalSign, field ) )
    throw InvalidMessage( std::string("Field tag is invalid: ") + std::string( tagStart, equalSign ));

  std::string::const_iterator const valueStart = equalSign + 1;

  std::string::const_iterator soh = std::find( valueStart, strEnd, '\001' );
  if ( soh == strEnd )
    throw InvalidMessage("SOH not found at end of field");

  if ( IsDataField( field, pSessionDD, pAppDD ) )
  {
    // Assume length field is 1 less.
    int lenField = field - 1;
    // Special case for Signature which violates above assumption.
    if ( field == FIELD::Signature ) lenField = FIELD::SignatureLength;

    // identify part of the message that should contain length field
    const FieldMap * location = pGroup;
    if ( !location )
    {
      if ( isHeaderField( lenField, pSessionDD ) )
        location = &m_header;
      else if ( isTrailerField( lenField, pSessionDD ) )
        location = &m_trailer;
      else
        location = this;
    }

    try
    {
      const FieldBase& fieldLength = location->reverse_find( lenField );
      soh = valueStart + IntConvertor::convert( fieldLength.getString() );
    }
    catch( FieldNotFound& )
    {
      throw InvalidMessage( std::string( "Data length field " ) + IntConvertor::convert( lenField ) + std::string( " was not found for data field " ) + IntConvertor::convert( field ) );
    }
    catch( FieldConvertError& e )
    {
      throw InvalidMessage( std::string( "Unable to determine SOH for data field " ) + IntConvertor::convert( field ) + std::string( ": " ) + e.what() );
    }
  }

  std::string::const_iterator const tagEnd = soh + 1;
#if defined(__SUNPRO_CC)
  std::distance( string.begin(), tagEnd, pos );
#else
  pos = std::distance( string.begin(), tagEnd );
#endif

  return FieldBase (
    field,
    valueStart,
    soh,
    tagStart, 
    tagEnd );
}

}
