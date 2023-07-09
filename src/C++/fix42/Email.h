#ifndef FIX42_EMAIL_H
#define FIX42_EMAIL_H

#include "Message.h"

namespace FIX42
{

  class Email : public Message
  {
  public:
    Email() : Message(MsgType()) {}
    Email(const FIX::Message& m) : Message(m) {}
    Email(const Message& m) : Message(m) {}
    Email(const Email&) = default;
    Email(Email&&) = default;
    Email& operator=(const Email&) = default;
    Email& operator=(Email&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("C"); }

    Email(
      const FIX::EmailThreadID& aEmailThreadID,
      const FIX::EmailType& aEmailType,
      const FIX::Subject& aSubject )
    : Message(MsgType())
    {
      set(aEmailThreadID);
      set(aEmailType);
      set(aSubject);
    }

    FIELD_SET(*this, FIX::EmailThreadID);
    FIELD_SET(*this, FIX::EmailType);
    FIELD_SET(*this, FIX::OrigTime);
    FIELD_SET(*this, FIX::Subject);
    FIELD_SET(*this, FIX::EncodedSubjectLen);
    FIELD_SET(*this, FIX::EncodedSubject);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
    FIELD_SET(*this, FIX::NoRoutingIDs);
    class NoRoutingIDs: public FIX::Group
    {
    public:
    NoRoutingIDs() : FIX::Group(215,216,FIX::message_order(216,217,0)) {}
      FIELD_SET(*this, FIX::RoutingType);
      FIELD_SET(*this, FIX::RoutingID);
    };
    FIELD_SET(*this, FIX::NoRelatedSym);
    class NoRelatedSym: public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146,46,FIX::message_order(46,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,0)) {}
      FIELD_SET(*this, FIX::RelatdSym);
      FIELD_SET(*this, FIX::SymbolSfx);
      FIELD_SET(*this, FIX::SecurityID);
      FIELD_SET(*this, FIX::IDSource);
      FIELD_SET(*this, FIX::SecurityType);
      FIELD_SET(*this, FIX::MaturityMonthYear);
      FIELD_SET(*this, FIX::MaturityDay);
      FIELD_SET(*this, FIX::PutOrCall);
      FIELD_SET(*this, FIX::StrikePrice);
      FIELD_SET(*this, FIX::OptAttribute);
      FIELD_SET(*this, FIX::ContractMultiplier);
      FIELD_SET(*this, FIX::CouponRate);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::Issuer);
      FIELD_SET(*this, FIX::EncodedIssuerLen);
      FIELD_SET(*this, FIX::EncodedIssuer);
      FIELD_SET(*this, FIX::SecurityDesc);
      FIELD_SET(*this, FIX::EncodedSecurityDescLen);
      FIELD_SET(*this, FIX::EncodedSecurityDesc);
    };
    FIELD_SET(*this, FIX::LinesOfText);
    class LinesOfText: public FIX::Group
    {
    public:
    LinesOfText() : FIX::Group(33,58,FIX::message_order(58,354,355,0)) {}
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
  };

}

#endif
