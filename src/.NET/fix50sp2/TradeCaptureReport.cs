namespace QuickFix50Sp2
{

  public class TradeCaptureReport : Message
  {
    public TradeCaptureReport() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("AE"); }

    public TradeCaptureReport(
      QuickFix.LastQty aLastQty,
      QuickFix.LastPx aLastPx )
    : base(MsgType()) {
      set(aLastQty);
      set(aLastPx);
    }

    public void set(QuickFix.TradeReportID value)
    { setField(value); }
    public QuickFix.TradeReportID get(QuickFix.TradeReportID  value)
    { getField(value); return value; }
    public QuickFix.TradeReportID getTradeReportID()
    { QuickFix.TradeReportID value = new QuickFix.TradeReportID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeReportID field)
    { return isSetField(field); }
    public bool isSetTradeReportID()
    { return isSetField(571); }

    public void set(QuickFix.TradeReportTransType value)
    { setField(value); }
    public QuickFix.TradeReportTransType get(QuickFix.TradeReportTransType  value)
    { getField(value); return value; }
    public QuickFix.TradeReportTransType getTradeReportTransType()
    { QuickFix.TradeReportTransType value = new QuickFix.TradeReportTransType();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeReportTransType field)
    { return isSetField(field); }
    public bool isSetTradeReportTransType()
    { return isSetField(487); }

    public void set(QuickFix.TradeReportType value)
    { setField(value); }
    public QuickFix.TradeReportType get(QuickFix.TradeReportType  value)
    { getField(value); return value; }
    public QuickFix.TradeReportType getTradeReportType()
    { QuickFix.TradeReportType value = new QuickFix.TradeReportType();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeReportType field)
    { return isSetField(field); }
    public bool isSetTradeReportType()
    { return isSetField(856); }

    public void set(QuickFix.TradeRequestID value)
    { setField(value); }
    public QuickFix.TradeRequestID get(QuickFix.TradeRequestID  value)
    { getField(value); return value; }
    public QuickFix.TradeRequestID getTradeRequestID()
    { QuickFix.TradeRequestID value = new QuickFix.TradeRequestID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeRequestID field)
    { return isSetField(field); }
    public bool isSetTradeRequestID()
    { return isSetField(568); }

    public void set(QuickFix.TrdType value)
    { setField(value); }
    public QuickFix.TrdType get(QuickFix.TrdType  value)
    { getField(value); return value; }
    public QuickFix.TrdType getTrdType()
    { QuickFix.TrdType value = new QuickFix.TrdType();
      getField(value); return value; }
    public bool isSet(QuickFix.TrdType field)
    { return isSetField(field); }
    public bool isSetTrdType()
    { return isSetField(828); }

    public void set(QuickFix.TrdSubType value)
    { setField(value); }
    public QuickFix.TrdSubType get(QuickFix.TrdSubType  value)
    { getField(value); return value; }
    public QuickFix.TrdSubType getTrdSubType()
    { QuickFix.TrdSubType value = new QuickFix.TrdSubType();
      getField(value); return value; }
    public bool isSet(QuickFix.TrdSubType field)
    { return isSetField(field); }
    public bool isSetTrdSubType()
    { return isSetField(829); }

    public void set(QuickFix.SecondaryTrdType value)
    { setField(value); }
    public QuickFix.SecondaryTrdType get(QuickFix.SecondaryTrdType  value)
    { getField(value); return value; }
    public QuickFix.SecondaryTrdType getSecondaryTrdType()
    { QuickFix.SecondaryTrdType value = new QuickFix.SecondaryTrdType();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryTrdType field)
    { return isSetField(field); }
    public bool isSetSecondaryTrdType()
    { return isSetField(855); }

    public void set(QuickFix.TransferReason value)
    { setField(value); }
    public QuickFix.TransferReason get(QuickFix.TransferReason  value)
    { getField(value); return value; }
    public QuickFix.TransferReason getTransferReason()
    { QuickFix.TransferReason value = new QuickFix.TransferReason();
      getField(value); return value; }
    public bool isSet(QuickFix.TransferReason field)
    { return isSetField(field); }
    public bool isSetTransferReason()
    { return isSetField(830); }

    public void set(QuickFix.ExecType value)
    { setField(value); }
    public QuickFix.ExecType get(QuickFix.ExecType  value)
    { getField(value); return value; }
    public QuickFix.ExecType getExecType()
    { QuickFix.ExecType value = new QuickFix.ExecType();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecType field)
    { return isSetField(field); }
    public bool isSetExecType()
    { return isSetField(150); }

    public void set(QuickFix.TotNumTradeReports value)
    { setField(value); }
    public QuickFix.TotNumTradeReports get(QuickFix.TotNumTradeReports  value)
    { getField(value); return value; }
    public QuickFix.TotNumTradeReports getTotNumTradeReports()
    { QuickFix.TotNumTradeReports value = new QuickFix.TotNumTradeReports();
      getField(value); return value; }
    public bool isSet(QuickFix.TotNumTradeReports field)
    { return isSetField(field); }
    public bool isSetTotNumTradeReports()
    { return isSetField(748); }

    public void set(QuickFix.LastRptRequested value)
    { setField(value); }
    public QuickFix.LastRptRequested get(QuickFix.LastRptRequested  value)
    { getField(value); return value; }
    public QuickFix.LastRptRequested getLastRptRequested()
    { QuickFix.LastRptRequested value = new QuickFix.LastRptRequested();
      getField(value); return value; }
    public bool isSet(QuickFix.LastRptRequested field)
    { return isSetField(field); }
    public bool isSetLastRptRequested()
    { return isSetField(912); }

    public void set(QuickFix.UnsolicitedIndicator value)
    { setField(value); }
    public QuickFix.UnsolicitedIndicator get(QuickFix.UnsolicitedIndicator  value)
    { getField(value); return value; }
    public QuickFix.UnsolicitedIndicator getUnsolicitedIndicator()
    { QuickFix.UnsolicitedIndicator value = new QuickFix.UnsolicitedIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.UnsolicitedIndicator field)
    { return isSetField(field); }
    public bool isSetUnsolicitedIndicator()
    { return isSetField(325); }

    public void set(QuickFix.SubscriptionRequestType value)
    { setField(value); }
    public QuickFix.SubscriptionRequestType get(QuickFix.SubscriptionRequestType  value)
    { getField(value); return value; }
    public QuickFix.SubscriptionRequestType getSubscriptionRequestType()
    { QuickFix.SubscriptionRequestType value = new QuickFix.SubscriptionRequestType();
      getField(value); return value; }
    public bool isSet(QuickFix.SubscriptionRequestType field)
    { return isSetField(field); }
    public bool isSetSubscriptionRequestType()
    { return isSetField(263); }

    public void set(QuickFix.TradeReportRefID value)
    { setField(value); }
    public QuickFix.TradeReportRefID get(QuickFix.TradeReportRefID  value)
    { getField(value); return value; }
    public QuickFix.TradeReportRefID getTradeReportRefID()
    { QuickFix.TradeReportRefID value = new QuickFix.TradeReportRefID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeReportRefID field)
    { return isSetField(field); }
    public bool isSetTradeReportRefID()
    { return isSetField(572); }

    public void set(QuickFix.SecondaryTradeReportRefID value)
    { setField(value); }
    public QuickFix.SecondaryTradeReportRefID get(QuickFix.SecondaryTradeReportRefID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryTradeReportRefID getSecondaryTradeReportRefID()
    { QuickFix.SecondaryTradeReportRefID value = new QuickFix.SecondaryTradeReportRefID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryTradeReportRefID field)
    { return isSetField(field); }
    public bool isSetSecondaryTradeReportRefID()
    { return isSetField(881); }

    public void set(QuickFix.SecondaryTradeReportID value)
    { setField(value); }
    public QuickFix.SecondaryTradeReportID get(QuickFix.SecondaryTradeReportID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryTradeReportID getSecondaryTradeReportID()
    { QuickFix.SecondaryTradeReportID value = new QuickFix.SecondaryTradeReportID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryTradeReportID field)
    { return isSetField(field); }
    public bool isSetSecondaryTradeReportID()
    { return isSetField(818); }

    public void set(QuickFix.TradeLinkID value)
    { setField(value); }
    public QuickFix.TradeLinkID get(QuickFix.TradeLinkID  value)
    { getField(value); return value; }
    public QuickFix.TradeLinkID getTradeLinkID()
    { QuickFix.TradeLinkID value = new QuickFix.TradeLinkID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeLinkID field)
    { return isSetField(field); }
    public bool isSetTradeLinkID()
    { return isSetField(820); }

    public void set(QuickFix.TrdMatchID value)
    { setField(value); }
    public QuickFix.TrdMatchID get(QuickFix.TrdMatchID  value)
    { getField(value); return value; }
    public QuickFix.TrdMatchID getTrdMatchID()
    { QuickFix.TrdMatchID value = new QuickFix.TrdMatchID();
      getField(value); return value; }
    public bool isSet(QuickFix.TrdMatchID field)
    { return isSetField(field); }
    public bool isSetTrdMatchID()
    { return isSetField(880); }

    public void set(QuickFix.ExecID value)
    { setField(value); }
    public QuickFix.ExecID get(QuickFix.ExecID  value)
    { getField(value); return value; }
    public QuickFix.ExecID getExecID()
    { QuickFix.ExecID value = new QuickFix.ExecID();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecID field)
    { return isSetField(field); }
    public bool isSetExecID()
    { return isSetField(17); }

    public void set(QuickFix.SecondaryExecID value)
    { setField(value); }
    public QuickFix.SecondaryExecID get(QuickFix.SecondaryExecID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryExecID getSecondaryExecID()
    { QuickFix.SecondaryExecID value = new QuickFix.SecondaryExecID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryExecID field)
    { return isSetField(field); }
    public bool isSetSecondaryExecID()
    { return isSetField(527); }

    public void set(QuickFix.ExecRestatementReason value)
    { setField(value); }
    public QuickFix.ExecRestatementReason get(QuickFix.ExecRestatementReason  value)
    { getField(value); return value; }
    public QuickFix.ExecRestatementReason getExecRestatementReason()
    { QuickFix.ExecRestatementReason value = new QuickFix.ExecRestatementReason();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecRestatementReason field)
    { return isSetField(field); }
    public bool isSetExecRestatementReason()
    { return isSetField(378); }

    public void set(QuickFix.PreviouslyReported value)
    { setField(value); }
    public QuickFix.PreviouslyReported get(QuickFix.PreviouslyReported  value)
    { getField(value); return value; }
    public QuickFix.PreviouslyReported getPreviouslyReported()
    { QuickFix.PreviouslyReported value = new QuickFix.PreviouslyReported();
      getField(value); return value; }
    public bool isSet(QuickFix.PreviouslyReported field)
    { return isSetField(field); }
    public bool isSetPreviouslyReported()
    { return isSetField(570); }

    public void set(QuickFix.PriceType value)
    { setField(value); }
    public QuickFix.PriceType get(QuickFix.PriceType  value)
    { getField(value); return value; }
    public QuickFix.PriceType getPriceType()
    { QuickFix.PriceType value = new QuickFix.PriceType();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceType field)
    { return isSetField(field); }
    public bool isSetPriceType()
    { return isSetField(423); }

    public void set(QuickFix.Symbol value)
    { setField(value); }
    public QuickFix.Symbol get(QuickFix.Symbol  value)
    { getField(value); return value; }
    public QuickFix.Symbol getSymbol()
    { QuickFix.Symbol value = new QuickFix.Symbol();
      getField(value); return value; }
    public bool isSet(QuickFix.Symbol field)
    { return isSetField(field); }
    public bool isSetSymbol()
    { return isSetField(55); }

    public void set(QuickFix.SymbolSfx value)
    { setField(value); }
    public QuickFix.SymbolSfx get(QuickFix.SymbolSfx  value)
    { getField(value); return value; }
    public QuickFix.SymbolSfx getSymbolSfx()
    { QuickFix.SymbolSfx value = new QuickFix.SymbolSfx();
      getField(value); return value; }
    public bool isSet(QuickFix.SymbolSfx field)
    { return isSetField(field); }
    public bool isSetSymbolSfx()
    { return isSetField(65); }

    public void set(QuickFix.SecurityID value)
    { setField(value); }
    public QuickFix.SecurityID get(QuickFix.SecurityID  value)
    { getField(value); return value; }
    public QuickFix.SecurityID getSecurityID()
    { QuickFix.SecurityID value = new QuickFix.SecurityID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityID field)
    { return isSetField(field); }
    public bool isSetSecurityID()
    { return isSetField(48); }

    public void set(QuickFix.SecurityIDSource value)
    { setField(value); }
    public QuickFix.SecurityIDSource get(QuickFix.SecurityIDSource  value)
    { getField(value); return value; }
    public QuickFix.SecurityIDSource getSecurityIDSource()
    { QuickFix.SecurityIDSource value = new QuickFix.SecurityIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityIDSource field)
    { return isSetField(field); }
    public bool isSetSecurityIDSource()
    { return isSetField(22); }

    public void set(QuickFix.Product value)
    { setField(value); }
    public QuickFix.Product get(QuickFix.Product  value)
    { getField(value); return value; }
    public QuickFix.Product getProduct()
    { QuickFix.Product value = new QuickFix.Product();
      getField(value); return value; }
    public bool isSet(QuickFix.Product field)
    { return isSetField(field); }
    public bool isSetProduct()
    { return isSetField(460); }

    public void set(QuickFix.CFICode value)
    { setField(value); }
    public QuickFix.CFICode get(QuickFix.CFICode  value)
    { getField(value); return value; }
    public QuickFix.CFICode getCFICode()
    { QuickFix.CFICode value = new QuickFix.CFICode();
      getField(value); return value; }
    public bool isSet(QuickFix.CFICode field)
    { return isSetField(field); }
    public bool isSetCFICode()
    { return isSetField(461); }

    public void set(QuickFix.SecurityType value)
    { setField(value); }
    public QuickFix.SecurityType get(QuickFix.SecurityType  value)
    { getField(value); return value; }
    public QuickFix.SecurityType getSecurityType()
    { QuickFix.SecurityType value = new QuickFix.SecurityType();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityType field)
    { return isSetField(field); }
    public bool isSetSecurityType()
    { return isSetField(167); }

    public void set(QuickFix.SecuritySubType value)
    { setField(value); }
    public QuickFix.SecuritySubType get(QuickFix.SecuritySubType  value)
    { getField(value); return value; }
    public QuickFix.SecuritySubType getSecuritySubType()
    { QuickFix.SecuritySubType value = new QuickFix.SecuritySubType();
      getField(value); return value; }
    public bool isSet(QuickFix.SecuritySubType field)
    { return isSetField(field); }
    public bool isSetSecuritySubType()
    { return isSetField(762); }

    public void set(QuickFix.MaturityMonthYear value)
    { setField(value); }
    public QuickFix.MaturityMonthYear get(QuickFix.MaturityMonthYear  value)
    { getField(value); return value; }
    public QuickFix.MaturityMonthYear getMaturityMonthYear()
    { QuickFix.MaturityMonthYear value = new QuickFix.MaturityMonthYear();
      getField(value); return value; }
    public bool isSet(QuickFix.MaturityMonthYear field)
    { return isSetField(field); }
    public bool isSetMaturityMonthYear()
    { return isSetField(200); }

    public void set(QuickFix.MaturityDate value)
    { setField(value); }
    public QuickFix.MaturityDate get(QuickFix.MaturityDate  value)
    { getField(value); return value; }
    public QuickFix.MaturityDate getMaturityDate()
    { QuickFix.MaturityDate value = new QuickFix.MaturityDate();
      getField(value); return value; }
    public bool isSet(QuickFix.MaturityDate field)
    { return isSetField(field); }
    public bool isSetMaturityDate()
    { return isSetField(541); }

    public void set(QuickFix.CouponPaymentDate value)
    { setField(value); }
    public QuickFix.CouponPaymentDate get(QuickFix.CouponPaymentDate  value)
    { getField(value); return value; }
    public QuickFix.CouponPaymentDate getCouponPaymentDate()
    { QuickFix.CouponPaymentDate value = new QuickFix.CouponPaymentDate();
      getField(value); return value; }
    public bool isSet(QuickFix.CouponPaymentDate field)
    { return isSetField(field); }
    public bool isSetCouponPaymentDate()
    { return isSetField(224); }

    public void set(QuickFix.IssueDate value)
    { setField(value); }
    public QuickFix.IssueDate get(QuickFix.IssueDate  value)
    { getField(value); return value; }
    public QuickFix.IssueDate getIssueDate()
    { QuickFix.IssueDate value = new QuickFix.IssueDate();
      getField(value); return value; }
    public bool isSet(QuickFix.IssueDate field)
    { return isSetField(field); }
    public bool isSetIssueDate()
    { return isSetField(225); }

    public void set(QuickFix.RepoCollateralSecurityType value)
    { setField(value); }
    public QuickFix.RepoCollateralSecurityType get(QuickFix.RepoCollateralSecurityType  value)
    { getField(value); return value; }
    public QuickFix.RepoCollateralSecurityType getRepoCollateralSecurityType()
    { QuickFix.RepoCollateralSecurityType value = new QuickFix.RepoCollateralSecurityType();
      getField(value); return value; }
    public bool isSet(QuickFix.RepoCollateralSecurityType field)
    { return isSetField(field); }
    public bool isSetRepoCollateralSecurityType()
    { return isSetField(239); }

    public void set(QuickFix.RepurchaseTerm value)
    { setField(value); }
    public QuickFix.RepurchaseTerm get(QuickFix.RepurchaseTerm  value)
    { getField(value); return value; }
    public QuickFix.RepurchaseTerm getRepurchaseTerm()
    { QuickFix.RepurchaseTerm value = new QuickFix.RepurchaseTerm();
      getField(value); return value; }
    public bool isSet(QuickFix.RepurchaseTerm field)
    { return isSetField(field); }
    public bool isSetRepurchaseTerm()
    { return isSetField(226); }

    public void set(QuickFix.RepurchaseRate value)
    { setField(value); }
    public QuickFix.RepurchaseRate get(QuickFix.RepurchaseRate  value)
    { getField(value); return value; }
    public QuickFix.RepurchaseRate getRepurchaseRate()
    { QuickFix.RepurchaseRate value = new QuickFix.RepurchaseRate();
      getField(value); return value; }
    public bool isSet(QuickFix.RepurchaseRate field)
    { return isSetField(field); }
    public bool isSetRepurchaseRate()
    { return isSetField(227); }

    public void set(QuickFix.Factor value)
    { setField(value); }
    public QuickFix.Factor get(QuickFix.Factor  value)
    { getField(value); return value; }
    public QuickFix.Factor getFactor()
    { QuickFix.Factor value = new QuickFix.Factor();
      getField(value); return value; }
    public bool isSet(QuickFix.Factor field)
    { return isSetField(field); }
    public bool isSetFactor()
    { return isSetField(228); }

    public void set(QuickFix.CreditRating value)
    { setField(value); }
    public QuickFix.CreditRating get(QuickFix.CreditRating  value)
    { getField(value); return value; }
    public QuickFix.CreditRating getCreditRating()
    { QuickFix.CreditRating value = new QuickFix.CreditRating();
      getField(value); return value; }
    public bool isSet(QuickFix.CreditRating field)
    { return isSetField(field); }
    public bool isSetCreditRating()
    { return isSetField(255); }

    public void set(QuickFix.InstrRegistry value)
    { setField(value); }
    public QuickFix.InstrRegistry get(QuickFix.InstrRegistry  value)
    { getField(value); return value; }
    public QuickFix.InstrRegistry getInstrRegistry()
    { QuickFix.InstrRegistry value = new QuickFix.InstrRegistry();
      getField(value); return value; }
    public bool isSet(QuickFix.InstrRegistry field)
    { return isSetField(field); }
    public bool isSetInstrRegistry()
    { return isSetField(543); }

    public void set(QuickFix.CountryOfIssue value)
    { setField(value); }
    public QuickFix.CountryOfIssue get(QuickFix.CountryOfIssue  value)
    { getField(value); return value; }
    public QuickFix.CountryOfIssue getCountryOfIssue()
    { QuickFix.CountryOfIssue value = new QuickFix.CountryOfIssue();
      getField(value); return value; }
    public bool isSet(QuickFix.CountryOfIssue field)
    { return isSetField(field); }
    public bool isSetCountryOfIssue()
    { return isSetField(470); }

    public void set(QuickFix.StateOrProvinceOfIssue value)
    { setField(value); }
    public QuickFix.StateOrProvinceOfIssue get(QuickFix.StateOrProvinceOfIssue  value)
    { getField(value); return value; }
    public QuickFix.StateOrProvinceOfIssue getStateOrProvinceOfIssue()
    { QuickFix.StateOrProvinceOfIssue value = new QuickFix.StateOrProvinceOfIssue();
      getField(value); return value; }
    public bool isSet(QuickFix.StateOrProvinceOfIssue field)
    { return isSetField(field); }
    public bool isSetStateOrProvinceOfIssue()
    { return isSetField(471); }

    public void set(QuickFix.LocaleOfIssue value)
    { setField(value); }
    public QuickFix.LocaleOfIssue get(QuickFix.LocaleOfIssue  value)
    { getField(value); return value; }
    public QuickFix.LocaleOfIssue getLocaleOfIssue()
    { QuickFix.LocaleOfIssue value = new QuickFix.LocaleOfIssue();
      getField(value); return value; }
    public bool isSet(QuickFix.LocaleOfIssue field)
    { return isSetField(field); }
    public bool isSetLocaleOfIssue()
    { return isSetField(472); }

    public void set(QuickFix.RedemptionDate value)
    { setField(value); }
    public QuickFix.RedemptionDate get(QuickFix.RedemptionDate  value)
    { getField(value); return value; }
    public QuickFix.RedemptionDate getRedemptionDate()
    { QuickFix.RedemptionDate value = new QuickFix.RedemptionDate();
      getField(value); return value; }
    public bool isSet(QuickFix.RedemptionDate field)
    { return isSetField(field); }
    public bool isSetRedemptionDate()
    { return isSetField(240); }

    public void set(QuickFix.StrikePrice value)
    { setField(value); }
    public QuickFix.StrikePrice get(QuickFix.StrikePrice  value)
    { getField(value); return value; }
    public QuickFix.StrikePrice getStrikePrice()
    { QuickFix.StrikePrice value = new QuickFix.StrikePrice();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePrice field)
    { return isSetField(field); }
    public bool isSetStrikePrice()
    { return isSetField(202); }

    public void set(QuickFix.StrikeCurrency value)
    { setField(value); }
    public QuickFix.StrikeCurrency get(QuickFix.StrikeCurrency  value)
    { getField(value); return value; }
    public QuickFix.StrikeCurrency getStrikeCurrency()
    { QuickFix.StrikeCurrency value = new QuickFix.StrikeCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikeCurrency field)
    { return isSetField(field); }
    public bool isSetStrikeCurrency()
    { return isSetField(947); }

    public void set(QuickFix.OptAttribute value)
    { setField(value); }
    public QuickFix.OptAttribute get(QuickFix.OptAttribute  value)
    { getField(value); return value; }
    public QuickFix.OptAttribute getOptAttribute()
    { QuickFix.OptAttribute value = new QuickFix.OptAttribute();
      getField(value); return value; }
    public bool isSet(QuickFix.OptAttribute field)
    { return isSetField(field); }
    public bool isSetOptAttribute()
    { return isSetField(206); }

    public void set(QuickFix.ContractMultiplier value)
    { setField(value); }
    public QuickFix.ContractMultiplier get(QuickFix.ContractMultiplier  value)
    { getField(value); return value; }
    public QuickFix.ContractMultiplier getContractMultiplier()
    { QuickFix.ContractMultiplier value = new QuickFix.ContractMultiplier();
      getField(value); return value; }
    public bool isSet(QuickFix.ContractMultiplier field)
    { return isSetField(field); }
    public bool isSetContractMultiplier()
    { return isSetField(231); }

    public void set(QuickFix.CouponRate value)
    { setField(value); }
    public QuickFix.CouponRate get(QuickFix.CouponRate  value)
    { getField(value); return value; }
    public QuickFix.CouponRate getCouponRate()
    { QuickFix.CouponRate value = new QuickFix.CouponRate();
      getField(value); return value; }
    public bool isSet(QuickFix.CouponRate field)
    { return isSetField(field); }
    public bool isSetCouponRate()
    { return isSetField(223); }

    public void set(QuickFix.SecurityExchange value)
    { setField(value); }
    public QuickFix.SecurityExchange get(QuickFix.SecurityExchange  value)
    { getField(value); return value; }
    public QuickFix.SecurityExchange getSecurityExchange()
    { QuickFix.SecurityExchange value = new QuickFix.SecurityExchange();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityExchange field)
    { return isSetField(field); }
    public bool isSetSecurityExchange()
    { return isSetField(207); }

    public void set(QuickFix.Issuer value)
    { setField(value); }
    public QuickFix.Issuer get(QuickFix.Issuer  value)
    { getField(value); return value; }
    public QuickFix.Issuer getIssuer()
    { QuickFix.Issuer value = new QuickFix.Issuer();
      getField(value); return value; }
    public bool isSet(QuickFix.Issuer field)
    { return isSetField(field); }
    public bool isSetIssuer()
    { return isSetField(106); }

    public void set(QuickFix.EncodedIssuerLen value)
    { setField(value); }
    public QuickFix.EncodedIssuerLen get(QuickFix.EncodedIssuerLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedIssuerLen getEncodedIssuerLen()
    { QuickFix.EncodedIssuerLen value = new QuickFix.EncodedIssuerLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedIssuerLen field)
    { return isSetField(field); }
    public bool isSetEncodedIssuerLen()
    { return isSetField(348); }

    public void set(QuickFix.EncodedIssuer value)
    { setField(value); }
    public QuickFix.EncodedIssuer get(QuickFix.EncodedIssuer  value)
    { getField(value); return value; }
    public QuickFix.EncodedIssuer getEncodedIssuer()
    { QuickFix.EncodedIssuer value = new QuickFix.EncodedIssuer();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedIssuer field)
    { return isSetField(field); }
    public bool isSetEncodedIssuer()
    { return isSetField(349); }

    public void set(QuickFix.SecurityDesc value)
    { setField(value); }
    public QuickFix.SecurityDesc get(QuickFix.SecurityDesc  value)
    { getField(value); return value; }
    public QuickFix.SecurityDesc getSecurityDesc()
    { QuickFix.SecurityDesc value = new QuickFix.SecurityDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityDesc field)
    { return isSetField(field); }
    public bool isSetSecurityDesc()
    { return isSetField(107); }

    public void set(QuickFix.EncodedSecurityDescLen value)
    { setField(value); }
    public QuickFix.EncodedSecurityDescLen get(QuickFix.EncodedSecurityDescLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedSecurityDescLen getEncodedSecurityDescLen()
    { QuickFix.EncodedSecurityDescLen value = new QuickFix.EncodedSecurityDescLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedSecurityDescLen field)
    { return isSetField(field); }
    public bool isSetEncodedSecurityDescLen()
    { return isSetField(350); }

    public void set(QuickFix.EncodedSecurityDesc value)
    { setField(value); }
    public QuickFix.EncodedSecurityDesc get(QuickFix.EncodedSecurityDesc  value)
    { getField(value); return value; }
    public QuickFix.EncodedSecurityDesc getEncodedSecurityDesc()
    { QuickFix.EncodedSecurityDesc value = new QuickFix.EncodedSecurityDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedSecurityDesc field)
    { return isSetField(field); }
    public bool isSetEncodedSecurityDesc()
    { return isSetField(351); }

    public void set(QuickFix.Pool value)
    { setField(value); }
    public QuickFix.Pool get(QuickFix.Pool  value)
    { getField(value); return value; }
    public QuickFix.Pool getPool()
    { QuickFix.Pool value = new QuickFix.Pool();
      getField(value); return value; }
    public bool isSet(QuickFix.Pool field)
    { return isSetField(field); }
    public bool isSetPool()
    { return isSetField(691); }

    public void set(QuickFix.ContractSettlMonth value)
    { setField(value); }
    public QuickFix.ContractSettlMonth get(QuickFix.ContractSettlMonth  value)
    { getField(value); return value; }
    public QuickFix.ContractSettlMonth getContractSettlMonth()
    { QuickFix.ContractSettlMonth value = new QuickFix.ContractSettlMonth();
      getField(value); return value; }
    public bool isSet(QuickFix.ContractSettlMonth field)
    { return isSetField(field); }
    public bool isSetContractSettlMonth()
    { return isSetField(667); }

    public void set(QuickFix.CPProgram value)
    { setField(value); }
    public QuickFix.CPProgram get(QuickFix.CPProgram  value)
    { getField(value); return value; }
    public QuickFix.CPProgram getCPProgram()
    { QuickFix.CPProgram value = new QuickFix.CPProgram();
      getField(value); return value; }
    public bool isSet(QuickFix.CPProgram field)
    { return isSetField(field); }
    public bool isSetCPProgram()
    { return isSetField(875); }

    public void set(QuickFix.CPRegType value)
    { setField(value); }
    public QuickFix.CPRegType get(QuickFix.CPRegType  value)
    { getField(value); return value; }
    public QuickFix.CPRegType getCPRegType()
    { QuickFix.CPRegType value = new QuickFix.CPRegType();
      getField(value); return value; }
    public bool isSet(QuickFix.CPRegType field)
    { return isSetField(field); }
    public bool isSetCPRegType()
    { return isSetField(876); }

    public void set(QuickFix.DatedDate value)
    { setField(value); }
    public QuickFix.DatedDate get(QuickFix.DatedDate  value)
    { getField(value); return value; }
    public QuickFix.DatedDate getDatedDate()
    { QuickFix.DatedDate value = new QuickFix.DatedDate();
      getField(value); return value; }
    public bool isSet(QuickFix.DatedDate field)
    { return isSetField(field); }
    public bool isSetDatedDate()
    { return isSetField(873); }

    public void set(QuickFix.InterestAccrualDate value)
    { setField(value); }
    public QuickFix.InterestAccrualDate get(QuickFix.InterestAccrualDate  value)
    { getField(value); return value; }
    public QuickFix.InterestAccrualDate getInterestAccrualDate()
    { QuickFix.InterestAccrualDate value = new QuickFix.InterestAccrualDate();
      getField(value); return value; }
    public bool isSet(QuickFix.InterestAccrualDate field)
    { return isSetField(field); }
    public bool isSetInterestAccrualDate()
    { return isSetField(874); }

    public void set(QuickFix.SecurityStatus value)
    { setField(value); }
    public QuickFix.SecurityStatus get(QuickFix.SecurityStatus  value)
    { getField(value); return value; }
    public QuickFix.SecurityStatus getSecurityStatus()
    { QuickFix.SecurityStatus value = new QuickFix.SecurityStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityStatus field)
    { return isSetField(field); }
    public bool isSetSecurityStatus()
    { return isSetField(965); }

    public void set(QuickFix.SettleOnOpenFlag value)
    { setField(value); }
    public QuickFix.SettleOnOpenFlag get(QuickFix.SettleOnOpenFlag  value)
    { getField(value); return value; }
    public QuickFix.SettleOnOpenFlag getSettleOnOpenFlag()
    { QuickFix.SettleOnOpenFlag value = new QuickFix.SettleOnOpenFlag();
      getField(value); return value; }
    public bool isSet(QuickFix.SettleOnOpenFlag field)
    { return isSetField(field); }
    public bool isSetSettleOnOpenFlag()
    { return isSetField(966); }

    public void set(QuickFix.InstrmtAssignmentMethod value)
    { setField(value); }
    public QuickFix.InstrmtAssignmentMethod get(QuickFix.InstrmtAssignmentMethod  value)
    { getField(value); return value; }
    public QuickFix.InstrmtAssignmentMethod getInstrmtAssignmentMethod()
    { QuickFix.InstrmtAssignmentMethod value = new QuickFix.InstrmtAssignmentMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.InstrmtAssignmentMethod field)
    { return isSetField(field); }
    public bool isSetInstrmtAssignmentMethod()
    { return isSetField(1049); }

    public void set(QuickFix.StrikeMultiplier value)
    { setField(value); }
    public QuickFix.StrikeMultiplier get(QuickFix.StrikeMultiplier  value)
    { getField(value); return value; }
    public QuickFix.StrikeMultiplier getStrikeMultiplier()
    { QuickFix.StrikeMultiplier value = new QuickFix.StrikeMultiplier();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikeMultiplier field)
    { return isSetField(field); }
    public bool isSetStrikeMultiplier()
    { return isSetField(967); }

    public void set(QuickFix.StrikeValue value)
    { setField(value); }
    public QuickFix.StrikeValue get(QuickFix.StrikeValue  value)
    { getField(value); return value; }
    public QuickFix.StrikeValue getStrikeValue()
    { QuickFix.StrikeValue value = new QuickFix.StrikeValue();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikeValue field)
    { return isSetField(field); }
    public bool isSetStrikeValue()
    { return isSetField(968); }

    public void set(QuickFix.MinPriceIncrement value)
    { setField(value); }
    public QuickFix.MinPriceIncrement get(QuickFix.MinPriceIncrement  value)
    { getField(value); return value; }
    public QuickFix.MinPriceIncrement getMinPriceIncrement()
    { QuickFix.MinPriceIncrement value = new QuickFix.MinPriceIncrement();
      getField(value); return value; }
    public bool isSet(QuickFix.MinPriceIncrement field)
    { return isSetField(field); }
    public bool isSetMinPriceIncrement()
    { return isSetField(969); }

    public void set(QuickFix.PositionLimit value)
    { setField(value); }
    public QuickFix.PositionLimit get(QuickFix.PositionLimit  value)
    { getField(value); return value; }
    public QuickFix.PositionLimit getPositionLimit()
    { QuickFix.PositionLimit value = new QuickFix.PositionLimit();
      getField(value); return value; }
    public bool isSet(QuickFix.PositionLimit field)
    { return isSetField(field); }
    public bool isSetPositionLimit()
    { return isSetField(970); }

    public void set(QuickFix.NTPositionLimit value)
    { setField(value); }
    public QuickFix.NTPositionLimit get(QuickFix.NTPositionLimit  value)
    { getField(value); return value; }
    public QuickFix.NTPositionLimit getNTPositionLimit()
    { QuickFix.NTPositionLimit value = new QuickFix.NTPositionLimit();
      getField(value); return value; }
    public bool isSet(QuickFix.NTPositionLimit field)
    { return isSetField(field); }
    public bool isSetNTPositionLimit()
    { return isSetField(971); }

    public void set(QuickFix.UnitOfMeasure value)
    { setField(value); }
    public QuickFix.UnitOfMeasure get(QuickFix.UnitOfMeasure  value)
    { getField(value); return value; }
    public QuickFix.UnitOfMeasure getUnitOfMeasure()
    { QuickFix.UnitOfMeasure value = new QuickFix.UnitOfMeasure();
      getField(value); return value; }
    public bool isSet(QuickFix.UnitOfMeasure field)
    { return isSetField(field); }
    public bool isSetUnitOfMeasure()
    { return isSetField(996); }

    public void set(QuickFix.TimeUnit value)
    { setField(value); }
    public QuickFix.TimeUnit get(QuickFix.TimeUnit  value)
    { getField(value); return value; }
    public QuickFix.TimeUnit getTimeUnit()
    { QuickFix.TimeUnit value = new QuickFix.TimeUnit();
      getField(value); return value; }
    public bool isSet(QuickFix.TimeUnit field)
    { return isSetField(field); }
    public bool isSetTimeUnit()
    { return isSetField(997); }

    public void set(QuickFix.MaturityTime value)
    { setField(value); }
    public QuickFix.MaturityTime get(QuickFix.MaturityTime  value)
    { getField(value); return value; }
    public QuickFix.MaturityTime getMaturityTime()
    { QuickFix.MaturityTime value = new QuickFix.MaturityTime();
      getField(value); return value; }
    public bool isSet(QuickFix.MaturityTime field)
    { return isSetField(field); }
    public bool isSetMaturityTime()
    { return isSetField(1079); }

    public void set(QuickFix.SecurityGroup value)
    { setField(value); }
    public QuickFix.SecurityGroup get(QuickFix.SecurityGroup  value)
    { getField(value); return value; }
    public QuickFix.SecurityGroup getSecurityGroup()
    { QuickFix.SecurityGroup value = new QuickFix.SecurityGroup();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityGroup field)
    { return isSetField(field); }
    public bool isSetSecurityGroup()
    { return isSetField(1151); }

    public void set(QuickFix.MinPriceIncrementAmount value)
    { setField(value); }
    public QuickFix.MinPriceIncrementAmount get(QuickFix.MinPriceIncrementAmount  value)
    { getField(value); return value; }
    public QuickFix.MinPriceIncrementAmount getMinPriceIncrementAmount()
    { QuickFix.MinPriceIncrementAmount value = new QuickFix.MinPriceIncrementAmount();
      getField(value); return value; }
    public bool isSet(QuickFix.MinPriceIncrementAmount field)
    { return isSetField(field); }
    public bool isSetMinPriceIncrementAmount()
    { return isSetField(1146); }

    public void set(QuickFix.UnitOfMeasureQty value)
    { setField(value); }
    public QuickFix.UnitOfMeasureQty get(QuickFix.UnitOfMeasureQty  value)
    { getField(value); return value; }
    public QuickFix.UnitOfMeasureQty getUnitOfMeasureQty()
    { QuickFix.UnitOfMeasureQty value = new QuickFix.UnitOfMeasureQty();
      getField(value); return value; }
    public bool isSet(QuickFix.UnitOfMeasureQty field)
    { return isSetField(field); }
    public bool isSetUnitOfMeasureQty()
    { return isSetField(1147); }

    public void set(QuickFix.ProductComplex value)
    { setField(value); }
    public QuickFix.ProductComplex get(QuickFix.ProductComplex  value)
    { getField(value); return value; }
    public QuickFix.ProductComplex getProductComplex()
    { QuickFix.ProductComplex value = new QuickFix.ProductComplex();
      getField(value); return value; }
    public bool isSet(QuickFix.ProductComplex field)
    { return isSetField(field); }
    public bool isSetProductComplex()
    { return isSetField(1227); }

    public void set(QuickFix.PriceUnitOfMeasure value)
    { setField(value); }
    public QuickFix.PriceUnitOfMeasure get(QuickFix.PriceUnitOfMeasure  value)
    { getField(value); return value; }
    public QuickFix.PriceUnitOfMeasure getPriceUnitOfMeasure()
    { QuickFix.PriceUnitOfMeasure value = new QuickFix.PriceUnitOfMeasure();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceUnitOfMeasure field)
    { return isSetField(field); }
    public bool isSetPriceUnitOfMeasure()
    { return isSetField(1191); }

    public void set(QuickFix.PriceUnitOfMeasureQty value)
    { setField(value); }
    public QuickFix.PriceUnitOfMeasureQty get(QuickFix.PriceUnitOfMeasureQty  value)
    { getField(value); return value; }
    public QuickFix.PriceUnitOfMeasureQty getPriceUnitOfMeasureQty()
    { QuickFix.PriceUnitOfMeasureQty value = new QuickFix.PriceUnitOfMeasureQty();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceUnitOfMeasureQty field)
    { return isSetField(field); }
    public bool isSetPriceUnitOfMeasureQty()
    { return isSetField(1192); }

    public void set(QuickFix.SettlMethod value)
    { setField(value); }
    public QuickFix.SettlMethod get(QuickFix.SettlMethod  value)
    { getField(value); return value; }
    public QuickFix.SettlMethod getSettlMethod()
    { QuickFix.SettlMethod value = new QuickFix.SettlMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlMethod field)
    { return isSetField(field); }
    public bool isSetSettlMethod()
    { return isSetField(1193); }

    public void set(QuickFix.ExerciseStyle value)
    { setField(value); }
    public QuickFix.ExerciseStyle get(QuickFix.ExerciseStyle  value)
    { getField(value); return value; }
    public QuickFix.ExerciseStyle getExerciseStyle()
    { QuickFix.ExerciseStyle value = new QuickFix.ExerciseStyle();
      getField(value); return value; }
    public bool isSet(QuickFix.ExerciseStyle field)
    { return isSetField(field); }
    public bool isSetExerciseStyle()
    { return isSetField(1194); }

    public void set(QuickFix.OptPayoutAmount value)
    { setField(value); }
    public QuickFix.OptPayoutAmount get(QuickFix.OptPayoutAmount  value)
    { getField(value); return value; }
    public QuickFix.OptPayoutAmount getOptPayoutAmount()
    { QuickFix.OptPayoutAmount value = new QuickFix.OptPayoutAmount();
      getField(value); return value; }
    public bool isSet(QuickFix.OptPayoutAmount field)
    { return isSetField(field); }
    public bool isSetOptPayoutAmount()
    { return isSetField(1195); }

    public void set(QuickFix.PriceQuoteMethod value)
    { setField(value); }
    public QuickFix.PriceQuoteMethod get(QuickFix.PriceQuoteMethod  value)
    { getField(value); return value; }
    public QuickFix.PriceQuoteMethod getPriceQuoteMethod()
    { QuickFix.PriceQuoteMethod value = new QuickFix.PriceQuoteMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceQuoteMethod field)
    { return isSetField(field); }
    public bool isSetPriceQuoteMethod()
    { return isSetField(1196); }

    public void set(QuickFix.ListMethod value)
    { setField(value); }
    public QuickFix.ListMethod get(QuickFix.ListMethod  value)
    { getField(value); return value; }
    public QuickFix.ListMethod getListMethod()
    { QuickFix.ListMethod value = new QuickFix.ListMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.ListMethod field)
    { return isSetField(field); }
    public bool isSetListMethod()
    { return isSetField(1198); }

    public void set(QuickFix.CapPrice value)
    { setField(value); }
    public QuickFix.CapPrice get(QuickFix.CapPrice  value)
    { getField(value); return value; }
    public QuickFix.CapPrice getCapPrice()
    { QuickFix.CapPrice value = new QuickFix.CapPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.CapPrice field)
    { return isSetField(field); }
    public bool isSetCapPrice()
    { return isSetField(1199); }

    public void set(QuickFix.FloorPrice value)
    { setField(value); }
    public QuickFix.FloorPrice get(QuickFix.FloorPrice  value)
    { getField(value); return value; }
    public QuickFix.FloorPrice getFloorPrice()
    { QuickFix.FloorPrice value = new QuickFix.FloorPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.FloorPrice field)
    { return isSetField(field); }
    public bool isSetFloorPrice()
    { return isSetField(1200); }

    public void set(QuickFix.PutOrCall value)
    { setField(value); }
    public QuickFix.PutOrCall get(QuickFix.PutOrCall  value)
    { getField(value); return value; }
    public QuickFix.PutOrCall getPutOrCall()
    { QuickFix.PutOrCall value = new QuickFix.PutOrCall();
      getField(value); return value; }
    public bool isSet(QuickFix.PutOrCall field)
    { return isSetField(field); }
    public bool isSetPutOrCall()
    { return isSetField(201); }

    public void set(QuickFix.FlexibleIndicator value)
    { setField(value); }
    public QuickFix.FlexibleIndicator get(QuickFix.FlexibleIndicator  value)
    { getField(value); return value; }
    public QuickFix.FlexibleIndicator getFlexibleIndicator()
    { QuickFix.FlexibleIndicator value = new QuickFix.FlexibleIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.FlexibleIndicator field)
    { return isSetField(field); }
    public bool isSetFlexibleIndicator()
    { return isSetField(1244); }

    public void set(QuickFix.FlexProductEligibilityIndicator value)
    { setField(value); }
    public QuickFix.FlexProductEligibilityIndicator get(QuickFix.FlexProductEligibilityIndicator  value)
    { getField(value); return value; }
    public QuickFix.FlexProductEligibilityIndicator getFlexProductEligibilityIndicator()
    { QuickFix.FlexProductEligibilityIndicator value = new QuickFix.FlexProductEligibilityIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.FlexProductEligibilityIndicator field)
    { return isSetField(field); }
    public bool isSetFlexProductEligibilityIndicator()
    { return isSetField(1242); }

    public void set(QuickFix.ValuationMethod value)
    { setField(value); }
    public QuickFix.ValuationMethod get(QuickFix.ValuationMethod  value)
    { getField(value); return value; }
    public QuickFix.ValuationMethod getValuationMethod()
    { QuickFix.ValuationMethod value = new QuickFix.ValuationMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.ValuationMethod field)
    { return isSetField(field); }
    public bool isSetValuationMethod()
    { return isSetField(1197); }

    public void set(QuickFix.ContractMultiplierUnit value)
    { setField(value); }
    public QuickFix.ContractMultiplierUnit get(QuickFix.ContractMultiplierUnit  value)
    { getField(value); return value; }
    public QuickFix.ContractMultiplierUnit getContractMultiplierUnit()
    { QuickFix.ContractMultiplierUnit value = new QuickFix.ContractMultiplierUnit();
      getField(value); return value; }
    public bool isSet(QuickFix.ContractMultiplierUnit field)
    { return isSetField(field); }
    public bool isSetContractMultiplierUnit()
    { return isSetField(1435); }

    public void set(QuickFix.FlowScheduleType value)
    { setField(value); }
    public QuickFix.FlowScheduleType get(QuickFix.FlowScheduleType  value)
    { getField(value); return value; }
    public QuickFix.FlowScheduleType getFlowScheduleType()
    { QuickFix.FlowScheduleType value = new QuickFix.FlowScheduleType();
      getField(value); return value; }
    public bool isSet(QuickFix.FlowScheduleType field)
    { return isSetField(field); }
    public bool isSetFlowScheduleType()
    { return isSetField(1439); }

    public void set(QuickFix.RestructuringType value)
    { setField(value); }
    public QuickFix.RestructuringType get(QuickFix.RestructuringType  value)
    { getField(value); return value; }
    public QuickFix.RestructuringType getRestructuringType()
    { QuickFix.RestructuringType value = new QuickFix.RestructuringType();
      getField(value); return value; }
    public bool isSet(QuickFix.RestructuringType field)
    { return isSetField(field); }
    public bool isSetRestructuringType()
    { return isSetField(1449); }

    public void set(QuickFix.Seniority value)
    { setField(value); }
    public QuickFix.Seniority get(QuickFix.Seniority  value)
    { getField(value); return value; }
    public QuickFix.Seniority getSeniority()
    { QuickFix.Seniority value = new QuickFix.Seniority();
      getField(value); return value; }
    public bool isSet(QuickFix.Seniority field)
    { return isSetField(field); }
    public bool isSetSeniority()
    { return isSetField(1450); }

    public void set(QuickFix.NotionalPercentageOutstanding value)
    { setField(value); }
    public QuickFix.NotionalPercentageOutstanding get(QuickFix.NotionalPercentageOutstanding  value)
    { getField(value); return value; }
    public QuickFix.NotionalPercentageOutstanding getNotionalPercentageOutstanding()
    { QuickFix.NotionalPercentageOutstanding value = new QuickFix.NotionalPercentageOutstanding();
      getField(value); return value; }
    public bool isSet(QuickFix.NotionalPercentageOutstanding field)
    { return isSetField(field); }
    public bool isSetNotionalPercentageOutstanding()
    { return isSetField(1451); }

    public void set(QuickFix.OriginalNotionalPercentageOutstanding value)
    { setField(value); }
    public QuickFix.OriginalNotionalPercentageOutstanding get(QuickFix.OriginalNotionalPercentageOutstanding  value)
    { getField(value); return value; }
    public QuickFix.OriginalNotionalPercentageOutstanding getOriginalNotionalPercentageOutstanding()
    { QuickFix.OriginalNotionalPercentageOutstanding value = new QuickFix.OriginalNotionalPercentageOutstanding();
      getField(value); return value; }
    public bool isSet(QuickFix.OriginalNotionalPercentageOutstanding field)
    { return isSetField(field); }
    public bool isSetOriginalNotionalPercentageOutstanding()
    { return isSetField(1452); }

    public void set(QuickFix.AttachmentPoint value)
    { setField(value); }
    public QuickFix.AttachmentPoint get(QuickFix.AttachmentPoint  value)
    { getField(value); return value; }
    public QuickFix.AttachmentPoint getAttachmentPoint()
    { QuickFix.AttachmentPoint value = new QuickFix.AttachmentPoint();
      getField(value); return value; }
    public bool isSet(QuickFix.AttachmentPoint field)
    { return isSetField(field); }
    public bool isSetAttachmentPoint()
    { return isSetField(1457); }

    public void set(QuickFix.DetachmentPoint value)
    { setField(value); }
    public QuickFix.DetachmentPoint get(QuickFix.DetachmentPoint  value)
    { getField(value); return value; }
    public QuickFix.DetachmentPoint getDetachmentPoint()
    { QuickFix.DetachmentPoint value = new QuickFix.DetachmentPoint();
      getField(value); return value; }
    public bool isSet(QuickFix.DetachmentPoint field)
    { return isSetField(field); }
    public bool isSetDetachmentPoint()
    { return isSetField(1458); }

    public void set(QuickFix.StrikePriceDeterminationMethod value)
    { setField(value); }
    public QuickFix.StrikePriceDeterminationMethod get(QuickFix.StrikePriceDeterminationMethod  value)
    { getField(value); return value; }
    public QuickFix.StrikePriceDeterminationMethod getStrikePriceDeterminationMethod()
    { QuickFix.StrikePriceDeterminationMethod value = new QuickFix.StrikePriceDeterminationMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePriceDeterminationMethod field)
    { return isSetField(field); }
    public bool isSetStrikePriceDeterminationMethod()
    { return isSetField(1478); }

    public void set(QuickFix.StrikePriceBoundaryMethod value)
    { setField(value); }
    public QuickFix.StrikePriceBoundaryMethod get(QuickFix.StrikePriceBoundaryMethod  value)
    { getField(value); return value; }
    public QuickFix.StrikePriceBoundaryMethod getStrikePriceBoundaryMethod()
    { QuickFix.StrikePriceBoundaryMethod value = new QuickFix.StrikePriceBoundaryMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePriceBoundaryMethod field)
    { return isSetField(field); }
    public bool isSetStrikePriceBoundaryMethod()
    { return isSetField(1479); }

    public void set(QuickFix.StrikePriceBoundaryPrecision value)
    { setField(value); }
    public QuickFix.StrikePriceBoundaryPrecision get(QuickFix.StrikePriceBoundaryPrecision  value)
    { getField(value); return value; }
    public QuickFix.StrikePriceBoundaryPrecision getStrikePriceBoundaryPrecision()
    { QuickFix.StrikePriceBoundaryPrecision value = new QuickFix.StrikePriceBoundaryPrecision();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePriceBoundaryPrecision field)
    { return isSetField(field); }
    public bool isSetStrikePriceBoundaryPrecision()
    { return isSetField(1480); }

    public void set(QuickFix.UnderlyingPriceDeterminationMethod value)
    { setField(value); }
    public QuickFix.UnderlyingPriceDeterminationMethod get(QuickFix.UnderlyingPriceDeterminationMethod  value)
    { getField(value); return value; }
    public QuickFix.UnderlyingPriceDeterminationMethod getUnderlyingPriceDeterminationMethod()
    { QuickFix.UnderlyingPriceDeterminationMethod value = new QuickFix.UnderlyingPriceDeterminationMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.UnderlyingPriceDeterminationMethod field)
    { return isSetField(field); }
    public bool isSetUnderlyingPriceDeterminationMethod()
    { return isSetField(1481); }

    public void set(QuickFix.OptPayoutType value)
    { setField(value); }
    public QuickFix.OptPayoutType get(QuickFix.OptPayoutType  value)
    { getField(value); return value; }
    public QuickFix.OptPayoutType getOptPayoutType()
    { QuickFix.OptPayoutType value = new QuickFix.OptPayoutType();
      getField(value); return value; }
    public bool isSet(QuickFix.OptPayoutType field)
    { return isSetField(field); }
    public bool isSetOptPayoutType()
    { return isSetField(1482); }

    public void set(QuickFix.AgreementDesc value)
    { setField(value); }
    public QuickFix.AgreementDesc get(QuickFix.AgreementDesc  value)
    { getField(value); return value; }
    public QuickFix.AgreementDesc getAgreementDesc()
    { QuickFix.AgreementDesc value = new QuickFix.AgreementDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementDesc field)
    { return isSetField(field); }
    public bool isSetAgreementDesc()
    { return isSetField(913); }

    public void set(QuickFix.AgreementID value)
    { setField(value); }
    public QuickFix.AgreementID get(QuickFix.AgreementID  value)
    { getField(value); return value; }
    public QuickFix.AgreementID getAgreementID()
    { QuickFix.AgreementID value = new QuickFix.AgreementID();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementID field)
    { return isSetField(field); }
    public bool isSetAgreementID()
    { return isSetField(914); }

    public void set(QuickFix.AgreementDate value)
    { setField(value); }
    public QuickFix.AgreementDate get(QuickFix.AgreementDate  value)
    { getField(value); return value; }
    public QuickFix.AgreementDate getAgreementDate()
    { QuickFix.AgreementDate value = new QuickFix.AgreementDate();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementDate field)
    { return isSetField(field); }
    public bool isSetAgreementDate()
    { return isSetField(915); }

    public void set(QuickFix.AgreementCurrency value)
    { setField(value); }
    public QuickFix.AgreementCurrency get(QuickFix.AgreementCurrency  value)
    { getField(value); return value; }
    public QuickFix.AgreementCurrency getAgreementCurrency()
    { QuickFix.AgreementCurrency value = new QuickFix.AgreementCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementCurrency field)
    { return isSetField(field); }
    public bool isSetAgreementCurrency()
    { return isSetField(918); }

    public void set(QuickFix.TerminationType value)
    { setField(value); }
    public QuickFix.TerminationType get(QuickFix.TerminationType  value)
    { getField(value); return value; }
    public QuickFix.TerminationType getTerminationType()
    { QuickFix.TerminationType value = new QuickFix.TerminationType();
      getField(value); return value; }
    public bool isSet(QuickFix.TerminationType field)
    { return isSetField(field); }
    public bool isSetTerminationType()
    { return isSetField(788); }

    public void set(QuickFix.StartDate value)
    { setField(value); }
    public QuickFix.StartDate get(QuickFix.StartDate  value)
    { getField(value); return value; }
    public QuickFix.StartDate getStartDate()
    { QuickFix.StartDate value = new QuickFix.StartDate();
      getField(value); return value; }
    public bool isSet(QuickFix.StartDate field)
    { return isSetField(field); }
    public bool isSetStartDate()
    { return isSetField(916); }

    public void set(QuickFix.EndDate value)
    { setField(value); }
    public QuickFix.EndDate get(QuickFix.EndDate  value)
    { getField(value); return value; }
    public QuickFix.EndDate getEndDate()
    { QuickFix.EndDate value = new QuickFix.EndDate();
      getField(value); return value; }
    public bool isSet(QuickFix.EndDate field)
    { return isSetField(field); }
    public bool isSetEndDate()
    { return isSetField(917); }

    public void set(QuickFix.DeliveryType value)
    { setField(value); }
    public QuickFix.DeliveryType get(QuickFix.DeliveryType  value)
    { getField(value); return value; }
    public QuickFix.DeliveryType getDeliveryType()
    { QuickFix.DeliveryType value = new QuickFix.DeliveryType();
      getField(value); return value; }
    public bool isSet(QuickFix.DeliveryType field)
    { return isSetField(field); }
    public bool isSetDeliveryType()
    { return isSetField(919); }

    public void set(QuickFix.MarginRatio value)
    { setField(value); }
    public QuickFix.MarginRatio get(QuickFix.MarginRatio  value)
    { getField(value); return value; }
    public QuickFix.MarginRatio getMarginRatio()
    { QuickFix.MarginRatio value = new QuickFix.MarginRatio();
      getField(value); return value; }
    public bool isSet(QuickFix.MarginRatio field)
    { return isSetField(field); }
    public bool isSetMarginRatio()
    { return isSetField(898); }

    public void set(QuickFix.QtyType value)
    { setField(value); }
    public QuickFix.QtyType get(QuickFix.QtyType  value)
    { getField(value); return value; }
    public QuickFix.QtyType getQtyType()
    { QuickFix.QtyType value = new QuickFix.QtyType();
      getField(value); return value; }
    public bool isSet(QuickFix.QtyType field)
    { return isSetField(field); }
    public bool isSetQtyType()
    { return isSetField(854); }

    public void set(QuickFix.YieldType value)
    { setField(value); }
    public QuickFix.YieldType get(QuickFix.YieldType  value)
    { getField(value); return value; }
    public QuickFix.YieldType getYieldType()
    { QuickFix.YieldType value = new QuickFix.YieldType();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldType field)
    { return isSetField(field); }
    public bool isSetYieldType()
    { return isSetField(235); }

    public void set(QuickFix.Yield value)
    { setField(value); }
    public QuickFix.Yield get(QuickFix.Yield  value)
    { getField(value); return value; }
    public QuickFix.Yield getYield()
    { QuickFix.Yield value = new QuickFix.Yield();
      getField(value); return value; }
    public bool isSet(QuickFix.Yield field)
    { return isSetField(field); }
    public bool isSetYield()
    { return isSetField(236); }

    public void set(QuickFix.YieldCalcDate value)
    { setField(value); }
    public QuickFix.YieldCalcDate get(QuickFix.YieldCalcDate  value)
    { getField(value); return value; }
    public QuickFix.YieldCalcDate getYieldCalcDate()
    { QuickFix.YieldCalcDate value = new QuickFix.YieldCalcDate();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldCalcDate field)
    { return isSetField(field); }
    public bool isSetYieldCalcDate()
    { return isSetField(701); }

    public void set(QuickFix.YieldRedemptionDate value)
    { setField(value); }
    public QuickFix.YieldRedemptionDate get(QuickFix.YieldRedemptionDate  value)
    { getField(value); return value; }
    public QuickFix.YieldRedemptionDate getYieldRedemptionDate()
    { QuickFix.YieldRedemptionDate value = new QuickFix.YieldRedemptionDate();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldRedemptionDate field)
    { return isSetField(field); }
    public bool isSetYieldRedemptionDate()
    { return isSetField(696); }

    public void set(QuickFix.YieldRedemptionPrice value)
    { setField(value); }
    public QuickFix.YieldRedemptionPrice get(QuickFix.YieldRedemptionPrice  value)
    { getField(value); return value; }
    public QuickFix.YieldRedemptionPrice getYieldRedemptionPrice()
    { QuickFix.YieldRedemptionPrice value = new QuickFix.YieldRedemptionPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldRedemptionPrice field)
    { return isSetField(field); }
    public bool isSetYieldRedemptionPrice()
    { return isSetField(697); }

    public void set(QuickFix.YieldRedemptionPriceType value)
    { setField(value); }
    public QuickFix.YieldRedemptionPriceType get(QuickFix.YieldRedemptionPriceType  value)
    { getField(value); return value; }
    public QuickFix.YieldRedemptionPriceType getYieldRedemptionPriceType()
    { QuickFix.YieldRedemptionPriceType value = new QuickFix.YieldRedemptionPriceType();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldRedemptionPriceType field)
    { return isSetField(field); }
    public bool isSetYieldRedemptionPriceType()
    { return isSetField(698); }

    public void set(QuickFix.NoUnderlyings value)
    { setField(value); }
    public QuickFix.NoUnderlyings get(QuickFix.NoUnderlyings  value)
    { getField(value); return value; }
    public QuickFix.NoUnderlyings getNoUnderlyings()
    { QuickFix.NoUnderlyings value = new QuickFix.NoUnderlyings();
      getField(value); return value; }
    public bool isSet(QuickFix.NoUnderlyings field)
    { return isSetField(field); }
    public bool isSetNoUnderlyings()
    { return isSetField(711); }

    public class NoUnderlyings: QuickFix.Group
    {
    public NoUnderlyings() : base(711,311,message_order ) {}
    static int[] message_order = new int[] {311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,972,975,973,974,998,1000,1038,1039,1044,1045,1046,1213,315,1419,1423,1424,1425,1437,1441,1453,1454,1455,1456,1459,1460,0};
      public void set(QuickFix.UnderlyingSymbol value)
      { setField(value); }
      public QuickFix.UnderlyingSymbol get(QuickFix.UnderlyingSymbol  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSymbol getUnderlyingSymbol()
      { QuickFix.UnderlyingSymbol value = new QuickFix.UnderlyingSymbol();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSymbol field)
      { return isSetField(field); }
      public bool isSetUnderlyingSymbol()
      { return isSetField(311); }

      public void set(QuickFix.UnderlyingSymbolSfx value)
      { setField(value); }
      public QuickFix.UnderlyingSymbolSfx get(QuickFix.UnderlyingSymbolSfx  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSymbolSfx getUnderlyingSymbolSfx()
      { QuickFix.UnderlyingSymbolSfx value = new QuickFix.UnderlyingSymbolSfx();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSymbolSfx field)
      { return isSetField(field); }
      public bool isSetUnderlyingSymbolSfx()
      { return isSetField(312); }

      public void set(QuickFix.UnderlyingSecurityID value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityID get(QuickFix.UnderlyingSecurityID  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityID getUnderlyingSecurityID()
      { QuickFix.UnderlyingSecurityID value = new QuickFix.UnderlyingSecurityID();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityID field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityID()
      { return isSetField(309); }

      public void set(QuickFix.UnderlyingSecurityIDSource value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityIDSource get(QuickFix.UnderlyingSecurityIDSource  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityIDSource getUnderlyingSecurityIDSource()
      { QuickFix.UnderlyingSecurityIDSource value = new QuickFix.UnderlyingSecurityIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityIDSource field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityIDSource()
      { return isSetField(305); }

      public void set(QuickFix.UnderlyingProduct value)
      { setField(value); }
      public QuickFix.UnderlyingProduct get(QuickFix.UnderlyingProduct  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingProduct getUnderlyingProduct()
      { QuickFix.UnderlyingProduct value = new QuickFix.UnderlyingProduct();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingProduct field)
      { return isSetField(field); }
      public bool isSetUnderlyingProduct()
      { return isSetField(462); }

      public void set(QuickFix.UnderlyingCFICode value)
      { setField(value); }
      public QuickFix.UnderlyingCFICode get(QuickFix.UnderlyingCFICode  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCFICode getUnderlyingCFICode()
      { QuickFix.UnderlyingCFICode value = new QuickFix.UnderlyingCFICode();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCFICode field)
      { return isSetField(field); }
      public bool isSetUnderlyingCFICode()
      { return isSetField(463); }

      public void set(QuickFix.UnderlyingSecurityType value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityType get(QuickFix.UnderlyingSecurityType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityType getUnderlyingSecurityType()
      { QuickFix.UnderlyingSecurityType value = new QuickFix.UnderlyingSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityType field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityType()
      { return isSetField(310); }

      public void set(QuickFix.UnderlyingSecuritySubType value)
      { setField(value); }
      public QuickFix.UnderlyingSecuritySubType get(QuickFix.UnderlyingSecuritySubType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecuritySubType getUnderlyingSecuritySubType()
      { QuickFix.UnderlyingSecuritySubType value = new QuickFix.UnderlyingSecuritySubType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecuritySubType field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecuritySubType()
      { return isSetField(763); }

      public void set(QuickFix.UnderlyingMaturityMonthYear value)
      { setField(value); }
      public QuickFix.UnderlyingMaturityMonthYear get(QuickFix.UnderlyingMaturityMonthYear  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingMaturityMonthYear getUnderlyingMaturityMonthYear()
      { QuickFix.UnderlyingMaturityMonthYear value = new QuickFix.UnderlyingMaturityMonthYear();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingMaturityMonthYear field)
      { return isSetField(field); }
      public bool isSetUnderlyingMaturityMonthYear()
      { return isSetField(313); }

      public void set(QuickFix.UnderlyingMaturityDate value)
      { setField(value); }
      public QuickFix.UnderlyingMaturityDate get(QuickFix.UnderlyingMaturityDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingMaturityDate getUnderlyingMaturityDate()
      { QuickFix.UnderlyingMaturityDate value = new QuickFix.UnderlyingMaturityDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingMaturityDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingMaturityDate()
      { return isSetField(542); }

      public void set(QuickFix.UnderlyingCouponPaymentDate value)
      { setField(value); }
      public QuickFix.UnderlyingCouponPaymentDate get(QuickFix.UnderlyingCouponPaymentDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCouponPaymentDate getUnderlyingCouponPaymentDate()
      { QuickFix.UnderlyingCouponPaymentDate value = new QuickFix.UnderlyingCouponPaymentDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCouponPaymentDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingCouponPaymentDate()
      { return isSetField(241); }

      public void set(QuickFix.UnderlyingIssueDate value)
      { setField(value); }
      public QuickFix.UnderlyingIssueDate get(QuickFix.UnderlyingIssueDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingIssueDate getUnderlyingIssueDate()
      { QuickFix.UnderlyingIssueDate value = new QuickFix.UnderlyingIssueDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingIssueDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingIssueDate()
      { return isSetField(242); }

      public void set(QuickFix.UnderlyingRepoCollateralSecurityType value)
      { setField(value); }
      public QuickFix.UnderlyingRepoCollateralSecurityType get(QuickFix.UnderlyingRepoCollateralSecurityType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRepoCollateralSecurityType getUnderlyingRepoCollateralSecurityType()
      { QuickFix.UnderlyingRepoCollateralSecurityType value = new QuickFix.UnderlyingRepoCollateralSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRepoCollateralSecurityType field)
      { return isSetField(field); }
      public bool isSetUnderlyingRepoCollateralSecurityType()
      { return isSetField(243); }

      public void set(QuickFix.UnderlyingRepurchaseTerm value)
      { setField(value); }
      public QuickFix.UnderlyingRepurchaseTerm get(QuickFix.UnderlyingRepurchaseTerm  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRepurchaseTerm getUnderlyingRepurchaseTerm()
      { QuickFix.UnderlyingRepurchaseTerm value = new QuickFix.UnderlyingRepurchaseTerm();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRepurchaseTerm field)
      { return isSetField(field); }
      public bool isSetUnderlyingRepurchaseTerm()
      { return isSetField(244); }

      public void set(QuickFix.UnderlyingRepurchaseRate value)
      { setField(value); }
      public QuickFix.UnderlyingRepurchaseRate get(QuickFix.UnderlyingRepurchaseRate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRepurchaseRate getUnderlyingRepurchaseRate()
      { QuickFix.UnderlyingRepurchaseRate value = new QuickFix.UnderlyingRepurchaseRate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRepurchaseRate field)
      { return isSetField(field); }
      public bool isSetUnderlyingRepurchaseRate()
      { return isSetField(245); }

      public void set(QuickFix.UnderlyingFactor value)
      { setField(value); }
      public QuickFix.UnderlyingFactor get(QuickFix.UnderlyingFactor  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingFactor getUnderlyingFactor()
      { QuickFix.UnderlyingFactor value = new QuickFix.UnderlyingFactor();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingFactor field)
      { return isSetField(field); }
      public bool isSetUnderlyingFactor()
      { return isSetField(246); }

      public void set(QuickFix.UnderlyingCreditRating value)
      { setField(value); }
      public QuickFix.UnderlyingCreditRating get(QuickFix.UnderlyingCreditRating  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCreditRating getUnderlyingCreditRating()
      { QuickFix.UnderlyingCreditRating value = new QuickFix.UnderlyingCreditRating();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCreditRating field)
      { return isSetField(field); }
      public bool isSetUnderlyingCreditRating()
      { return isSetField(256); }

      public void set(QuickFix.UnderlyingInstrRegistry value)
      { setField(value); }
      public QuickFix.UnderlyingInstrRegistry get(QuickFix.UnderlyingInstrRegistry  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingInstrRegistry getUnderlyingInstrRegistry()
      { QuickFix.UnderlyingInstrRegistry value = new QuickFix.UnderlyingInstrRegistry();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingInstrRegistry field)
      { return isSetField(field); }
      public bool isSetUnderlyingInstrRegistry()
      { return isSetField(595); }

      public void set(QuickFix.UnderlyingCountryOfIssue value)
      { setField(value); }
      public QuickFix.UnderlyingCountryOfIssue get(QuickFix.UnderlyingCountryOfIssue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCountryOfIssue getUnderlyingCountryOfIssue()
      { QuickFix.UnderlyingCountryOfIssue value = new QuickFix.UnderlyingCountryOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCountryOfIssue field)
      { return isSetField(field); }
      public bool isSetUnderlyingCountryOfIssue()
      { return isSetField(592); }

      public void set(QuickFix.UnderlyingStateOrProvinceOfIssue value)
      { setField(value); }
      public QuickFix.UnderlyingStateOrProvinceOfIssue get(QuickFix.UnderlyingStateOrProvinceOfIssue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStateOrProvinceOfIssue getUnderlyingStateOrProvinceOfIssue()
      { QuickFix.UnderlyingStateOrProvinceOfIssue value = new QuickFix.UnderlyingStateOrProvinceOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStateOrProvinceOfIssue field)
      { return isSetField(field); }
      public bool isSetUnderlyingStateOrProvinceOfIssue()
      { return isSetField(593); }

      public void set(QuickFix.UnderlyingLocaleOfIssue value)
      { setField(value); }
      public QuickFix.UnderlyingLocaleOfIssue get(QuickFix.UnderlyingLocaleOfIssue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingLocaleOfIssue getUnderlyingLocaleOfIssue()
      { QuickFix.UnderlyingLocaleOfIssue value = new QuickFix.UnderlyingLocaleOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingLocaleOfIssue field)
      { return isSetField(field); }
      public bool isSetUnderlyingLocaleOfIssue()
      { return isSetField(594); }

      public void set(QuickFix.UnderlyingRedemptionDate value)
      { setField(value); }
      public QuickFix.UnderlyingRedemptionDate get(QuickFix.UnderlyingRedemptionDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRedemptionDate getUnderlyingRedemptionDate()
      { QuickFix.UnderlyingRedemptionDate value = new QuickFix.UnderlyingRedemptionDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRedemptionDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingRedemptionDate()
      { return isSetField(247); }

      public void set(QuickFix.UnderlyingStrikePrice value)
      { setField(value); }
      public QuickFix.UnderlyingStrikePrice get(QuickFix.UnderlyingStrikePrice  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStrikePrice getUnderlyingStrikePrice()
      { QuickFix.UnderlyingStrikePrice value = new QuickFix.UnderlyingStrikePrice();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStrikePrice field)
      { return isSetField(field); }
      public bool isSetUnderlyingStrikePrice()
      { return isSetField(316); }

      public void set(QuickFix.UnderlyingStrikeCurrency value)
      { setField(value); }
      public QuickFix.UnderlyingStrikeCurrency get(QuickFix.UnderlyingStrikeCurrency  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStrikeCurrency getUnderlyingStrikeCurrency()
      { QuickFix.UnderlyingStrikeCurrency value = new QuickFix.UnderlyingStrikeCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStrikeCurrency field)
      { return isSetField(field); }
      public bool isSetUnderlyingStrikeCurrency()
      { return isSetField(941); }

      public void set(QuickFix.UnderlyingOptAttribute value)
      { setField(value); }
      public QuickFix.UnderlyingOptAttribute get(QuickFix.UnderlyingOptAttribute  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingOptAttribute getUnderlyingOptAttribute()
      { QuickFix.UnderlyingOptAttribute value = new QuickFix.UnderlyingOptAttribute();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingOptAttribute field)
      { return isSetField(field); }
      public bool isSetUnderlyingOptAttribute()
      { return isSetField(317); }

      public void set(QuickFix.UnderlyingContractMultiplier value)
      { setField(value); }
      public QuickFix.UnderlyingContractMultiplier get(QuickFix.UnderlyingContractMultiplier  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingContractMultiplier getUnderlyingContractMultiplier()
      { QuickFix.UnderlyingContractMultiplier value = new QuickFix.UnderlyingContractMultiplier();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingContractMultiplier field)
      { return isSetField(field); }
      public bool isSetUnderlyingContractMultiplier()
      { return isSetField(436); }

      public void set(QuickFix.UnderlyingCouponRate value)
      { setField(value); }
      public QuickFix.UnderlyingCouponRate get(QuickFix.UnderlyingCouponRate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCouponRate getUnderlyingCouponRate()
      { QuickFix.UnderlyingCouponRate value = new QuickFix.UnderlyingCouponRate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCouponRate field)
      { return isSetField(field); }
      public bool isSetUnderlyingCouponRate()
      { return isSetField(435); }

      public void set(QuickFix.UnderlyingSecurityExchange value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityExchange get(QuickFix.UnderlyingSecurityExchange  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityExchange getUnderlyingSecurityExchange()
      { QuickFix.UnderlyingSecurityExchange value = new QuickFix.UnderlyingSecurityExchange();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityExchange field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityExchange()
      { return isSetField(308); }

      public void set(QuickFix.UnderlyingIssuer value)
      { setField(value); }
      public QuickFix.UnderlyingIssuer get(QuickFix.UnderlyingIssuer  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingIssuer getUnderlyingIssuer()
      { QuickFix.UnderlyingIssuer value = new QuickFix.UnderlyingIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingIssuer field)
      { return isSetField(field); }
      public bool isSetUnderlyingIssuer()
      { return isSetField(306); }

      public void set(QuickFix.EncodedUnderlyingIssuerLen value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingIssuerLen get(QuickFix.EncodedUnderlyingIssuerLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingIssuerLen getEncodedUnderlyingIssuerLen()
      { QuickFix.EncodedUnderlyingIssuerLen value = new QuickFix.EncodedUnderlyingIssuerLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingIssuerLen field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingIssuerLen()
      { return isSetField(362); }

      public void set(QuickFix.EncodedUnderlyingIssuer value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingIssuer get(QuickFix.EncodedUnderlyingIssuer  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingIssuer getEncodedUnderlyingIssuer()
      { QuickFix.EncodedUnderlyingIssuer value = new QuickFix.EncodedUnderlyingIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingIssuer field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingIssuer()
      { return isSetField(363); }

      public void set(QuickFix.UnderlyingSecurityDesc value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityDesc get(QuickFix.UnderlyingSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityDesc getUnderlyingSecurityDesc()
      { QuickFix.UnderlyingSecurityDesc value = new QuickFix.UnderlyingSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityDesc field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityDesc()
      { return isSetField(307); }

      public void set(QuickFix.EncodedUnderlyingSecurityDescLen value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingSecurityDescLen get(QuickFix.EncodedUnderlyingSecurityDescLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingSecurityDescLen getEncodedUnderlyingSecurityDescLen()
      { QuickFix.EncodedUnderlyingSecurityDescLen value = new QuickFix.EncodedUnderlyingSecurityDescLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingSecurityDescLen field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingSecurityDescLen()
      { return isSetField(364); }

      public void set(QuickFix.EncodedUnderlyingSecurityDesc value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingSecurityDesc get(QuickFix.EncodedUnderlyingSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingSecurityDesc getEncodedUnderlyingSecurityDesc()
      { QuickFix.EncodedUnderlyingSecurityDesc value = new QuickFix.EncodedUnderlyingSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingSecurityDesc field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingSecurityDesc()
      { return isSetField(365); }

      public void set(QuickFix.UnderlyingCPProgram value)
      { setField(value); }
      public QuickFix.UnderlyingCPProgram get(QuickFix.UnderlyingCPProgram  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCPProgram getUnderlyingCPProgram()
      { QuickFix.UnderlyingCPProgram value = new QuickFix.UnderlyingCPProgram();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCPProgram field)
      { return isSetField(field); }
      public bool isSetUnderlyingCPProgram()
      { return isSetField(877); }

      public void set(QuickFix.UnderlyingCPRegType value)
      { setField(value); }
      public QuickFix.UnderlyingCPRegType get(QuickFix.UnderlyingCPRegType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCPRegType getUnderlyingCPRegType()
      { QuickFix.UnderlyingCPRegType value = new QuickFix.UnderlyingCPRegType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCPRegType field)
      { return isSetField(field); }
      public bool isSetUnderlyingCPRegType()
      { return isSetField(878); }

      public void set(QuickFix.UnderlyingCurrency value)
      { setField(value); }
      public QuickFix.UnderlyingCurrency get(QuickFix.UnderlyingCurrency  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCurrency getUnderlyingCurrency()
      { QuickFix.UnderlyingCurrency value = new QuickFix.UnderlyingCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCurrency field)
      { return isSetField(field); }
      public bool isSetUnderlyingCurrency()
      { return isSetField(318); }

      public void set(QuickFix.UnderlyingQty value)
      { setField(value); }
      public QuickFix.UnderlyingQty get(QuickFix.UnderlyingQty  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingQty getUnderlyingQty()
      { QuickFix.UnderlyingQty value = new QuickFix.UnderlyingQty();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingQty field)
      { return isSetField(field); }
      public bool isSetUnderlyingQty()
      { return isSetField(879); }

      public void set(QuickFix.UnderlyingPx value)
      { setField(value); }
      public QuickFix.UnderlyingPx get(QuickFix.UnderlyingPx  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPx getUnderlyingPx()
      { QuickFix.UnderlyingPx value = new QuickFix.UnderlyingPx();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPx field)
      { return isSetField(field); }
      public bool isSetUnderlyingPx()
      { return isSetField(810); }

      public void set(QuickFix.UnderlyingDirtyPrice value)
      { setField(value); }
      public QuickFix.UnderlyingDirtyPrice get(QuickFix.UnderlyingDirtyPrice  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingDirtyPrice getUnderlyingDirtyPrice()
      { QuickFix.UnderlyingDirtyPrice value = new QuickFix.UnderlyingDirtyPrice();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingDirtyPrice field)
      { return isSetField(field); }
      public bool isSetUnderlyingDirtyPrice()
      { return isSetField(882); }

      public void set(QuickFix.UnderlyingEndPrice value)
      { setField(value); }
      public QuickFix.UnderlyingEndPrice get(QuickFix.UnderlyingEndPrice  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingEndPrice getUnderlyingEndPrice()
      { QuickFix.UnderlyingEndPrice value = new QuickFix.UnderlyingEndPrice();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingEndPrice field)
      { return isSetField(field); }
      public bool isSetUnderlyingEndPrice()
      { return isSetField(883); }

      public void set(QuickFix.UnderlyingStartValue value)
      { setField(value); }
      public QuickFix.UnderlyingStartValue get(QuickFix.UnderlyingStartValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStartValue getUnderlyingStartValue()
      { QuickFix.UnderlyingStartValue value = new QuickFix.UnderlyingStartValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStartValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingStartValue()
      { return isSetField(884); }

      public void set(QuickFix.UnderlyingCurrentValue value)
      { setField(value); }
      public QuickFix.UnderlyingCurrentValue get(QuickFix.UnderlyingCurrentValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCurrentValue getUnderlyingCurrentValue()
      { QuickFix.UnderlyingCurrentValue value = new QuickFix.UnderlyingCurrentValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCurrentValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingCurrentValue()
      { return isSetField(885); }

      public void set(QuickFix.UnderlyingEndValue value)
      { setField(value); }
      public QuickFix.UnderlyingEndValue get(QuickFix.UnderlyingEndValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingEndValue getUnderlyingEndValue()
      { QuickFix.UnderlyingEndValue value = new QuickFix.UnderlyingEndValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingEndValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingEndValue()
      { return isSetField(886); }

      public void set(QuickFix.UnderlyingAllocationPercent value)
      { setField(value); }
      public QuickFix.UnderlyingAllocationPercent get(QuickFix.UnderlyingAllocationPercent  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingAllocationPercent getUnderlyingAllocationPercent()
      { QuickFix.UnderlyingAllocationPercent value = new QuickFix.UnderlyingAllocationPercent();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingAllocationPercent field)
      { return isSetField(field); }
      public bool isSetUnderlyingAllocationPercent()
      { return isSetField(972); }

      public void set(QuickFix.UnderlyingSettlementType value)
      { setField(value); }
      public QuickFix.UnderlyingSettlementType get(QuickFix.UnderlyingSettlementType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSettlementType getUnderlyingSettlementType()
      { QuickFix.UnderlyingSettlementType value = new QuickFix.UnderlyingSettlementType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSettlementType field)
      { return isSetField(field); }
      public bool isSetUnderlyingSettlementType()
      { return isSetField(975); }

      public void set(QuickFix.UnderlyingCashAmount value)
      { setField(value); }
      public QuickFix.UnderlyingCashAmount get(QuickFix.UnderlyingCashAmount  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCashAmount getUnderlyingCashAmount()
      { QuickFix.UnderlyingCashAmount value = new QuickFix.UnderlyingCashAmount();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCashAmount field)
      { return isSetField(field); }
      public bool isSetUnderlyingCashAmount()
      { return isSetField(973); }

      public void set(QuickFix.UnderlyingCashType value)
      { setField(value); }
      public QuickFix.UnderlyingCashType get(QuickFix.UnderlyingCashType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCashType getUnderlyingCashType()
      { QuickFix.UnderlyingCashType value = new QuickFix.UnderlyingCashType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCashType field)
      { return isSetField(field); }
      public bool isSetUnderlyingCashType()
      { return isSetField(974); }

      public void set(QuickFix.UnderlyingUnitOfMeasure value)
      { setField(value); }
      public QuickFix.UnderlyingUnitOfMeasure get(QuickFix.UnderlyingUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingUnitOfMeasure getUnderlyingUnitOfMeasure()
      { QuickFix.UnderlyingUnitOfMeasure value = new QuickFix.UnderlyingUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetUnderlyingUnitOfMeasure()
      { return isSetField(998); }

      public void set(QuickFix.UnderlyingTimeUnit value)
      { setField(value); }
      public QuickFix.UnderlyingTimeUnit get(QuickFix.UnderlyingTimeUnit  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingTimeUnit getUnderlyingTimeUnit()
      { QuickFix.UnderlyingTimeUnit value = new QuickFix.UnderlyingTimeUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingTimeUnit field)
      { return isSetField(field); }
      public bool isSetUnderlyingTimeUnit()
      { return isSetField(1000); }

      public void set(QuickFix.UnderlyingCapValue value)
      { setField(value); }
      public QuickFix.UnderlyingCapValue get(QuickFix.UnderlyingCapValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCapValue getUnderlyingCapValue()
      { QuickFix.UnderlyingCapValue value = new QuickFix.UnderlyingCapValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCapValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingCapValue()
      { return isSetField(1038); }

      public void set(QuickFix.UnderlyingSettlMethod value)
      { setField(value); }
      public QuickFix.UnderlyingSettlMethod get(QuickFix.UnderlyingSettlMethod  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSettlMethod getUnderlyingSettlMethod()
      { QuickFix.UnderlyingSettlMethod value = new QuickFix.UnderlyingSettlMethod();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSettlMethod field)
      { return isSetField(field); }
      public bool isSetUnderlyingSettlMethod()
      { return isSetField(1039); }

      public void set(QuickFix.UnderlyingAdjustedQuantity value)
      { setField(value); }
      public QuickFix.UnderlyingAdjustedQuantity get(QuickFix.UnderlyingAdjustedQuantity  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingAdjustedQuantity getUnderlyingAdjustedQuantity()
      { QuickFix.UnderlyingAdjustedQuantity value = new QuickFix.UnderlyingAdjustedQuantity();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingAdjustedQuantity field)
      { return isSetField(field); }
      public bool isSetUnderlyingAdjustedQuantity()
      { return isSetField(1044); }

      public void set(QuickFix.UnderlyingFXRate value)
      { setField(value); }
      public QuickFix.UnderlyingFXRate get(QuickFix.UnderlyingFXRate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingFXRate getUnderlyingFXRate()
      { QuickFix.UnderlyingFXRate value = new QuickFix.UnderlyingFXRate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingFXRate field)
      { return isSetField(field); }
      public bool isSetUnderlyingFXRate()
      { return isSetField(1045); }

      public void set(QuickFix.UnderlyingFXRateCalc value)
      { setField(value); }
      public QuickFix.UnderlyingFXRateCalc get(QuickFix.UnderlyingFXRateCalc  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingFXRateCalc getUnderlyingFXRateCalc()
      { QuickFix.UnderlyingFXRateCalc value = new QuickFix.UnderlyingFXRateCalc();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingFXRateCalc field)
      { return isSetField(field); }
      public bool isSetUnderlyingFXRateCalc()
      { return isSetField(1046); }

      public void set(QuickFix.UnderlyingMaturityTime value)
      { setField(value); }
      public QuickFix.UnderlyingMaturityTime get(QuickFix.UnderlyingMaturityTime  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingMaturityTime getUnderlyingMaturityTime()
      { QuickFix.UnderlyingMaturityTime value = new QuickFix.UnderlyingMaturityTime();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingMaturityTime field)
      { return isSetField(field); }
      public bool isSetUnderlyingMaturityTime()
      { return isSetField(1213); }

      public void set(QuickFix.UnderlyingPutOrCall value)
      { setField(value); }
      public QuickFix.UnderlyingPutOrCall get(QuickFix.UnderlyingPutOrCall  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPutOrCall getUnderlyingPutOrCall()
      { QuickFix.UnderlyingPutOrCall value = new QuickFix.UnderlyingPutOrCall();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPutOrCall field)
      { return isSetField(field); }
      public bool isSetUnderlyingPutOrCall()
      { return isSetField(315); }

      public void set(QuickFix.UnderlyingExerciseStyle value)
      { setField(value); }
      public QuickFix.UnderlyingExerciseStyle get(QuickFix.UnderlyingExerciseStyle  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingExerciseStyle getUnderlyingExerciseStyle()
      { QuickFix.UnderlyingExerciseStyle value = new QuickFix.UnderlyingExerciseStyle();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingExerciseStyle field)
      { return isSetField(field); }
      public bool isSetUnderlyingExerciseStyle()
      { return isSetField(1419); }

      public void set(QuickFix.UnderlyingUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.UnderlyingUnitOfMeasureQty get(QuickFix.UnderlyingUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingUnitOfMeasureQty getUnderlyingUnitOfMeasureQty()
      { QuickFix.UnderlyingUnitOfMeasureQty value = new QuickFix.UnderlyingUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetUnderlyingUnitOfMeasureQty()
      { return isSetField(1423); }

      public void set(QuickFix.UnderlyingPriceUnitOfMeasure value)
      { setField(value); }
      public QuickFix.UnderlyingPriceUnitOfMeasure get(QuickFix.UnderlyingPriceUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPriceUnitOfMeasure getUnderlyingPriceUnitOfMeasure()
      { QuickFix.UnderlyingPriceUnitOfMeasure value = new QuickFix.UnderlyingPriceUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPriceUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetUnderlyingPriceUnitOfMeasure()
      { return isSetField(1424); }

      public void set(QuickFix.UnderlyingPriceUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.UnderlyingPriceUnitOfMeasureQty get(QuickFix.UnderlyingPriceUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPriceUnitOfMeasureQty getUnderlyingPriceUnitOfMeasureQty()
      { QuickFix.UnderlyingPriceUnitOfMeasureQty value = new QuickFix.UnderlyingPriceUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPriceUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetUnderlyingPriceUnitOfMeasureQty()
      { return isSetField(1425); }

      public void set(QuickFix.UnderlyingContractMultiplierUnit value)
      { setField(value); }
      public QuickFix.UnderlyingContractMultiplierUnit get(QuickFix.UnderlyingContractMultiplierUnit  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingContractMultiplierUnit getUnderlyingContractMultiplierUnit()
      { QuickFix.UnderlyingContractMultiplierUnit value = new QuickFix.UnderlyingContractMultiplierUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingContractMultiplierUnit field)
      { return isSetField(field); }
      public bool isSetUnderlyingContractMultiplierUnit()
      { return isSetField(1437); }

      public void set(QuickFix.UnderlyingFlowScheduleType value)
      { setField(value); }
      public QuickFix.UnderlyingFlowScheduleType get(QuickFix.UnderlyingFlowScheduleType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingFlowScheduleType getUnderlyingFlowScheduleType()
      { QuickFix.UnderlyingFlowScheduleType value = new QuickFix.UnderlyingFlowScheduleType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingFlowScheduleType field)
      { return isSetField(field); }
      public bool isSetUnderlyingFlowScheduleType()
      { return isSetField(1441); }

      public void set(QuickFix.UnderlyingRestructuringType value)
      { setField(value); }
      public QuickFix.UnderlyingRestructuringType get(QuickFix.UnderlyingRestructuringType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRestructuringType getUnderlyingRestructuringType()
      { QuickFix.UnderlyingRestructuringType value = new QuickFix.UnderlyingRestructuringType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRestructuringType field)
      { return isSetField(field); }
      public bool isSetUnderlyingRestructuringType()
      { return isSetField(1453); }

      public void set(QuickFix.UnderlyingSeniority value)
      { setField(value); }
      public QuickFix.UnderlyingSeniority get(QuickFix.UnderlyingSeniority  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSeniority getUnderlyingSeniority()
      { QuickFix.UnderlyingSeniority value = new QuickFix.UnderlyingSeniority();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSeniority field)
      { return isSetField(field); }
      public bool isSetUnderlyingSeniority()
      { return isSetField(1454); }

      public void set(QuickFix.UnderlyingNotionalPercentageOutstanding value)
      { setField(value); }
      public QuickFix.UnderlyingNotionalPercentageOutstanding get(QuickFix.UnderlyingNotionalPercentageOutstanding  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingNotionalPercentageOutstanding getUnderlyingNotionalPercentageOutstanding()
      { QuickFix.UnderlyingNotionalPercentageOutstanding value = new QuickFix.UnderlyingNotionalPercentageOutstanding();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingNotionalPercentageOutstanding field)
      { return isSetField(field); }
      public bool isSetUnderlyingNotionalPercentageOutstanding()
      { return isSetField(1455); }

      public void set(QuickFix.UnderlyingOriginalNotionalPercentageOutstanding value)
      { setField(value); }
      public QuickFix.UnderlyingOriginalNotionalPercentageOutstanding get(QuickFix.UnderlyingOriginalNotionalPercentageOutstanding  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingOriginalNotionalPercentageOutstanding getUnderlyingOriginalNotionalPercentageOutstanding()
      { QuickFix.UnderlyingOriginalNotionalPercentageOutstanding value = new QuickFix.UnderlyingOriginalNotionalPercentageOutstanding();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingOriginalNotionalPercentageOutstanding field)
      { return isSetField(field); }
      public bool isSetUnderlyingOriginalNotionalPercentageOutstanding()
      { return isSetField(1456); }

      public void set(QuickFix.UnderlyingAttachmentPoint value)
      { setField(value); }
      public QuickFix.UnderlyingAttachmentPoint get(QuickFix.UnderlyingAttachmentPoint  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingAttachmentPoint getUnderlyingAttachmentPoint()
      { QuickFix.UnderlyingAttachmentPoint value = new QuickFix.UnderlyingAttachmentPoint();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingAttachmentPoint field)
      { return isSetField(field); }
      public bool isSetUnderlyingAttachmentPoint()
      { return isSetField(1459); }

      public void set(QuickFix.UnderlyingDetachmentPoint value)
      { setField(value); }
      public QuickFix.UnderlyingDetachmentPoint get(QuickFix.UnderlyingDetachmentPoint  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingDetachmentPoint getUnderlyingDetachmentPoint()
      { QuickFix.UnderlyingDetachmentPoint value = new QuickFix.UnderlyingDetachmentPoint();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingDetachmentPoint field)
      { return isSetField(field); }
      public bool isSetUnderlyingDetachmentPoint()
      { return isSetField(1460); }

    };
    public void set(QuickFix.UnderlyingTradingSessionID value)
    { setField(value); }
    public QuickFix.UnderlyingTradingSessionID get(QuickFix.UnderlyingTradingSessionID  value)
    { getField(value); return value; }
    public QuickFix.UnderlyingTradingSessionID getUnderlyingTradingSessionID()
    { QuickFix.UnderlyingTradingSessionID value = new QuickFix.UnderlyingTradingSessionID();
      getField(value); return value; }
    public bool isSet(QuickFix.UnderlyingTradingSessionID field)
    { return isSetField(field); }
    public bool isSetUnderlyingTradingSessionID()
    { return isSetField(822); }

    public void set(QuickFix.UnderlyingTradingSessionSubID value)
    { setField(value); }
    public QuickFix.UnderlyingTradingSessionSubID get(QuickFix.UnderlyingTradingSessionSubID  value)
    { getField(value); return value; }
    public QuickFix.UnderlyingTradingSessionSubID getUnderlyingTradingSessionSubID()
    { QuickFix.UnderlyingTradingSessionSubID value = new QuickFix.UnderlyingTradingSessionSubID();
      getField(value); return value; }
    public bool isSet(QuickFix.UnderlyingTradingSessionSubID field)
    { return isSetField(field); }
    public bool isSetUnderlyingTradingSessionSubID()
    { return isSetField(823); }

    public void set(QuickFix.LastQty value)
    { setField(value); }
    public QuickFix.LastQty get(QuickFix.LastQty  value)
    { getField(value); return value; }
    public QuickFix.LastQty getLastQty()
    { QuickFix.LastQty value = new QuickFix.LastQty();
      getField(value); return value; }
    public bool isSet(QuickFix.LastQty field)
    { return isSetField(field); }
    public bool isSetLastQty()
    { return isSetField(32); }

    public void set(QuickFix.LastPx value)
    { setField(value); }
    public QuickFix.LastPx get(QuickFix.LastPx  value)
    { getField(value); return value; }
    public QuickFix.LastPx getLastPx()
    { QuickFix.LastPx value = new QuickFix.LastPx();
      getField(value); return value; }
    public bool isSet(QuickFix.LastPx field)
    { return isSetField(field); }
    public bool isSetLastPx()
    { return isSetField(31); }

    public void set(QuickFix.LastParPx value)
    { setField(value); }
    public QuickFix.LastParPx get(QuickFix.LastParPx  value)
    { getField(value); return value; }
    public QuickFix.LastParPx getLastParPx()
    { QuickFix.LastParPx value = new QuickFix.LastParPx();
      getField(value); return value; }
    public bool isSet(QuickFix.LastParPx field)
    { return isSetField(field); }
    public bool isSetLastParPx()
    { return isSetField(669); }

    public void set(QuickFix.LastSpotRate value)
    { setField(value); }
    public QuickFix.LastSpotRate get(QuickFix.LastSpotRate  value)
    { getField(value); return value; }
    public QuickFix.LastSpotRate getLastSpotRate()
    { QuickFix.LastSpotRate value = new QuickFix.LastSpotRate();
      getField(value); return value; }
    public bool isSet(QuickFix.LastSpotRate field)
    { return isSetField(field); }
    public bool isSetLastSpotRate()
    { return isSetField(194); }

    public void set(QuickFix.LastForwardPoints value)
    { setField(value); }
    public QuickFix.LastForwardPoints get(QuickFix.LastForwardPoints  value)
    { getField(value); return value; }
    public QuickFix.LastForwardPoints getLastForwardPoints()
    { QuickFix.LastForwardPoints value = new QuickFix.LastForwardPoints();
      getField(value); return value; }
    public bool isSet(QuickFix.LastForwardPoints field)
    { return isSetField(field); }
    public bool isSetLastForwardPoints()
    { return isSetField(195); }

    public void set(QuickFix.LastMkt value)
    { setField(value); }
    public QuickFix.LastMkt get(QuickFix.LastMkt  value)
    { getField(value); return value; }
    public QuickFix.LastMkt getLastMkt()
    { QuickFix.LastMkt value = new QuickFix.LastMkt();
      getField(value); return value; }
    public bool isSet(QuickFix.LastMkt field)
    { return isSetField(field); }
    public bool isSetLastMkt()
    { return isSetField(30); }

    public void set(QuickFix.TradeDate value)
    { setField(value); }
    public QuickFix.TradeDate get(QuickFix.TradeDate  value)
    { getField(value); return value; }
    public QuickFix.TradeDate getTradeDate()
    { QuickFix.TradeDate value = new QuickFix.TradeDate();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeDate field)
    { return isSetField(field); }
    public bool isSetTradeDate()
    { return isSetField(75); }

    public void set(QuickFix.ClearingBusinessDate value)
    { setField(value); }
    public QuickFix.ClearingBusinessDate get(QuickFix.ClearingBusinessDate  value)
    { getField(value); return value; }
    public QuickFix.ClearingBusinessDate getClearingBusinessDate()
    { QuickFix.ClearingBusinessDate value = new QuickFix.ClearingBusinessDate();
      getField(value); return value; }
    public bool isSet(QuickFix.ClearingBusinessDate field)
    { return isSetField(field); }
    public bool isSetClearingBusinessDate()
    { return isSetField(715); }

    public void set(QuickFix.AvgPx value)
    { setField(value); }
    public QuickFix.AvgPx get(QuickFix.AvgPx  value)
    { getField(value); return value; }
    public QuickFix.AvgPx getAvgPx()
    { QuickFix.AvgPx value = new QuickFix.AvgPx();
      getField(value); return value; }
    public bool isSet(QuickFix.AvgPx field)
    { return isSetField(field); }
    public bool isSetAvgPx()
    { return isSetField(6); }

    public void set(QuickFix.Spread value)
    { setField(value); }
    public QuickFix.Spread get(QuickFix.Spread  value)
    { getField(value); return value; }
    public QuickFix.Spread getSpread()
    { QuickFix.Spread value = new QuickFix.Spread();
      getField(value); return value; }
    public bool isSet(QuickFix.Spread field)
    { return isSetField(field); }
    public bool isSetSpread()
    { return isSetField(218); }

    public void set(QuickFix.BenchmarkCurveCurrency value)
    { setField(value); }
    public QuickFix.BenchmarkCurveCurrency get(QuickFix.BenchmarkCurveCurrency  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkCurveCurrency getBenchmarkCurveCurrency()
    { QuickFix.BenchmarkCurveCurrency value = new QuickFix.BenchmarkCurveCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkCurveCurrency field)
    { return isSetField(field); }
    public bool isSetBenchmarkCurveCurrency()
    { return isSetField(220); }

    public void set(QuickFix.BenchmarkCurveName value)
    { setField(value); }
    public QuickFix.BenchmarkCurveName get(QuickFix.BenchmarkCurveName  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkCurveName getBenchmarkCurveName()
    { QuickFix.BenchmarkCurveName value = new QuickFix.BenchmarkCurveName();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkCurveName field)
    { return isSetField(field); }
    public bool isSetBenchmarkCurveName()
    { return isSetField(221); }

    public void set(QuickFix.BenchmarkCurvePoint value)
    { setField(value); }
    public QuickFix.BenchmarkCurvePoint get(QuickFix.BenchmarkCurvePoint  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkCurvePoint getBenchmarkCurvePoint()
    { QuickFix.BenchmarkCurvePoint value = new QuickFix.BenchmarkCurvePoint();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkCurvePoint field)
    { return isSetField(field); }
    public bool isSetBenchmarkCurvePoint()
    { return isSetField(222); }

    public void set(QuickFix.BenchmarkPrice value)
    { setField(value); }
    public QuickFix.BenchmarkPrice get(QuickFix.BenchmarkPrice  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkPrice getBenchmarkPrice()
    { QuickFix.BenchmarkPrice value = new QuickFix.BenchmarkPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkPrice field)
    { return isSetField(field); }
    public bool isSetBenchmarkPrice()
    { return isSetField(662); }

    public void set(QuickFix.BenchmarkPriceType value)
    { setField(value); }
    public QuickFix.BenchmarkPriceType get(QuickFix.BenchmarkPriceType  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkPriceType getBenchmarkPriceType()
    { QuickFix.BenchmarkPriceType value = new QuickFix.BenchmarkPriceType();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkPriceType field)
    { return isSetField(field); }
    public bool isSetBenchmarkPriceType()
    { return isSetField(663); }

    public void set(QuickFix.BenchmarkSecurityID value)
    { setField(value); }
    public QuickFix.BenchmarkSecurityID get(QuickFix.BenchmarkSecurityID  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkSecurityID getBenchmarkSecurityID()
    { QuickFix.BenchmarkSecurityID value = new QuickFix.BenchmarkSecurityID();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkSecurityID field)
    { return isSetField(field); }
    public bool isSetBenchmarkSecurityID()
    { return isSetField(699); }

    public void set(QuickFix.BenchmarkSecurityIDSource value)
    { setField(value); }
    public QuickFix.BenchmarkSecurityIDSource get(QuickFix.BenchmarkSecurityIDSource  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkSecurityIDSource getBenchmarkSecurityIDSource()
    { QuickFix.BenchmarkSecurityIDSource value = new QuickFix.BenchmarkSecurityIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkSecurityIDSource field)
    { return isSetField(field); }
    public bool isSetBenchmarkSecurityIDSource()
    { return isSetField(761); }

    public void set(QuickFix.AvgPxIndicator value)
    { setField(value); }
    public QuickFix.AvgPxIndicator get(QuickFix.AvgPxIndicator  value)
    { getField(value); return value; }
    public QuickFix.AvgPxIndicator getAvgPxIndicator()
    { QuickFix.AvgPxIndicator value = new QuickFix.AvgPxIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.AvgPxIndicator field)
    { return isSetField(field); }
    public bool isSetAvgPxIndicator()
    { return isSetField(819); }

    public void set(QuickFix.NoPosAmt value)
    { setField(value); }
    public QuickFix.NoPosAmt get(QuickFix.NoPosAmt  value)
    { getField(value); return value; }
    public QuickFix.NoPosAmt getNoPosAmt()
    { QuickFix.NoPosAmt value = new QuickFix.NoPosAmt();
      getField(value); return value; }
    public bool isSet(QuickFix.NoPosAmt field)
    { return isSetField(field); }
    public bool isSetNoPosAmt()
    { return isSetField(753); }

    public class NoPosAmt: QuickFix.Group
    {
    public NoPosAmt() : base(753,707,message_order ) {}
    static int[] message_order = new int[] {707,708,1055,0};
      public void set(QuickFix.PosAmtType value)
      { setField(value); }
      public QuickFix.PosAmtType get(QuickFix.PosAmtType  value)
      { getField(value); return value; }
      public QuickFix.PosAmtType getPosAmtType()
      { QuickFix.PosAmtType value = new QuickFix.PosAmtType();
        getField(value); return value; }
      public bool isSet(QuickFix.PosAmtType field)
      { return isSetField(field); }
      public bool isSetPosAmtType()
      { return isSetField(707); }

      public void set(QuickFix.PosAmt value)
      { setField(value); }
      public QuickFix.PosAmt get(QuickFix.PosAmt  value)
      { getField(value); return value; }
      public QuickFix.PosAmt getPosAmt()
      { QuickFix.PosAmt value = new QuickFix.PosAmt();
        getField(value); return value; }
      public bool isSet(QuickFix.PosAmt field)
      { return isSetField(field); }
      public bool isSetPosAmt()
      { return isSetField(708); }

      public void set(QuickFix.PositionCurrency value)
      { setField(value); }
      public QuickFix.PositionCurrency get(QuickFix.PositionCurrency  value)
      { getField(value); return value; }
      public QuickFix.PositionCurrency getPositionCurrency()
      { QuickFix.PositionCurrency value = new QuickFix.PositionCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.PositionCurrency field)
      { return isSetField(field); }
      public bool isSetPositionCurrency()
      { return isSetField(1055); }

    };
    public void set(QuickFix.MultiLegReportingType value)
    { setField(value); }
    public QuickFix.MultiLegReportingType get(QuickFix.MultiLegReportingType  value)
    { getField(value); return value; }
    public QuickFix.MultiLegReportingType getMultiLegReportingType()
    { QuickFix.MultiLegReportingType value = new QuickFix.MultiLegReportingType();
      getField(value); return value; }
    public bool isSet(QuickFix.MultiLegReportingType field)
    { return isSetField(field); }
    public bool isSetMultiLegReportingType()
    { return isSetField(442); }

    public void set(QuickFix.TradeLegRefID value)
    { setField(value); }
    public QuickFix.TradeLegRefID get(QuickFix.TradeLegRefID  value)
    { getField(value); return value; }
    public QuickFix.TradeLegRefID getTradeLegRefID()
    { QuickFix.TradeLegRefID value = new QuickFix.TradeLegRefID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeLegRefID field)
    { return isSetField(field); }
    public bool isSetTradeLegRefID()
    { return isSetField(824); }

    public void set(QuickFix.NoLegs value)
    { setField(value); }
    public QuickFix.NoLegs get(QuickFix.NoLegs  value)
    { getField(value); return value; }
    public QuickFix.NoLegs getNoLegs()
    { QuickFix.NoLegs value = new QuickFix.NoLegs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoLegs field)
    { return isSetField(field); }
    public bool isSetNoLegs()
    { return isSetField(555); }

    public class NoLegs: QuickFix.Group
    {
    public NoLegs() : base(555,600,message_order ) {}
    static int[] message_order = new int[] {600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,999,1001,1017,566,1212,1358,1420,1224,1421,1422,1436,1440,687,690,683,564,565,539,654,587,588,637,990,675,1073,1074,1075,1152,1342,1379,1381,1383,1384,1418,0};
      public void set(QuickFix.LegSymbol value)
      { setField(value); }
      public QuickFix.LegSymbol get(QuickFix.LegSymbol  value)
      { getField(value); return value; }
      public QuickFix.LegSymbol getLegSymbol()
      { QuickFix.LegSymbol value = new QuickFix.LegSymbol();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSymbol field)
      { return isSetField(field); }
      public bool isSetLegSymbol()
      { return isSetField(600); }

      public void set(QuickFix.LegSymbolSfx value)
      { setField(value); }
      public QuickFix.LegSymbolSfx get(QuickFix.LegSymbolSfx  value)
      { getField(value); return value; }
      public QuickFix.LegSymbolSfx getLegSymbolSfx()
      { QuickFix.LegSymbolSfx value = new QuickFix.LegSymbolSfx();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSymbolSfx field)
      { return isSetField(field); }
      public bool isSetLegSymbolSfx()
      { return isSetField(601); }

      public void set(QuickFix.LegSecurityID value)
      { setField(value); }
      public QuickFix.LegSecurityID get(QuickFix.LegSecurityID  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityID getLegSecurityID()
      { QuickFix.LegSecurityID value = new QuickFix.LegSecurityID();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityID field)
      { return isSetField(field); }
      public bool isSetLegSecurityID()
      { return isSetField(602); }

      public void set(QuickFix.LegSecurityIDSource value)
      { setField(value); }
      public QuickFix.LegSecurityIDSource get(QuickFix.LegSecurityIDSource  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityIDSource getLegSecurityIDSource()
      { QuickFix.LegSecurityIDSource value = new QuickFix.LegSecurityIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityIDSource field)
      { return isSetField(field); }
      public bool isSetLegSecurityIDSource()
      { return isSetField(603); }

      public void set(QuickFix.LegProduct value)
      { setField(value); }
      public QuickFix.LegProduct get(QuickFix.LegProduct  value)
      { getField(value); return value; }
      public QuickFix.LegProduct getLegProduct()
      { QuickFix.LegProduct value = new QuickFix.LegProduct();
        getField(value); return value; }
      public bool isSet(QuickFix.LegProduct field)
      { return isSetField(field); }
      public bool isSetLegProduct()
      { return isSetField(607); }

      public void set(QuickFix.LegCFICode value)
      { setField(value); }
      public QuickFix.LegCFICode get(QuickFix.LegCFICode  value)
      { getField(value); return value; }
      public QuickFix.LegCFICode getLegCFICode()
      { QuickFix.LegCFICode value = new QuickFix.LegCFICode();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCFICode field)
      { return isSetField(field); }
      public bool isSetLegCFICode()
      { return isSetField(608); }

      public void set(QuickFix.LegSecurityType value)
      { setField(value); }
      public QuickFix.LegSecurityType get(QuickFix.LegSecurityType  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityType getLegSecurityType()
      { QuickFix.LegSecurityType value = new QuickFix.LegSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityType field)
      { return isSetField(field); }
      public bool isSetLegSecurityType()
      { return isSetField(609); }

      public void set(QuickFix.LegSecuritySubType value)
      { setField(value); }
      public QuickFix.LegSecuritySubType get(QuickFix.LegSecuritySubType  value)
      { getField(value); return value; }
      public QuickFix.LegSecuritySubType getLegSecuritySubType()
      { QuickFix.LegSecuritySubType value = new QuickFix.LegSecuritySubType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecuritySubType field)
      { return isSetField(field); }
      public bool isSetLegSecuritySubType()
      { return isSetField(764); }

      public void set(QuickFix.LegMaturityMonthYear value)
      { setField(value); }
      public QuickFix.LegMaturityMonthYear get(QuickFix.LegMaturityMonthYear  value)
      { getField(value); return value; }
      public QuickFix.LegMaturityMonthYear getLegMaturityMonthYear()
      { QuickFix.LegMaturityMonthYear value = new QuickFix.LegMaturityMonthYear();
        getField(value); return value; }
      public bool isSet(QuickFix.LegMaturityMonthYear field)
      { return isSetField(field); }
      public bool isSetLegMaturityMonthYear()
      { return isSetField(610); }

      public void set(QuickFix.LegMaturityDate value)
      { setField(value); }
      public QuickFix.LegMaturityDate get(QuickFix.LegMaturityDate  value)
      { getField(value); return value; }
      public QuickFix.LegMaturityDate getLegMaturityDate()
      { QuickFix.LegMaturityDate value = new QuickFix.LegMaturityDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegMaturityDate field)
      { return isSetField(field); }
      public bool isSetLegMaturityDate()
      { return isSetField(611); }

      public void set(QuickFix.LegCouponPaymentDate value)
      { setField(value); }
      public QuickFix.LegCouponPaymentDate get(QuickFix.LegCouponPaymentDate  value)
      { getField(value); return value; }
      public QuickFix.LegCouponPaymentDate getLegCouponPaymentDate()
      { QuickFix.LegCouponPaymentDate value = new QuickFix.LegCouponPaymentDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCouponPaymentDate field)
      { return isSetField(field); }
      public bool isSetLegCouponPaymentDate()
      { return isSetField(248); }

      public void set(QuickFix.LegIssueDate value)
      { setField(value); }
      public QuickFix.LegIssueDate get(QuickFix.LegIssueDate  value)
      { getField(value); return value; }
      public QuickFix.LegIssueDate getLegIssueDate()
      { QuickFix.LegIssueDate value = new QuickFix.LegIssueDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegIssueDate field)
      { return isSetField(field); }
      public bool isSetLegIssueDate()
      { return isSetField(249); }

      public void set(QuickFix.LegRepoCollateralSecurityType value)
      { setField(value); }
      public QuickFix.LegRepoCollateralSecurityType get(QuickFix.LegRepoCollateralSecurityType  value)
      { getField(value); return value; }
      public QuickFix.LegRepoCollateralSecurityType getLegRepoCollateralSecurityType()
      { QuickFix.LegRepoCollateralSecurityType value = new QuickFix.LegRepoCollateralSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRepoCollateralSecurityType field)
      { return isSetField(field); }
      public bool isSetLegRepoCollateralSecurityType()
      { return isSetField(250); }

      public void set(QuickFix.LegRepurchaseTerm value)
      { setField(value); }
      public QuickFix.LegRepurchaseTerm get(QuickFix.LegRepurchaseTerm  value)
      { getField(value); return value; }
      public QuickFix.LegRepurchaseTerm getLegRepurchaseTerm()
      { QuickFix.LegRepurchaseTerm value = new QuickFix.LegRepurchaseTerm();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRepurchaseTerm field)
      { return isSetField(field); }
      public bool isSetLegRepurchaseTerm()
      { return isSetField(251); }

      public void set(QuickFix.LegRepurchaseRate value)
      { setField(value); }
      public QuickFix.LegRepurchaseRate get(QuickFix.LegRepurchaseRate  value)
      { getField(value); return value; }
      public QuickFix.LegRepurchaseRate getLegRepurchaseRate()
      { QuickFix.LegRepurchaseRate value = new QuickFix.LegRepurchaseRate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRepurchaseRate field)
      { return isSetField(field); }
      public bool isSetLegRepurchaseRate()
      { return isSetField(252); }

      public void set(QuickFix.LegFactor value)
      { setField(value); }
      public QuickFix.LegFactor get(QuickFix.LegFactor  value)
      { getField(value); return value; }
      public QuickFix.LegFactor getLegFactor()
      { QuickFix.LegFactor value = new QuickFix.LegFactor();
        getField(value); return value; }
      public bool isSet(QuickFix.LegFactor field)
      { return isSetField(field); }
      public bool isSetLegFactor()
      { return isSetField(253); }

      public void set(QuickFix.LegCreditRating value)
      { setField(value); }
      public QuickFix.LegCreditRating get(QuickFix.LegCreditRating  value)
      { getField(value); return value; }
      public QuickFix.LegCreditRating getLegCreditRating()
      { QuickFix.LegCreditRating value = new QuickFix.LegCreditRating();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCreditRating field)
      { return isSetField(field); }
      public bool isSetLegCreditRating()
      { return isSetField(257); }

      public void set(QuickFix.LegInstrRegistry value)
      { setField(value); }
      public QuickFix.LegInstrRegistry get(QuickFix.LegInstrRegistry  value)
      { getField(value); return value; }
      public QuickFix.LegInstrRegistry getLegInstrRegistry()
      { QuickFix.LegInstrRegistry value = new QuickFix.LegInstrRegistry();
        getField(value); return value; }
      public bool isSet(QuickFix.LegInstrRegistry field)
      { return isSetField(field); }
      public bool isSetLegInstrRegistry()
      { return isSetField(599); }

      public void set(QuickFix.LegCountryOfIssue value)
      { setField(value); }
      public QuickFix.LegCountryOfIssue get(QuickFix.LegCountryOfIssue  value)
      { getField(value); return value; }
      public QuickFix.LegCountryOfIssue getLegCountryOfIssue()
      { QuickFix.LegCountryOfIssue value = new QuickFix.LegCountryOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCountryOfIssue field)
      { return isSetField(field); }
      public bool isSetLegCountryOfIssue()
      { return isSetField(596); }

      public void set(QuickFix.LegStateOrProvinceOfIssue value)
      { setField(value); }
      public QuickFix.LegStateOrProvinceOfIssue get(QuickFix.LegStateOrProvinceOfIssue  value)
      { getField(value); return value; }
      public QuickFix.LegStateOrProvinceOfIssue getLegStateOrProvinceOfIssue()
      { QuickFix.LegStateOrProvinceOfIssue value = new QuickFix.LegStateOrProvinceOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.LegStateOrProvinceOfIssue field)
      { return isSetField(field); }
      public bool isSetLegStateOrProvinceOfIssue()
      { return isSetField(597); }

      public void set(QuickFix.LegLocaleOfIssue value)
      { setField(value); }
      public QuickFix.LegLocaleOfIssue get(QuickFix.LegLocaleOfIssue  value)
      { getField(value); return value; }
      public QuickFix.LegLocaleOfIssue getLegLocaleOfIssue()
      { QuickFix.LegLocaleOfIssue value = new QuickFix.LegLocaleOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.LegLocaleOfIssue field)
      { return isSetField(field); }
      public bool isSetLegLocaleOfIssue()
      { return isSetField(598); }

      public void set(QuickFix.LegRedemptionDate value)
      { setField(value); }
      public QuickFix.LegRedemptionDate get(QuickFix.LegRedemptionDate  value)
      { getField(value); return value; }
      public QuickFix.LegRedemptionDate getLegRedemptionDate()
      { QuickFix.LegRedemptionDate value = new QuickFix.LegRedemptionDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRedemptionDate field)
      { return isSetField(field); }
      public bool isSetLegRedemptionDate()
      { return isSetField(254); }

      public void set(QuickFix.LegStrikePrice value)
      { setField(value); }
      public QuickFix.LegStrikePrice get(QuickFix.LegStrikePrice  value)
      { getField(value); return value; }
      public QuickFix.LegStrikePrice getLegStrikePrice()
      { QuickFix.LegStrikePrice value = new QuickFix.LegStrikePrice();
        getField(value); return value; }
      public bool isSet(QuickFix.LegStrikePrice field)
      { return isSetField(field); }
      public bool isSetLegStrikePrice()
      { return isSetField(612); }

      public void set(QuickFix.LegStrikeCurrency value)
      { setField(value); }
      public QuickFix.LegStrikeCurrency get(QuickFix.LegStrikeCurrency  value)
      { getField(value); return value; }
      public QuickFix.LegStrikeCurrency getLegStrikeCurrency()
      { QuickFix.LegStrikeCurrency value = new QuickFix.LegStrikeCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.LegStrikeCurrency field)
      { return isSetField(field); }
      public bool isSetLegStrikeCurrency()
      { return isSetField(942); }

      public void set(QuickFix.LegOptAttribute value)
      { setField(value); }
      public QuickFix.LegOptAttribute get(QuickFix.LegOptAttribute  value)
      { getField(value); return value; }
      public QuickFix.LegOptAttribute getLegOptAttribute()
      { QuickFix.LegOptAttribute value = new QuickFix.LegOptAttribute();
        getField(value); return value; }
      public bool isSet(QuickFix.LegOptAttribute field)
      { return isSetField(field); }
      public bool isSetLegOptAttribute()
      { return isSetField(613); }

      public void set(QuickFix.LegContractMultiplier value)
      { setField(value); }
      public QuickFix.LegContractMultiplier get(QuickFix.LegContractMultiplier  value)
      { getField(value); return value; }
      public QuickFix.LegContractMultiplier getLegContractMultiplier()
      { QuickFix.LegContractMultiplier value = new QuickFix.LegContractMultiplier();
        getField(value); return value; }
      public bool isSet(QuickFix.LegContractMultiplier field)
      { return isSetField(field); }
      public bool isSetLegContractMultiplier()
      { return isSetField(614); }

      public void set(QuickFix.LegCouponRate value)
      { setField(value); }
      public QuickFix.LegCouponRate get(QuickFix.LegCouponRate  value)
      { getField(value); return value; }
      public QuickFix.LegCouponRate getLegCouponRate()
      { QuickFix.LegCouponRate value = new QuickFix.LegCouponRate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCouponRate field)
      { return isSetField(field); }
      public bool isSetLegCouponRate()
      { return isSetField(615); }

      public void set(QuickFix.LegSecurityExchange value)
      { setField(value); }
      public QuickFix.LegSecurityExchange get(QuickFix.LegSecurityExchange  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityExchange getLegSecurityExchange()
      { QuickFix.LegSecurityExchange value = new QuickFix.LegSecurityExchange();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityExchange field)
      { return isSetField(field); }
      public bool isSetLegSecurityExchange()
      { return isSetField(616); }

      public void set(QuickFix.LegIssuer value)
      { setField(value); }
      public QuickFix.LegIssuer get(QuickFix.LegIssuer  value)
      { getField(value); return value; }
      public QuickFix.LegIssuer getLegIssuer()
      { QuickFix.LegIssuer value = new QuickFix.LegIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.LegIssuer field)
      { return isSetField(field); }
      public bool isSetLegIssuer()
      { return isSetField(617); }

      public void set(QuickFix.EncodedLegIssuerLen value)
      { setField(value); }
      public QuickFix.EncodedLegIssuerLen get(QuickFix.EncodedLegIssuerLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegIssuerLen getEncodedLegIssuerLen()
      { QuickFix.EncodedLegIssuerLen value = new QuickFix.EncodedLegIssuerLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegIssuerLen field)
      { return isSetField(field); }
      public bool isSetEncodedLegIssuerLen()
      { return isSetField(618); }

      public void set(QuickFix.EncodedLegIssuer value)
      { setField(value); }
      public QuickFix.EncodedLegIssuer get(QuickFix.EncodedLegIssuer  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegIssuer getEncodedLegIssuer()
      { QuickFix.EncodedLegIssuer value = new QuickFix.EncodedLegIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegIssuer field)
      { return isSetField(field); }
      public bool isSetEncodedLegIssuer()
      { return isSetField(619); }

      public void set(QuickFix.LegSecurityDesc value)
      { setField(value); }
      public QuickFix.LegSecurityDesc get(QuickFix.LegSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityDesc getLegSecurityDesc()
      { QuickFix.LegSecurityDesc value = new QuickFix.LegSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityDesc field)
      { return isSetField(field); }
      public bool isSetLegSecurityDesc()
      { return isSetField(620); }

      public void set(QuickFix.EncodedLegSecurityDescLen value)
      { setField(value); }
      public QuickFix.EncodedLegSecurityDescLen get(QuickFix.EncodedLegSecurityDescLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegSecurityDescLen getEncodedLegSecurityDescLen()
      { QuickFix.EncodedLegSecurityDescLen value = new QuickFix.EncodedLegSecurityDescLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegSecurityDescLen field)
      { return isSetField(field); }
      public bool isSetEncodedLegSecurityDescLen()
      { return isSetField(621); }

      public void set(QuickFix.EncodedLegSecurityDesc value)
      { setField(value); }
      public QuickFix.EncodedLegSecurityDesc get(QuickFix.EncodedLegSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegSecurityDesc getEncodedLegSecurityDesc()
      { QuickFix.EncodedLegSecurityDesc value = new QuickFix.EncodedLegSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegSecurityDesc field)
      { return isSetField(field); }
      public bool isSetEncodedLegSecurityDesc()
      { return isSetField(622); }

      public void set(QuickFix.LegRatioQty value)
      { setField(value); }
      public QuickFix.LegRatioQty get(QuickFix.LegRatioQty  value)
      { getField(value); return value; }
      public QuickFix.LegRatioQty getLegRatioQty()
      { QuickFix.LegRatioQty value = new QuickFix.LegRatioQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRatioQty field)
      { return isSetField(field); }
      public bool isSetLegRatioQty()
      { return isSetField(623); }

      public void set(QuickFix.LegSide value)
      { setField(value); }
      public QuickFix.LegSide get(QuickFix.LegSide  value)
      { getField(value); return value; }
      public QuickFix.LegSide getLegSide()
      { QuickFix.LegSide value = new QuickFix.LegSide();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSide field)
      { return isSetField(field); }
      public bool isSetLegSide()
      { return isSetField(624); }

      public void set(QuickFix.LegCurrency value)
      { setField(value); }
      public QuickFix.LegCurrency get(QuickFix.LegCurrency  value)
      { getField(value); return value; }
      public QuickFix.LegCurrency getLegCurrency()
      { QuickFix.LegCurrency value = new QuickFix.LegCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCurrency field)
      { return isSetField(field); }
      public bool isSetLegCurrency()
      { return isSetField(556); }

      public void set(QuickFix.LegPool value)
      { setField(value); }
      public QuickFix.LegPool get(QuickFix.LegPool  value)
      { getField(value); return value; }
      public QuickFix.LegPool getLegPool()
      { QuickFix.LegPool value = new QuickFix.LegPool();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPool field)
      { return isSetField(field); }
      public bool isSetLegPool()
      { return isSetField(740); }

      public void set(QuickFix.LegDatedDate value)
      { setField(value); }
      public QuickFix.LegDatedDate get(QuickFix.LegDatedDate  value)
      { getField(value); return value; }
      public QuickFix.LegDatedDate getLegDatedDate()
      { QuickFix.LegDatedDate value = new QuickFix.LegDatedDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegDatedDate field)
      { return isSetField(field); }
      public bool isSetLegDatedDate()
      { return isSetField(739); }

      public void set(QuickFix.LegContractSettlMonth value)
      { setField(value); }
      public QuickFix.LegContractSettlMonth get(QuickFix.LegContractSettlMonth  value)
      { getField(value); return value; }
      public QuickFix.LegContractSettlMonth getLegContractSettlMonth()
      { QuickFix.LegContractSettlMonth value = new QuickFix.LegContractSettlMonth();
        getField(value); return value; }
      public bool isSet(QuickFix.LegContractSettlMonth field)
      { return isSetField(field); }
      public bool isSetLegContractSettlMonth()
      { return isSetField(955); }

      public void set(QuickFix.LegInterestAccrualDate value)
      { setField(value); }
      public QuickFix.LegInterestAccrualDate get(QuickFix.LegInterestAccrualDate  value)
      { getField(value); return value; }
      public QuickFix.LegInterestAccrualDate getLegInterestAccrualDate()
      { QuickFix.LegInterestAccrualDate value = new QuickFix.LegInterestAccrualDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegInterestAccrualDate field)
      { return isSetField(field); }
      public bool isSetLegInterestAccrualDate()
      { return isSetField(956); }

      public void set(QuickFix.LegUnitOfMeasure value)
      { setField(value); }
      public QuickFix.LegUnitOfMeasure get(QuickFix.LegUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.LegUnitOfMeasure getLegUnitOfMeasure()
      { QuickFix.LegUnitOfMeasure value = new QuickFix.LegUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.LegUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetLegUnitOfMeasure()
      { return isSetField(999); }

      public void set(QuickFix.LegTimeUnit value)
      { setField(value); }
      public QuickFix.LegTimeUnit get(QuickFix.LegTimeUnit  value)
      { getField(value); return value; }
      public QuickFix.LegTimeUnit getLegTimeUnit()
      { QuickFix.LegTimeUnit value = new QuickFix.LegTimeUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.LegTimeUnit field)
      { return isSetField(field); }
      public bool isSetLegTimeUnit()
      { return isSetField(1001); }

      public void set(QuickFix.LegOptionRatio value)
      { setField(value); }
      public QuickFix.LegOptionRatio get(QuickFix.LegOptionRatio  value)
      { getField(value); return value; }
      public QuickFix.LegOptionRatio getLegOptionRatio()
      { QuickFix.LegOptionRatio value = new QuickFix.LegOptionRatio();
        getField(value); return value; }
      public bool isSet(QuickFix.LegOptionRatio field)
      { return isSetField(field); }
      public bool isSetLegOptionRatio()
      { return isSetField(1017); }

      public void set(QuickFix.LegPrice value)
      { setField(value); }
      public QuickFix.LegPrice get(QuickFix.LegPrice  value)
      { getField(value); return value; }
      public QuickFix.LegPrice getLegPrice()
      { QuickFix.LegPrice value = new QuickFix.LegPrice();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPrice field)
      { return isSetField(field); }
      public bool isSetLegPrice()
      { return isSetField(566); }

      public void set(QuickFix.LegMaturityTime value)
      { setField(value); }
      public QuickFix.LegMaturityTime get(QuickFix.LegMaturityTime  value)
      { getField(value); return value; }
      public QuickFix.LegMaturityTime getLegMaturityTime()
      { QuickFix.LegMaturityTime value = new QuickFix.LegMaturityTime();
        getField(value); return value; }
      public bool isSet(QuickFix.LegMaturityTime field)
      { return isSetField(field); }
      public bool isSetLegMaturityTime()
      { return isSetField(1212); }

      public void set(QuickFix.LegPutOrCall value)
      { setField(value); }
      public QuickFix.LegPutOrCall get(QuickFix.LegPutOrCall  value)
      { getField(value); return value; }
      public QuickFix.LegPutOrCall getLegPutOrCall()
      { QuickFix.LegPutOrCall value = new QuickFix.LegPutOrCall();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPutOrCall field)
      { return isSetField(field); }
      public bool isSetLegPutOrCall()
      { return isSetField(1358); }

      public void set(QuickFix.LegExerciseStyle value)
      { setField(value); }
      public QuickFix.LegExerciseStyle get(QuickFix.LegExerciseStyle  value)
      { getField(value); return value; }
      public QuickFix.LegExerciseStyle getLegExerciseStyle()
      { QuickFix.LegExerciseStyle value = new QuickFix.LegExerciseStyle();
        getField(value); return value; }
      public bool isSet(QuickFix.LegExerciseStyle field)
      { return isSetField(field); }
      public bool isSetLegExerciseStyle()
      { return isSetField(1420); }

      public void set(QuickFix.LegUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.LegUnitOfMeasureQty get(QuickFix.LegUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.LegUnitOfMeasureQty getLegUnitOfMeasureQty()
      { QuickFix.LegUnitOfMeasureQty value = new QuickFix.LegUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetLegUnitOfMeasureQty()
      { return isSetField(1224); }

      public void set(QuickFix.LegPriceUnitOfMeasure value)
      { setField(value); }
      public QuickFix.LegPriceUnitOfMeasure get(QuickFix.LegPriceUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.LegPriceUnitOfMeasure getLegPriceUnitOfMeasure()
      { QuickFix.LegPriceUnitOfMeasure value = new QuickFix.LegPriceUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPriceUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetLegPriceUnitOfMeasure()
      { return isSetField(1421); }

      public void set(QuickFix.LegPriceUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.LegPriceUnitOfMeasureQty get(QuickFix.LegPriceUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.LegPriceUnitOfMeasureQty getLegPriceUnitOfMeasureQty()
      { QuickFix.LegPriceUnitOfMeasureQty value = new QuickFix.LegPriceUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPriceUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetLegPriceUnitOfMeasureQty()
      { return isSetField(1422); }

      public void set(QuickFix.LegContractMultiplierUnit value)
      { setField(value); }
      public QuickFix.LegContractMultiplierUnit get(QuickFix.LegContractMultiplierUnit  value)
      { getField(value); return value; }
      public QuickFix.LegContractMultiplierUnit getLegContractMultiplierUnit()
      { QuickFix.LegContractMultiplierUnit value = new QuickFix.LegContractMultiplierUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.LegContractMultiplierUnit field)
      { return isSetField(field); }
      public bool isSetLegContractMultiplierUnit()
      { return isSetField(1436); }

      public void set(QuickFix.LegFlowScheduleType value)
      { setField(value); }
      public QuickFix.LegFlowScheduleType get(QuickFix.LegFlowScheduleType  value)
      { getField(value); return value; }
      public QuickFix.LegFlowScheduleType getLegFlowScheduleType()
      { QuickFix.LegFlowScheduleType value = new QuickFix.LegFlowScheduleType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegFlowScheduleType field)
      { return isSetField(field); }
      public bool isSetLegFlowScheduleType()
      { return isSetField(1440); }

      public void set(QuickFix.LegQty value)
      { setField(value); }
      public QuickFix.LegQty get(QuickFix.LegQty  value)
      { getField(value); return value; }
      public QuickFix.LegQty getLegQty()
      { QuickFix.LegQty value = new QuickFix.LegQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegQty field)
      { return isSetField(field); }
      public bool isSetLegQty()
      { return isSetField(687); }

      public void set(QuickFix.LegSwapType value)
      { setField(value); }
      public QuickFix.LegSwapType get(QuickFix.LegSwapType  value)
      { getField(value); return value; }
      public QuickFix.LegSwapType getLegSwapType()
      { QuickFix.LegSwapType value = new QuickFix.LegSwapType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSwapType field)
      { return isSetField(field); }
      public bool isSetLegSwapType()
      { return isSetField(690); }

      public void set(QuickFix.NoLegStipulations value)
      { setField(value); }
      public QuickFix.NoLegStipulations get(QuickFix.NoLegStipulations  value)
      { getField(value); return value; }
      public QuickFix.NoLegStipulations getNoLegStipulations()
      { QuickFix.NoLegStipulations value = new QuickFix.NoLegStipulations();
        getField(value); return value; }
      public bool isSet(QuickFix.NoLegStipulations field)
      { return isSetField(field); }
      public bool isSetNoLegStipulations()
      { return isSetField(683); }

      public class NoLegStipulations: QuickFix.Group
      {
      public NoLegStipulations() : base(683,688,message_order ) {}
      static int[] message_order = new int[] {688,689,0};
        public void set(QuickFix.LegStipulationType value)
        { setField(value); }
        public QuickFix.LegStipulationType get(QuickFix.LegStipulationType  value)
        { getField(value); return value; }
        public QuickFix.LegStipulationType getLegStipulationType()
        { QuickFix.LegStipulationType value = new QuickFix.LegStipulationType();
          getField(value); return value; }
        public bool isSet(QuickFix.LegStipulationType field)
        { return isSetField(field); }
        public bool isSetLegStipulationType()
        { return isSetField(688); }

        public void set(QuickFix.LegStipulationValue value)
        { setField(value); }
        public QuickFix.LegStipulationValue get(QuickFix.LegStipulationValue  value)
        { getField(value); return value; }
        public QuickFix.LegStipulationValue getLegStipulationValue()
        { QuickFix.LegStipulationValue value = new QuickFix.LegStipulationValue();
          getField(value); return value; }
        public bool isSet(QuickFix.LegStipulationValue field)
        { return isSetField(field); }
        public bool isSetLegStipulationValue()
        { return isSetField(689); }

      };
      public void set(QuickFix.LegPositionEffect value)
      { setField(value); }
      public QuickFix.LegPositionEffect get(QuickFix.LegPositionEffect  value)
      { getField(value); return value; }
      public QuickFix.LegPositionEffect getLegPositionEffect()
      { QuickFix.LegPositionEffect value = new QuickFix.LegPositionEffect();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPositionEffect field)
      { return isSetField(field); }
      public bool isSetLegPositionEffect()
      { return isSetField(564); }

      public void set(QuickFix.LegCoveredOrUncovered value)
      { setField(value); }
      public QuickFix.LegCoveredOrUncovered get(QuickFix.LegCoveredOrUncovered  value)
      { getField(value); return value; }
      public QuickFix.LegCoveredOrUncovered getLegCoveredOrUncovered()
      { QuickFix.LegCoveredOrUncovered value = new QuickFix.LegCoveredOrUncovered();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCoveredOrUncovered field)
      { return isSetField(field); }
      public bool isSetLegCoveredOrUncovered()
      { return isSetField(565); }

      public void set(QuickFix.NoNestedPartyIDs value)
      { setField(value); }
      public QuickFix.NoNestedPartyIDs get(QuickFix.NoNestedPartyIDs  value)
      { getField(value); return value; }
      public QuickFix.NoNestedPartyIDs getNoNestedPartyIDs()
      { QuickFix.NoNestedPartyIDs value = new QuickFix.NoNestedPartyIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoNestedPartyIDs field)
      { return isSetField(field); }
      public bool isSetNoNestedPartyIDs()
      { return isSetField(539); }

      public class NoNestedPartyIDs: QuickFix.Group
      {
      public NoNestedPartyIDs() : base(539,524,message_order ) {}
      static int[] message_order = new int[] {524,525,538,804,0};
        public void set(QuickFix.NestedPartyID value)
        { setField(value); }
        public QuickFix.NestedPartyID get(QuickFix.NestedPartyID  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyID getNestedPartyID()
        { QuickFix.NestedPartyID value = new QuickFix.NestedPartyID();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyID field)
        { return isSetField(field); }
        public bool isSetNestedPartyID()
        { return isSetField(524); }

        public void set(QuickFix.NestedPartyIDSource value)
        { setField(value); }
        public QuickFix.NestedPartyIDSource get(QuickFix.NestedPartyIDSource  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyIDSource getNestedPartyIDSource()
        { QuickFix.NestedPartyIDSource value = new QuickFix.NestedPartyIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyIDSource field)
        { return isSetField(field); }
        public bool isSetNestedPartyIDSource()
        { return isSetField(525); }

        public void set(QuickFix.NestedPartyRole value)
        { setField(value); }
        public QuickFix.NestedPartyRole get(QuickFix.NestedPartyRole  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyRole getNestedPartyRole()
        { QuickFix.NestedPartyRole value = new QuickFix.NestedPartyRole();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyRole field)
        { return isSetField(field); }
        public bool isSetNestedPartyRole()
        { return isSetField(538); }

        public void set(QuickFix.NoNestedPartySubIDs value)
        { setField(value); }
        public QuickFix.NoNestedPartySubIDs get(QuickFix.NoNestedPartySubIDs  value)
        { getField(value); return value; }
        public QuickFix.NoNestedPartySubIDs getNoNestedPartySubIDs()
        { QuickFix.NoNestedPartySubIDs value = new QuickFix.NoNestedPartySubIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoNestedPartySubIDs field)
        { return isSetField(field); }
        public bool isSetNoNestedPartySubIDs()
        { return isSetField(804); }

        public class NoNestedPartySubIDs: QuickFix.Group
        {
        public NoNestedPartySubIDs() : base(804,545,message_order ) {}
        static int[] message_order = new int[] {545,805,0};
          public void set(QuickFix.NestedPartySubID value)
          { setField(value); }
          public QuickFix.NestedPartySubID get(QuickFix.NestedPartySubID  value)
          { getField(value); return value; }
          public QuickFix.NestedPartySubID getNestedPartySubID()
          { QuickFix.NestedPartySubID value = new QuickFix.NestedPartySubID();
            getField(value); return value; }
          public bool isSet(QuickFix.NestedPartySubID field)
          { return isSetField(field); }
          public bool isSetNestedPartySubID()
          { return isSetField(545); }

          public void set(QuickFix.NestedPartySubIDType value)
          { setField(value); }
          public QuickFix.NestedPartySubIDType get(QuickFix.NestedPartySubIDType  value)
          { getField(value); return value; }
          public QuickFix.NestedPartySubIDType getNestedPartySubIDType()
          { QuickFix.NestedPartySubIDType value = new QuickFix.NestedPartySubIDType();
            getField(value); return value; }
          public bool isSet(QuickFix.NestedPartySubIDType field)
          { return isSetField(field); }
          public bool isSetNestedPartySubIDType()
          { return isSetField(805); }

        };
      };
      public void set(QuickFix.LegRefID value)
      { setField(value); }
      public QuickFix.LegRefID get(QuickFix.LegRefID  value)
      { getField(value); return value; }
      public QuickFix.LegRefID getLegRefID()
      { QuickFix.LegRefID value = new QuickFix.LegRefID();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRefID field)
      { return isSetField(field); }
      public bool isSetLegRefID()
      { return isSetField(654); }

      public void set(QuickFix.LegSettlType value)
      { setField(value); }
      public QuickFix.LegSettlType get(QuickFix.LegSettlType  value)
      { getField(value); return value; }
      public QuickFix.LegSettlType getLegSettlType()
      { QuickFix.LegSettlType value = new QuickFix.LegSettlType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSettlType field)
      { return isSetField(field); }
      public bool isSetLegSettlType()
      { return isSetField(587); }

      public void set(QuickFix.LegSettlDate value)
      { setField(value); }
      public QuickFix.LegSettlDate get(QuickFix.LegSettlDate  value)
      { getField(value); return value; }
      public QuickFix.LegSettlDate getLegSettlDate()
      { QuickFix.LegSettlDate value = new QuickFix.LegSettlDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSettlDate field)
      { return isSetField(field); }
      public bool isSetLegSettlDate()
      { return isSetField(588); }

      public void set(QuickFix.LegLastPx value)
      { setField(value); }
      public QuickFix.LegLastPx get(QuickFix.LegLastPx  value)
      { getField(value); return value; }
      public QuickFix.LegLastPx getLegLastPx()
      { QuickFix.LegLastPx value = new QuickFix.LegLastPx();
        getField(value); return value; }
      public bool isSet(QuickFix.LegLastPx field)
      { return isSetField(field); }
      public bool isSetLegLastPx()
      { return isSetField(637); }

      public void set(QuickFix.LegReportID value)
      { setField(value); }
      public QuickFix.LegReportID get(QuickFix.LegReportID  value)
      { getField(value); return value; }
      public QuickFix.LegReportID getLegReportID()
      { QuickFix.LegReportID value = new QuickFix.LegReportID();
        getField(value); return value; }
      public bool isSet(QuickFix.LegReportID field)
      { return isSetField(field); }
      public bool isSetLegReportID()
      { return isSetField(990); }

      public void set(QuickFix.LegSettlCurrency value)
      { setField(value); }
      public QuickFix.LegSettlCurrency get(QuickFix.LegSettlCurrency  value)
      { getField(value); return value; }
      public QuickFix.LegSettlCurrency getLegSettlCurrency()
      { QuickFix.LegSettlCurrency value = new QuickFix.LegSettlCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSettlCurrency field)
      { return isSetField(field); }
      public bool isSetLegSettlCurrency()
      { return isSetField(675); }

      public void set(QuickFix.LegLastForwardPoints value)
      { setField(value); }
      public QuickFix.LegLastForwardPoints get(QuickFix.LegLastForwardPoints  value)
      { getField(value); return value; }
      public QuickFix.LegLastForwardPoints getLegLastForwardPoints()
      { QuickFix.LegLastForwardPoints value = new QuickFix.LegLastForwardPoints();
        getField(value); return value; }
      public bool isSet(QuickFix.LegLastForwardPoints field)
      { return isSetField(field); }
      public bool isSetLegLastForwardPoints()
      { return isSetField(1073); }

      public void set(QuickFix.LegCalculatedCcyLastQty value)
      { setField(value); }
      public QuickFix.LegCalculatedCcyLastQty get(QuickFix.LegCalculatedCcyLastQty  value)
      { getField(value); return value; }
      public QuickFix.LegCalculatedCcyLastQty getLegCalculatedCcyLastQty()
      { QuickFix.LegCalculatedCcyLastQty value = new QuickFix.LegCalculatedCcyLastQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCalculatedCcyLastQty field)
      { return isSetField(field); }
      public bool isSetLegCalculatedCcyLastQty()
      { return isSetField(1074); }

      public void set(QuickFix.LegGrossTradeAmt value)
      { setField(value); }
      public QuickFix.LegGrossTradeAmt get(QuickFix.LegGrossTradeAmt  value)
      { getField(value); return value; }
      public QuickFix.LegGrossTradeAmt getLegGrossTradeAmt()
      { QuickFix.LegGrossTradeAmt value = new QuickFix.LegGrossTradeAmt();
        getField(value); return value; }
      public bool isSet(QuickFix.LegGrossTradeAmt field)
      { return isSetField(field); }
      public bool isSetLegGrossTradeAmt()
      { return isSetField(1075); }

      public void set(QuickFix.LegNumber value)
      { setField(value); }
      public QuickFix.LegNumber get(QuickFix.LegNumber  value)
      { getField(value); return value; }
      public QuickFix.LegNumber getLegNumber()
      { QuickFix.LegNumber value = new QuickFix.LegNumber();
        getField(value); return value; }
      public bool isSet(QuickFix.LegNumber field)
      { return isSetField(field); }
      public bool isSetLegNumber()
      { return isSetField(1152); }

      public void set(QuickFix.NoOfLegUnderlyings value)
      { setField(value); }
      public QuickFix.NoOfLegUnderlyings get(QuickFix.NoOfLegUnderlyings  value)
      { getField(value); return value; }
      public QuickFix.NoOfLegUnderlyings getNoOfLegUnderlyings()
      { QuickFix.NoOfLegUnderlyings value = new QuickFix.NoOfLegUnderlyings();
        getField(value); return value; }
      public bool isSet(QuickFix.NoOfLegUnderlyings field)
      { return isSetField(field); }
      public bool isSetNoOfLegUnderlyings()
      { return isSetField(1342); }

      public class NoOfLegUnderlyings: QuickFix.Group
      {
      public NoOfLegUnderlyings() : base(1342,1330,message_order ) {}
      static int[] message_order = new int[] {1330,1331,1332,1333,1344,1337,1338,1339,1345,1405,1340,1391,1343,1341,1392,0};
        public void set(QuickFix.UnderlyingLegSymbol value)
        { setField(value); }
        public QuickFix.UnderlyingLegSymbol get(QuickFix.UnderlyingLegSymbol  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegSymbol getUnderlyingLegSymbol()
        { QuickFix.UnderlyingLegSymbol value = new QuickFix.UnderlyingLegSymbol();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegSymbol field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegSymbol()
        { return isSetField(1330); }

        public void set(QuickFix.UnderlyingLegSymbolSfx value)
        { setField(value); }
        public QuickFix.UnderlyingLegSymbolSfx get(QuickFix.UnderlyingLegSymbolSfx  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegSymbolSfx getUnderlyingLegSymbolSfx()
        { QuickFix.UnderlyingLegSymbolSfx value = new QuickFix.UnderlyingLegSymbolSfx();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegSymbolSfx field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegSymbolSfx()
        { return isSetField(1331); }

        public void set(QuickFix.UnderlyingLegSecurityID value)
        { setField(value); }
        public QuickFix.UnderlyingLegSecurityID get(QuickFix.UnderlyingLegSecurityID  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegSecurityID getUnderlyingLegSecurityID()
        { QuickFix.UnderlyingLegSecurityID value = new QuickFix.UnderlyingLegSecurityID();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegSecurityID field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegSecurityID()
        { return isSetField(1332); }

        public void set(QuickFix.UnderlyingLegSecurityIDSource value)
        { setField(value); }
        public QuickFix.UnderlyingLegSecurityIDSource get(QuickFix.UnderlyingLegSecurityIDSource  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegSecurityIDSource getUnderlyingLegSecurityIDSource()
        { QuickFix.UnderlyingLegSecurityIDSource value = new QuickFix.UnderlyingLegSecurityIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegSecurityIDSource field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegSecurityIDSource()
        { return isSetField(1333); }

        public void set(QuickFix.UnderlyingLegCFICode value)
        { setField(value); }
        public QuickFix.UnderlyingLegCFICode get(QuickFix.UnderlyingLegCFICode  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegCFICode getUnderlyingLegCFICode()
        { QuickFix.UnderlyingLegCFICode value = new QuickFix.UnderlyingLegCFICode();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegCFICode field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegCFICode()
        { return isSetField(1344); }

        public void set(QuickFix.UnderlyingLegSecurityType value)
        { setField(value); }
        public QuickFix.UnderlyingLegSecurityType get(QuickFix.UnderlyingLegSecurityType  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegSecurityType getUnderlyingLegSecurityType()
        { QuickFix.UnderlyingLegSecurityType value = new QuickFix.UnderlyingLegSecurityType();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegSecurityType field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegSecurityType()
        { return isSetField(1337); }

        public void set(QuickFix.UnderlyingLegSecuritySubType value)
        { setField(value); }
        public QuickFix.UnderlyingLegSecuritySubType get(QuickFix.UnderlyingLegSecuritySubType  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegSecuritySubType getUnderlyingLegSecuritySubType()
        { QuickFix.UnderlyingLegSecuritySubType value = new QuickFix.UnderlyingLegSecuritySubType();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegSecuritySubType field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegSecuritySubType()
        { return isSetField(1338); }

        public void set(QuickFix.UnderlyingLegMaturityMonthYear value)
        { setField(value); }
        public QuickFix.UnderlyingLegMaturityMonthYear get(QuickFix.UnderlyingLegMaturityMonthYear  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegMaturityMonthYear getUnderlyingLegMaturityMonthYear()
        { QuickFix.UnderlyingLegMaturityMonthYear value = new QuickFix.UnderlyingLegMaturityMonthYear();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegMaturityMonthYear field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegMaturityMonthYear()
        { return isSetField(1339); }

        public void set(QuickFix.UnderlyingLegMaturityDate value)
        { setField(value); }
        public QuickFix.UnderlyingLegMaturityDate get(QuickFix.UnderlyingLegMaturityDate  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegMaturityDate getUnderlyingLegMaturityDate()
        { QuickFix.UnderlyingLegMaturityDate value = new QuickFix.UnderlyingLegMaturityDate();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegMaturityDate field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegMaturityDate()
        { return isSetField(1345); }

        public void set(QuickFix.UnderlyingLegMaturityTime value)
        { setField(value); }
        public QuickFix.UnderlyingLegMaturityTime get(QuickFix.UnderlyingLegMaturityTime  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegMaturityTime getUnderlyingLegMaturityTime()
        { QuickFix.UnderlyingLegMaturityTime value = new QuickFix.UnderlyingLegMaturityTime();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegMaturityTime field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegMaturityTime()
        { return isSetField(1405); }

        public void set(QuickFix.UnderlyingLegStrikePrice value)
        { setField(value); }
        public QuickFix.UnderlyingLegStrikePrice get(QuickFix.UnderlyingLegStrikePrice  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegStrikePrice getUnderlyingLegStrikePrice()
        { QuickFix.UnderlyingLegStrikePrice value = new QuickFix.UnderlyingLegStrikePrice();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegStrikePrice field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegStrikePrice()
        { return isSetField(1340); }

        public void set(QuickFix.UnderlyingLegOptAttribute value)
        { setField(value); }
        public QuickFix.UnderlyingLegOptAttribute get(QuickFix.UnderlyingLegOptAttribute  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegOptAttribute getUnderlyingLegOptAttribute()
        { QuickFix.UnderlyingLegOptAttribute value = new QuickFix.UnderlyingLegOptAttribute();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegOptAttribute field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegOptAttribute()
        { return isSetField(1391); }

        public void set(QuickFix.UnderlyingLegPutOrCall value)
        { setField(value); }
        public QuickFix.UnderlyingLegPutOrCall get(QuickFix.UnderlyingLegPutOrCall  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegPutOrCall getUnderlyingLegPutOrCall()
        { QuickFix.UnderlyingLegPutOrCall value = new QuickFix.UnderlyingLegPutOrCall();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegPutOrCall field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegPutOrCall()
        { return isSetField(1343); }

        public void set(QuickFix.UnderlyingLegSecurityExchange value)
        { setField(value); }
        public QuickFix.UnderlyingLegSecurityExchange get(QuickFix.UnderlyingLegSecurityExchange  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegSecurityExchange getUnderlyingLegSecurityExchange()
        { QuickFix.UnderlyingLegSecurityExchange value = new QuickFix.UnderlyingLegSecurityExchange();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegSecurityExchange field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegSecurityExchange()
        { return isSetField(1341); }

        public void set(QuickFix.UnderlyingLegSecurityDesc value)
        { setField(value); }
        public QuickFix.UnderlyingLegSecurityDesc get(QuickFix.UnderlyingLegSecurityDesc  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingLegSecurityDesc getUnderlyingLegSecurityDesc()
        { QuickFix.UnderlyingLegSecurityDesc value = new QuickFix.UnderlyingLegSecurityDesc();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingLegSecurityDesc field)
        { return isSetField(field); }
        public bool isSetUnderlyingLegSecurityDesc()
        { return isSetField(1392); }

      };
      public void set(QuickFix.LegVolatility value)
      { setField(value); }
      public QuickFix.LegVolatility get(QuickFix.LegVolatility  value)
      { getField(value); return value; }
      public QuickFix.LegVolatility getLegVolatility()
      { QuickFix.LegVolatility value = new QuickFix.LegVolatility();
        getField(value); return value; }
      public bool isSet(QuickFix.LegVolatility field)
      { return isSetField(field); }
      public bool isSetLegVolatility()
      { return isSetField(1379); }

      public void set(QuickFix.LegDividendYield value)
      { setField(value); }
      public QuickFix.LegDividendYield get(QuickFix.LegDividendYield  value)
      { getField(value); return value; }
      public QuickFix.LegDividendYield getLegDividendYield()
      { QuickFix.LegDividendYield value = new QuickFix.LegDividendYield();
        getField(value); return value; }
      public bool isSet(QuickFix.LegDividendYield field)
      { return isSetField(field); }
      public bool isSetLegDividendYield()
      { return isSetField(1381); }

      public void set(QuickFix.LegCurrencyRatio value)
      { setField(value); }
      public QuickFix.LegCurrencyRatio get(QuickFix.LegCurrencyRatio  value)
      { getField(value); return value; }
      public QuickFix.LegCurrencyRatio getLegCurrencyRatio()
      { QuickFix.LegCurrencyRatio value = new QuickFix.LegCurrencyRatio();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCurrencyRatio field)
      { return isSetField(field); }
      public bool isSetLegCurrencyRatio()
      { return isSetField(1383); }

      public void set(QuickFix.LegExecInst value)
      { setField(value); }
      public QuickFix.LegExecInst get(QuickFix.LegExecInst  value)
      { getField(value); return value; }
      public QuickFix.LegExecInst getLegExecInst()
      { QuickFix.LegExecInst value = new QuickFix.LegExecInst();
        getField(value); return value; }
      public bool isSet(QuickFix.LegExecInst field)
      { return isSetField(field); }
      public bool isSetLegExecInst()
      { return isSetField(1384); }

      public void set(QuickFix.LegLastQty value)
      { setField(value); }
      public QuickFix.LegLastQty get(QuickFix.LegLastQty  value)
      { getField(value); return value; }
      public QuickFix.LegLastQty getLegLastQty()
      { QuickFix.LegLastQty value = new QuickFix.LegLastQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegLastQty field)
      { return isSetField(field); }
      public bool isSetLegLastQty()
      { return isSetField(1418); }

    };
    public void set(QuickFix.TransactTime value)
    { setField(value); }
    public QuickFix.TransactTime get(QuickFix.TransactTime  value)
    { getField(value); return value; }
    public QuickFix.TransactTime getTransactTime()
    { QuickFix.TransactTime value = new QuickFix.TransactTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TransactTime field)
    { return isSetField(field); }
    public bool isSetTransactTime()
    { return isSetField(60); }

    public void set(QuickFix.NoTrdRegTimestamps value)
    { setField(value); }
    public QuickFix.NoTrdRegTimestamps get(QuickFix.NoTrdRegTimestamps  value)
    { getField(value); return value; }
    public QuickFix.NoTrdRegTimestamps getNoTrdRegTimestamps()
    { QuickFix.NoTrdRegTimestamps value = new QuickFix.NoTrdRegTimestamps();
      getField(value); return value; }
    public bool isSet(QuickFix.NoTrdRegTimestamps field)
    { return isSetField(field); }
    public bool isSetNoTrdRegTimestamps()
    { return isSetField(768); }

    public class NoTrdRegTimestamps: QuickFix.Group
    {
    public NoTrdRegTimestamps() : base(768,769,message_order ) {}
    static int[] message_order = new int[] {769,770,771,1033,1034,1035,0};
      public void set(QuickFix.TrdRegTimestamp value)
      { setField(value); }
      public QuickFix.TrdRegTimestamp get(QuickFix.TrdRegTimestamp  value)
      { getField(value); return value; }
      public QuickFix.TrdRegTimestamp getTrdRegTimestamp()
      { QuickFix.TrdRegTimestamp value = new QuickFix.TrdRegTimestamp();
        getField(value); return value; }
      public bool isSet(QuickFix.TrdRegTimestamp field)
      { return isSetField(field); }
      public bool isSetTrdRegTimestamp()
      { return isSetField(769); }

      public void set(QuickFix.TrdRegTimestampType value)
      { setField(value); }
      public QuickFix.TrdRegTimestampType get(QuickFix.TrdRegTimestampType  value)
      { getField(value); return value; }
      public QuickFix.TrdRegTimestampType getTrdRegTimestampType()
      { QuickFix.TrdRegTimestampType value = new QuickFix.TrdRegTimestampType();
        getField(value); return value; }
      public bool isSet(QuickFix.TrdRegTimestampType field)
      { return isSetField(field); }
      public bool isSetTrdRegTimestampType()
      { return isSetField(770); }

      public void set(QuickFix.TrdRegTimestampOrigin value)
      { setField(value); }
      public QuickFix.TrdRegTimestampOrigin get(QuickFix.TrdRegTimestampOrigin  value)
      { getField(value); return value; }
      public QuickFix.TrdRegTimestampOrigin getTrdRegTimestampOrigin()
      { QuickFix.TrdRegTimestampOrigin value = new QuickFix.TrdRegTimestampOrigin();
        getField(value); return value; }
      public bool isSet(QuickFix.TrdRegTimestampOrigin field)
      { return isSetField(field); }
      public bool isSetTrdRegTimestampOrigin()
      { return isSetField(771); }

      public void set(QuickFix.DeskType value)
      { setField(value); }
      public QuickFix.DeskType get(QuickFix.DeskType  value)
      { getField(value); return value; }
      public QuickFix.DeskType getDeskType()
      { QuickFix.DeskType value = new QuickFix.DeskType();
        getField(value); return value; }
      public bool isSet(QuickFix.DeskType field)
      { return isSetField(field); }
      public bool isSetDeskType()
      { return isSetField(1033); }

      public void set(QuickFix.DeskTypeSource value)
      { setField(value); }
      public QuickFix.DeskTypeSource get(QuickFix.DeskTypeSource  value)
      { getField(value); return value; }
      public QuickFix.DeskTypeSource getDeskTypeSource()
      { QuickFix.DeskTypeSource value = new QuickFix.DeskTypeSource();
        getField(value); return value; }
      public bool isSet(QuickFix.DeskTypeSource field)
      { return isSetField(field); }
      public bool isSetDeskTypeSource()
      { return isSetField(1034); }

      public void set(QuickFix.DeskOrderHandlingInst value)
      { setField(value); }
      public QuickFix.DeskOrderHandlingInst get(QuickFix.DeskOrderHandlingInst  value)
      { getField(value); return value; }
      public QuickFix.DeskOrderHandlingInst getDeskOrderHandlingInst()
      { QuickFix.DeskOrderHandlingInst value = new QuickFix.DeskOrderHandlingInst();
        getField(value); return value; }
      public bool isSet(QuickFix.DeskOrderHandlingInst field)
      { return isSetField(field); }
      public bool isSetDeskOrderHandlingInst()
      { return isSetField(1035); }

    };
    public void set(QuickFix.SettlType value)
    { setField(value); }
    public QuickFix.SettlType get(QuickFix.SettlType  value)
    { getField(value); return value; }
    public QuickFix.SettlType getSettlType()
    { QuickFix.SettlType value = new QuickFix.SettlType();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlType field)
    { return isSetField(field); }
    public bool isSetSettlType()
    { return isSetField(63); }

    public void set(QuickFix.SettlDate value)
    { setField(value); }
    public QuickFix.SettlDate get(QuickFix.SettlDate  value)
    { getField(value); return value; }
    public QuickFix.SettlDate getSettlDate()
    { QuickFix.SettlDate value = new QuickFix.SettlDate();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlDate field)
    { return isSetField(field); }
    public bool isSetSettlDate()
    { return isSetField(64); }

    public void set(QuickFix.MatchStatus value)
    { setField(value); }
    public QuickFix.MatchStatus get(QuickFix.MatchStatus  value)
    { getField(value); return value; }
    public QuickFix.MatchStatus getMatchStatus()
    { QuickFix.MatchStatus value = new QuickFix.MatchStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.MatchStatus field)
    { return isSetField(field); }
    public bool isSetMatchStatus()
    { return isSetField(573); }

    public void set(QuickFix.MatchType value)
    { setField(value); }
    public QuickFix.MatchType get(QuickFix.MatchType  value)
    { getField(value); return value; }
    public QuickFix.MatchType getMatchType()
    { QuickFix.MatchType value = new QuickFix.MatchType();
      getField(value); return value; }
    public bool isSet(QuickFix.MatchType field)
    { return isSetField(field); }
    public bool isSetMatchType()
    { return isSetField(574); }

    public void set(QuickFix.NoSides value)
    { setField(value); }
    public QuickFix.NoSides get(QuickFix.NoSides  value)
    { getField(value); return value; }
    public QuickFix.NoSides getNoSides()
    { QuickFix.NoSides value = new QuickFix.NoSides();
      getField(value); return value; }
    public bool isSet(QuickFix.NoSides field)
    { return isSetField(field); }
    public bool isSetNoSides()
    { return isSetField(552); }

    public class NoSides: QuickFix.Group
    {
    public NoSides() : base(552,54,message_order ) {}
    static int[] message_order = new int[] {54,453,1,660,581,81,575,576,578,579,376,377,582,336,625,943,12,13,479,497,157,230,158,159,738,920,921,922,238,237,118,119,155,156,77,58,354,355,752,518,232,136,825,826,591,70,78,1009,1005,1006,1007,83,1008,1016,1072,1057,1139,430,1154,1155,1158,1115,37,198,11,526,66,1080,1081,1431,40,44,99,18,39,151,14,59,126,528,529,1432,821,1093,483,586,775,1427,1428,1429,1444,0};
      public void set(QuickFix.Side value)
      { setField(value); }
      public QuickFix.Side get(QuickFix.Side  value)
      { getField(value); return value; }
      public QuickFix.Side getSide()
      { QuickFix.Side value = new QuickFix.Side();
        getField(value); return value; }
      public bool isSet(QuickFix.Side field)
      { return isSetField(field); }
      public bool isSetSide()
      { return isSetField(54); }

      public void set(QuickFix.NoPartyIDs value)
      { setField(value); }
      public QuickFix.NoPartyIDs get(QuickFix.NoPartyIDs  value)
      { getField(value); return value; }
      public QuickFix.NoPartyIDs getNoPartyIDs()
      { QuickFix.NoPartyIDs value = new QuickFix.NoPartyIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoPartyIDs field)
      { return isSetField(field); }
      public bool isSetNoPartyIDs()
      { return isSetField(453); }

      public class NoPartyIDs: QuickFix.Group
      {
      public NoPartyIDs() : base(453,448,message_order ) {}
      static int[] message_order = new int[] {448,447,452,802,0};
        public void set(QuickFix.PartyID value)
        { setField(value); }
        public QuickFix.PartyID get(QuickFix.PartyID  value)
        { getField(value); return value; }
        public QuickFix.PartyID getPartyID()
        { QuickFix.PartyID value = new QuickFix.PartyID();
          getField(value); return value; }
        public bool isSet(QuickFix.PartyID field)
        { return isSetField(field); }
        public bool isSetPartyID()
        { return isSetField(448); }

        public void set(QuickFix.PartyIDSource value)
        { setField(value); }
        public QuickFix.PartyIDSource get(QuickFix.PartyIDSource  value)
        { getField(value); return value; }
        public QuickFix.PartyIDSource getPartyIDSource()
        { QuickFix.PartyIDSource value = new QuickFix.PartyIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.PartyIDSource field)
        { return isSetField(field); }
        public bool isSetPartyIDSource()
        { return isSetField(447); }

        public void set(QuickFix.PartyRole value)
        { setField(value); }
        public QuickFix.PartyRole get(QuickFix.PartyRole  value)
        { getField(value); return value; }
        public QuickFix.PartyRole getPartyRole()
        { QuickFix.PartyRole value = new QuickFix.PartyRole();
          getField(value); return value; }
        public bool isSet(QuickFix.PartyRole field)
        { return isSetField(field); }
        public bool isSetPartyRole()
        { return isSetField(452); }

        public void set(QuickFix.NoPartySubIDs value)
        { setField(value); }
        public QuickFix.NoPartySubIDs get(QuickFix.NoPartySubIDs  value)
        { getField(value); return value; }
        public QuickFix.NoPartySubIDs getNoPartySubIDs()
        { QuickFix.NoPartySubIDs value = new QuickFix.NoPartySubIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoPartySubIDs field)
        { return isSetField(field); }
        public bool isSetNoPartySubIDs()
        { return isSetField(802); }

        public class NoPartySubIDs: QuickFix.Group
        {
        public NoPartySubIDs() : base(802,523,message_order ) {}
        static int[] message_order = new int[] {523,803,0};
          public void set(QuickFix.PartySubID value)
          { setField(value); }
          public QuickFix.PartySubID get(QuickFix.PartySubID  value)
          { getField(value); return value; }
          public QuickFix.PartySubID getPartySubID()
          { QuickFix.PartySubID value = new QuickFix.PartySubID();
            getField(value); return value; }
          public bool isSet(QuickFix.PartySubID field)
          { return isSetField(field); }
          public bool isSetPartySubID()
          { return isSetField(523); }

          public void set(QuickFix.PartySubIDType value)
          { setField(value); }
          public QuickFix.PartySubIDType get(QuickFix.PartySubIDType  value)
          { getField(value); return value; }
          public QuickFix.PartySubIDType getPartySubIDType()
          { QuickFix.PartySubIDType value = new QuickFix.PartySubIDType();
            getField(value); return value; }
          public bool isSet(QuickFix.PartySubIDType field)
          { return isSetField(field); }
          public bool isSetPartySubIDType()
          { return isSetField(803); }

        };
      };
      public void set(QuickFix.Account value)
      { setField(value); }
      public QuickFix.Account get(QuickFix.Account  value)
      { getField(value); return value; }
      public QuickFix.Account getAccount()
      { QuickFix.Account value = new QuickFix.Account();
        getField(value); return value; }
      public bool isSet(QuickFix.Account field)
      { return isSetField(field); }
      public bool isSetAccount()
      { return isSetField(1); }

      public void set(QuickFix.AcctIDSource value)
      { setField(value); }
      public QuickFix.AcctIDSource get(QuickFix.AcctIDSource  value)
      { getField(value); return value; }
      public QuickFix.AcctIDSource getAcctIDSource()
      { QuickFix.AcctIDSource value = new QuickFix.AcctIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.AcctIDSource field)
      { return isSetField(field); }
      public bool isSetAcctIDSource()
      { return isSetField(660); }

      public void set(QuickFix.AccountType value)
      { setField(value); }
      public QuickFix.AccountType get(QuickFix.AccountType  value)
      { getField(value); return value; }
      public QuickFix.AccountType getAccountType()
      { QuickFix.AccountType value = new QuickFix.AccountType();
        getField(value); return value; }
      public bool isSet(QuickFix.AccountType field)
      { return isSetField(field); }
      public bool isSetAccountType()
      { return isSetField(581); }

      public void set(QuickFix.ProcessCode value)
      { setField(value); }
      public QuickFix.ProcessCode get(QuickFix.ProcessCode  value)
      { getField(value); return value; }
      public QuickFix.ProcessCode getProcessCode()
      { QuickFix.ProcessCode value = new QuickFix.ProcessCode();
        getField(value); return value; }
      public bool isSet(QuickFix.ProcessCode field)
      { return isSetField(field); }
      public bool isSetProcessCode()
      { return isSetField(81); }

      public void set(QuickFix.OddLot value)
      { setField(value); }
      public QuickFix.OddLot get(QuickFix.OddLot  value)
      { getField(value); return value; }
      public QuickFix.OddLot getOddLot()
      { QuickFix.OddLot value = new QuickFix.OddLot();
        getField(value); return value; }
      public bool isSet(QuickFix.OddLot field)
      { return isSetField(field); }
      public bool isSetOddLot()
      { return isSetField(575); }

      public void set(QuickFix.NoClearingInstructions value)
      { setField(value); }
      public QuickFix.NoClearingInstructions get(QuickFix.NoClearingInstructions  value)
      { getField(value); return value; }
      public QuickFix.NoClearingInstructions getNoClearingInstructions()
      { QuickFix.NoClearingInstructions value = new QuickFix.NoClearingInstructions();
        getField(value); return value; }
      public bool isSet(QuickFix.NoClearingInstructions field)
      { return isSetField(field); }
      public bool isSetNoClearingInstructions()
      { return isSetField(576); }

      public class NoClearingInstructions: QuickFix.Group
      {
      public NoClearingInstructions() : base(576,577,message_order ) {}
      static int[] message_order = new int[] {577,0};
        public void set(QuickFix.ClearingInstruction value)
        { setField(value); }
        public QuickFix.ClearingInstruction get(QuickFix.ClearingInstruction  value)
        { getField(value); return value; }
        public QuickFix.ClearingInstruction getClearingInstruction()
        { QuickFix.ClearingInstruction value = new QuickFix.ClearingInstruction();
          getField(value); return value; }
        public bool isSet(QuickFix.ClearingInstruction field)
        { return isSetField(field); }
        public bool isSetClearingInstruction()
        { return isSetField(577); }

      };
      public void set(QuickFix.TradeInputSource value)
      { setField(value); }
      public QuickFix.TradeInputSource get(QuickFix.TradeInputSource  value)
      { getField(value); return value; }
      public QuickFix.TradeInputSource getTradeInputSource()
      { QuickFix.TradeInputSource value = new QuickFix.TradeInputSource();
        getField(value); return value; }
      public bool isSet(QuickFix.TradeInputSource field)
      { return isSetField(field); }
      public bool isSetTradeInputSource()
      { return isSetField(578); }

      public void set(QuickFix.TradeInputDevice value)
      { setField(value); }
      public QuickFix.TradeInputDevice get(QuickFix.TradeInputDevice  value)
      { getField(value); return value; }
      public QuickFix.TradeInputDevice getTradeInputDevice()
      { QuickFix.TradeInputDevice value = new QuickFix.TradeInputDevice();
        getField(value); return value; }
      public bool isSet(QuickFix.TradeInputDevice field)
      { return isSetField(field); }
      public bool isSetTradeInputDevice()
      { return isSetField(579); }

      public void set(QuickFix.ComplianceID value)
      { setField(value); }
      public QuickFix.ComplianceID get(QuickFix.ComplianceID  value)
      { getField(value); return value; }
      public QuickFix.ComplianceID getComplianceID()
      { QuickFix.ComplianceID value = new QuickFix.ComplianceID();
        getField(value); return value; }
      public bool isSet(QuickFix.ComplianceID field)
      { return isSetField(field); }
      public bool isSetComplianceID()
      { return isSetField(376); }

      public void set(QuickFix.SolicitedFlag value)
      { setField(value); }
      public QuickFix.SolicitedFlag get(QuickFix.SolicitedFlag  value)
      { getField(value); return value; }
      public QuickFix.SolicitedFlag getSolicitedFlag()
      { QuickFix.SolicitedFlag value = new QuickFix.SolicitedFlag();
        getField(value); return value; }
      public bool isSet(QuickFix.SolicitedFlag field)
      { return isSetField(field); }
      public bool isSetSolicitedFlag()
      { return isSetField(377); }

      public void set(QuickFix.CustOrderCapacity value)
      { setField(value); }
      public QuickFix.CustOrderCapacity get(QuickFix.CustOrderCapacity  value)
      { getField(value); return value; }
      public QuickFix.CustOrderCapacity getCustOrderCapacity()
      { QuickFix.CustOrderCapacity value = new QuickFix.CustOrderCapacity();
        getField(value); return value; }
      public bool isSet(QuickFix.CustOrderCapacity field)
      { return isSetField(field); }
      public bool isSetCustOrderCapacity()
      { return isSetField(582); }

      public void set(QuickFix.TradingSessionID value)
      { setField(value); }
      public QuickFix.TradingSessionID get(QuickFix.TradingSessionID  value)
      { getField(value); return value; }
      public QuickFix.TradingSessionID getTradingSessionID()
      { QuickFix.TradingSessionID value = new QuickFix.TradingSessionID();
        getField(value); return value; }
      public bool isSet(QuickFix.TradingSessionID field)
      { return isSetField(field); }
      public bool isSetTradingSessionID()
      { return isSetField(336); }

      public void set(QuickFix.TradingSessionSubID value)
      { setField(value); }
      public QuickFix.TradingSessionSubID get(QuickFix.TradingSessionSubID  value)
      { getField(value); return value; }
      public QuickFix.TradingSessionSubID getTradingSessionSubID()
      { QuickFix.TradingSessionSubID value = new QuickFix.TradingSessionSubID();
        getField(value); return value; }
      public bool isSet(QuickFix.TradingSessionSubID field)
      { return isSetField(field); }
      public bool isSetTradingSessionSubID()
      { return isSetField(625); }

      public void set(QuickFix.TimeBracket value)
      { setField(value); }
      public QuickFix.TimeBracket get(QuickFix.TimeBracket  value)
      { getField(value); return value; }
      public QuickFix.TimeBracket getTimeBracket()
      { QuickFix.TimeBracket value = new QuickFix.TimeBracket();
        getField(value); return value; }
      public bool isSet(QuickFix.TimeBracket field)
      { return isSetField(field); }
      public bool isSetTimeBracket()
      { return isSetField(943); }

      public void set(QuickFix.Commission value)
      { setField(value); }
      public QuickFix.Commission get(QuickFix.Commission  value)
      { getField(value); return value; }
      public QuickFix.Commission getCommission()
      { QuickFix.Commission value = new QuickFix.Commission();
        getField(value); return value; }
      public bool isSet(QuickFix.Commission field)
      { return isSetField(field); }
      public bool isSetCommission()
      { return isSetField(12); }

      public void set(QuickFix.CommType value)
      { setField(value); }
      public QuickFix.CommType get(QuickFix.CommType  value)
      { getField(value); return value; }
      public QuickFix.CommType getCommType()
      { QuickFix.CommType value = new QuickFix.CommType();
        getField(value); return value; }
      public bool isSet(QuickFix.CommType field)
      { return isSetField(field); }
      public bool isSetCommType()
      { return isSetField(13); }

      public void set(QuickFix.CommCurrency value)
      { setField(value); }
      public QuickFix.CommCurrency get(QuickFix.CommCurrency  value)
      { getField(value); return value; }
      public QuickFix.CommCurrency getCommCurrency()
      { QuickFix.CommCurrency value = new QuickFix.CommCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.CommCurrency field)
      { return isSetField(field); }
      public bool isSetCommCurrency()
      { return isSetField(479); }

      public void set(QuickFix.FundRenewWaiv value)
      { setField(value); }
      public QuickFix.FundRenewWaiv get(QuickFix.FundRenewWaiv  value)
      { getField(value); return value; }
      public QuickFix.FundRenewWaiv getFundRenewWaiv()
      { QuickFix.FundRenewWaiv value = new QuickFix.FundRenewWaiv();
        getField(value); return value; }
      public bool isSet(QuickFix.FundRenewWaiv field)
      { return isSetField(field); }
      public bool isSetFundRenewWaiv()
      { return isSetField(497); }

      public void set(QuickFix.NumDaysInterest value)
      { setField(value); }
      public QuickFix.NumDaysInterest get(QuickFix.NumDaysInterest  value)
      { getField(value); return value; }
      public QuickFix.NumDaysInterest getNumDaysInterest()
      { QuickFix.NumDaysInterest value = new QuickFix.NumDaysInterest();
        getField(value); return value; }
      public bool isSet(QuickFix.NumDaysInterest field)
      { return isSetField(field); }
      public bool isSetNumDaysInterest()
      { return isSetField(157); }

      public void set(QuickFix.ExDate value)
      { setField(value); }
      public QuickFix.ExDate get(QuickFix.ExDate  value)
      { getField(value); return value; }
      public QuickFix.ExDate getExDate()
      { QuickFix.ExDate value = new QuickFix.ExDate();
        getField(value); return value; }
      public bool isSet(QuickFix.ExDate field)
      { return isSetField(field); }
      public bool isSetExDate()
      { return isSetField(230); }

      public void set(QuickFix.AccruedInterestRate value)
      { setField(value); }
      public QuickFix.AccruedInterestRate get(QuickFix.AccruedInterestRate  value)
      { getField(value); return value; }
      public QuickFix.AccruedInterestRate getAccruedInterestRate()
      { QuickFix.AccruedInterestRate value = new QuickFix.AccruedInterestRate();
        getField(value); return value; }
      public bool isSet(QuickFix.AccruedInterestRate field)
      { return isSetField(field); }
      public bool isSetAccruedInterestRate()
      { return isSetField(158); }

      public void set(QuickFix.AccruedInterestAmt value)
      { setField(value); }
      public QuickFix.AccruedInterestAmt get(QuickFix.AccruedInterestAmt  value)
      { getField(value); return value; }
      public QuickFix.AccruedInterestAmt getAccruedInterestAmt()
      { QuickFix.AccruedInterestAmt value = new QuickFix.AccruedInterestAmt();
        getField(value); return value; }
      public bool isSet(QuickFix.AccruedInterestAmt field)
      { return isSetField(field); }
      public bool isSetAccruedInterestAmt()
      { return isSetField(159); }

      public void set(QuickFix.InterestAtMaturity value)
      { setField(value); }
      public QuickFix.InterestAtMaturity get(QuickFix.InterestAtMaturity  value)
      { getField(value); return value; }
      public QuickFix.InterestAtMaturity getInterestAtMaturity()
      { QuickFix.InterestAtMaturity value = new QuickFix.InterestAtMaturity();
        getField(value); return value; }
      public bool isSet(QuickFix.InterestAtMaturity field)
      { return isSetField(field); }
      public bool isSetInterestAtMaturity()
      { return isSetField(738); }

      public void set(QuickFix.EndAccruedInterestAmt value)
      { setField(value); }
      public QuickFix.EndAccruedInterestAmt get(QuickFix.EndAccruedInterestAmt  value)
      { getField(value); return value; }
      public QuickFix.EndAccruedInterestAmt getEndAccruedInterestAmt()
      { QuickFix.EndAccruedInterestAmt value = new QuickFix.EndAccruedInterestAmt();
        getField(value); return value; }
      public bool isSet(QuickFix.EndAccruedInterestAmt field)
      { return isSetField(field); }
      public bool isSetEndAccruedInterestAmt()
      { return isSetField(920); }

      public void set(QuickFix.StartCash value)
      { setField(value); }
      public QuickFix.StartCash get(QuickFix.StartCash  value)
      { getField(value); return value; }
      public QuickFix.StartCash getStartCash()
      { QuickFix.StartCash value = new QuickFix.StartCash();
        getField(value); return value; }
      public bool isSet(QuickFix.StartCash field)
      { return isSetField(field); }
      public bool isSetStartCash()
      { return isSetField(921); }

      public void set(QuickFix.EndCash value)
      { setField(value); }
      public QuickFix.EndCash get(QuickFix.EndCash  value)
      { getField(value); return value; }
      public QuickFix.EndCash getEndCash()
      { QuickFix.EndCash value = new QuickFix.EndCash();
        getField(value); return value; }
      public bool isSet(QuickFix.EndCash field)
      { return isSetField(field); }
      public bool isSetEndCash()
      { return isSetField(922); }

      public void set(QuickFix.Concession value)
      { setField(value); }
      public QuickFix.Concession get(QuickFix.Concession  value)
      { getField(value); return value; }
      public QuickFix.Concession getConcession()
      { QuickFix.Concession value = new QuickFix.Concession();
        getField(value); return value; }
      public bool isSet(QuickFix.Concession field)
      { return isSetField(field); }
      public bool isSetConcession()
      { return isSetField(238); }

      public void set(QuickFix.TotalTakedown value)
      { setField(value); }
      public QuickFix.TotalTakedown get(QuickFix.TotalTakedown  value)
      { getField(value); return value; }
      public QuickFix.TotalTakedown getTotalTakedown()
      { QuickFix.TotalTakedown value = new QuickFix.TotalTakedown();
        getField(value); return value; }
      public bool isSet(QuickFix.TotalTakedown field)
      { return isSetField(field); }
      public bool isSetTotalTakedown()
      { return isSetField(237); }

      public void set(QuickFix.NetMoney value)
      { setField(value); }
      public QuickFix.NetMoney get(QuickFix.NetMoney  value)
      { getField(value); return value; }
      public QuickFix.NetMoney getNetMoney()
      { QuickFix.NetMoney value = new QuickFix.NetMoney();
        getField(value); return value; }
      public bool isSet(QuickFix.NetMoney field)
      { return isSetField(field); }
      public bool isSetNetMoney()
      { return isSetField(118); }

      public void set(QuickFix.SettlCurrAmt value)
      { setField(value); }
      public QuickFix.SettlCurrAmt get(QuickFix.SettlCurrAmt  value)
      { getField(value); return value; }
      public QuickFix.SettlCurrAmt getSettlCurrAmt()
      { QuickFix.SettlCurrAmt value = new QuickFix.SettlCurrAmt();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlCurrAmt field)
      { return isSetField(field); }
      public bool isSetSettlCurrAmt()
      { return isSetField(119); }

      public void set(QuickFix.SettlCurrFxRate value)
      { setField(value); }
      public QuickFix.SettlCurrFxRate get(QuickFix.SettlCurrFxRate  value)
      { getField(value); return value; }
      public QuickFix.SettlCurrFxRate getSettlCurrFxRate()
      { QuickFix.SettlCurrFxRate value = new QuickFix.SettlCurrFxRate();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlCurrFxRate field)
      { return isSetField(field); }
      public bool isSetSettlCurrFxRate()
      { return isSetField(155); }

      public void set(QuickFix.SettlCurrFxRateCalc value)
      { setField(value); }
      public QuickFix.SettlCurrFxRateCalc get(QuickFix.SettlCurrFxRateCalc  value)
      { getField(value); return value; }
      public QuickFix.SettlCurrFxRateCalc getSettlCurrFxRateCalc()
      { QuickFix.SettlCurrFxRateCalc value = new QuickFix.SettlCurrFxRateCalc();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlCurrFxRateCalc field)
      { return isSetField(field); }
      public bool isSetSettlCurrFxRateCalc()
      { return isSetField(156); }

      public void set(QuickFix.PositionEffect value)
      { setField(value); }
      public QuickFix.PositionEffect get(QuickFix.PositionEffect  value)
      { getField(value); return value; }
      public QuickFix.PositionEffect getPositionEffect()
      { QuickFix.PositionEffect value = new QuickFix.PositionEffect();
        getField(value); return value; }
      public bool isSet(QuickFix.PositionEffect field)
      { return isSetField(field); }
      public bool isSetPositionEffect()
      { return isSetField(77); }

      public void set(QuickFix.Text value)
      { setField(value); }
      public QuickFix.Text get(QuickFix.Text  value)
      { getField(value); return value; }
      public QuickFix.Text getText()
      { QuickFix.Text value = new QuickFix.Text();
        getField(value); return value; }
      public bool isSet(QuickFix.Text field)
      { return isSetField(field); }
      public bool isSetText()
      { return isSetField(58); }

      public void set(QuickFix.EncodedTextLen value)
      { setField(value); }
      public QuickFix.EncodedTextLen get(QuickFix.EncodedTextLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedTextLen getEncodedTextLen()
      { QuickFix.EncodedTextLen value = new QuickFix.EncodedTextLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedTextLen field)
      { return isSetField(field); }
      public bool isSetEncodedTextLen()
      { return isSetField(354); }

      public void set(QuickFix.EncodedText value)
      { setField(value); }
      public QuickFix.EncodedText get(QuickFix.EncodedText  value)
      { getField(value); return value; }
      public QuickFix.EncodedText getEncodedText()
      { QuickFix.EncodedText value = new QuickFix.EncodedText();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedText field)
      { return isSetField(field); }
      public bool isSetEncodedText()
      { return isSetField(355); }

      public void set(QuickFix.SideMultiLegReportingType value)
      { setField(value); }
      public QuickFix.SideMultiLegReportingType get(QuickFix.SideMultiLegReportingType  value)
      { getField(value); return value; }
      public QuickFix.SideMultiLegReportingType getSideMultiLegReportingType()
      { QuickFix.SideMultiLegReportingType value = new QuickFix.SideMultiLegReportingType();
        getField(value); return value; }
      public bool isSet(QuickFix.SideMultiLegReportingType field)
      { return isSetField(field); }
      public bool isSetSideMultiLegReportingType()
      { return isSetField(752); }

      public void set(QuickFix.NoContAmts value)
      { setField(value); }
      public QuickFix.NoContAmts get(QuickFix.NoContAmts  value)
      { getField(value); return value; }
      public QuickFix.NoContAmts getNoContAmts()
      { QuickFix.NoContAmts value = new QuickFix.NoContAmts();
        getField(value); return value; }
      public bool isSet(QuickFix.NoContAmts field)
      { return isSetField(field); }
      public bool isSetNoContAmts()
      { return isSetField(518); }

      public class NoContAmts: QuickFix.Group
      {
      public NoContAmts() : base(518,519,message_order ) {}
      static int[] message_order = new int[] {519,520,521,0};
        public void set(QuickFix.ContAmtType value)
        { setField(value); }
        public QuickFix.ContAmtType get(QuickFix.ContAmtType  value)
        { getField(value); return value; }
        public QuickFix.ContAmtType getContAmtType()
        { QuickFix.ContAmtType value = new QuickFix.ContAmtType();
          getField(value); return value; }
        public bool isSet(QuickFix.ContAmtType field)
        { return isSetField(field); }
        public bool isSetContAmtType()
        { return isSetField(519); }

        public void set(QuickFix.ContAmtValue value)
        { setField(value); }
        public QuickFix.ContAmtValue get(QuickFix.ContAmtValue  value)
        { getField(value); return value; }
        public QuickFix.ContAmtValue getContAmtValue()
        { QuickFix.ContAmtValue value = new QuickFix.ContAmtValue();
          getField(value); return value; }
        public bool isSet(QuickFix.ContAmtValue field)
        { return isSetField(field); }
        public bool isSetContAmtValue()
        { return isSetField(520); }

        public void set(QuickFix.ContAmtCurr value)
        { setField(value); }
        public QuickFix.ContAmtCurr get(QuickFix.ContAmtCurr  value)
        { getField(value); return value; }
        public QuickFix.ContAmtCurr getContAmtCurr()
        { QuickFix.ContAmtCurr value = new QuickFix.ContAmtCurr();
          getField(value); return value; }
        public bool isSet(QuickFix.ContAmtCurr field)
        { return isSetField(field); }
        public bool isSetContAmtCurr()
        { return isSetField(521); }

      };
      public void set(QuickFix.NoStipulations value)
      { setField(value); }
      public QuickFix.NoStipulations get(QuickFix.NoStipulations  value)
      { getField(value); return value; }
      public QuickFix.NoStipulations getNoStipulations()
      { QuickFix.NoStipulations value = new QuickFix.NoStipulations();
        getField(value); return value; }
      public bool isSet(QuickFix.NoStipulations field)
      { return isSetField(field); }
      public bool isSetNoStipulations()
      { return isSetField(232); }

      public class NoStipulations: QuickFix.Group
      {
      public NoStipulations() : base(232,233,message_order ) {}
      static int[] message_order = new int[] {233,234,0};
        public void set(QuickFix.StipulationType value)
        { setField(value); }
        public QuickFix.StipulationType get(QuickFix.StipulationType  value)
        { getField(value); return value; }
        public QuickFix.StipulationType getStipulationType()
        { QuickFix.StipulationType value = new QuickFix.StipulationType();
          getField(value); return value; }
        public bool isSet(QuickFix.StipulationType field)
        { return isSetField(field); }
        public bool isSetStipulationType()
        { return isSetField(233); }

        public void set(QuickFix.StipulationValue value)
        { setField(value); }
        public QuickFix.StipulationValue get(QuickFix.StipulationValue  value)
        { getField(value); return value; }
        public QuickFix.StipulationValue getStipulationValue()
        { QuickFix.StipulationValue value = new QuickFix.StipulationValue();
          getField(value); return value; }
        public bool isSet(QuickFix.StipulationValue field)
        { return isSetField(field); }
        public bool isSetStipulationValue()
        { return isSetField(234); }

      };
      public void set(QuickFix.NoMiscFees value)
      { setField(value); }
      public QuickFix.NoMiscFees get(QuickFix.NoMiscFees  value)
      { getField(value); return value; }
      public QuickFix.NoMiscFees getNoMiscFees()
      { QuickFix.NoMiscFees value = new QuickFix.NoMiscFees();
        getField(value); return value; }
      public bool isSet(QuickFix.NoMiscFees field)
      { return isSetField(field); }
      public bool isSetNoMiscFees()
      { return isSetField(136); }

      public class NoMiscFees: QuickFix.Group
      {
      public NoMiscFees() : base(136,137,message_order ) {}
      static int[] message_order = new int[] {137,138,139,891,0};
        public void set(QuickFix.MiscFeeAmt value)
        { setField(value); }
        public QuickFix.MiscFeeAmt get(QuickFix.MiscFeeAmt  value)
        { getField(value); return value; }
        public QuickFix.MiscFeeAmt getMiscFeeAmt()
        { QuickFix.MiscFeeAmt value = new QuickFix.MiscFeeAmt();
          getField(value); return value; }
        public bool isSet(QuickFix.MiscFeeAmt field)
        { return isSetField(field); }
        public bool isSetMiscFeeAmt()
        { return isSetField(137); }

        public void set(QuickFix.MiscFeeCurr value)
        { setField(value); }
        public QuickFix.MiscFeeCurr get(QuickFix.MiscFeeCurr  value)
        { getField(value); return value; }
        public QuickFix.MiscFeeCurr getMiscFeeCurr()
        { QuickFix.MiscFeeCurr value = new QuickFix.MiscFeeCurr();
          getField(value); return value; }
        public bool isSet(QuickFix.MiscFeeCurr field)
        { return isSetField(field); }
        public bool isSetMiscFeeCurr()
        { return isSetField(138); }

        public void set(QuickFix.MiscFeeType value)
        { setField(value); }
        public QuickFix.MiscFeeType get(QuickFix.MiscFeeType  value)
        { getField(value); return value; }
        public QuickFix.MiscFeeType getMiscFeeType()
        { QuickFix.MiscFeeType value = new QuickFix.MiscFeeType();
          getField(value); return value; }
        public bool isSet(QuickFix.MiscFeeType field)
        { return isSetField(field); }
        public bool isSetMiscFeeType()
        { return isSetField(139); }

        public void set(QuickFix.MiscFeeBasis value)
        { setField(value); }
        public QuickFix.MiscFeeBasis get(QuickFix.MiscFeeBasis  value)
        { getField(value); return value; }
        public QuickFix.MiscFeeBasis getMiscFeeBasis()
        { QuickFix.MiscFeeBasis value = new QuickFix.MiscFeeBasis();
          getField(value); return value; }
        public bool isSet(QuickFix.MiscFeeBasis field)
        { return isSetField(field); }
        public bool isSetMiscFeeBasis()
        { return isSetField(891); }

      };
      public void set(QuickFix.ExchangeRule value)
      { setField(value); }
      public QuickFix.ExchangeRule get(QuickFix.ExchangeRule  value)
      { getField(value); return value; }
      public QuickFix.ExchangeRule getExchangeRule()
      { QuickFix.ExchangeRule value = new QuickFix.ExchangeRule();
        getField(value); return value; }
      public bool isSet(QuickFix.ExchangeRule field)
      { return isSetField(field); }
      public bool isSetExchangeRule()
      { return isSetField(825); }

      public void set(QuickFix.TradeAllocIndicator value)
      { setField(value); }
      public QuickFix.TradeAllocIndicator get(QuickFix.TradeAllocIndicator  value)
      { getField(value); return value; }
      public QuickFix.TradeAllocIndicator getTradeAllocIndicator()
      { QuickFix.TradeAllocIndicator value = new QuickFix.TradeAllocIndicator();
        getField(value); return value; }
      public bool isSet(QuickFix.TradeAllocIndicator field)
      { return isSetField(field); }
      public bool isSetTradeAllocIndicator()
      { return isSetField(826); }

      public void set(QuickFix.PreallocMethod value)
      { setField(value); }
      public QuickFix.PreallocMethod get(QuickFix.PreallocMethod  value)
      { getField(value); return value; }
      public QuickFix.PreallocMethod getPreallocMethod()
      { QuickFix.PreallocMethod value = new QuickFix.PreallocMethod();
        getField(value); return value; }
      public bool isSet(QuickFix.PreallocMethod field)
      { return isSetField(field); }
      public bool isSetPreallocMethod()
      { return isSetField(591); }

      public void set(QuickFix.AllocID value)
      { setField(value); }
      public QuickFix.AllocID get(QuickFix.AllocID  value)
      { getField(value); return value; }
      public QuickFix.AllocID getAllocID()
      { QuickFix.AllocID value = new QuickFix.AllocID();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocID field)
      { return isSetField(field); }
      public bool isSetAllocID()
      { return isSetField(70); }

      public void set(QuickFix.NoAllocs value)
      { setField(value); }
      public QuickFix.NoAllocs get(QuickFix.NoAllocs  value)
      { getField(value); return value; }
      public QuickFix.NoAllocs getNoAllocs()
      { QuickFix.NoAllocs value = new QuickFix.NoAllocs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoAllocs field)
      { return isSetField(field); }
      public bool isSetNoAllocs()
      { return isSetField(78); }

      public class NoAllocs: QuickFix.Group
      {
      public NoAllocs() : base(78,79,message_order ) {}
      static int[] message_order = new int[] {79,661,736,467,756,80,993,1002,989,1136,0};
        public void set(QuickFix.AllocAccount value)
        { setField(value); }
        public QuickFix.AllocAccount get(QuickFix.AllocAccount  value)
        { getField(value); return value; }
        public QuickFix.AllocAccount getAllocAccount()
        { QuickFix.AllocAccount value = new QuickFix.AllocAccount();
          getField(value); return value; }
        public bool isSet(QuickFix.AllocAccount field)
        { return isSetField(field); }
        public bool isSetAllocAccount()
        { return isSetField(79); }

        public void set(QuickFix.AllocAcctIDSource value)
        { setField(value); }
        public QuickFix.AllocAcctIDSource get(QuickFix.AllocAcctIDSource  value)
        { getField(value); return value; }
        public QuickFix.AllocAcctIDSource getAllocAcctIDSource()
        { QuickFix.AllocAcctIDSource value = new QuickFix.AllocAcctIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.AllocAcctIDSource field)
        { return isSetField(field); }
        public bool isSetAllocAcctIDSource()
        { return isSetField(661); }

        public void set(QuickFix.AllocSettlCurrency value)
        { setField(value); }
        public QuickFix.AllocSettlCurrency get(QuickFix.AllocSettlCurrency  value)
        { getField(value); return value; }
        public QuickFix.AllocSettlCurrency getAllocSettlCurrency()
        { QuickFix.AllocSettlCurrency value = new QuickFix.AllocSettlCurrency();
          getField(value); return value; }
        public bool isSet(QuickFix.AllocSettlCurrency field)
        { return isSetField(field); }
        public bool isSetAllocSettlCurrency()
        { return isSetField(736); }

        public void set(QuickFix.IndividualAllocID value)
        { setField(value); }
        public QuickFix.IndividualAllocID get(QuickFix.IndividualAllocID  value)
        { getField(value); return value; }
        public QuickFix.IndividualAllocID getIndividualAllocID()
        { QuickFix.IndividualAllocID value = new QuickFix.IndividualAllocID();
          getField(value); return value; }
        public bool isSet(QuickFix.IndividualAllocID field)
        { return isSetField(field); }
        public bool isSetIndividualAllocID()
        { return isSetField(467); }

        public void set(QuickFix.NoNested2PartyIDs value)
        { setField(value); }
        public QuickFix.NoNested2PartyIDs get(QuickFix.NoNested2PartyIDs  value)
        { getField(value); return value; }
        public QuickFix.NoNested2PartyIDs getNoNested2PartyIDs()
        { QuickFix.NoNested2PartyIDs value = new QuickFix.NoNested2PartyIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoNested2PartyIDs field)
        { return isSetField(field); }
        public bool isSetNoNested2PartyIDs()
        { return isSetField(756); }

        public class NoNested2PartyIDs: QuickFix.Group
        {
        public NoNested2PartyIDs() : base(756,757,message_order ) {}
        static int[] message_order = new int[] {757,758,759,806,0};
          public void set(QuickFix.Nested2PartyID value)
          { setField(value); }
          public QuickFix.Nested2PartyID get(QuickFix.Nested2PartyID  value)
          { getField(value); return value; }
          public QuickFix.Nested2PartyID getNested2PartyID()
          { QuickFix.Nested2PartyID value = new QuickFix.Nested2PartyID();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested2PartyID field)
          { return isSetField(field); }
          public bool isSetNested2PartyID()
          { return isSetField(757); }

          public void set(QuickFix.Nested2PartyIDSource value)
          { setField(value); }
          public QuickFix.Nested2PartyIDSource get(QuickFix.Nested2PartyIDSource  value)
          { getField(value); return value; }
          public QuickFix.Nested2PartyIDSource getNested2PartyIDSource()
          { QuickFix.Nested2PartyIDSource value = new QuickFix.Nested2PartyIDSource();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested2PartyIDSource field)
          { return isSetField(field); }
          public bool isSetNested2PartyIDSource()
          { return isSetField(758); }

          public void set(QuickFix.Nested2PartyRole value)
          { setField(value); }
          public QuickFix.Nested2PartyRole get(QuickFix.Nested2PartyRole  value)
          { getField(value); return value; }
          public QuickFix.Nested2PartyRole getNested2PartyRole()
          { QuickFix.Nested2PartyRole value = new QuickFix.Nested2PartyRole();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested2PartyRole field)
          { return isSetField(field); }
          public bool isSetNested2PartyRole()
          { return isSetField(759); }

          public void set(QuickFix.NoNested2PartySubIDs value)
          { setField(value); }
          public QuickFix.NoNested2PartySubIDs get(QuickFix.NoNested2PartySubIDs  value)
          { getField(value); return value; }
          public QuickFix.NoNested2PartySubIDs getNoNested2PartySubIDs()
          { QuickFix.NoNested2PartySubIDs value = new QuickFix.NoNested2PartySubIDs();
            getField(value); return value; }
          public bool isSet(QuickFix.NoNested2PartySubIDs field)
          { return isSetField(field); }
          public bool isSetNoNested2PartySubIDs()
          { return isSetField(806); }

          public class NoNested2PartySubIDs: QuickFix.Group
          {
          public NoNested2PartySubIDs() : base(806,760,message_order ) {}
          static int[] message_order = new int[] {760,807,0};
            public void set(QuickFix.Nested2PartySubID value)
            { setField(value); }
            public QuickFix.Nested2PartySubID get(QuickFix.Nested2PartySubID  value)
            { getField(value); return value; }
            public QuickFix.Nested2PartySubID getNested2PartySubID()
            { QuickFix.Nested2PartySubID value = new QuickFix.Nested2PartySubID();
              getField(value); return value; }
            public bool isSet(QuickFix.Nested2PartySubID field)
            { return isSetField(field); }
            public bool isSetNested2PartySubID()
            { return isSetField(760); }

            public void set(QuickFix.Nested2PartySubIDType value)
            { setField(value); }
            public QuickFix.Nested2PartySubIDType get(QuickFix.Nested2PartySubIDType  value)
            { getField(value); return value; }
            public QuickFix.Nested2PartySubIDType getNested2PartySubIDType()
            { QuickFix.Nested2PartySubIDType value = new QuickFix.Nested2PartySubIDType();
              getField(value); return value; }
            public bool isSet(QuickFix.Nested2PartySubIDType field)
            { return isSetField(field); }
            public bool isSetNested2PartySubIDType()
            { return isSetField(807); }

          };
        };
        public void set(QuickFix.AllocQty value)
        { setField(value); }
        public QuickFix.AllocQty get(QuickFix.AllocQty  value)
        { getField(value); return value; }
        public QuickFix.AllocQty getAllocQty()
        { QuickFix.AllocQty value = new QuickFix.AllocQty();
          getField(value); return value; }
        public bool isSet(QuickFix.AllocQty field)
        { return isSetField(field); }
        public bool isSetAllocQty()
        { return isSetField(80); }

        public void set(QuickFix.AllocCustomerCapacity value)
        { setField(value); }
        public QuickFix.AllocCustomerCapacity get(QuickFix.AllocCustomerCapacity  value)
        { getField(value); return value; }
        public QuickFix.AllocCustomerCapacity getAllocCustomerCapacity()
        { QuickFix.AllocCustomerCapacity value = new QuickFix.AllocCustomerCapacity();
          getField(value); return value; }
        public bool isSet(QuickFix.AllocCustomerCapacity field)
        { return isSetField(field); }
        public bool isSetAllocCustomerCapacity()
        { return isSetField(993); }

        public void set(QuickFix.AllocMethod value)
        { setField(value); }
        public QuickFix.AllocMethod get(QuickFix.AllocMethod  value)
        { getField(value); return value; }
        public QuickFix.AllocMethod getAllocMethod()
        { QuickFix.AllocMethod value = new QuickFix.AllocMethod();
          getField(value); return value; }
        public bool isSet(QuickFix.AllocMethod field)
        { return isSetField(field); }
        public bool isSetAllocMethod()
        { return isSetField(1002); }

        public void set(QuickFix.SecondaryIndividualAllocID value)
        { setField(value); }
        public QuickFix.SecondaryIndividualAllocID get(QuickFix.SecondaryIndividualAllocID  value)
        { getField(value); return value; }
        public QuickFix.SecondaryIndividualAllocID getSecondaryIndividualAllocID()
        { QuickFix.SecondaryIndividualAllocID value = new QuickFix.SecondaryIndividualAllocID();
          getField(value); return value; }
        public bool isSet(QuickFix.SecondaryIndividualAllocID field)
        { return isSetField(field); }
        public bool isSetSecondaryIndividualAllocID()
        { return isSetField(989); }

        public void set(QuickFix.AllocClearingFeeIndicator value)
        { setField(value); }
        public QuickFix.AllocClearingFeeIndicator get(QuickFix.AllocClearingFeeIndicator  value)
        { getField(value); return value; }
        public QuickFix.AllocClearingFeeIndicator getAllocClearingFeeIndicator()
        { QuickFix.AllocClearingFeeIndicator value = new QuickFix.AllocClearingFeeIndicator();
          getField(value); return value; }
        public bool isSet(QuickFix.AllocClearingFeeIndicator field)
        { return isSetField(field); }
        public bool isSetAllocClearingFeeIndicator()
        { return isSetField(1136); }

      };
      public void set(QuickFix.SideLastQty value)
      { setField(value); }
      public QuickFix.SideLastQty get(QuickFix.SideLastQty  value)
      { getField(value); return value; }
      public QuickFix.SideLastQty getSideLastQty()
      { QuickFix.SideLastQty value = new QuickFix.SideLastQty();
        getField(value); return value; }
      public bool isSet(QuickFix.SideLastQty field)
      { return isSetField(field); }
      public bool isSetSideLastQty()
      { return isSetField(1009); }

      public void set(QuickFix.SideTradeReportID value)
      { setField(value); }
      public QuickFix.SideTradeReportID get(QuickFix.SideTradeReportID  value)
      { getField(value); return value; }
      public QuickFix.SideTradeReportID getSideTradeReportID()
      { QuickFix.SideTradeReportID value = new QuickFix.SideTradeReportID();
        getField(value); return value; }
      public bool isSet(QuickFix.SideTradeReportID field)
      { return isSetField(field); }
      public bool isSetSideTradeReportID()
      { return isSetField(1005); }

      public void set(QuickFix.SideFillStationCd value)
      { setField(value); }
      public QuickFix.SideFillStationCd get(QuickFix.SideFillStationCd  value)
      { getField(value); return value; }
      public QuickFix.SideFillStationCd getSideFillStationCd()
      { QuickFix.SideFillStationCd value = new QuickFix.SideFillStationCd();
        getField(value); return value; }
      public bool isSet(QuickFix.SideFillStationCd field)
      { return isSetField(field); }
      public bool isSetSideFillStationCd()
      { return isSetField(1006); }

      public void set(QuickFix.SideReasonCd value)
      { setField(value); }
      public QuickFix.SideReasonCd get(QuickFix.SideReasonCd  value)
      { getField(value); return value; }
      public QuickFix.SideReasonCd getSideReasonCd()
      { QuickFix.SideReasonCd value = new QuickFix.SideReasonCd();
        getField(value); return value; }
      public bool isSet(QuickFix.SideReasonCd field)
      { return isSetField(field); }
      public bool isSetSideReasonCd()
      { return isSetField(1007); }

      public void set(QuickFix.RptSeq value)
      { setField(value); }
      public QuickFix.RptSeq get(QuickFix.RptSeq  value)
      { getField(value); return value; }
      public QuickFix.RptSeq getRptSeq()
      { QuickFix.RptSeq value = new QuickFix.RptSeq();
        getField(value); return value; }
      public bool isSet(QuickFix.RptSeq field)
      { return isSetField(field); }
      public bool isSetRptSeq()
      { return isSetField(83); }

      public void set(QuickFix.SideTrdSubTyp value)
      { setField(value); }
      public QuickFix.SideTrdSubTyp get(QuickFix.SideTrdSubTyp  value)
      { getField(value); return value; }
      public QuickFix.SideTrdSubTyp getSideTrdSubTyp()
      { QuickFix.SideTrdSubTyp value = new QuickFix.SideTrdSubTyp();
        getField(value); return value; }
      public bool isSet(QuickFix.SideTrdSubTyp field)
      { return isSetField(field); }
      public bool isSetSideTrdSubTyp()
      { return isSetField(1008); }

      public void set(QuickFix.NoSideTrdRegTS value)
      { setField(value); }
      public QuickFix.NoSideTrdRegTS get(QuickFix.NoSideTrdRegTS  value)
      { getField(value); return value; }
      public QuickFix.NoSideTrdRegTS getNoSideTrdRegTS()
      { QuickFix.NoSideTrdRegTS value = new QuickFix.NoSideTrdRegTS();
        getField(value); return value; }
      public bool isSet(QuickFix.NoSideTrdRegTS field)
      { return isSetField(field); }
      public bool isSetNoSideTrdRegTS()
      { return isSetField(1016); }

      public class NoSideTrdRegTS: QuickFix.Group
      {
      public NoSideTrdRegTS() : base(1016,1012,message_order ) {}
      static int[] message_order = new int[] {1012,1013,1014,0};
        public void set(QuickFix.SideTrdRegTimestamp value)
        { setField(value); }
        public QuickFix.SideTrdRegTimestamp get(QuickFix.SideTrdRegTimestamp  value)
        { getField(value); return value; }
        public QuickFix.SideTrdRegTimestamp getSideTrdRegTimestamp()
        { QuickFix.SideTrdRegTimestamp value = new QuickFix.SideTrdRegTimestamp();
          getField(value); return value; }
        public bool isSet(QuickFix.SideTrdRegTimestamp field)
        { return isSetField(field); }
        public bool isSetSideTrdRegTimestamp()
        { return isSetField(1012); }

        public void set(QuickFix.SideTrdRegTimestampType value)
        { setField(value); }
        public QuickFix.SideTrdRegTimestampType get(QuickFix.SideTrdRegTimestampType  value)
        { getField(value); return value; }
        public QuickFix.SideTrdRegTimestampType getSideTrdRegTimestampType()
        { QuickFix.SideTrdRegTimestampType value = new QuickFix.SideTrdRegTimestampType();
          getField(value); return value; }
        public bool isSet(QuickFix.SideTrdRegTimestampType field)
        { return isSetField(field); }
        public bool isSetSideTrdRegTimestampType()
        { return isSetField(1013); }

        public void set(QuickFix.SideTrdRegTimestampSrc value)
        { setField(value); }
        public QuickFix.SideTrdRegTimestampSrc get(QuickFix.SideTrdRegTimestampSrc  value)
        { getField(value); return value; }
        public QuickFix.SideTrdRegTimestampSrc getSideTrdRegTimestampSrc()
        { QuickFix.SideTrdRegTimestampSrc value = new QuickFix.SideTrdRegTimestampSrc();
          getField(value); return value; }
        public bool isSet(QuickFix.SideTrdRegTimestampSrc field)
        { return isSetField(field); }
        public bool isSetSideTrdRegTimestampSrc()
        { return isSetField(1014); }

      };
      public void set(QuickFix.SideGrossTradeAmt value)
      { setField(value); }
      public QuickFix.SideGrossTradeAmt get(QuickFix.SideGrossTradeAmt  value)
      { getField(value); return value; }
      public QuickFix.SideGrossTradeAmt getSideGrossTradeAmt()
      { QuickFix.SideGrossTradeAmt value = new QuickFix.SideGrossTradeAmt();
        getField(value); return value; }
      public bool isSet(QuickFix.SideGrossTradeAmt field)
      { return isSetField(field); }
      public bool isSetSideGrossTradeAmt()
      { return isSetField(1072); }

      public void set(QuickFix.AggressorIndicator value)
      { setField(value); }
      public QuickFix.AggressorIndicator get(QuickFix.AggressorIndicator  value)
      { getField(value); return value; }
      public QuickFix.AggressorIndicator getAggressorIndicator()
      { QuickFix.AggressorIndicator value = new QuickFix.AggressorIndicator();
        getField(value); return value; }
      public bool isSet(QuickFix.AggressorIndicator field)
      { return isSetField(field); }
      public bool isSetAggressorIndicator()
      { return isSetField(1057); }

      public void set(QuickFix.ExchangeSpecialInstructions value)
      { setField(value); }
      public QuickFix.ExchangeSpecialInstructions get(QuickFix.ExchangeSpecialInstructions  value)
      { getField(value); return value; }
      public QuickFix.ExchangeSpecialInstructions getExchangeSpecialInstructions()
      { QuickFix.ExchangeSpecialInstructions value = new QuickFix.ExchangeSpecialInstructions();
        getField(value); return value; }
      public bool isSet(QuickFix.ExchangeSpecialInstructions field)
      { return isSetField(field); }
      public bool isSetExchangeSpecialInstructions()
      { return isSetField(1139); }

      public void set(QuickFix.NetGrossInd value)
      { setField(value); }
      public QuickFix.NetGrossInd get(QuickFix.NetGrossInd  value)
      { getField(value); return value; }
      public QuickFix.NetGrossInd getNetGrossInd()
      { QuickFix.NetGrossInd value = new QuickFix.NetGrossInd();
        getField(value); return value; }
      public bool isSet(QuickFix.NetGrossInd field)
      { return isSetField(field); }
      public bool isSetNetGrossInd()
      { return isSetField(430); }

      public void set(QuickFix.SideCurrency value)
      { setField(value); }
      public QuickFix.SideCurrency get(QuickFix.SideCurrency  value)
      { getField(value); return value; }
      public QuickFix.SideCurrency getSideCurrency()
      { QuickFix.SideCurrency value = new QuickFix.SideCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.SideCurrency field)
      { return isSetField(field); }
      public bool isSetSideCurrency()
      { return isSetField(1154); }

      public void set(QuickFix.SideSettlCurrency value)
      { setField(value); }
      public QuickFix.SideSettlCurrency get(QuickFix.SideSettlCurrency  value)
      { getField(value); return value; }
      public QuickFix.SideSettlCurrency getSideSettlCurrency()
      { QuickFix.SideSettlCurrency value = new QuickFix.SideSettlCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.SideSettlCurrency field)
      { return isSetField(field); }
      public bool isSetSideSettlCurrency()
      { return isSetField(1155); }

      public void set(QuickFix.NoSettlDetails value)
      { setField(value); }
      public QuickFix.NoSettlDetails get(QuickFix.NoSettlDetails  value)
      { getField(value); return value; }
      public QuickFix.NoSettlDetails getNoSettlDetails()
      { QuickFix.NoSettlDetails value = new QuickFix.NoSettlDetails();
        getField(value); return value; }
      public bool isSet(QuickFix.NoSettlDetails field)
      { return isSetField(field); }
      public bool isSetNoSettlDetails()
      { return isSetField(1158); }

      public class NoSettlDetails: QuickFix.Group
      {
      public NoSettlDetails() : base(1158,1164,message_order ) {}
      static int[] message_order = new int[] {1164,781,0};
        public void set(QuickFix.SettlObligSource value)
        { setField(value); }
        public QuickFix.SettlObligSource get(QuickFix.SettlObligSource  value)
        { getField(value); return value; }
        public QuickFix.SettlObligSource getSettlObligSource()
        { QuickFix.SettlObligSource value = new QuickFix.SettlObligSource();
          getField(value); return value; }
        public bool isSet(QuickFix.SettlObligSource field)
        { return isSetField(field); }
        public bool isSetSettlObligSource()
        { return isSetField(1164); }

        public void set(QuickFix.NoSettlPartyIDs value)
        { setField(value); }
        public QuickFix.NoSettlPartyIDs get(QuickFix.NoSettlPartyIDs  value)
        { getField(value); return value; }
        public QuickFix.NoSettlPartyIDs getNoSettlPartyIDs()
        { QuickFix.NoSettlPartyIDs value = new QuickFix.NoSettlPartyIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoSettlPartyIDs field)
        { return isSetField(field); }
        public bool isSetNoSettlPartyIDs()
        { return isSetField(781); }

        public class NoSettlPartyIDs: QuickFix.Group
        {
        public NoSettlPartyIDs() : base(781,782,message_order ) {}
        static int[] message_order = new int[] {782,783,784,801,0};
          public void set(QuickFix.SettlPartyID value)
          { setField(value); }
          public QuickFix.SettlPartyID get(QuickFix.SettlPartyID  value)
          { getField(value); return value; }
          public QuickFix.SettlPartyID getSettlPartyID()
          { QuickFix.SettlPartyID value = new QuickFix.SettlPartyID();
            getField(value); return value; }
          public bool isSet(QuickFix.SettlPartyID field)
          { return isSetField(field); }
          public bool isSetSettlPartyID()
          { return isSetField(782); }

          public void set(QuickFix.SettlPartyIDSource value)
          { setField(value); }
          public QuickFix.SettlPartyIDSource get(QuickFix.SettlPartyIDSource  value)
          { getField(value); return value; }
          public QuickFix.SettlPartyIDSource getSettlPartyIDSource()
          { QuickFix.SettlPartyIDSource value = new QuickFix.SettlPartyIDSource();
            getField(value); return value; }
          public bool isSet(QuickFix.SettlPartyIDSource field)
          { return isSetField(field); }
          public bool isSetSettlPartyIDSource()
          { return isSetField(783); }

          public void set(QuickFix.SettlPartyRole value)
          { setField(value); }
          public QuickFix.SettlPartyRole get(QuickFix.SettlPartyRole  value)
          { getField(value); return value; }
          public QuickFix.SettlPartyRole getSettlPartyRole()
          { QuickFix.SettlPartyRole value = new QuickFix.SettlPartyRole();
            getField(value); return value; }
          public bool isSet(QuickFix.SettlPartyRole field)
          { return isSetField(field); }
          public bool isSetSettlPartyRole()
          { return isSetField(784); }

          public void set(QuickFix.NoSettlPartySubIDs value)
          { setField(value); }
          public QuickFix.NoSettlPartySubIDs get(QuickFix.NoSettlPartySubIDs  value)
          { getField(value); return value; }
          public QuickFix.NoSettlPartySubIDs getNoSettlPartySubIDs()
          { QuickFix.NoSettlPartySubIDs value = new QuickFix.NoSettlPartySubIDs();
            getField(value); return value; }
          public bool isSet(QuickFix.NoSettlPartySubIDs field)
          { return isSetField(field); }
          public bool isSetNoSettlPartySubIDs()
          { return isSetField(801); }

          public class NoSettlPartySubIDs: QuickFix.Group
          {
          public NoSettlPartySubIDs() : base(801,785,message_order ) {}
          static int[] message_order = new int[] {785,786,0};
            public void set(QuickFix.SettlPartySubID value)
            { setField(value); }
            public QuickFix.SettlPartySubID get(QuickFix.SettlPartySubID  value)
            { getField(value); return value; }
            public QuickFix.SettlPartySubID getSettlPartySubID()
            { QuickFix.SettlPartySubID value = new QuickFix.SettlPartySubID();
              getField(value); return value; }
            public bool isSet(QuickFix.SettlPartySubID field)
            { return isSetField(field); }
            public bool isSetSettlPartySubID()
            { return isSetField(785); }

            public void set(QuickFix.SettlPartySubIDType value)
            { setField(value); }
            public QuickFix.SettlPartySubIDType get(QuickFix.SettlPartySubIDType  value)
            { getField(value); return value; }
            public QuickFix.SettlPartySubIDType getSettlPartySubIDType()
            { QuickFix.SettlPartySubIDType value = new QuickFix.SettlPartySubIDType();
              getField(value); return value; }
            public bool isSet(QuickFix.SettlPartySubIDType field)
            { return isSetField(field); }
            public bool isSetSettlPartySubIDType()
            { return isSetField(786); }

          };
        };
      };
      public void set(QuickFix.OrderCategory value)
      { setField(value); }
      public QuickFix.OrderCategory get(QuickFix.OrderCategory  value)
      { getField(value); return value; }
      public QuickFix.OrderCategory getOrderCategory()
      { QuickFix.OrderCategory value = new QuickFix.OrderCategory();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderCategory field)
      { return isSetField(field); }
      public bool isSetOrderCategory()
      { return isSetField(1115); }

      public void set(QuickFix.OrderID value)
      { setField(value); }
      public QuickFix.OrderID get(QuickFix.OrderID  value)
      { getField(value); return value; }
      public QuickFix.OrderID getOrderID()
      { QuickFix.OrderID value = new QuickFix.OrderID();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderID field)
      { return isSetField(field); }
      public bool isSetOrderID()
      { return isSetField(37); }

      public void set(QuickFix.SecondaryOrderID value)
      { setField(value); }
      public QuickFix.SecondaryOrderID get(QuickFix.SecondaryOrderID  value)
      { getField(value); return value; }
      public QuickFix.SecondaryOrderID getSecondaryOrderID()
      { QuickFix.SecondaryOrderID value = new QuickFix.SecondaryOrderID();
        getField(value); return value; }
      public bool isSet(QuickFix.SecondaryOrderID field)
      { return isSetField(field); }
      public bool isSetSecondaryOrderID()
      { return isSetField(198); }

      public void set(QuickFix.ClOrdID value)
      { setField(value); }
      public QuickFix.ClOrdID get(QuickFix.ClOrdID  value)
      { getField(value); return value; }
      public QuickFix.ClOrdID getClOrdID()
      { QuickFix.ClOrdID value = new QuickFix.ClOrdID();
        getField(value); return value; }
      public bool isSet(QuickFix.ClOrdID field)
      { return isSetField(field); }
      public bool isSetClOrdID()
      { return isSetField(11); }

      public void set(QuickFix.SecondaryClOrdID value)
      { setField(value); }
      public QuickFix.SecondaryClOrdID get(QuickFix.SecondaryClOrdID  value)
      { getField(value); return value; }
      public QuickFix.SecondaryClOrdID getSecondaryClOrdID()
      { QuickFix.SecondaryClOrdID value = new QuickFix.SecondaryClOrdID();
        getField(value); return value; }
      public bool isSet(QuickFix.SecondaryClOrdID field)
      { return isSetField(field); }
      public bool isSetSecondaryClOrdID()
      { return isSetField(526); }

      public void set(QuickFix.ListID value)
      { setField(value); }
      public QuickFix.ListID get(QuickFix.ListID  value)
      { getField(value); return value; }
      public QuickFix.ListID getListID()
      { QuickFix.ListID value = new QuickFix.ListID();
        getField(value); return value; }
      public bool isSet(QuickFix.ListID field)
      { return isSetField(field); }
      public bool isSetListID()
      { return isSetField(66); }

      public void set(QuickFix.RefOrderID value)
      { setField(value); }
      public QuickFix.RefOrderID get(QuickFix.RefOrderID  value)
      { getField(value); return value; }
      public QuickFix.RefOrderID getRefOrderID()
      { QuickFix.RefOrderID value = new QuickFix.RefOrderID();
        getField(value); return value; }
      public bool isSet(QuickFix.RefOrderID field)
      { return isSetField(field); }
      public bool isSetRefOrderID()
      { return isSetField(1080); }

      public void set(QuickFix.RefOrderIDSource value)
      { setField(value); }
      public QuickFix.RefOrderIDSource get(QuickFix.RefOrderIDSource  value)
      { getField(value); return value; }
      public QuickFix.RefOrderIDSource getRefOrderIDSource()
      { QuickFix.RefOrderIDSource value = new QuickFix.RefOrderIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.RefOrderIDSource field)
      { return isSetField(field); }
      public bool isSetRefOrderIDSource()
      { return isSetField(1081); }

      public void set(QuickFix.RefOrdIDReason value)
      { setField(value); }
      public QuickFix.RefOrdIDReason get(QuickFix.RefOrdIDReason  value)
      { getField(value); return value; }
      public QuickFix.RefOrdIDReason getRefOrdIDReason()
      { QuickFix.RefOrdIDReason value = new QuickFix.RefOrdIDReason();
        getField(value); return value; }
      public bool isSet(QuickFix.RefOrdIDReason field)
      { return isSetField(field); }
      public bool isSetRefOrdIDReason()
      { return isSetField(1431); }

      public void set(QuickFix.OrdType value)
      { setField(value); }
      public QuickFix.OrdType get(QuickFix.OrdType  value)
      { getField(value); return value; }
      public QuickFix.OrdType getOrdType()
      { QuickFix.OrdType value = new QuickFix.OrdType();
        getField(value); return value; }
      public bool isSet(QuickFix.OrdType field)
      { return isSetField(field); }
      public bool isSetOrdType()
      { return isSetField(40); }

      public void set(QuickFix.Price value)
      { setField(value); }
      public QuickFix.Price get(QuickFix.Price  value)
      { getField(value); return value; }
      public QuickFix.Price getPrice()
      { QuickFix.Price value = new QuickFix.Price();
        getField(value); return value; }
      public bool isSet(QuickFix.Price field)
      { return isSetField(field); }
      public bool isSetPrice()
      { return isSetField(44); }

      public void set(QuickFix.StopPx value)
      { setField(value); }
      public QuickFix.StopPx get(QuickFix.StopPx  value)
      { getField(value); return value; }
      public QuickFix.StopPx getStopPx()
      { QuickFix.StopPx value = new QuickFix.StopPx();
        getField(value); return value; }
      public bool isSet(QuickFix.StopPx field)
      { return isSetField(field); }
      public bool isSetStopPx()
      { return isSetField(99); }

      public void set(QuickFix.ExecInst value)
      { setField(value); }
      public QuickFix.ExecInst get(QuickFix.ExecInst  value)
      { getField(value); return value; }
      public QuickFix.ExecInst getExecInst()
      { QuickFix.ExecInst value = new QuickFix.ExecInst();
        getField(value); return value; }
      public bool isSet(QuickFix.ExecInst field)
      { return isSetField(field); }
      public bool isSetExecInst()
      { return isSetField(18); }

      public void set(QuickFix.OrdStatus value)
      { setField(value); }
      public QuickFix.OrdStatus get(QuickFix.OrdStatus  value)
      { getField(value); return value; }
      public QuickFix.OrdStatus getOrdStatus()
      { QuickFix.OrdStatus value = new QuickFix.OrdStatus();
        getField(value); return value; }
      public bool isSet(QuickFix.OrdStatus field)
      { return isSetField(field); }
      public bool isSetOrdStatus()
      { return isSetField(39); }

      public void set(QuickFix.LeavesQty value)
      { setField(value); }
      public QuickFix.LeavesQty get(QuickFix.LeavesQty  value)
      { getField(value); return value; }
      public QuickFix.LeavesQty getLeavesQty()
      { QuickFix.LeavesQty value = new QuickFix.LeavesQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LeavesQty field)
      { return isSetField(field); }
      public bool isSetLeavesQty()
      { return isSetField(151); }

      public void set(QuickFix.CumQty value)
      { setField(value); }
      public QuickFix.CumQty get(QuickFix.CumQty  value)
      { getField(value); return value; }
      public QuickFix.CumQty getCumQty()
      { QuickFix.CumQty value = new QuickFix.CumQty();
        getField(value); return value; }
      public bool isSet(QuickFix.CumQty field)
      { return isSetField(field); }
      public bool isSetCumQty()
      { return isSetField(14); }

      public void set(QuickFix.TimeInForce value)
      { setField(value); }
      public QuickFix.TimeInForce get(QuickFix.TimeInForce  value)
      { getField(value); return value; }
      public QuickFix.TimeInForce getTimeInForce()
      { QuickFix.TimeInForce value = new QuickFix.TimeInForce();
        getField(value); return value; }
      public bool isSet(QuickFix.TimeInForce field)
      { return isSetField(field); }
      public bool isSetTimeInForce()
      { return isSetField(59); }

      public void set(QuickFix.ExpireTime value)
      { setField(value); }
      public QuickFix.ExpireTime get(QuickFix.ExpireTime  value)
      { getField(value); return value; }
      public QuickFix.ExpireTime getExpireTime()
      { QuickFix.ExpireTime value = new QuickFix.ExpireTime();
        getField(value); return value; }
      public bool isSet(QuickFix.ExpireTime field)
      { return isSetField(field); }
      public bool isSetExpireTime()
      { return isSetField(126); }

      public void set(QuickFix.OrderCapacity value)
      { setField(value); }
      public QuickFix.OrderCapacity get(QuickFix.OrderCapacity  value)
      { getField(value); return value; }
      public QuickFix.OrderCapacity getOrderCapacity()
      { QuickFix.OrderCapacity value = new QuickFix.OrderCapacity();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderCapacity field)
      { return isSetField(field); }
      public bool isSetOrderCapacity()
      { return isSetField(528); }

      public void set(QuickFix.OrderRestrictions value)
      { setField(value); }
      public QuickFix.OrderRestrictions get(QuickFix.OrderRestrictions  value)
      { getField(value); return value; }
      public QuickFix.OrderRestrictions getOrderRestrictions()
      { QuickFix.OrderRestrictions value = new QuickFix.OrderRestrictions();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderRestrictions field)
      { return isSetField(field); }
      public bool isSetOrderRestrictions()
      { return isSetField(529); }

      public void set(QuickFix.OrigCustOrderCapacity value)
      { setField(value); }
      public QuickFix.OrigCustOrderCapacity get(QuickFix.OrigCustOrderCapacity  value)
      { getField(value); return value; }
      public QuickFix.OrigCustOrderCapacity getOrigCustOrderCapacity()
      { QuickFix.OrigCustOrderCapacity value = new QuickFix.OrigCustOrderCapacity();
        getField(value); return value; }
      public bool isSet(QuickFix.OrigCustOrderCapacity field)
      { return isSetField(field); }
      public bool isSetOrigCustOrderCapacity()
      { return isSetField(1432); }

      public void set(QuickFix.OrderInputDevice value)
      { setField(value); }
      public QuickFix.OrderInputDevice get(QuickFix.OrderInputDevice  value)
      { getField(value); return value; }
      public QuickFix.OrderInputDevice getOrderInputDevice()
      { QuickFix.OrderInputDevice value = new QuickFix.OrderInputDevice();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderInputDevice field)
      { return isSetField(field); }
      public bool isSetOrderInputDevice()
      { return isSetField(821); }

      public void set(QuickFix.LotType value)
      { setField(value); }
      public QuickFix.LotType get(QuickFix.LotType  value)
      { getField(value); return value; }
      public QuickFix.LotType getLotType()
      { QuickFix.LotType value = new QuickFix.LotType();
        getField(value); return value; }
      public bool isSet(QuickFix.LotType field)
      { return isSetField(field); }
      public bool isSetLotType()
      { return isSetField(1093); }

      public void set(QuickFix.TransBkdTime value)
      { setField(value); }
      public QuickFix.TransBkdTime get(QuickFix.TransBkdTime  value)
      { getField(value); return value; }
      public QuickFix.TransBkdTime getTransBkdTime()
      { QuickFix.TransBkdTime value = new QuickFix.TransBkdTime();
        getField(value); return value; }
      public bool isSet(QuickFix.TransBkdTime field)
      { return isSetField(field); }
      public bool isSetTransBkdTime()
      { return isSetField(483); }

      public void set(QuickFix.OrigOrdModTime value)
      { setField(value); }
      public QuickFix.OrigOrdModTime get(QuickFix.OrigOrdModTime  value)
      { getField(value); return value; }
      public QuickFix.OrigOrdModTime getOrigOrdModTime()
      { QuickFix.OrigOrdModTime value = new QuickFix.OrigOrdModTime();
        getField(value); return value; }
      public bool isSet(QuickFix.OrigOrdModTime field)
      { return isSetField(field); }
      public bool isSetOrigOrdModTime()
      { return isSetField(586); }

      public void set(QuickFix.BookingType value)
      { setField(value); }
      public QuickFix.BookingType get(QuickFix.BookingType  value)
      { getField(value); return value; }
      public QuickFix.BookingType getBookingType()
      { QuickFix.BookingType value = new QuickFix.BookingType();
        getField(value); return value; }
      public bool isSet(QuickFix.BookingType field)
      { return isSetField(field); }
      public bool isSetBookingType()
      { return isSetField(775); }

      public void set(QuickFix.SideExecID value)
      { setField(value); }
      public QuickFix.SideExecID get(QuickFix.SideExecID  value)
      { getField(value); return value; }
      public QuickFix.SideExecID getSideExecID()
      { QuickFix.SideExecID value = new QuickFix.SideExecID();
        getField(value); return value; }
      public bool isSet(QuickFix.SideExecID field)
      { return isSetField(field); }
      public bool isSetSideExecID()
      { return isSetField(1427); }

      public void set(QuickFix.OrderDelay value)
      { setField(value); }
      public QuickFix.OrderDelay get(QuickFix.OrderDelay  value)
      { getField(value); return value; }
      public QuickFix.OrderDelay getOrderDelay()
      { QuickFix.OrderDelay value = new QuickFix.OrderDelay();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderDelay field)
      { return isSetField(field); }
      public bool isSetOrderDelay()
      { return isSetField(1428); }

      public void set(QuickFix.OrderDelayUnit value)
      { setField(value); }
      public QuickFix.OrderDelayUnit get(QuickFix.OrderDelayUnit  value)
      { getField(value); return value; }
      public QuickFix.OrderDelayUnit getOrderDelayUnit()
      { QuickFix.OrderDelayUnit value = new QuickFix.OrderDelayUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderDelayUnit field)
      { return isSetField(field); }
      public bool isSetOrderDelayUnit()
      { return isSetField(1429); }

      public void set(QuickFix.SideLiquidityInd value)
      { setField(value); }
      public QuickFix.SideLiquidityInd get(QuickFix.SideLiquidityInd  value)
      { getField(value); return value; }
      public QuickFix.SideLiquidityInd getSideLiquidityInd()
      { QuickFix.SideLiquidityInd value = new QuickFix.SideLiquidityInd();
        getField(value); return value; }
      public bool isSet(QuickFix.SideLiquidityInd field)
      { return isSetField(field); }
      public bool isSetSideLiquidityInd()
      { return isSetField(1444); }

    };
    public void set(QuickFix.CopyMsgIndicator value)
    { setField(value); }
    public QuickFix.CopyMsgIndicator get(QuickFix.CopyMsgIndicator  value)
    { getField(value); return value; }
    public QuickFix.CopyMsgIndicator getCopyMsgIndicator()
    { QuickFix.CopyMsgIndicator value = new QuickFix.CopyMsgIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.CopyMsgIndicator field)
    { return isSetField(field); }
    public bool isSetCopyMsgIndicator()
    { return isSetField(797); }

    public void set(QuickFix.PublishTrdIndicator value)
    { setField(value); }
    public QuickFix.PublishTrdIndicator get(QuickFix.PublishTrdIndicator  value)
    { getField(value); return value; }
    public QuickFix.PublishTrdIndicator getPublishTrdIndicator()
    { QuickFix.PublishTrdIndicator value = new QuickFix.PublishTrdIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.PublishTrdIndicator field)
    { return isSetField(field); }
    public bool isSetPublishTrdIndicator()
    { return isSetField(852); }

    public void set(QuickFix.ShortSaleReason value)
    { setField(value); }
    public QuickFix.ShortSaleReason get(QuickFix.ShortSaleReason  value)
    { getField(value); return value; }
    public QuickFix.ShortSaleReason getShortSaleReason()
    { QuickFix.ShortSaleReason value = new QuickFix.ShortSaleReason();
      getField(value); return value; }
    public bool isSet(QuickFix.ShortSaleReason field)
    { return isSetField(field); }
    public bool isSetShortSaleReason()
    { return isSetField(853); }

    public void set(QuickFix.TrdRptStatus value)
    { setField(value); }
    public QuickFix.TrdRptStatus get(QuickFix.TrdRptStatus  value)
    { getField(value); return value; }
    public QuickFix.TrdRptStatus getTrdRptStatus()
    { QuickFix.TrdRptStatus value = new QuickFix.TrdRptStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.TrdRptStatus field)
    { return isSetField(field); }
    public bool isSetTrdRptStatus()
    { return isSetField(939); }

    public void set(QuickFix.AsOfIndicator value)
    { setField(value); }
    public QuickFix.AsOfIndicator get(QuickFix.AsOfIndicator  value)
    { getField(value); return value; }
    public QuickFix.AsOfIndicator getAsOfIndicator()
    { QuickFix.AsOfIndicator value = new QuickFix.AsOfIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.AsOfIndicator field)
    { return isSetField(field); }
    public bool isSetAsOfIndicator()
    { return isSetField(1015); }

    public void set(QuickFix.SettlSessID value)
    { setField(value); }
    public QuickFix.SettlSessID get(QuickFix.SettlSessID  value)
    { getField(value); return value; }
    public QuickFix.SettlSessID getSettlSessID()
    { QuickFix.SettlSessID value = new QuickFix.SettlSessID();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlSessID field)
    { return isSetField(field); }
    public bool isSetSettlSessID()
    { return isSetField(716); }

    public void set(QuickFix.SettlSessSubID value)
    { setField(value); }
    public QuickFix.SettlSessSubID get(QuickFix.SettlSessSubID  value)
    { getField(value); return value; }
    public QuickFix.SettlSessSubID getSettlSessSubID()
    { QuickFix.SettlSessSubID value = new QuickFix.SettlSessSubID();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlSessSubID field)
    { return isSetField(field); }
    public bool isSetSettlSessSubID()
    { return isSetField(717); }

    public void set(QuickFix.TierCode value)
    { setField(value); }
    public QuickFix.TierCode get(QuickFix.TierCode  value)
    { getField(value); return value; }
    public QuickFix.TierCode getTierCode()
    { QuickFix.TierCode value = new QuickFix.TierCode();
      getField(value); return value; }
    public bool isSet(QuickFix.TierCode field)
    { return isSetField(field); }
    public bool isSetTierCode()
    { return isSetField(994); }

    public void set(QuickFix.MessageEventSource value)
    { setField(value); }
    public QuickFix.MessageEventSource get(QuickFix.MessageEventSource  value)
    { getField(value); return value; }
    public QuickFix.MessageEventSource getMessageEventSource()
    { QuickFix.MessageEventSource value = new QuickFix.MessageEventSource();
      getField(value); return value; }
    public bool isSet(QuickFix.MessageEventSource field)
    { return isSetField(field); }
    public bool isSetMessageEventSource()
    { return isSetField(1011); }

    public void set(QuickFix.LastUpdateTime value)
    { setField(value); }
    public QuickFix.LastUpdateTime get(QuickFix.LastUpdateTime  value)
    { getField(value); return value; }
    public QuickFix.LastUpdateTime getLastUpdateTime()
    { QuickFix.LastUpdateTime value = new QuickFix.LastUpdateTime();
      getField(value); return value; }
    public bool isSet(QuickFix.LastUpdateTime field)
    { return isSetField(field); }
    public bool isSetLastUpdateTime()
    { return isSetField(779); }

    public void set(QuickFix.RndPx value)
    { setField(value); }
    public QuickFix.RndPx get(QuickFix.RndPx  value)
    { getField(value); return value; }
    public QuickFix.RndPx getRndPx()
    { QuickFix.RndPx value = new QuickFix.RndPx();
      getField(value); return value; }
    public bool isSet(QuickFix.RndPx field)
    { return isSetField(field); }
    public bool isSetRndPx()
    { return isSetField(991); }

    public void set(QuickFix.TradeID value)
    { setField(value); }
    public QuickFix.TradeID get(QuickFix.TradeID  value)
    { getField(value); return value; }
    public QuickFix.TradeID getTradeID()
    { QuickFix.TradeID value = new QuickFix.TradeID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeID field)
    { return isSetField(field); }
    public bool isSetTradeID()
    { return isSetField(1003); }

    public void set(QuickFix.SecondaryTradeID value)
    { setField(value); }
    public QuickFix.SecondaryTradeID get(QuickFix.SecondaryTradeID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryTradeID getSecondaryTradeID()
    { QuickFix.SecondaryTradeID value = new QuickFix.SecondaryTradeID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryTradeID field)
    { return isSetField(field); }
    public bool isSetSecondaryTradeID()
    { return isSetField(1040); }

    public void set(QuickFix.FirmTradeID value)
    { setField(value); }
    public QuickFix.FirmTradeID get(QuickFix.FirmTradeID  value)
    { getField(value); return value; }
    public QuickFix.FirmTradeID getFirmTradeID()
    { QuickFix.FirmTradeID value = new QuickFix.FirmTradeID();
      getField(value); return value; }
    public bool isSet(QuickFix.FirmTradeID field)
    { return isSetField(field); }
    public bool isSetFirmTradeID()
    { return isSetField(1041); }

    public void set(QuickFix.SecondaryFirmTradeID value)
    { setField(value); }
    public QuickFix.SecondaryFirmTradeID get(QuickFix.SecondaryFirmTradeID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryFirmTradeID getSecondaryFirmTradeID()
    { QuickFix.SecondaryFirmTradeID value = new QuickFix.SecondaryFirmTradeID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryFirmTradeID field)
    { return isSetField(field); }
    public bool isSetSecondaryFirmTradeID()
    { return isSetField(1042); }

    public void set(QuickFix.CalculatedCcyLastQty value)
    { setField(value); }
    public QuickFix.CalculatedCcyLastQty get(QuickFix.CalculatedCcyLastQty  value)
    { getField(value); return value; }
    public QuickFix.CalculatedCcyLastQty getCalculatedCcyLastQty()
    { QuickFix.CalculatedCcyLastQty value = new QuickFix.CalculatedCcyLastQty();
      getField(value); return value; }
    public bool isSet(QuickFix.CalculatedCcyLastQty field)
    { return isSetField(field); }
    public bool isSetCalculatedCcyLastQty()
    { return isSetField(1056); }

    public void set(QuickFix.LastSwapPoints value)
    { setField(value); }
    public QuickFix.LastSwapPoints get(QuickFix.LastSwapPoints  value)
    { getField(value); return value; }
    public QuickFix.LastSwapPoints getLastSwapPoints()
    { QuickFix.LastSwapPoints value = new QuickFix.LastSwapPoints();
      getField(value); return value; }
    public bool isSet(QuickFix.LastSwapPoints field)
    { return isSetField(field); }
    public bool isSetLastSwapPoints()
    { return isSetField(1071); }

    public void set(QuickFix.UnderlyingSettlementDate value)
    { setField(value); }
    public QuickFix.UnderlyingSettlementDate get(QuickFix.UnderlyingSettlementDate  value)
    { getField(value); return value; }
    public QuickFix.UnderlyingSettlementDate getUnderlyingSettlementDate()
    { QuickFix.UnderlyingSettlementDate value = new QuickFix.UnderlyingSettlementDate();
      getField(value); return value; }
    public bool isSet(QuickFix.UnderlyingSettlementDate field)
    { return isSetField(field); }
    public bool isSetUnderlyingSettlementDate()
    { return isSetField(987); }

    public void set(QuickFix.GrossTradeAmt value)
    { setField(value); }
    public QuickFix.GrossTradeAmt get(QuickFix.GrossTradeAmt  value)
    { getField(value); return value; }
    public QuickFix.GrossTradeAmt getGrossTradeAmt()
    { QuickFix.GrossTradeAmt value = new QuickFix.GrossTradeAmt();
      getField(value); return value; }
    public bool isSet(QuickFix.GrossTradeAmt field)
    { return isSetField(field); }
    public bool isSetGrossTradeAmt()
    { return isSetField(381); }

    public void set(QuickFix.NoRootPartyIDs value)
    { setField(value); }
    public QuickFix.NoRootPartyIDs get(QuickFix.NoRootPartyIDs  value)
    { getField(value); return value; }
    public QuickFix.NoRootPartyIDs getNoRootPartyIDs()
    { QuickFix.NoRootPartyIDs value = new QuickFix.NoRootPartyIDs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoRootPartyIDs field)
    { return isSetField(field); }
    public bool isSetNoRootPartyIDs()
    { return isSetField(1116); }

    public class NoRootPartyIDs: QuickFix.Group
    {
    public NoRootPartyIDs() : base(1116,1117,message_order ) {}
    static int[] message_order = new int[] {1117,1118,1119,1120,0};
      public void set(QuickFix.RootPartyID value)
      { setField(value); }
      public QuickFix.RootPartyID get(QuickFix.RootPartyID  value)
      { getField(value); return value; }
      public QuickFix.RootPartyID getRootPartyID()
      { QuickFix.RootPartyID value = new QuickFix.RootPartyID();
        getField(value); return value; }
      public bool isSet(QuickFix.RootPartyID field)
      { return isSetField(field); }
      public bool isSetRootPartyID()
      { return isSetField(1117); }

      public void set(QuickFix.RootPartyIDSource value)
      { setField(value); }
      public QuickFix.RootPartyIDSource get(QuickFix.RootPartyIDSource  value)
      { getField(value); return value; }
      public QuickFix.RootPartyIDSource getRootPartyIDSource()
      { QuickFix.RootPartyIDSource value = new QuickFix.RootPartyIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.RootPartyIDSource field)
      { return isSetField(field); }
      public bool isSetRootPartyIDSource()
      { return isSetField(1118); }

      public void set(QuickFix.RootPartyRole value)
      { setField(value); }
      public QuickFix.RootPartyRole get(QuickFix.RootPartyRole  value)
      { getField(value); return value; }
      public QuickFix.RootPartyRole getRootPartyRole()
      { QuickFix.RootPartyRole value = new QuickFix.RootPartyRole();
        getField(value); return value; }
      public bool isSet(QuickFix.RootPartyRole field)
      { return isSetField(field); }
      public bool isSetRootPartyRole()
      { return isSetField(1119); }

      public void set(QuickFix.NoRootPartySubIDs value)
      { setField(value); }
      public QuickFix.NoRootPartySubIDs get(QuickFix.NoRootPartySubIDs  value)
      { getField(value); return value; }
      public QuickFix.NoRootPartySubIDs getNoRootPartySubIDs()
      { QuickFix.NoRootPartySubIDs value = new QuickFix.NoRootPartySubIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoRootPartySubIDs field)
      { return isSetField(field); }
      public bool isSetNoRootPartySubIDs()
      { return isSetField(1120); }

      public class NoRootPartySubIDs: QuickFix.Group
      {
      public NoRootPartySubIDs() : base(1120,1121,message_order ) {}
      static int[] message_order = new int[] {1121,1122,0};
        public void set(QuickFix.RootPartySubID value)
        { setField(value); }
        public QuickFix.RootPartySubID get(QuickFix.RootPartySubID  value)
        { getField(value); return value; }
        public QuickFix.RootPartySubID getRootPartySubID()
        { QuickFix.RootPartySubID value = new QuickFix.RootPartySubID();
          getField(value); return value; }
        public bool isSet(QuickFix.RootPartySubID field)
        { return isSetField(field); }
        public bool isSetRootPartySubID()
        { return isSetField(1121); }

        public void set(QuickFix.RootPartySubIDType value)
        { setField(value); }
        public QuickFix.RootPartySubIDType get(QuickFix.RootPartySubIDType  value)
        { getField(value); return value; }
        public QuickFix.RootPartySubIDType getRootPartySubIDType()
        { QuickFix.RootPartySubIDType value = new QuickFix.RootPartySubIDType();
          getField(value); return value; }
        public bool isSet(QuickFix.RootPartySubIDType field)
        { return isSetField(field); }
        public bool isSetRootPartySubIDType()
        { return isSetField(1122); }

      };
    };
    public void set(QuickFix.TradeHandlingInstr value)
    { setField(value); }
    public QuickFix.TradeHandlingInstr get(QuickFix.TradeHandlingInstr  value)
    { getField(value); return value; }
    public QuickFix.TradeHandlingInstr getTradeHandlingInstr()
    { QuickFix.TradeHandlingInstr value = new QuickFix.TradeHandlingInstr();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeHandlingInstr field)
    { return isSetField(field); }
    public bool isSetTradeHandlingInstr()
    { return isSetField(1123); }

    public void set(QuickFix.OrigTradeHandlingInstr value)
    { setField(value); }
    public QuickFix.OrigTradeHandlingInstr get(QuickFix.OrigTradeHandlingInstr  value)
    { getField(value); return value; }
    public QuickFix.OrigTradeHandlingInstr getOrigTradeHandlingInstr()
    { QuickFix.OrigTradeHandlingInstr value = new QuickFix.OrigTradeHandlingInstr();
      getField(value); return value; }
    public bool isSet(QuickFix.OrigTradeHandlingInstr field)
    { return isSetField(field); }
    public bool isSetOrigTradeHandlingInstr()
    { return isSetField(1124); }

    public void set(QuickFix.OrigTradeDate value)
    { setField(value); }
    public QuickFix.OrigTradeDate get(QuickFix.OrigTradeDate  value)
    { getField(value); return value; }
    public QuickFix.OrigTradeDate getOrigTradeDate()
    { QuickFix.OrigTradeDate value = new QuickFix.OrigTradeDate();
      getField(value); return value; }
    public bool isSet(QuickFix.OrigTradeDate field)
    { return isSetField(field); }
    public bool isSetOrigTradeDate()
    { return isSetField(1125); }

    public void set(QuickFix.OrigTradeID value)
    { setField(value); }
    public QuickFix.OrigTradeID get(QuickFix.OrigTradeID  value)
    { getField(value); return value; }
    public QuickFix.OrigTradeID getOrigTradeID()
    { QuickFix.OrigTradeID value = new QuickFix.OrigTradeID();
      getField(value); return value; }
    public bool isSet(QuickFix.OrigTradeID field)
    { return isSetField(field); }
    public bool isSetOrigTradeID()
    { return isSetField(1126); }

    public void set(QuickFix.OrigSecondaryTradeID value)
    { setField(value); }
    public QuickFix.OrigSecondaryTradeID get(QuickFix.OrigSecondaryTradeID  value)
    { getField(value); return value; }
    public QuickFix.OrigSecondaryTradeID getOrigSecondaryTradeID()
    { QuickFix.OrigSecondaryTradeID value = new QuickFix.OrigSecondaryTradeID();
      getField(value); return value; }
    public bool isSet(QuickFix.OrigSecondaryTradeID field)
    { return isSetField(field); }
    public bool isSetOrigSecondaryTradeID()
    { return isSetField(1127); }

    public void set(QuickFix.TZTransactTime value)
    { setField(value); }
    public QuickFix.TZTransactTime get(QuickFix.TZTransactTime  value)
    { getField(value); return value; }
    public QuickFix.TZTransactTime getTZTransactTime()
    { QuickFix.TZTransactTime value = new QuickFix.TZTransactTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TZTransactTime field)
    { return isSetField(field); }
    public bool isSetTZTransactTime()
    { return isSetField(1132); }

    public void set(QuickFix.ReportedPxDiff value)
    { setField(value); }
    public QuickFix.ReportedPxDiff get(QuickFix.ReportedPxDiff  value)
    { getField(value); return value; }
    public QuickFix.ReportedPxDiff getReportedPxDiff()
    { QuickFix.ReportedPxDiff value = new QuickFix.ReportedPxDiff();
      getField(value); return value; }
    public bool isSet(QuickFix.ReportedPxDiff field)
    { return isSetField(field); }
    public bool isSetReportedPxDiff()
    { return isSetField(1134); }

    public void set(QuickFix.Currency value)
    { setField(value); }
    public QuickFix.Currency get(QuickFix.Currency  value)
    { getField(value); return value; }
    public QuickFix.Currency getCurrency()
    { QuickFix.Currency value = new QuickFix.Currency();
      getField(value); return value; }
    public bool isSet(QuickFix.Currency field)
    { return isSetField(field); }
    public bool isSetCurrency()
    { return isSetField(15); }

    public void set(QuickFix.SettlCurrency value)
    { setField(value); }
    public QuickFix.SettlCurrency get(QuickFix.SettlCurrency  value)
    { getField(value); return value; }
    public QuickFix.SettlCurrency getSettlCurrency()
    { QuickFix.SettlCurrency value = new QuickFix.SettlCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlCurrency field)
    { return isSetField(field); }
    public bool isSetSettlCurrency()
    { return isSetField(120); }

    public void set(QuickFix.RejectText value)
    { setField(value); }
    public QuickFix.RejectText get(QuickFix.RejectText  value)
    { getField(value); return value; }
    public QuickFix.RejectText getRejectText()
    { QuickFix.RejectText value = new QuickFix.RejectText();
      getField(value); return value; }
    public bool isSet(QuickFix.RejectText field)
    { return isSetField(field); }
    public bool isSetRejectText()
    { return isSetField(1328); }

    public void set(QuickFix.FeeMultiplier value)
    { setField(value); }
    public QuickFix.FeeMultiplier get(QuickFix.FeeMultiplier  value)
    { getField(value); return value; }
    public QuickFix.FeeMultiplier getFeeMultiplier()
    { QuickFix.FeeMultiplier value = new QuickFix.FeeMultiplier();
      getField(value); return value; }
    public bool isSet(QuickFix.FeeMultiplier field)
    { return isSetField(field); }
    public bool isSetFeeMultiplier()
    { return isSetField(1329); }

    public void set(QuickFix.Volatility value)
    { setField(value); }
    public QuickFix.Volatility get(QuickFix.Volatility  value)
    { getField(value); return value; }
    public QuickFix.Volatility getVolatility()
    { QuickFix.Volatility value = new QuickFix.Volatility();
      getField(value); return value; }
    public bool isSet(QuickFix.Volatility field)
    { return isSetField(field); }
    public bool isSetVolatility()
    { return isSetField(1188); }

    public void set(QuickFix.DividendYield value)
    { setField(value); }
    public QuickFix.DividendYield get(QuickFix.DividendYield  value)
    { getField(value); return value; }
    public QuickFix.DividendYield getDividendYield()
    { QuickFix.DividendYield value = new QuickFix.DividendYield();
      getField(value); return value; }
    public bool isSet(QuickFix.DividendYield field)
    { return isSetField(field); }
    public bool isSetDividendYield()
    { return isSetField(1380); }

    public void set(QuickFix.RiskFreeRate value)
    { setField(value); }
    public QuickFix.RiskFreeRate get(QuickFix.RiskFreeRate  value)
    { getField(value); return value; }
    public QuickFix.RiskFreeRate getRiskFreeRate()
    { QuickFix.RiskFreeRate value = new QuickFix.RiskFreeRate();
      getField(value); return value; }
    public bool isSet(QuickFix.RiskFreeRate field)
    { return isSetField(field); }
    public bool isSetRiskFreeRate()
    { return isSetField(1190); }

    public void set(QuickFix.CurrencyRatio value)
    { setField(value); }
    public QuickFix.CurrencyRatio get(QuickFix.CurrencyRatio  value)
    { getField(value); return value; }
    public QuickFix.CurrencyRatio getCurrencyRatio()
    { QuickFix.CurrencyRatio value = new QuickFix.CurrencyRatio();
      getField(value); return value; }
    public bool isSet(QuickFix.CurrencyRatio field)
    { return isSetField(field); }
    public bool isSetCurrencyRatio()
    { return isSetField(1382); }

    public void set(QuickFix.NoTrdRepIndicators value)
    { setField(value); }
    public QuickFix.NoTrdRepIndicators get(QuickFix.NoTrdRepIndicators  value)
    { getField(value); return value; }
    public QuickFix.NoTrdRepIndicators getNoTrdRepIndicators()
    { QuickFix.NoTrdRepIndicators value = new QuickFix.NoTrdRepIndicators();
      getField(value); return value; }
    public bool isSet(QuickFix.NoTrdRepIndicators field)
    { return isSetField(field); }
    public bool isSetNoTrdRepIndicators()
    { return isSetField(1387); }

    public class NoTrdRepIndicators: QuickFix.Group
    {
    public NoTrdRepIndicators() : base(1387,1388,message_order ) {}
    static int[] message_order = new int[] {1388,1389,0};
      public void set(QuickFix.TrdRepPartyRole value)
      { setField(value); }
      public QuickFix.TrdRepPartyRole get(QuickFix.TrdRepPartyRole  value)
      { getField(value); return value; }
      public QuickFix.TrdRepPartyRole getTrdRepPartyRole()
      { QuickFix.TrdRepPartyRole value = new QuickFix.TrdRepPartyRole();
        getField(value); return value; }
      public bool isSet(QuickFix.TrdRepPartyRole field)
      { return isSetField(field); }
      public bool isSetTrdRepPartyRole()
      { return isSetField(1388); }

      public void set(QuickFix.TrdRepIndicator value)
      { setField(value); }
      public QuickFix.TrdRepIndicator get(QuickFix.TrdRepIndicator  value)
      { getField(value); return value; }
      public QuickFix.TrdRepIndicator getTrdRepIndicator()
      { QuickFix.TrdRepIndicator value = new QuickFix.TrdRepIndicator();
        getField(value); return value; }
      public bool isSet(QuickFix.TrdRepIndicator field)
      { return isSetField(field); }
      public bool isSetTrdRepIndicator()
      { return isSetField(1389); }

    };
    public void set(QuickFix.TradePublishIndicator value)
    { setField(value); }
    public QuickFix.TradePublishIndicator get(QuickFix.TradePublishIndicator  value)
    { getField(value); return value; }
    public QuickFix.TradePublishIndicator getTradePublishIndicator()
    { QuickFix.TradePublishIndicator value = new QuickFix.TradePublishIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.TradePublishIndicator field)
    { return isSetField(field); }
    public bool isSetTradePublishIndicator()
    { return isSetField(1390); }

    public void set(QuickFix.ApplID value)
    { setField(value); }
    public QuickFix.ApplID get(QuickFix.ApplID  value)
    { getField(value); return value; }
    public QuickFix.ApplID getApplID()
    { QuickFix.ApplID value = new QuickFix.ApplID();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplID field)
    { return isSetField(field); }
    public bool isSetApplID()
    { return isSetField(1180); }

    public void set(QuickFix.ApplSeqNum value)
    { setField(value); }
    public QuickFix.ApplSeqNum get(QuickFix.ApplSeqNum  value)
    { getField(value); return value; }
    public QuickFix.ApplSeqNum getApplSeqNum()
    { QuickFix.ApplSeqNum value = new QuickFix.ApplSeqNum();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplSeqNum field)
    { return isSetField(field); }
    public bool isSetApplSeqNum()
    { return isSetField(1181); }

    public void set(QuickFix.ApplLastSeqNum value)
    { setField(value); }
    public QuickFix.ApplLastSeqNum get(QuickFix.ApplLastSeqNum  value)
    { getField(value); return value; }
    public QuickFix.ApplLastSeqNum getApplLastSeqNum()
    { QuickFix.ApplLastSeqNum value = new QuickFix.ApplLastSeqNum();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplLastSeqNum field)
    { return isSetField(field); }
    public bool isSetApplLastSeqNum()
    { return isSetField(1350); }

    public void set(QuickFix.ApplResendFlag value)
    { setField(value); }
    public QuickFix.ApplResendFlag get(QuickFix.ApplResendFlag  value)
    { getField(value); return value; }
    public QuickFix.ApplResendFlag getApplResendFlag()
    { QuickFix.ApplResendFlag value = new QuickFix.ApplResendFlag();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplResendFlag field)
    { return isSetField(field); }
    public bool isSetApplResendFlag()
    { return isSetField(1352); }

    public void set(QuickFix.VenueType value)
    { setField(value); }
    public QuickFix.VenueType get(QuickFix.VenueType  value)
    { getField(value); return value; }
    public QuickFix.VenueType getVenueType()
    { QuickFix.VenueType value = new QuickFix.VenueType();
      getField(value); return value; }
    public bool isSet(QuickFix.VenueType field)
    { return isSetField(field); }
    public bool isSetVenueType()
    { return isSetField(1430); }

    public void set(QuickFix.MarketSegmentID value)
    { setField(value); }
    public QuickFix.MarketSegmentID get(QuickFix.MarketSegmentID  value)
    { getField(value); return value; }
    public QuickFix.MarketSegmentID getMarketSegmentID()
    { QuickFix.MarketSegmentID value = new QuickFix.MarketSegmentID();
      getField(value); return value; }
    public bool isSet(QuickFix.MarketSegmentID field)
    { return isSetField(field); }
    public bool isSetMarketSegmentID()
    { return isSetField(1300); }

    public void set(QuickFix.MarketID value)
    { setField(value); }
    public QuickFix.MarketID get(QuickFix.MarketID  value)
    { getField(value); return value; }
    public QuickFix.MarketID getMarketID()
    { QuickFix.MarketID value = new QuickFix.MarketID();
      getField(value); return value; }
    public bool isSet(QuickFix.MarketID field)
    { return isSetField(field); }
    public bool isSetMarketID()
    { return isSetField(1301); }

  };

}

