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

#include "Message.h"
#include "Utility.h"
#include "Values.h"
#include <iomanip>

namespace FIX
{
std::auto_ptr<DataDictionary> Message::s_dataDictionary;

Message::Message()
: m_header( message_order( message_order::header ) ),
  m_trailer( message_order( message_order::trailer ) ),
  m_validStructure( true ) {}

Message::Message( const std::string& string, bool validate )
throw( InvalidMessage )
: m_header( message_order( message_order::header ) ),
  m_trailer( message_order( message_order::trailer ) ),
  m_validStructure( true )
{
  setString( string, validate );
}

Message::Message( const std::string& string,
                  const DataDictionary& dataDictionary,
                  bool validate )
throw( InvalidMessage )
: m_header( message_order( message_order::header ) ),
  m_trailer( message_order( message_order::trailer ) ),
  m_validStructure( true )
{
  setString( string, validate, &dataDictionary, &dataDictionary );
}

Message::Message( const std::string& string,
                  const DataDictionary& sessionDataDictionary,
                  const DataDictionary& applicationDataDictionary,
                  bool validate )
throw( InvalidMessage )
: m_header( message_order( message_order::header ) ),
  m_trailer( message_order( message_order::trailer ) ),
  m_validStructure( true )
{
  setStringHeader( string );
  if( isAdmin() )
    setString( string, validate, &sessionDataDictionary, &sessionDataDictionary );
  else
    setString( string, validate, &sessionDataDictionary, &applicationDataDictionary );
}

bool Message::InitializeXML( const std::string& url )
{ QF_STACK_PUSH(Message::InitializeXML)

  try
  {
    std::auto_ptr<DataDictionary> p =
      std::auto_ptr<DataDictionary>(new DataDictionary(url));
    s_dataDictionary = p;
    return true;
  }
  catch( ConfigError& )
  { return false; }

  QF_STACK_POP
}

void Message::reverseRoute( const Header& header )
{ QF_STACK_PUSH(Message::reverseRoute)

  // required routing tags
  BeginString beginString;
  SenderCompID senderCompID;
  TargetCompID targetCompID;

  m_header.removeField( beginString.getField() );
  m_header.removeField( senderCompID.getField() );
  m_header.removeField( targetCompID.getField() );

  if( header.isSetField( beginString ) )
  {
    header.getField( beginString );
    if( beginString.getValue().size() )
      m_header.setField( beginString );

    OnBehalfOfLocationID onBehalfOfLocationID;
    DeliverToLocationID deliverToLocationID;

    m_header.removeField( onBehalfOfLocationID.getField() );
    m_header.removeField( deliverToLocationID.getField() );

    if( beginString >= BeginString_FIX41 )
    {
      if( header.isSetField( onBehalfOfLocationID ) )
      {
        header.getField( onBehalfOfLocationID );
        if( onBehalfOfLocationID.getValue().size() )
          m_header.setField( DeliverToLocationID( onBehalfOfLocationID ) );
      }

      if( header.isSetField( deliverToLocationID ) )
      {
        header.getField( deliverToLocationID );
        if( deliverToLocationID.getValue().size() )
          m_header.setField( OnBehalfOfLocationID( deliverToLocationID ) );
      }
    }
  }

  if( header.isSetField( senderCompID ) )
  {
    header.getField( senderCompID );
    if( senderCompID.getValue().size() )
      m_header.setField( TargetCompID( senderCompID ) );
  }

  if( header.isSetField( targetCompID ) )
  {
    header.getField( targetCompID );
    if( targetCompID.getValue().size() )
      m_header.setField( SenderCompID( targetCompID ) );
  }

  // optional routing tags
  OnBehalfOfCompID onBehalfOfCompID;
  OnBehalfOfSubID onBehalfOfSubID;
  DeliverToCompID deliverToCompID;
  DeliverToSubID deliverToSubID;

  m_header.removeField( onBehalfOfCompID.getField() );
  m_header.removeField( onBehalfOfSubID.getField() );
  m_header.removeField( deliverToCompID.getField() );
  m_header.removeField( deliverToSubID.getField() );

  if( header.isSetField( onBehalfOfCompID ) )
  {
    header.getField( onBehalfOfCompID );
    if( onBehalfOfCompID.getValue().size() )
      m_header.setField( DeliverToCompID( onBehalfOfCompID ) );
  }

  if( header.isSetField( onBehalfOfSubID ) )
  {
    header.getField( onBehalfOfSubID );
    if( onBehalfOfSubID.getValue().size() )
      m_header.setField( DeliverToSubID( onBehalfOfSubID ) );
  }

  if( header.isSetField( deliverToCompID ) )
  {
    header.getField( deliverToCompID );
    if( deliverToCompID.getValue().size() )
      m_header.setField( OnBehalfOfCompID( deliverToCompID ) );
  }

  if( header.isSetField( deliverToSubID ) )
  {
    header.getField( deliverToSubID );
    if( deliverToSubID.getValue().size() )
      m_header.setField( OnBehalfOfSubID( deliverToSubID ) );
  }

  QF_STACK_POP
}

std::string Message::toString( int beginStringField, 
                               int bodyLengthField, 
                               int checkSumField ) const
{ QF_STACK_PUSH(Message::toString)

  std::string str;
  return toString( str, beginStringField, bodyLengthField, checkSumField );

  QF_STACK_POP
}

std::string& Message::toString( std::string& str, 
                                int beginStringField,
                                int bodyLengthField, 
                                int checkSumField ) const
{ QF_STACK_PUSH(Message::toString)

  int length = bodyLength( beginStringField, bodyLengthField, checkSumField );
  m_header.setField( IntField(bodyLengthField, length) );
  m_trailer.setField( CheckSumField(checkSumField, checkSum(checkSumField)) );

  m_header.calculateString( str, true );
  FieldMap::calculateString( str, false );
  m_trailer.calculateString( str, false );

  return str;

  QF_STACK_POP
}

std::string Message::toXML() const
{ QF_STACK_PUSH(Message::toXML)

  std::string str;
  return toXML( str );

  QF_STACK_POP
}

std::string& Message::toXML( std::string& str ) const
{ QF_STACK_PUSH(Message::toXML)

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

  QF_STACK_POP
}

std::string Message::toXMLFields(const FieldMap& fields, int space) const
{ QF_STACK_PUSH(Message::toXMLFields)

  std::stringstream stream;
  FieldMap::iterator i;
  std::string name;
  for(i = fields.begin(); i != fields.end(); ++i)
  {
    int field = i->first;
    std::string value = i->second.getString();

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

  FieldMap::g_iterator j;
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

  QF_STACK_POP
}

void Message::setString( const std::string& string,
                         bool doValidation,
                         const DataDictionary* pSessionDataDictionary,
                         const DataDictionary* pApplicationDataDictionary )
throw( InvalidMessage )
{ QF_STACK_PUSH(Message::setString)

  clear();

  std::string::size_type pos = 0;
  int count = 0;
  std::string msg;

  static int const headerOrder[] =
  {
    FIELD::BeginString,
    FIELD::BodyLength,
    FIELD::MsgType
  };

  field_type type = header;

  while ( pos < string.size() )
  {
    FieldBase field = extractField( string, pos, pSessionDataDictionary, pApplicationDataDictionary );
    if ( count < 3 && headerOrder[ count++ ] != field.getField() )
      if ( doValidation ) throw InvalidMessage("Header fields out of order");

    if ( isHeaderField( field, pSessionDataDictionary ) )
    {
      if ( type != header )
      {
        if(m_field == 0) m_field = field.getField();
        m_validStructure = false;
      }

      if ( field.getField() == FIELD::MsgType )
        msg = field.getString();

      m_header.setField( field, false );

      if ( pSessionDataDictionary )
        setGroup( "_header_", field, string, pos, getHeader(), *pSessionDataDictionary );
    }
    else if ( isTrailerField( field, pSessionDataDictionary ) )
    {
      type = trailer;
      m_trailer.setField( field, false );

      if ( pSessionDataDictionary )
        setGroup( "_trailer_", field, string, pos, getTrailer(), *pSessionDataDictionary );
    }
    else
    {
      if ( type == trailer )
      {
        if(m_field == 0) m_field = field.getField();
        m_validStructure = false;
      }

      type = body;
      setField( field, false );

      if ( pApplicationDataDictionary )
        setGroup( msg, field, string, pos, *this, *pApplicationDataDictionary );
    }
  }

  if ( doValidation )
    validate();

  QF_STACK_POP
}

void Message::setGroup( const std::string& msg, const FieldBase& field,
                        const std::string& string,
                        std::string::size_type& pos, FieldMap& map,
                        const DataDictionary& dataDictionary )
{ QF_STACK_PUSH(Message::setGroup)

  int group = field.getField();
  int delim;
  const DataDictionary* pDD = 0;
  if ( !dataDictionary.getGroup( msg, group, delim, pDD ) ) return ;
  Group* pGroup = 0;

  while ( pos < string.size() )
  {
    std::string::size_type oldPos = pos;
    FieldBase field = extractField( string, pos, &dataDictionary, &dataDictionary, pGroup );
    if ( (field.getField() == delim)
        || (pGroup == 0 && pDD->isField(field.getField())) )
    {
      if ( pGroup )
      {
        map.addGroup( group, *pGroup, false );
        delete pGroup; pGroup = 0;
      }
      pGroup = new Group( field.getField(), delim, pDD->getOrderedFields()  );
    }
    else if ( !pDD->isField( field.getField() ) )
    {
      if ( pGroup )
      {
        map.addGroup( group, *pGroup, false );
        delete pGroup; pGroup = 0;
      }
      pos = oldPos;
      return ;
    }

    if ( !pGroup ) return ;
    pGroup->setField( field, false );
    setGroup( msg, field, string, pos, *pGroup, *pDD );
  }

  QF_STACK_POP
}

bool Message::setStringHeader( const std::string& string )
{ QF_STACK_PUSH(Message::setStringHeader)

  clear();

  std::string::size_type pos = 0;
  int count = 0;

  while ( pos < string.size() )
  {
    FieldBase field = extractField( string, pos );
    if ( count < 3 && headerOrder[ count++ ] != field.getField() )
      return false;

    if ( isHeaderField( field ) )
      m_header.setField( field, false );
    else break;
  }
  return true;

  QF_STACK_POP
}

bool Message::isHeaderField( int field )
{ QF_STACK_PUSH(Message::isHeaderField)

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

  QF_STACK_POP
}

bool Message::isHeaderField( const FieldBase& field,
                             const DataDictionary* pD )
{ QF_STACK_PUSH(Message::isHeaderField)

  if ( isHeaderField( field.getField() ) ) return true;
  if ( pD ) return pD->isHeaderField( field.getField() );
  return false;

  QF_STACK_POP
}

bool Message::isTrailerField( int field )
{ QF_STACK_PUSH(Message::isTrailerField)

  switch ( field )
  {
    case FIELD::SignatureLength:
    case FIELD::Signature:
    case FIELD::CheckSum:
    return true;
    default:
    return false;
  };

  QF_STACK_POP
}

bool Message::isTrailerField( const FieldBase& field,
                              const DataDictionary* pD )
{ QF_STACK_PUSH(Message::isTrailerField)

  if ( isTrailerField( field.getField() ) ) return true;
  if ( pD ) return pD->isTrailerField( field.getField() );
  return false;

  QF_STACK_POP
}

SessionID Message::getSessionID( const std::string& qualifier ) const
throw( FieldNotFound )
{ QF_STACK_PUSH(Message::getSessionID)

  BeginString beginString;
  SenderCompID senderCompID;
  TargetCompID targetCompID;

  getHeader().getField( beginString );
  getHeader().getField( senderCompID );
  getHeader().getField( targetCompID );

  return SessionID( beginString, senderCompID, targetCompID, qualifier );

  QF_STACK_POP
}

void Message::setSessionID( const SessionID& sessionID )
{ QF_STACK_PUSH(Message::setSessionID)

  getHeader().setField( sessionID.getBeginString() );
  getHeader().setField( sessionID.getSenderCompID() );
  getHeader().setField( sessionID.getTargetCompID() );

  QF_STACK_POP
}

void Message::validate()
{ QF_STACK_PUSH(Message::validate)

  try
  {
    const BodyLength& aBodyLength = FIELD_GET_REF( m_header, BodyLength );

    if ( aBodyLength != bodyLength() )
    {
      std::stringstream text;
      text << "Expected BodyLength=" << bodyLength()
           << ", Recieved BodyLength=" << (int)aBodyLength;
      throw InvalidMessage(text.str());
    }

    const CheckSum& aCheckSum = FIELD_GET_REF( m_trailer, CheckSum );

    if ( aCheckSum != checkSum() )
    {
      std::stringstream text;
      text << "Expected CheckSum=" << checkSum()
           << ", Recieved CheckSum=" << (int)aCheckSum;
      throw InvalidMessage(text.str());
    }
  }
  catch ( FieldNotFound& )
  {
    throw InvalidMessage("BodyLength or CheckSum missing");
  }
  catch ( IncorrectDataFormat& )
  {
    throw InvalidMessage("BodyLength or Checksum has wrong format");
  }

  QF_STACK_POP
}
}
