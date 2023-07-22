#ifndef FIX50SP2_MARKETDATAREPORT_H
#define FIX50SP2_MARKETDATAREPORT_H

#include "Message.h"

namespace FIX50SP2
{

  class MarketDataReport : public Message
  {
  public:
    MarketDataReport() : Message(MsgType()) {}
    MarketDataReport(const FIX::Message& m) : Message(m) {}
    MarketDataReport(const Message& m) : Message(m) {}
    MarketDataReport(const MarketDataReport&) = default;
    MarketDataReport(MarketDataReport&&) = default;
    MarketDataReport& operator=(const MarketDataReport&) = default;
    MarketDataReport& operator=(MarketDataReport&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("DR"); }

    MarketDataReport(
      const FIX::MDReportEvent& aMDReportEvent,
      const FIX::MDReportCount& aMDReportCount )
    : Message(MsgType())
    {
      set(aMDReportEvent);
      set(aMDReportCount);
    }

    FIELD_SET(*this, FIX::ApplID);
    FIELD_SET(*this, FIX::ApplSeqNum);
    FIELD_SET(*this, FIX::ApplLastSeqNum);
    FIELD_SET(*this, FIX::ApplResendFlag);
    FIELD_SET(*this, FIX::MDReportID);
    FIELD_SET(*this, FIX::MDReportEvent);
    FIELD_SET(*this, FIX::MDReportCount);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::TotNumReports);
    FIELD_SET(*this, FIX::TotNoMarketSegmentReports);
    FIELD_SET(*this, FIX::TotNoInstrumentReports);
    FIELD_SET(*this, FIX::TotNoPartyDetailReports);
    FIELD_SET(*this, FIX::TotNoEntitlementReports);
    FIELD_SET(*this, FIX::TotNoRiskLimitReports);
  };

}

#endif
