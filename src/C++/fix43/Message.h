#ifndef FIX43_MESSAGES_H
#define FIX43_MESSAGES_H

#include "../Message.h"
#include "../Group.h"

namespace FIX43
{
  class Header : public FIX::Header
  {
  public:
    FIELD_SET(*this, FIX::BeginString);
    FIELD_SET(*this, FIX::BodyLength);
    FIELD_SET(*this, FIX::MsgType);
    FIELD_SET(*this, FIX::SenderCompID);
    FIELD_SET(*this, FIX::TargetCompID);
    FIELD_SET(*this, FIX::OnBehalfOfCompID);
    FIELD_SET(*this, FIX::DeliverToCompID);
    FIELD_SET(*this, FIX::SecureDataLen);
    FIELD_SET(*this, FIX::SecureData);
    FIELD_SET(*this, FIX::MsgSeqNum);
    FIELD_SET(*this, FIX::SenderSubID);
    FIELD_SET(*this, FIX::SenderLocationID);
    FIELD_SET(*this, FIX::TargetSubID);
    FIELD_SET(*this, FIX::TargetLocationID);
    FIELD_SET(*this, FIX::OnBehalfOfSubID);
    FIELD_SET(*this, FIX::OnBehalfOfLocationID);
    FIELD_SET(*this, FIX::DeliverToSubID);
    FIELD_SET(*this, FIX::DeliverToLocationID);
    FIELD_SET(*this, FIX::PossDupFlag);
    FIELD_SET(*this, FIX::PossResend);
    FIELD_SET(*this, FIX::SendingTime);
    FIELD_SET(*this, FIX::OrigSendingTime);
    FIELD_SET(*this, FIX::XmlDataLen);
    FIELD_SET(*this, FIX::XmlData);
    FIELD_SET(*this, FIX::MessageEncoding);
    FIELD_SET(*this, FIX::LastMsgSeqNumProcessed);
    FIELD_SET(*this, FIX::OnBehalfOfSendingTime);
    FIELD_SET(*this, FIX::NoHops);
    class NoHops: public FIX::Group
    {
    public:
    NoHops() : FIX::Group(627,628,FIX::message_order(628,629,630,0)) {}
      FIELD_SET(*this, FIX::HopCompID);
      FIELD_SET(*this, FIX::HopSendingTime);
      FIELD_SET(*this, FIX::HopRefID);
    };
  };

  class Trailer : public FIX::Trailer
  {
  public:
    FIELD_SET(*this, FIX::SignatureLength);
    FIELD_SET(*this, FIX::Signature);
    FIELD_SET(*this, FIX::CheckSum);
  };

  class Message : public FIX::Message
  {
  public:
    Message( const FIX::MsgType& msgtype )
    : FIX::Message(
      FIX::BeginString("FIX.4.3"), msgtype )
     {} 

    Message(const FIX::Message& m) : FIX::Message(m) {}
    Message(const Message& m) : FIX::Message(m) {}
    Header& getHeader() { return (Header&)m_header; }
    const Header& getHeader() const { return (Header&)m_header; }
    Trailer& getTrailer() { return (Trailer&)m_trailer; }
    const Trailer& getTrailer() const { return (Trailer&)m_trailer; }
  };

}

#endif
