#ifndef FIX42_MARKETDATAINCREMENTALREFRESH_H
#define FIX42_MARKETDATAINCREMENTALREFRESH_H

#include "Message.h"

namespace FIX42
{

  class MarketDataIncrementalRefresh : public Message
  {
  public:
    MarketDataIncrementalRefresh() : Message(MsgType()) {}
    MarketDataIncrementalRefresh(const FIX::Message& m) : Message(m) {}
    MarketDataIncrementalRefresh(const Message& m) : Message(m) {}
    MarketDataIncrementalRefresh(const MarketDataIncrementalRefresh& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("X"); }

    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::NoMDEntries);
    class NoMDEntries: public FIX::Group
    {
    public:
    NoMDEntries() : FIX::Group(268,279,FIX::message_order(279,285,269,278,280,55,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,291,292,270,15,271,272,273,274,275,336,276,277,282,283,284,286,59,432,126,110,18,287,37,299,288,289,346,290,387,58,354,355,0)) {}
      FIELD_SET(*this, FIX::MDUpdateAction);
      FIELD_SET(*this, FIX::DeleteReason);
      FIELD_SET(*this, FIX::MDEntryType);
      FIELD_SET(*this, FIX::MDEntryID);
      FIELD_SET(*this, FIX::MDEntryRefID);
      FIELD_SET(*this, FIX::Symbol);
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
      FIELD_SET(*this, FIX::FinancialStatus);
      FIELD_SET(*this, FIX::CorporateAction);
      FIELD_SET(*this, FIX::MDEntryPx);
      FIELD_SET(*this, FIX::Currency);
      FIELD_SET(*this, FIX::MDEntrySize);
      FIELD_SET(*this, FIX::MDEntryDate);
      FIELD_SET(*this, FIX::MDEntryTime);
      FIELD_SET(*this, FIX::TickDirection);
      FIELD_SET(*this, FIX::MDMkt);
      FIELD_SET(*this, FIX::TradingSessionID);
      FIELD_SET(*this, FIX::QuoteCondition);
      FIELD_SET(*this, FIX::TradeCondition);
      FIELD_SET(*this, FIX::MDEntryOriginator);
      FIELD_SET(*this, FIX::LocationID);
      FIELD_SET(*this, FIX::DeskID);
      FIELD_SET(*this, FIX::OpenCloseSettleFlag);
      FIELD_SET(*this, FIX::TimeInForce);
      FIELD_SET(*this, FIX::ExpireDate);
      FIELD_SET(*this, FIX::ExpireTime);
      FIELD_SET(*this, FIX::MinQty);
      FIELD_SET(*this, FIX::ExecInst);
      FIELD_SET(*this, FIX::SellerDays);
      FIELD_SET(*this, FIX::OrderID);
      FIELD_SET(*this, FIX::QuoteEntryID);
      FIELD_SET(*this, FIX::MDEntryBuyer);
      FIELD_SET(*this, FIX::MDEntrySeller);
      FIELD_SET(*this, FIX::NumberOfOrders);
      FIELD_SET(*this, FIX::MDEntryPositionNo);
      FIELD_SET(*this, FIX::TotalVolumeTraded);
      FIELD_SET(*this, FIX::Text);
      FIELD_SET(*this, FIX::EncodedTextLen);
      FIELD_SET(*this, FIX::EncodedText);
    };
  };

}

#endif
