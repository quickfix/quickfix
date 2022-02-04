#ifndef FIX42_NEWS_H
#define FIX42_NEWS_H

#include "Message.h"

namespace FIX42
{

  class News : public Message
  {
  public:
    News() : Message(MsgType()) {}
    News(const FIX::Message& m) : Message(m) {}
    News(const Message& m) : Message(m) {}
    News(const News& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("B"); }

    News(
      const FIX::Headline& aHeadline )
    : Message(MsgType())
    {
      set(aHeadline);
    }

    FIELD_SET(*this, FIX::OrigTime);
    FIELD_SET(*this, FIX::Urgency);
    FIELD_SET(*this, FIX::Headline);
    FIELD_SET(*this, FIX::EncodedHeadlineLen);
    FIELD_SET(*this, FIX::EncodedHeadline);
    FIELD_SET(*this, FIX::URLLink);
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
