package quickfix.fix50;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class TradeCaptureReport extends Message
{
  public TradeCaptureReport()
  {
    getHeader().setField(new MsgType("AE"));
  }
  public TradeCaptureReport(
    quickfix.field.LastQty aLastQty,
    quickfix.field.LastPx aLastPx,
    quickfix.field.TradeDate aTradeDate ) {

    getHeader().setField(new MsgType("AE"));
    set(aLastQty);
    set(aLastPx);
    set(aTradeDate);
  }

  public void set(quickfix.field.TradeReportID value)
  { setField(value); }
  public quickfix.field.TradeReportID get(quickfix.field.TradeReportID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeReportID getTradeReportID() throws FieldNotFound
  { quickfix.field.TradeReportID value = new quickfix.field.TradeReportID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeReportID field)
  { return isSetField(field); }
  public boolean isSetTradeReportID()
  { return isSetField(571); }
  public void set(quickfix.field.TradeReportTransType value)
  { setField(value); }
  public quickfix.field.TradeReportTransType get(quickfix.field.TradeReportTransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeReportTransType getTradeReportTransType() throws FieldNotFound
  { quickfix.field.TradeReportTransType value = new quickfix.field.TradeReportTransType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeReportTransType field)
  { return isSetField(field); }
  public boolean isSetTradeReportTransType()
  { return isSetField(487); }
  public void set(quickfix.field.TradeReportType value)
  { setField(value); }
  public quickfix.field.TradeReportType get(quickfix.field.TradeReportType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeReportType getTradeReportType() throws FieldNotFound
  { quickfix.field.TradeReportType value = new quickfix.field.TradeReportType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeReportType field)
  { return isSetField(field); }
  public boolean isSetTradeReportType()
  { return isSetField(856); }
  public void set(quickfix.field.TradeRequestID value)
  { setField(value); }
  public quickfix.field.TradeRequestID get(quickfix.field.TradeRequestID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeRequestID getTradeRequestID() throws FieldNotFound
  { quickfix.field.TradeRequestID value = new quickfix.field.TradeRequestID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeRequestID field)
  { return isSetField(field); }
  public boolean isSetTradeRequestID()
  { return isSetField(568); }
  public void set(quickfix.field.TrdType value)
  { setField(value); }
  public quickfix.field.TrdType get(quickfix.field.TrdType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TrdType getTrdType() throws FieldNotFound
  { quickfix.field.TrdType value = new quickfix.field.TrdType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TrdType field)
  { return isSetField(field); }
  public boolean isSetTrdType()
  { return isSetField(828); }
  public void set(quickfix.field.TrdSubType value)
  { setField(value); }
  public quickfix.field.TrdSubType get(quickfix.field.TrdSubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TrdSubType getTrdSubType() throws FieldNotFound
  { quickfix.field.TrdSubType value = new quickfix.field.TrdSubType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TrdSubType field)
  { return isSetField(field); }
  public boolean isSetTrdSubType()
  { return isSetField(829); }
  public void set(quickfix.field.SecondaryTrdType value)
  { setField(value); }
  public quickfix.field.SecondaryTrdType get(quickfix.field.SecondaryTrdType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryTrdType getSecondaryTrdType() throws FieldNotFound
  { quickfix.field.SecondaryTrdType value = new quickfix.field.SecondaryTrdType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryTrdType field)
  { return isSetField(field); }
  public boolean isSetSecondaryTrdType()
  { return isSetField(855); }
  public void set(quickfix.field.TransferReason value)
  { setField(value); }
  public quickfix.field.TransferReason get(quickfix.field.TransferReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TransferReason getTransferReason() throws FieldNotFound
  { quickfix.field.TransferReason value = new quickfix.field.TransferReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TransferReason field)
  { return isSetField(field); }
  public boolean isSetTransferReason()
  { return isSetField(830); }
  public void set(quickfix.field.ExecType value)
  { setField(value); }
  public quickfix.field.ExecType get(quickfix.field.ExecType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecType getExecType() throws FieldNotFound
  { quickfix.field.ExecType value = new quickfix.field.ExecType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecType field)
  { return isSetField(field); }
  public boolean isSetExecType()
  { return isSetField(150); }
  public void set(quickfix.field.TotNumTradeReports value)
  { setField(value); }
  public quickfix.field.TotNumTradeReports get(quickfix.field.TotNumTradeReports  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotNumTradeReports getTotNumTradeReports() throws FieldNotFound
  { quickfix.field.TotNumTradeReports value = new quickfix.field.TotNumTradeReports();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotNumTradeReports field)
  { return isSetField(field); }
  public boolean isSetTotNumTradeReports()
  { return isSetField(748); }
  public void set(quickfix.field.LastRptRequested value)
  { setField(value); }
  public quickfix.field.LastRptRequested get(quickfix.field.LastRptRequested  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastRptRequested getLastRptRequested() throws FieldNotFound
  { quickfix.field.LastRptRequested value = new quickfix.field.LastRptRequested();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastRptRequested field)
  { return isSetField(field); }
  public boolean isSetLastRptRequested()
  { return isSetField(912); }
  public void set(quickfix.field.UnsolicitedIndicator value)
  { setField(value); }
  public quickfix.field.UnsolicitedIndicator get(quickfix.field.UnsolicitedIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnsolicitedIndicator getUnsolicitedIndicator() throws FieldNotFound
  { quickfix.field.UnsolicitedIndicator value = new quickfix.field.UnsolicitedIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnsolicitedIndicator field)
  { return isSetField(field); }
  public boolean isSetUnsolicitedIndicator()
  { return isSetField(325); }
  public void set(quickfix.field.SubscriptionRequestType value)
  { setField(value); }
  public quickfix.field.SubscriptionRequestType get(quickfix.field.SubscriptionRequestType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SubscriptionRequestType getSubscriptionRequestType() throws FieldNotFound
  { quickfix.field.SubscriptionRequestType value = new quickfix.field.SubscriptionRequestType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SubscriptionRequestType field)
  { return isSetField(field); }
  public boolean isSetSubscriptionRequestType()
  { return isSetField(263); }
  public void set(quickfix.field.TradeReportRefID value)
  { setField(value); }
  public quickfix.field.TradeReportRefID get(quickfix.field.TradeReportRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeReportRefID getTradeReportRefID() throws FieldNotFound
  { quickfix.field.TradeReportRefID value = new quickfix.field.TradeReportRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeReportRefID field)
  { return isSetField(field); }
  public boolean isSetTradeReportRefID()
  { return isSetField(572); }
  public void set(quickfix.field.SecondaryTradeReportRefID value)
  { setField(value); }
  public quickfix.field.SecondaryTradeReportRefID get(quickfix.field.SecondaryTradeReportRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryTradeReportRefID getSecondaryTradeReportRefID() throws FieldNotFound
  { quickfix.field.SecondaryTradeReportRefID value = new quickfix.field.SecondaryTradeReportRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryTradeReportRefID field)
  { return isSetField(field); }
  public boolean isSetSecondaryTradeReportRefID()
  { return isSetField(881); }
  public void set(quickfix.field.SecondaryTradeReportID value)
  { setField(value); }
  public quickfix.field.SecondaryTradeReportID get(quickfix.field.SecondaryTradeReportID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryTradeReportID getSecondaryTradeReportID() throws FieldNotFound
  { quickfix.field.SecondaryTradeReportID value = new quickfix.field.SecondaryTradeReportID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryTradeReportID field)
  { return isSetField(field); }
  public boolean isSetSecondaryTradeReportID()
  { return isSetField(818); }
  public void set(quickfix.field.TradeLinkID value)
  { setField(value); }
  public quickfix.field.TradeLinkID get(quickfix.field.TradeLinkID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeLinkID getTradeLinkID() throws FieldNotFound
  { quickfix.field.TradeLinkID value = new quickfix.field.TradeLinkID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeLinkID field)
  { return isSetField(field); }
  public boolean isSetTradeLinkID()
  { return isSetField(820); }
  public void set(quickfix.field.TrdMatchID value)
  { setField(value); }
  public quickfix.field.TrdMatchID get(quickfix.field.TrdMatchID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TrdMatchID getTrdMatchID() throws FieldNotFound
  { quickfix.field.TrdMatchID value = new quickfix.field.TrdMatchID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TrdMatchID field)
  { return isSetField(field); }
  public boolean isSetTrdMatchID()
  { return isSetField(880); }
  public void set(quickfix.field.ExecID value)
  { setField(value); }
  public quickfix.field.ExecID get(quickfix.field.ExecID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecID getExecID() throws FieldNotFound
  { quickfix.field.ExecID value = new quickfix.field.ExecID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecID field)
  { return isSetField(field); }
  public boolean isSetExecID()
  { return isSetField(17); }
  public void set(quickfix.field.OrdStatus value)
  { setField(value); }
  public quickfix.field.OrdStatus get(quickfix.field.OrdStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrdStatus getOrdStatus() throws FieldNotFound
  { quickfix.field.OrdStatus value = new quickfix.field.OrdStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrdStatus field)
  { return isSetField(field); }
  public boolean isSetOrdStatus()
  { return isSetField(39); }
  public void set(quickfix.field.SecondaryExecID value)
  { setField(value); }
  public quickfix.field.SecondaryExecID get(quickfix.field.SecondaryExecID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryExecID getSecondaryExecID() throws FieldNotFound
  { quickfix.field.SecondaryExecID value = new quickfix.field.SecondaryExecID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryExecID field)
  { return isSetField(field); }
  public boolean isSetSecondaryExecID()
  { return isSetField(527); }
  public void set(quickfix.field.ExecRestatementReason value)
  { setField(value); }
  public quickfix.field.ExecRestatementReason get(quickfix.field.ExecRestatementReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecRestatementReason getExecRestatementReason() throws FieldNotFound
  { quickfix.field.ExecRestatementReason value = new quickfix.field.ExecRestatementReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecRestatementReason field)
  { return isSetField(field); }
  public boolean isSetExecRestatementReason()
  { return isSetField(378); }
  public void set(quickfix.field.PreviouslyReported value)
  { setField(value); }
  public quickfix.field.PreviouslyReported get(quickfix.field.PreviouslyReported  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PreviouslyReported getPreviouslyReported() throws FieldNotFound
  { quickfix.field.PreviouslyReported value = new quickfix.field.PreviouslyReported();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PreviouslyReported field)
  { return isSetField(field); }
  public boolean isSetPreviouslyReported()
  { return isSetField(570); }
  public void set(quickfix.field.PriceType value)
  { setField(value); }
  public quickfix.field.PriceType get(quickfix.field.PriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PriceType getPriceType() throws FieldNotFound
  { quickfix.field.PriceType value = new quickfix.field.PriceType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PriceType field)
  { return isSetField(field); }
  public boolean isSetPriceType()
  { return isSetField(423); }
  public void set(quickfix.field.Symbol value)
  { setField(value); }
  public quickfix.field.Symbol get(quickfix.field.Symbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Symbol getSymbol() throws FieldNotFound
  { quickfix.field.Symbol value = new quickfix.field.Symbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Symbol field)
  { return isSetField(field); }
  public boolean isSetSymbol()
  { return isSetField(55); }
  public void set(quickfix.field.SymbolSfx value)
  { setField(value); }
  public quickfix.field.SymbolSfx get(quickfix.field.SymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound
  { quickfix.field.SymbolSfx value = new quickfix.field.SymbolSfx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SymbolSfx field)
  { return isSetField(field); }
  public boolean isSetSymbolSfx()
  { return isSetField(65); }
  public void set(quickfix.field.SecurityID value)
  { setField(value); }
  public quickfix.field.SecurityID get(quickfix.field.SecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityID getSecurityID() throws FieldNotFound
  { quickfix.field.SecurityID value = new quickfix.field.SecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityID field)
  { return isSetField(field); }
  public boolean isSetSecurityID()
  { return isSetField(48); }
  public void set(quickfix.field.SecurityIDSource value)
  { setField(value); }
  public quickfix.field.SecurityIDSource get(quickfix.field.SecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityIDSource getSecurityIDSource() throws FieldNotFound
  { quickfix.field.SecurityIDSource value = new quickfix.field.SecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetSecurityIDSource()
  { return isSetField(22); }
  public void set(quickfix.field.Product value)
  { setField(value); }
  public quickfix.field.Product get(quickfix.field.Product  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Product getProduct() throws FieldNotFound
  { quickfix.field.Product value = new quickfix.field.Product();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Product field)
  { return isSetField(field); }
  public boolean isSetProduct()
  { return isSetField(460); }
  public void set(quickfix.field.CFICode value)
  { setField(value); }
  public quickfix.field.CFICode get(quickfix.field.CFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CFICode getCFICode() throws FieldNotFound
  { quickfix.field.CFICode value = new quickfix.field.CFICode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CFICode field)
  { return isSetField(field); }
  public boolean isSetCFICode()
  { return isSetField(461); }
  public void set(quickfix.field.SecurityType value)
  { setField(value); }
  public quickfix.field.SecurityType get(quickfix.field.SecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityType getSecurityType() throws FieldNotFound
  { quickfix.field.SecurityType value = new quickfix.field.SecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityType field)
  { return isSetField(field); }
  public boolean isSetSecurityType()
  { return isSetField(167); }
  public void set(quickfix.field.SecuritySubType value)
  { setField(value); }
  public quickfix.field.SecuritySubType get(quickfix.field.SecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecuritySubType getSecuritySubType() throws FieldNotFound
  { quickfix.field.SecuritySubType value = new quickfix.field.SecuritySubType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecuritySubType field)
  { return isSetField(field); }
  public boolean isSetSecuritySubType()
  { return isSetField(762); }
  public void set(quickfix.field.MaturityMonthYear value)
  { setField(value); }
  public quickfix.field.MaturityMonthYear get(quickfix.field.MaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound
  { quickfix.field.MaturityMonthYear value = new quickfix.field.MaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetMaturityMonthYear()
  { return isSetField(200); }
  public void set(quickfix.field.MaturityDate value)
  { setField(value); }
  public quickfix.field.MaturityDate get(quickfix.field.MaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaturityDate getMaturityDate() throws FieldNotFound
  { quickfix.field.MaturityDate value = new quickfix.field.MaturityDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaturityDate field)
  { return isSetField(field); }
  public boolean isSetMaturityDate()
  { return isSetField(541); }
  public void set(quickfix.field.CouponPaymentDate value)
  { setField(value); }
  public quickfix.field.CouponPaymentDate get(quickfix.field.CouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CouponPaymentDate getCouponPaymentDate() throws FieldNotFound
  { quickfix.field.CouponPaymentDate value = new quickfix.field.CouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetCouponPaymentDate()
  { return isSetField(224); }
  public void set(quickfix.field.IssueDate value)
  { setField(value); }
  public quickfix.field.IssueDate get(quickfix.field.IssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IssueDate getIssueDate() throws FieldNotFound
  { quickfix.field.IssueDate value = new quickfix.field.IssueDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IssueDate field)
  { return isSetField(field); }
  public boolean isSetIssueDate()
  { return isSetField(225); }
  public void set(quickfix.field.RepoCollateralSecurityType value)
  { setField(value); }
  public quickfix.field.RepoCollateralSecurityType get(quickfix.field.RepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RepoCollateralSecurityType getRepoCollateralSecurityType() throws FieldNotFound
  { quickfix.field.RepoCollateralSecurityType value = new quickfix.field.RepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetRepoCollateralSecurityType()
  { return isSetField(239); }
  public void set(quickfix.field.RepurchaseTerm value)
  { setField(value); }
  public quickfix.field.RepurchaseTerm get(quickfix.field.RepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RepurchaseTerm getRepurchaseTerm() throws FieldNotFound
  { quickfix.field.RepurchaseTerm value = new quickfix.field.RepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetRepurchaseTerm()
  { return isSetField(226); }
  public void set(quickfix.field.RepurchaseRate value)
  { setField(value); }
  public quickfix.field.RepurchaseRate get(quickfix.field.RepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RepurchaseRate getRepurchaseRate() throws FieldNotFound
  { quickfix.field.RepurchaseRate value = new quickfix.field.RepurchaseRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetRepurchaseRate()
  { return isSetField(227); }
  public void set(quickfix.field.Factor value)
  { setField(value); }
  public quickfix.field.Factor get(quickfix.field.Factor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Factor getFactor() throws FieldNotFound
  { quickfix.field.Factor value = new quickfix.field.Factor();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Factor field)
  { return isSetField(field); }
  public boolean isSetFactor()
  { return isSetField(228); }
  public void set(quickfix.field.CreditRating value)
  { setField(value); }
  public quickfix.field.CreditRating get(quickfix.field.CreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CreditRating getCreditRating() throws FieldNotFound
  { quickfix.field.CreditRating value = new quickfix.field.CreditRating();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CreditRating field)
  { return isSetField(field); }
  public boolean isSetCreditRating()
  { return isSetField(255); }
  public void set(quickfix.field.InstrRegistry value)
  { setField(value); }
  public quickfix.field.InstrRegistry get(quickfix.field.InstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InstrRegistry getInstrRegistry() throws FieldNotFound
  { quickfix.field.InstrRegistry value = new quickfix.field.InstrRegistry();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InstrRegistry field)
  { return isSetField(field); }
  public boolean isSetInstrRegistry()
  { return isSetField(543); }
  public void set(quickfix.field.CountryOfIssue value)
  { setField(value); }
  public quickfix.field.CountryOfIssue get(quickfix.field.CountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CountryOfIssue getCountryOfIssue() throws FieldNotFound
  { quickfix.field.CountryOfIssue value = new quickfix.field.CountryOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetCountryOfIssue()
  { return isSetField(470); }
  public void set(quickfix.field.StateOrProvinceOfIssue value)
  { setField(value); }
  public quickfix.field.StateOrProvinceOfIssue get(quickfix.field.StateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StateOrProvinceOfIssue getStateOrProvinceOfIssue() throws FieldNotFound
  { quickfix.field.StateOrProvinceOfIssue value = new quickfix.field.StateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetStateOrProvinceOfIssue()
  { return isSetField(471); }
  public void set(quickfix.field.LocaleOfIssue value)
  { setField(value); }
  public quickfix.field.LocaleOfIssue get(quickfix.field.LocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LocaleOfIssue getLocaleOfIssue() throws FieldNotFound
  { quickfix.field.LocaleOfIssue value = new quickfix.field.LocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetLocaleOfIssue()
  { return isSetField(472); }
  public void set(quickfix.field.RedemptionDate value)
  { setField(value); }
  public quickfix.field.RedemptionDate get(quickfix.field.RedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RedemptionDate getRedemptionDate() throws FieldNotFound
  { quickfix.field.RedemptionDate value = new quickfix.field.RedemptionDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RedemptionDate field)
  { return isSetField(field); }
  public boolean isSetRedemptionDate()
  { return isSetField(240); }
  public void set(quickfix.field.StrikePrice value)
  { setField(value); }
  public quickfix.field.StrikePrice get(quickfix.field.StrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound
  { quickfix.field.StrikePrice value = new quickfix.field.StrikePrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikePrice field)
  { return isSetField(field); }
  public boolean isSetStrikePrice()
  { return isSetField(202); }
  public void set(quickfix.field.StrikeCurrency value)
  { setField(value); }
  public quickfix.field.StrikeCurrency get(quickfix.field.StrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikeCurrency getStrikeCurrency() throws FieldNotFound
  { quickfix.field.StrikeCurrency value = new quickfix.field.StrikeCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetStrikeCurrency()
  { return isSetField(947); }
  public void set(quickfix.field.OptAttribute value)
  { setField(value); }
  public quickfix.field.OptAttribute get(quickfix.field.OptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound
  { quickfix.field.OptAttribute value = new quickfix.field.OptAttribute();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OptAttribute field)
  { return isSetField(field); }
  public boolean isSetOptAttribute()
  { return isSetField(206); }
  public void set(quickfix.field.ContractMultiplier value)
  { setField(value); }
  public quickfix.field.ContractMultiplier get(quickfix.field.ContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound
  { quickfix.field.ContractMultiplier value = new quickfix.field.ContractMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetContractMultiplier()
  { return isSetField(231); }
  public void set(quickfix.field.CouponRate value)
  { setField(value); }
  public quickfix.field.CouponRate get(quickfix.field.CouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CouponRate getCouponRate() throws FieldNotFound
  { quickfix.field.CouponRate value = new quickfix.field.CouponRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CouponRate field)
  { return isSetField(field); }
  public boolean isSetCouponRate()
  { return isSetField(223); }
  public void set(quickfix.field.SecurityExchange value)
  { setField(value); }
  public quickfix.field.SecurityExchange get(quickfix.field.SecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound
  { quickfix.field.SecurityExchange value = new quickfix.field.SecurityExchange();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityExchange field)
  { return isSetField(field); }
  public boolean isSetSecurityExchange()
  { return isSetField(207); }
  public void set(quickfix.field.Issuer value)
  { setField(value); }
  public quickfix.field.Issuer get(quickfix.field.Issuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Issuer getIssuer() throws FieldNotFound
  { quickfix.field.Issuer value = new quickfix.field.Issuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Issuer field)
  { return isSetField(field); }
  public boolean isSetIssuer()
  { return isSetField(106); }
  public void set(quickfix.field.EncodedIssuerLen value)
  { setField(value); }
  public quickfix.field.EncodedIssuerLen get(quickfix.field.EncodedIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound
  { quickfix.field.EncodedIssuerLen value = new quickfix.field.EncodedIssuerLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuerLen()
  { return isSetField(348); }
  public void set(quickfix.field.EncodedIssuer value)
  { setField(value); }
  public quickfix.field.EncodedIssuer get(quickfix.field.EncodedIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound
  { quickfix.field.EncodedIssuer value = new quickfix.field.EncodedIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuer()
  { return isSetField(349); }
  public void set(quickfix.field.SecurityDesc value)
  { setField(value); }
  public quickfix.field.SecurityDesc get(quickfix.field.SecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound
  { quickfix.field.SecurityDesc value = new quickfix.field.SecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityDesc field)
  { return isSetField(field); }
  public boolean isSetSecurityDesc()
  { return isSetField(107); }
  public void set(quickfix.field.EncodedSecurityDescLen value)
  { setField(value); }
  public quickfix.field.EncodedSecurityDescLen get(quickfix.field.EncodedSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound
  { quickfix.field.EncodedSecurityDescLen value = new quickfix.field.EncodedSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDescLen()
  { return isSetField(350); }
  public void set(quickfix.field.EncodedSecurityDesc value)
  { setField(value); }
  public quickfix.field.EncodedSecurityDesc get(quickfix.field.EncodedSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound
  { quickfix.field.EncodedSecurityDesc value = new quickfix.field.EncodedSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDesc()
  { return isSetField(351); }
  public void set(quickfix.field.Pool value)
  { setField(value); }
  public quickfix.field.Pool get(quickfix.field.Pool  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Pool getPool() throws FieldNotFound
  { quickfix.field.Pool value = new quickfix.field.Pool();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Pool field)
  { return isSetField(field); }
  public boolean isSetPool()
  { return isSetField(691); }
  public void set(quickfix.field.ContractSettlMonth value)
  { setField(value); }
  public quickfix.field.ContractSettlMonth get(quickfix.field.ContractSettlMonth  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContractSettlMonth getContractSettlMonth() throws FieldNotFound
  { quickfix.field.ContractSettlMonth value = new quickfix.field.ContractSettlMonth();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContractSettlMonth field)
  { return isSetField(field); }
  public boolean isSetContractSettlMonth()
  { return isSetField(667); }
  public void set(quickfix.field.CPProgram value)
  { setField(value); }
  public quickfix.field.CPProgram get(quickfix.field.CPProgram  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CPProgram getCPProgram() throws FieldNotFound
  { quickfix.field.CPProgram value = new quickfix.field.CPProgram();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CPProgram field)
  { return isSetField(field); }
  public boolean isSetCPProgram()
  { return isSetField(875); }
  public void set(quickfix.field.CPRegType value)
  { setField(value); }
  public quickfix.field.CPRegType get(quickfix.field.CPRegType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CPRegType getCPRegType() throws FieldNotFound
  { quickfix.field.CPRegType value = new quickfix.field.CPRegType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CPRegType field)
  { return isSetField(field); }
  public boolean isSetCPRegType()
  { return isSetField(876); }
  public void set(quickfix.field.DatedDate value)
  { setField(value); }
  public quickfix.field.DatedDate get(quickfix.field.DatedDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DatedDate getDatedDate() throws FieldNotFound
  { quickfix.field.DatedDate value = new quickfix.field.DatedDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DatedDate field)
  { return isSetField(field); }
  public boolean isSetDatedDate()
  { return isSetField(873); }
  public void set(quickfix.field.InterestAccrualDate value)
  { setField(value); }
  public quickfix.field.InterestAccrualDate get(quickfix.field.InterestAccrualDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InterestAccrualDate getInterestAccrualDate() throws FieldNotFound
  { quickfix.field.InterestAccrualDate value = new quickfix.field.InterestAccrualDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InterestAccrualDate field)
  { return isSetField(field); }
  public boolean isSetInterestAccrualDate()
  { return isSetField(874); }
  public void set(quickfix.field.SecurityStatus value)
  { setField(value); }
  public quickfix.field.SecurityStatus get(quickfix.field.SecurityStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityStatus getSecurityStatus() throws FieldNotFound
  { quickfix.field.SecurityStatus value = new quickfix.field.SecurityStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityStatus field)
  { return isSetField(field); }
  public boolean isSetSecurityStatus()
  { return isSetField(965); }
  public void set(quickfix.field.SettleOnOpenFlag value)
  { setField(value); }
  public quickfix.field.SettleOnOpenFlag get(quickfix.field.SettleOnOpenFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettleOnOpenFlag getSettleOnOpenFlag() throws FieldNotFound
  { quickfix.field.SettleOnOpenFlag value = new quickfix.field.SettleOnOpenFlag();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettleOnOpenFlag field)
  { return isSetField(field); }
  public boolean isSetSettleOnOpenFlag()
  { return isSetField(966); }
  public void set(quickfix.field.InstrmtAssignmentMethod value)
  { setField(value); }
  public quickfix.field.InstrmtAssignmentMethod get(quickfix.field.InstrmtAssignmentMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InstrmtAssignmentMethod getInstrmtAssignmentMethod() throws FieldNotFound
  { quickfix.field.InstrmtAssignmentMethod value = new quickfix.field.InstrmtAssignmentMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InstrmtAssignmentMethod field)
  { return isSetField(field); }
  public boolean isSetInstrmtAssignmentMethod()
  { return isSetField(1049); }
  public void set(quickfix.field.StrikeMultiplier value)
  { setField(value); }
  public quickfix.field.StrikeMultiplier get(quickfix.field.StrikeMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikeMultiplier getStrikeMultiplier() throws FieldNotFound
  { quickfix.field.StrikeMultiplier value = new quickfix.field.StrikeMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikeMultiplier field)
  { return isSetField(field); }
  public boolean isSetStrikeMultiplier()
  { return isSetField(967); }
  public void set(quickfix.field.StrikeValue value)
  { setField(value); }
  public quickfix.field.StrikeValue get(quickfix.field.StrikeValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikeValue getStrikeValue() throws FieldNotFound
  { quickfix.field.StrikeValue value = new quickfix.field.StrikeValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikeValue field)
  { return isSetField(field); }
  public boolean isSetStrikeValue()
  { return isSetField(968); }
  public void set(quickfix.field.MinPriceIncrement value)
  { setField(value); }
  public quickfix.field.MinPriceIncrement get(quickfix.field.MinPriceIncrement  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MinPriceIncrement getMinPriceIncrement() throws FieldNotFound
  { quickfix.field.MinPriceIncrement value = new quickfix.field.MinPriceIncrement();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MinPriceIncrement field)
  { return isSetField(field); }
  public boolean isSetMinPriceIncrement()
  { return isSetField(969); }
  public void set(quickfix.field.PositionLimit value)
  { setField(value); }
  public quickfix.field.PositionLimit get(quickfix.field.PositionLimit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PositionLimit getPositionLimit() throws FieldNotFound
  { quickfix.field.PositionLimit value = new quickfix.field.PositionLimit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PositionLimit field)
  { return isSetField(field); }
  public boolean isSetPositionLimit()
  { return isSetField(970); }
  public void set(quickfix.field.NTPositionLimit value)
  { setField(value); }
  public quickfix.field.NTPositionLimit get(quickfix.field.NTPositionLimit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NTPositionLimit getNTPositionLimit() throws FieldNotFound
  { quickfix.field.NTPositionLimit value = new quickfix.field.NTPositionLimit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NTPositionLimit field)
  { return isSetField(field); }
  public boolean isSetNTPositionLimit()
  { return isSetField(971); }
  public void set(quickfix.field.UnitofMeasure value)
  { setField(value); }
  public quickfix.field.UnitofMeasure get(quickfix.field.UnitofMeasure  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnitofMeasure getUnitofMeasure() throws FieldNotFound
  { quickfix.field.UnitofMeasure value = new quickfix.field.UnitofMeasure();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnitofMeasure field)
  { return isSetField(field); }
  public boolean isSetUnitofMeasure()
  { return isSetField(996); }
  public void set(quickfix.field.TimeUnit value)
  { setField(value); }
  public quickfix.field.TimeUnit get(quickfix.field.TimeUnit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TimeUnit getTimeUnit() throws FieldNotFound
  { quickfix.field.TimeUnit value = new quickfix.field.TimeUnit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TimeUnit field)
  { return isSetField(field); }
  public boolean isSetTimeUnit()
  { return isSetField(997); }
  public void set(quickfix.field.MaturityTime value)
  { setField(value); }
  public quickfix.field.MaturityTime get(quickfix.field.MaturityTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaturityTime getMaturityTime() throws FieldNotFound
  { quickfix.field.MaturityTime value = new quickfix.field.MaturityTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaturityTime field)
  { return isSetField(field); }
  public boolean isSetMaturityTime()
  { return isSetField(1079); }
  public void set(quickfix.field.AgreementDesc value)
  { setField(value); }
  public quickfix.field.AgreementDesc get(quickfix.field.AgreementDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AgreementDesc getAgreementDesc() throws FieldNotFound
  { quickfix.field.AgreementDesc value = new quickfix.field.AgreementDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AgreementDesc field)
  { return isSetField(field); }
  public boolean isSetAgreementDesc()
  { return isSetField(913); }
  public void set(quickfix.field.AgreementID value)
  { setField(value); }
  public quickfix.field.AgreementID get(quickfix.field.AgreementID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AgreementID getAgreementID() throws FieldNotFound
  { quickfix.field.AgreementID value = new quickfix.field.AgreementID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AgreementID field)
  { return isSetField(field); }
  public boolean isSetAgreementID()
  { return isSetField(914); }
  public void set(quickfix.field.AgreementDate value)
  { setField(value); }
  public quickfix.field.AgreementDate get(quickfix.field.AgreementDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AgreementDate getAgreementDate() throws FieldNotFound
  { quickfix.field.AgreementDate value = new quickfix.field.AgreementDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AgreementDate field)
  { return isSetField(field); }
  public boolean isSetAgreementDate()
  { return isSetField(915); }
  public void set(quickfix.field.AgreementCurrency value)
  { setField(value); }
  public quickfix.field.AgreementCurrency get(quickfix.field.AgreementCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AgreementCurrency getAgreementCurrency() throws FieldNotFound
  { quickfix.field.AgreementCurrency value = new quickfix.field.AgreementCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AgreementCurrency field)
  { return isSetField(field); }
  public boolean isSetAgreementCurrency()
  { return isSetField(918); }
  public void set(quickfix.field.TerminationType value)
  { setField(value); }
  public quickfix.field.TerminationType get(quickfix.field.TerminationType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TerminationType getTerminationType() throws FieldNotFound
  { quickfix.field.TerminationType value = new quickfix.field.TerminationType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TerminationType field)
  { return isSetField(field); }
  public boolean isSetTerminationType()
  { return isSetField(788); }
  public void set(quickfix.field.StartDate value)
  { setField(value); }
  public quickfix.field.StartDate get(quickfix.field.StartDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StartDate getStartDate() throws FieldNotFound
  { quickfix.field.StartDate value = new quickfix.field.StartDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StartDate field)
  { return isSetField(field); }
  public boolean isSetStartDate()
  { return isSetField(916); }
  public void set(quickfix.field.EndDate value)
  { setField(value); }
  public quickfix.field.EndDate get(quickfix.field.EndDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EndDate getEndDate() throws FieldNotFound
  { quickfix.field.EndDate value = new quickfix.field.EndDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EndDate field)
  { return isSetField(field); }
  public boolean isSetEndDate()
  { return isSetField(917); }
  public void set(quickfix.field.DeliveryType value)
  { setField(value); }
  public quickfix.field.DeliveryType get(quickfix.field.DeliveryType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DeliveryType getDeliveryType() throws FieldNotFound
  { quickfix.field.DeliveryType value = new quickfix.field.DeliveryType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DeliveryType field)
  { return isSetField(field); }
  public boolean isSetDeliveryType()
  { return isSetField(919); }
  public void set(quickfix.field.MarginRatio value)
  { setField(value); }
  public quickfix.field.MarginRatio get(quickfix.field.MarginRatio  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MarginRatio getMarginRatio() throws FieldNotFound
  { quickfix.field.MarginRatio value = new quickfix.field.MarginRatio();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MarginRatio field)
  { return isSetField(field); }
  public boolean isSetMarginRatio()
  { return isSetField(898); }
  public void set(quickfix.field.OrderQty value)
  { setField(value); }
  public quickfix.field.OrderQty get(quickfix.field.OrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderQty getOrderQty() throws FieldNotFound
  { quickfix.field.OrderQty value = new quickfix.field.OrderQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderQty field)
  { return isSetField(field); }
  public boolean isSetOrderQty()
  { return isSetField(38); }
  public void set(quickfix.field.CashOrderQty value)
  { setField(value); }
  public quickfix.field.CashOrderQty get(quickfix.field.CashOrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashOrderQty getCashOrderQty() throws FieldNotFound
  { quickfix.field.CashOrderQty value = new quickfix.field.CashOrderQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashOrderQty field)
  { return isSetField(field); }
  public boolean isSetCashOrderQty()
  { return isSetField(152); }
  public void set(quickfix.field.OrderPercent value)
  { setField(value); }
  public quickfix.field.OrderPercent get(quickfix.field.OrderPercent  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderPercent getOrderPercent() throws FieldNotFound
  { quickfix.field.OrderPercent value = new quickfix.field.OrderPercent();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderPercent field)
  { return isSetField(field); }
  public boolean isSetOrderPercent()
  { return isSetField(516); }
  public void set(quickfix.field.RoundingDirection value)
  { setField(value); }
  public quickfix.field.RoundingDirection get(quickfix.field.RoundingDirection  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RoundingDirection getRoundingDirection() throws FieldNotFound
  { quickfix.field.RoundingDirection value = new quickfix.field.RoundingDirection();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RoundingDirection field)
  { return isSetField(field); }
  public boolean isSetRoundingDirection()
  { return isSetField(468); }
  public void set(quickfix.field.RoundingModulus value)
  { setField(value); }
  public quickfix.field.RoundingModulus get(quickfix.field.RoundingModulus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RoundingModulus getRoundingModulus() throws FieldNotFound
  { quickfix.field.RoundingModulus value = new quickfix.field.RoundingModulus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RoundingModulus field)
  { return isSetField(field); }
  public boolean isSetRoundingModulus()
  { return isSetField(469); }
  public void set(quickfix.field.QtyType value)
  { setField(value); }
  public quickfix.field.QtyType get(quickfix.field.QtyType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QtyType getQtyType() throws FieldNotFound
  { quickfix.field.QtyType value = new quickfix.field.QtyType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QtyType field)
  { return isSetField(field); }
  public boolean isSetQtyType()
  { return isSetField(854); }
  public void set(quickfix.field.YieldType value)
  { setField(value); }
  public quickfix.field.YieldType get(quickfix.field.YieldType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.YieldType getYieldType() throws FieldNotFound
  { quickfix.field.YieldType value = new quickfix.field.YieldType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.YieldType field)
  { return isSetField(field); }
  public boolean isSetYieldType()
  { return isSetField(235); }
  public void set(quickfix.field.Yield value)
  { setField(value); }
  public quickfix.field.Yield get(quickfix.field.Yield  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Yield getYield() throws FieldNotFound
  { quickfix.field.Yield value = new quickfix.field.Yield();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Yield field)
  { return isSetField(field); }
  public boolean isSetYield()
  { return isSetField(236); }
  public void set(quickfix.field.YieldCalcDate value)
  { setField(value); }
  public quickfix.field.YieldCalcDate get(quickfix.field.YieldCalcDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.YieldCalcDate getYieldCalcDate() throws FieldNotFound
  { quickfix.field.YieldCalcDate value = new quickfix.field.YieldCalcDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.YieldCalcDate field)
  { return isSetField(field); }
  public boolean isSetYieldCalcDate()
  { return isSetField(701); }
  public void set(quickfix.field.YieldRedemptionDate value)
  { setField(value); }
  public quickfix.field.YieldRedemptionDate get(quickfix.field.YieldRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.YieldRedemptionDate getYieldRedemptionDate() throws FieldNotFound
  { quickfix.field.YieldRedemptionDate value = new quickfix.field.YieldRedemptionDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.YieldRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetYieldRedemptionDate()
  { return isSetField(696); }
  public void set(quickfix.field.YieldRedemptionPrice value)
  { setField(value); }
  public quickfix.field.YieldRedemptionPrice get(quickfix.field.YieldRedemptionPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.YieldRedemptionPrice getYieldRedemptionPrice() throws FieldNotFound
  { quickfix.field.YieldRedemptionPrice value = new quickfix.field.YieldRedemptionPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.YieldRedemptionPrice field)
  { return isSetField(field); }
  public boolean isSetYieldRedemptionPrice()
  { return isSetField(697); }
  public void set(quickfix.field.YieldRedemptionPriceType value)
  { setField(value); }
  public quickfix.field.YieldRedemptionPriceType get(quickfix.field.YieldRedemptionPriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.YieldRedemptionPriceType getYieldRedemptionPriceType() throws FieldNotFound
  { quickfix.field.YieldRedemptionPriceType value = new quickfix.field.YieldRedemptionPriceType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.YieldRedemptionPriceType field)
  { return isSetField(field); }
  public boolean isSetYieldRedemptionPriceType()
  { return isSetField(698); }
  public void set(quickfix.field.NoUnderlyings value)
  { setField(value); }
  public quickfix.field.NoUnderlyings get(quickfix.field.NoUnderlyings  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoUnderlyings getNoUnderlyings() throws FieldNotFound
  { quickfix.field.NoUnderlyings value = new quickfix.field.NoUnderlyings();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoUnderlyings field)
  { return isSetField(field); }
  public boolean isSetNoUnderlyings()
  { return isSetField(711); }
  public static class NoUnderlyings extends Group {
    public NoUnderlyings() {
      super(711,311,
      new int[] {311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,972,975,973,974,998,1000,1038,1039,1044,1045,1046,0 } ); }
  public void set(quickfix.field.UnderlyingSymbol value)
  { setField(value); }
  public quickfix.field.UnderlyingSymbol get(quickfix.field.UnderlyingSymbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSymbol getUnderlyingSymbol() throws FieldNotFound
  { quickfix.field.UnderlyingSymbol value = new quickfix.field.UnderlyingSymbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSymbol field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSymbol()
  { return isSetField(311); }
  public void set(quickfix.field.UnderlyingSymbolSfx value)
  { setField(value); }
  public quickfix.field.UnderlyingSymbolSfx get(quickfix.field.UnderlyingSymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSymbolSfx getUnderlyingSymbolSfx() throws FieldNotFound
  { quickfix.field.UnderlyingSymbolSfx value = new quickfix.field.UnderlyingSymbolSfx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSymbolSfx field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSymbolSfx()
  { return isSetField(312); }
  public void set(quickfix.field.UnderlyingSecurityID value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityID get(quickfix.field.UnderlyingSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityID getUnderlyingSecurityID() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityID value = new quickfix.field.UnderlyingSecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityID field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityID()
  { return isSetField(309); }
  public void set(quickfix.field.UnderlyingSecurityIDSource value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityIDSource get(quickfix.field.UnderlyingSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityIDSource getUnderlyingSecurityIDSource() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityIDSource value = new quickfix.field.UnderlyingSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityIDSource()
  { return isSetField(305); }
  public void set(quickfix.field.UnderlyingProduct value)
  { setField(value); }
  public quickfix.field.UnderlyingProduct get(quickfix.field.UnderlyingProduct  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingProduct getUnderlyingProduct() throws FieldNotFound
  { quickfix.field.UnderlyingProduct value = new quickfix.field.UnderlyingProduct();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingProduct field)
  { return isSetField(field); }
  public boolean isSetUnderlyingProduct()
  { return isSetField(462); }
  public void set(quickfix.field.UnderlyingCFICode value)
  { setField(value); }
  public quickfix.field.UnderlyingCFICode get(quickfix.field.UnderlyingCFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCFICode getUnderlyingCFICode() throws FieldNotFound
  { quickfix.field.UnderlyingCFICode value = new quickfix.field.UnderlyingCFICode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCFICode field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCFICode()
  { return isSetField(463); }
  public void set(quickfix.field.UnderlyingSecurityType value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityType get(quickfix.field.UnderlyingSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityType getUnderlyingSecurityType() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityType value = new quickfix.field.UnderlyingSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityType()
  { return isSetField(310); }
  public void set(quickfix.field.UnderlyingSecuritySubType value)
  { setField(value); }
  public quickfix.field.UnderlyingSecuritySubType get(quickfix.field.UnderlyingSecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecuritySubType getUnderlyingSecuritySubType() throws FieldNotFound
  { quickfix.field.UnderlyingSecuritySubType value = new quickfix.field.UnderlyingSecuritySubType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecuritySubType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecuritySubType()
  { return isSetField(763); }
  public void set(quickfix.field.UnderlyingMaturityMonthYear value)
  { setField(value); }
  public quickfix.field.UnderlyingMaturityMonthYear get(quickfix.field.UnderlyingMaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingMaturityMonthYear getUnderlyingMaturityMonthYear() throws FieldNotFound
  { quickfix.field.UnderlyingMaturityMonthYear value = new quickfix.field.UnderlyingMaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingMaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetUnderlyingMaturityMonthYear()
  { return isSetField(313); }
  public void set(quickfix.field.UnderlyingMaturityDate value)
  { setField(value); }
  public quickfix.field.UnderlyingMaturityDate get(quickfix.field.UnderlyingMaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingMaturityDate getUnderlyingMaturityDate() throws FieldNotFound
  { quickfix.field.UnderlyingMaturityDate value = new quickfix.field.UnderlyingMaturityDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingMaturityDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingMaturityDate()
  { return isSetField(542); }
  public void set(quickfix.field.UnderlyingCouponPaymentDate value)
  { setField(value); }
  public quickfix.field.UnderlyingCouponPaymentDate get(quickfix.field.UnderlyingCouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCouponPaymentDate getUnderlyingCouponPaymentDate() throws FieldNotFound
  { quickfix.field.UnderlyingCouponPaymentDate value = new quickfix.field.UnderlyingCouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCouponPaymentDate()
  { return isSetField(241); }
  public void set(quickfix.field.UnderlyingIssueDate value)
  { setField(value); }
  public quickfix.field.UnderlyingIssueDate get(quickfix.field.UnderlyingIssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingIssueDate getUnderlyingIssueDate() throws FieldNotFound
  { quickfix.field.UnderlyingIssueDate value = new quickfix.field.UnderlyingIssueDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingIssueDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingIssueDate()
  { return isSetField(242); }
  public void set(quickfix.field.UnderlyingRepoCollateralSecurityType value)
  { setField(value); }
  public quickfix.field.UnderlyingRepoCollateralSecurityType get(quickfix.field.UnderlyingRepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRepoCollateralSecurityType getUnderlyingRepoCollateralSecurityType() throws FieldNotFound
  { quickfix.field.UnderlyingRepoCollateralSecurityType value = new quickfix.field.UnderlyingRepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepoCollateralSecurityType()
  { return isSetField(243); }
  public void set(quickfix.field.UnderlyingRepurchaseTerm value)
  { setField(value); }
  public quickfix.field.UnderlyingRepurchaseTerm get(quickfix.field.UnderlyingRepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRepurchaseTerm getUnderlyingRepurchaseTerm() throws FieldNotFound
  { quickfix.field.UnderlyingRepurchaseTerm value = new quickfix.field.UnderlyingRepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepurchaseTerm()
  { return isSetField(244); }
  public void set(quickfix.field.UnderlyingRepurchaseRate value)
  { setField(value); }
  public quickfix.field.UnderlyingRepurchaseRate get(quickfix.field.UnderlyingRepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRepurchaseRate getUnderlyingRepurchaseRate() throws FieldNotFound
  { quickfix.field.UnderlyingRepurchaseRate value = new quickfix.field.UnderlyingRepurchaseRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepurchaseRate()
  { return isSetField(245); }
  public void set(quickfix.field.UnderlyingFactor value)
  { setField(value); }
  public quickfix.field.UnderlyingFactor get(quickfix.field.UnderlyingFactor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingFactor getUnderlyingFactor() throws FieldNotFound
  { quickfix.field.UnderlyingFactor value = new quickfix.field.UnderlyingFactor();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingFactor field)
  { return isSetField(field); }
  public boolean isSetUnderlyingFactor()
  { return isSetField(246); }
  public void set(quickfix.field.UnderlyingCreditRating value)
  { setField(value); }
  public quickfix.field.UnderlyingCreditRating get(quickfix.field.UnderlyingCreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCreditRating getUnderlyingCreditRating() throws FieldNotFound
  { quickfix.field.UnderlyingCreditRating value = new quickfix.field.UnderlyingCreditRating();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCreditRating field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCreditRating()
  { return isSetField(256); }
  public void set(quickfix.field.UnderlyingInstrRegistry value)
  { setField(value); }
  public quickfix.field.UnderlyingInstrRegistry get(quickfix.field.UnderlyingInstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingInstrRegistry getUnderlyingInstrRegistry() throws FieldNotFound
  { quickfix.field.UnderlyingInstrRegistry value = new quickfix.field.UnderlyingInstrRegistry();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingInstrRegistry field)
  { return isSetField(field); }
  public boolean isSetUnderlyingInstrRegistry()
  { return isSetField(595); }
  public void set(quickfix.field.UnderlyingCountryOfIssue value)
  { setField(value); }
  public quickfix.field.UnderlyingCountryOfIssue get(quickfix.field.UnderlyingCountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCountryOfIssue getUnderlyingCountryOfIssue() throws FieldNotFound
  { quickfix.field.UnderlyingCountryOfIssue value = new quickfix.field.UnderlyingCountryOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCountryOfIssue()
  { return isSetField(592); }
  public void set(quickfix.field.UnderlyingStateOrProvinceOfIssue value)
  { setField(value); }
  public quickfix.field.UnderlyingStateOrProvinceOfIssue get(quickfix.field.UnderlyingStateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStateOrProvinceOfIssue getUnderlyingStateOrProvinceOfIssue() throws FieldNotFound
  { quickfix.field.UnderlyingStateOrProvinceOfIssue value = new quickfix.field.UnderlyingStateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStateOrProvinceOfIssue()
  { return isSetField(593); }
  public void set(quickfix.field.UnderlyingLocaleOfIssue value)
  { setField(value); }
  public quickfix.field.UnderlyingLocaleOfIssue get(quickfix.field.UnderlyingLocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingLocaleOfIssue getUnderlyingLocaleOfIssue() throws FieldNotFound
  { quickfix.field.UnderlyingLocaleOfIssue value = new quickfix.field.UnderlyingLocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingLocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingLocaleOfIssue()
  { return isSetField(594); }
  public void set(quickfix.field.UnderlyingRedemptionDate value)
  { setField(value); }
  public quickfix.field.UnderlyingRedemptionDate get(quickfix.field.UnderlyingRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRedemptionDate getUnderlyingRedemptionDate() throws FieldNotFound
  { quickfix.field.UnderlyingRedemptionDate value = new quickfix.field.UnderlyingRedemptionDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRedemptionDate()
  { return isSetField(247); }
  public void set(quickfix.field.UnderlyingStrikePrice value)
  { setField(value); }
  public quickfix.field.UnderlyingStrikePrice get(quickfix.field.UnderlyingStrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStrikePrice getUnderlyingStrikePrice() throws FieldNotFound
  { quickfix.field.UnderlyingStrikePrice value = new quickfix.field.UnderlyingStrikePrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStrikePrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStrikePrice()
  { return isSetField(316); }
  public void set(quickfix.field.UnderlyingStrikeCurrency value)
  { setField(value); }
  public quickfix.field.UnderlyingStrikeCurrency get(quickfix.field.UnderlyingStrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStrikeCurrency getUnderlyingStrikeCurrency() throws FieldNotFound
  { quickfix.field.UnderlyingStrikeCurrency value = new quickfix.field.UnderlyingStrikeCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStrikeCurrency()
  { return isSetField(941); }
  public void set(quickfix.field.UnderlyingOptAttribute value)
  { setField(value); }
  public quickfix.field.UnderlyingOptAttribute get(quickfix.field.UnderlyingOptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingOptAttribute getUnderlyingOptAttribute() throws FieldNotFound
  { quickfix.field.UnderlyingOptAttribute value = new quickfix.field.UnderlyingOptAttribute();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingOptAttribute field)
  { return isSetField(field); }
  public boolean isSetUnderlyingOptAttribute()
  { return isSetField(317); }
  public void set(quickfix.field.UnderlyingContractMultiplier value)
  { setField(value); }
  public quickfix.field.UnderlyingContractMultiplier get(quickfix.field.UnderlyingContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingContractMultiplier getUnderlyingContractMultiplier() throws FieldNotFound
  { quickfix.field.UnderlyingContractMultiplier value = new quickfix.field.UnderlyingContractMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetUnderlyingContractMultiplier()
  { return isSetField(436); }
  public void set(quickfix.field.UnderlyingCouponRate value)
  { setField(value); }
  public quickfix.field.UnderlyingCouponRate get(quickfix.field.UnderlyingCouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCouponRate getUnderlyingCouponRate() throws FieldNotFound
  { quickfix.field.UnderlyingCouponRate value = new quickfix.field.UnderlyingCouponRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCouponRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCouponRate()
  { return isSetField(435); }
  public void set(quickfix.field.UnderlyingSecurityExchange value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityExchange get(quickfix.field.UnderlyingSecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityExchange getUnderlyingSecurityExchange() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityExchange value = new quickfix.field.UnderlyingSecurityExchange();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityExchange field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityExchange()
  { return isSetField(308); }
  public void set(quickfix.field.UnderlyingIssuer value)
  { setField(value); }
  public quickfix.field.UnderlyingIssuer get(quickfix.field.UnderlyingIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingIssuer getUnderlyingIssuer() throws FieldNotFound
  { quickfix.field.UnderlyingIssuer value = new quickfix.field.UnderlyingIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingIssuer field)
  { return isSetField(field); }
  public boolean isSetUnderlyingIssuer()
  { return isSetField(306); }
  public void set(quickfix.field.EncodedUnderlyingIssuerLen value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingIssuerLen get(quickfix.field.EncodedUnderlyingIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingIssuerLen getEncodedUnderlyingIssuerLen() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingIssuerLen value = new quickfix.field.EncodedUnderlyingIssuerLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingIssuerLen()
  { return isSetField(362); }
  public void set(quickfix.field.EncodedUnderlyingIssuer value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingIssuer get(quickfix.field.EncodedUnderlyingIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingIssuer getEncodedUnderlyingIssuer() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingIssuer value = new quickfix.field.EncodedUnderlyingIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingIssuer()
  { return isSetField(363); }
  public void set(quickfix.field.UnderlyingSecurityDesc value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityDesc get(quickfix.field.UnderlyingSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityDesc getUnderlyingSecurityDesc() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityDesc value = new quickfix.field.UnderlyingSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityDesc()
  { return isSetField(307); }
  public void set(quickfix.field.EncodedUnderlyingSecurityDescLen value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingSecurityDescLen get(quickfix.field.EncodedUnderlyingSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingSecurityDescLen getEncodedUnderlyingSecurityDescLen() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingSecurityDescLen value = new quickfix.field.EncodedUnderlyingSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingSecurityDescLen()
  { return isSetField(364); }
  public void set(quickfix.field.EncodedUnderlyingSecurityDesc value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingSecurityDesc get(quickfix.field.EncodedUnderlyingSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingSecurityDesc getEncodedUnderlyingSecurityDesc() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingSecurityDesc value = new quickfix.field.EncodedUnderlyingSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingSecurityDesc()
  { return isSetField(365); }
  public void set(quickfix.field.UnderlyingCPProgram value)
  { setField(value); }
  public quickfix.field.UnderlyingCPProgram get(quickfix.field.UnderlyingCPProgram  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCPProgram getUnderlyingCPProgram() throws FieldNotFound
  { quickfix.field.UnderlyingCPProgram value = new quickfix.field.UnderlyingCPProgram();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCPProgram field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCPProgram()
  { return isSetField(877); }
  public void set(quickfix.field.UnderlyingCPRegType value)
  { setField(value); }
  public quickfix.field.UnderlyingCPRegType get(quickfix.field.UnderlyingCPRegType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCPRegType getUnderlyingCPRegType() throws FieldNotFound
  { quickfix.field.UnderlyingCPRegType value = new quickfix.field.UnderlyingCPRegType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCPRegType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCPRegType()
  { return isSetField(878); }
  public void set(quickfix.field.UnderlyingCurrency value)
  { setField(value); }
  public quickfix.field.UnderlyingCurrency get(quickfix.field.UnderlyingCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCurrency getUnderlyingCurrency() throws FieldNotFound
  { quickfix.field.UnderlyingCurrency value = new quickfix.field.UnderlyingCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCurrency field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCurrency()
  { return isSetField(318); }
  public void set(quickfix.field.UnderlyingQty value)
  { setField(value); }
  public quickfix.field.UnderlyingQty get(quickfix.field.UnderlyingQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingQty getUnderlyingQty() throws FieldNotFound
  { quickfix.field.UnderlyingQty value = new quickfix.field.UnderlyingQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingQty field)
  { return isSetField(field); }
  public boolean isSetUnderlyingQty()
  { return isSetField(879); }
  public void set(quickfix.field.UnderlyingPx value)
  { setField(value); }
  public quickfix.field.UnderlyingPx get(quickfix.field.UnderlyingPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingPx getUnderlyingPx() throws FieldNotFound
  { quickfix.field.UnderlyingPx value = new quickfix.field.UnderlyingPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingPx field)
  { return isSetField(field); }
  public boolean isSetUnderlyingPx()
  { return isSetField(810); }
  public void set(quickfix.field.UnderlyingDirtyPrice value)
  { setField(value); }
  public quickfix.field.UnderlyingDirtyPrice get(quickfix.field.UnderlyingDirtyPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingDirtyPrice getUnderlyingDirtyPrice() throws FieldNotFound
  { quickfix.field.UnderlyingDirtyPrice value = new quickfix.field.UnderlyingDirtyPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingDirtyPrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingDirtyPrice()
  { return isSetField(882); }
  public void set(quickfix.field.UnderlyingEndPrice value)
  { setField(value); }
  public quickfix.field.UnderlyingEndPrice get(quickfix.field.UnderlyingEndPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingEndPrice getUnderlyingEndPrice() throws FieldNotFound
  { quickfix.field.UnderlyingEndPrice value = new quickfix.field.UnderlyingEndPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingEndPrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingEndPrice()
  { return isSetField(883); }
  public void set(quickfix.field.UnderlyingStartValue value)
  { setField(value); }
  public quickfix.field.UnderlyingStartValue get(quickfix.field.UnderlyingStartValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStartValue getUnderlyingStartValue() throws FieldNotFound
  { quickfix.field.UnderlyingStartValue value = new quickfix.field.UnderlyingStartValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStartValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStartValue()
  { return isSetField(884); }
  public void set(quickfix.field.UnderlyingCurrentValue value)
  { setField(value); }
  public quickfix.field.UnderlyingCurrentValue get(quickfix.field.UnderlyingCurrentValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCurrentValue getUnderlyingCurrentValue() throws FieldNotFound
  { quickfix.field.UnderlyingCurrentValue value = new quickfix.field.UnderlyingCurrentValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCurrentValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCurrentValue()
  { return isSetField(885); }
  public void set(quickfix.field.UnderlyingEndValue value)
  { setField(value); }
  public quickfix.field.UnderlyingEndValue get(quickfix.field.UnderlyingEndValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingEndValue getUnderlyingEndValue() throws FieldNotFound
  { quickfix.field.UnderlyingEndValue value = new quickfix.field.UnderlyingEndValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingEndValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingEndValue()
  { return isSetField(886); }
  public void set(quickfix.field.UnderlyingAllocationPercent value)
  { setField(value); }
  public quickfix.field.UnderlyingAllocationPercent get(quickfix.field.UnderlyingAllocationPercent  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingAllocationPercent getUnderlyingAllocationPercent() throws FieldNotFound
  { quickfix.field.UnderlyingAllocationPercent value = new quickfix.field.UnderlyingAllocationPercent();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingAllocationPercent field)
  { return isSetField(field); }
  public boolean isSetUnderlyingAllocationPercent()
  { return isSetField(972); }
  public void set(quickfix.field.UnderlyingSettlementType value)
  { setField(value); }
  public quickfix.field.UnderlyingSettlementType get(quickfix.field.UnderlyingSettlementType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSettlementType getUnderlyingSettlementType() throws FieldNotFound
  { quickfix.field.UnderlyingSettlementType value = new quickfix.field.UnderlyingSettlementType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSettlementType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSettlementType()
  { return isSetField(975); }
  public void set(quickfix.field.UnderlyingCashAmount value)
  { setField(value); }
  public quickfix.field.UnderlyingCashAmount get(quickfix.field.UnderlyingCashAmount  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCashAmount getUnderlyingCashAmount() throws FieldNotFound
  { quickfix.field.UnderlyingCashAmount value = new quickfix.field.UnderlyingCashAmount();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCashAmount field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCashAmount()
  { return isSetField(973); }
  public void set(quickfix.field.UnderlyingCashType value)
  { setField(value); }
  public quickfix.field.UnderlyingCashType get(quickfix.field.UnderlyingCashType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCashType getUnderlyingCashType() throws FieldNotFound
  { quickfix.field.UnderlyingCashType value = new quickfix.field.UnderlyingCashType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCashType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCashType()
  { return isSetField(974); }
  public void set(quickfix.field.UnderlyingUnitofMeasure value)
  { setField(value); }
  public quickfix.field.UnderlyingUnitofMeasure get(quickfix.field.UnderlyingUnitofMeasure  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingUnitofMeasure getUnderlyingUnitofMeasure() throws FieldNotFound
  { quickfix.field.UnderlyingUnitofMeasure value = new quickfix.field.UnderlyingUnitofMeasure();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingUnitofMeasure field)
  { return isSetField(field); }
  public boolean isSetUnderlyingUnitofMeasure()
  { return isSetField(998); }
  public void set(quickfix.field.UnderlyingTimeUnit value)
  { setField(value); }
  public quickfix.field.UnderlyingTimeUnit get(quickfix.field.UnderlyingTimeUnit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingTimeUnit getUnderlyingTimeUnit() throws FieldNotFound
  { quickfix.field.UnderlyingTimeUnit value = new quickfix.field.UnderlyingTimeUnit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingTimeUnit field)
  { return isSetField(field); }
  public boolean isSetUnderlyingTimeUnit()
  { return isSetField(1000); }
  public void set(quickfix.field.UnderlyingCapValue value)
  { setField(value); }
  public quickfix.field.UnderlyingCapValue get(quickfix.field.UnderlyingCapValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCapValue getUnderlyingCapValue() throws FieldNotFound
  { quickfix.field.UnderlyingCapValue value = new quickfix.field.UnderlyingCapValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCapValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCapValue()
  { return isSetField(1038); }
  public void set(quickfix.field.UnderlyingSettlMethod value)
  { setField(value); }
  public quickfix.field.UnderlyingSettlMethod get(quickfix.field.UnderlyingSettlMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSettlMethod getUnderlyingSettlMethod() throws FieldNotFound
  { quickfix.field.UnderlyingSettlMethod value = new quickfix.field.UnderlyingSettlMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSettlMethod field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSettlMethod()
  { return isSetField(1039); }
  public void set(quickfix.field.UnderlyingAdjustedQuantity value)
  { setField(value); }
  public quickfix.field.UnderlyingAdjustedQuantity get(quickfix.field.UnderlyingAdjustedQuantity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingAdjustedQuantity getUnderlyingAdjustedQuantity() throws FieldNotFound
  { quickfix.field.UnderlyingAdjustedQuantity value = new quickfix.field.UnderlyingAdjustedQuantity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingAdjustedQuantity field)
  { return isSetField(field); }
  public boolean isSetUnderlyingAdjustedQuantity()
  { return isSetField(1044); }
  public void set(quickfix.field.UnderlyingFXRate value)
  { setField(value); }
  public quickfix.field.UnderlyingFXRate get(quickfix.field.UnderlyingFXRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingFXRate getUnderlyingFXRate() throws FieldNotFound
  { quickfix.field.UnderlyingFXRate value = new quickfix.field.UnderlyingFXRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingFXRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingFXRate()
  { return isSetField(1045); }
  public void set(quickfix.field.UnderlyingFXRateCalc value)
  { setField(value); }
  public quickfix.field.UnderlyingFXRateCalc get(quickfix.field.UnderlyingFXRateCalc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingFXRateCalc getUnderlyingFXRateCalc() throws FieldNotFound
  { quickfix.field.UnderlyingFXRateCalc value = new quickfix.field.UnderlyingFXRateCalc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingFXRateCalc field)
  { return isSetField(field); }
  public boolean isSetUnderlyingFXRateCalc()
  { return isSetField(1046); }
}
  public void set(quickfix.field.UnderlyingTradingSessionID value)
  { setField(value); }
  public quickfix.field.UnderlyingTradingSessionID get(quickfix.field.UnderlyingTradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingTradingSessionID getUnderlyingTradingSessionID() throws FieldNotFound
  { quickfix.field.UnderlyingTradingSessionID value = new quickfix.field.UnderlyingTradingSessionID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingTradingSessionID field)
  { return isSetField(field); }
  public boolean isSetUnderlyingTradingSessionID()
  { return isSetField(822); }
  public void set(quickfix.field.UnderlyingTradingSessionSubID value)
  { setField(value); }
  public quickfix.field.UnderlyingTradingSessionSubID get(quickfix.field.UnderlyingTradingSessionSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingTradingSessionSubID getUnderlyingTradingSessionSubID() throws FieldNotFound
  { quickfix.field.UnderlyingTradingSessionSubID value = new quickfix.field.UnderlyingTradingSessionSubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingTradingSessionSubID field)
  { return isSetField(field); }
  public boolean isSetUnderlyingTradingSessionSubID()
  { return isSetField(823); }
  public void set(quickfix.field.LastQty value)
  { setField(value); }
  public quickfix.field.LastQty get(quickfix.field.LastQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastQty getLastQty() throws FieldNotFound
  { quickfix.field.LastQty value = new quickfix.field.LastQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastQty field)
  { return isSetField(field); }
  public boolean isSetLastQty()
  { return isSetField(32); }
  public void set(quickfix.field.LastPx value)
  { setField(value); }
  public quickfix.field.LastPx get(quickfix.field.LastPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastPx getLastPx() throws FieldNotFound
  { quickfix.field.LastPx value = new quickfix.field.LastPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastPx field)
  { return isSetField(field); }
  public boolean isSetLastPx()
  { return isSetField(31); }
  public void set(quickfix.field.LastParPx value)
  { setField(value); }
  public quickfix.field.LastParPx get(quickfix.field.LastParPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastParPx getLastParPx() throws FieldNotFound
  { quickfix.field.LastParPx value = new quickfix.field.LastParPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastParPx field)
  { return isSetField(field); }
  public boolean isSetLastParPx()
  { return isSetField(669); }
  public void set(quickfix.field.LastSpotRate value)
  { setField(value); }
  public quickfix.field.LastSpotRate get(quickfix.field.LastSpotRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastSpotRate getLastSpotRate() throws FieldNotFound
  { quickfix.field.LastSpotRate value = new quickfix.field.LastSpotRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastSpotRate field)
  { return isSetField(field); }
  public boolean isSetLastSpotRate()
  { return isSetField(194); }
  public void set(quickfix.field.LastForwardPoints value)
  { setField(value); }
  public quickfix.field.LastForwardPoints get(quickfix.field.LastForwardPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastForwardPoints getLastForwardPoints() throws FieldNotFound
  { quickfix.field.LastForwardPoints value = new quickfix.field.LastForwardPoints();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastForwardPoints field)
  { return isSetField(field); }
  public boolean isSetLastForwardPoints()
  { return isSetField(195); }
  public void set(quickfix.field.LastMkt value)
  { setField(value); }
  public quickfix.field.LastMkt get(quickfix.field.LastMkt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastMkt getLastMkt() throws FieldNotFound
  { quickfix.field.LastMkt value = new quickfix.field.LastMkt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastMkt field)
  { return isSetField(field); }
  public boolean isSetLastMkt()
  { return isSetField(30); }
  public void set(quickfix.field.TradeDate value)
  { setField(value); }
  public quickfix.field.TradeDate get(quickfix.field.TradeDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeDate getTradeDate() throws FieldNotFound
  { quickfix.field.TradeDate value = new quickfix.field.TradeDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeDate field)
  { return isSetField(field); }
  public boolean isSetTradeDate()
  { return isSetField(75); }
  public void set(quickfix.field.ClearingBusinessDate value)
  { setField(value); }
  public quickfix.field.ClearingBusinessDate get(quickfix.field.ClearingBusinessDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClearingBusinessDate getClearingBusinessDate() throws FieldNotFound
  { quickfix.field.ClearingBusinessDate value = new quickfix.field.ClearingBusinessDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClearingBusinessDate field)
  { return isSetField(field); }
  public boolean isSetClearingBusinessDate()
  { return isSetField(715); }
  public void set(quickfix.field.AvgPx value)
  { setField(value); }
  public quickfix.field.AvgPx get(quickfix.field.AvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AvgPx getAvgPx() throws FieldNotFound
  { quickfix.field.AvgPx value = new quickfix.field.AvgPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AvgPx field)
  { return isSetField(field); }
  public boolean isSetAvgPx()
  { return isSetField(6); }
  public void set(quickfix.field.Spread value)
  { setField(value); }
  public quickfix.field.Spread get(quickfix.field.Spread  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Spread getSpread() throws FieldNotFound
  { quickfix.field.Spread value = new quickfix.field.Spread();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Spread field)
  { return isSetField(field); }
  public boolean isSetSpread()
  { return isSetField(218); }
  public void set(quickfix.field.BenchmarkCurveCurrency value)
  { setField(value); }
  public quickfix.field.BenchmarkCurveCurrency get(quickfix.field.BenchmarkCurveCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkCurveCurrency getBenchmarkCurveCurrency() throws FieldNotFound
  { quickfix.field.BenchmarkCurveCurrency value = new quickfix.field.BenchmarkCurveCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkCurveCurrency field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurveCurrency()
  { return isSetField(220); }
  public void set(quickfix.field.BenchmarkCurveName value)
  { setField(value); }
  public quickfix.field.BenchmarkCurveName get(quickfix.field.BenchmarkCurveName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkCurveName getBenchmarkCurveName() throws FieldNotFound
  { quickfix.field.BenchmarkCurveName value = new quickfix.field.BenchmarkCurveName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkCurveName field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurveName()
  { return isSetField(221); }
  public void set(quickfix.field.BenchmarkCurvePoint value)
  { setField(value); }
  public quickfix.field.BenchmarkCurvePoint get(quickfix.field.BenchmarkCurvePoint  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkCurvePoint getBenchmarkCurvePoint() throws FieldNotFound
  { quickfix.field.BenchmarkCurvePoint value = new quickfix.field.BenchmarkCurvePoint();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkCurvePoint field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurvePoint()
  { return isSetField(222); }
  public void set(quickfix.field.BenchmarkPrice value)
  { setField(value); }
  public quickfix.field.BenchmarkPrice get(quickfix.field.BenchmarkPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkPrice getBenchmarkPrice() throws FieldNotFound
  { quickfix.field.BenchmarkPrice value = new quickfix.field.BenchmarkPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkPrice field)
  { return isSetField(field); }
  public boolean isSetBenchmarkPrice()
  { return isSetField(662); }
  public void set(quickfix.field.BenchmarkPriceType value)
  { setField(value); }
  public quickfix.field.BenchmarkPriceType get(quickfix.field.BenchmarkPriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkPriceType getBenchmarkPriceType() throws FieldNotFound
  { quickfix.field.BenchmarkPriceType value = new quickfix.field.BenchmarkPriceType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkPriceType field)
  { return isSetField(field); }
  public boolean isSetBenchmarkPriceType()
  { return isSetField(663); }
  public void set(quickfix.field.BenchmarkSecurityID value)
  { setField(value); }
  public quickfix.field.BenchmarkSecurityID get(quickfix.field.BenchmarkSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkSecurityID getBenchmarkSecurityID() throws FieldNotFound
  { quickfix.field.BenchmarkSecurityID value = new quickfix.field.BenchmarkSecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkSecurityID field)
  { return isSetField(field); }
  public boolean isSetBenchmarkSecurityID()
  { return isSetField(699); }
  public void set(quickfix.field.BenchmarkSecurityIDSource value)
  { setField(value); }
  public quickfix.field.BenchmarkSecurityIDSource get(quickfix.field.BenchmarkSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkSecurityIDSource getBenchmarkSecurityIDSource() throws FieldNotFound
  { quickfix.field.BenchmarkSecurityIDSource value = new quickfix.field.BenchmarkSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetBenchmarkSecurityIDSource()
  { return isSetField(761); }
  public void set(quickfix.field.AvgPxIndicator value)
  { setField(value); }
  public quickfix.field.AvgPxIndicator get(quickfix.field.AvgPxIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AvgPxIndicator getAvgPxIndicator() throws FieldNotFound
  { quickfix.field.AvgPxIndicator value = new quickfix.field.AvgPxIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AvgPxIndicator field)
  { return isSetField(field); }
  public boolean isSetAvgPxIndicator()
  { return isSetField(819); }
  public void set(quickfix.field.NoPosAmt value)
  { setField(value); }
  public quickfix.field.NoPosAmt get(quickfix.field.NoPosAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoPosAmt getNoPosAmt() throws FieldNotFound
  { quickfix.field.NoPosAmt value = new quickfix.field.NoPosAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoPosAmt field)
  { return isSetField(field); }
  public boolean isSetNoPosAmt()
  { return isSetField(753); }
  public static class NoPosAmt extends Group {
    public NoPosAmt() {
      super(753,707,
      new int[] {707,708,1055,0 } ); }
  public void set(quickfix.field.PosAmtType value)
  { setField(value); }
  public quickfix.field.PosAmtType get(quickfix.field.PosAmtType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PosAmtType getPosAmtType() throws FieldNotFound
  { quickfix.field.PosAmtType value = new quickfix.field.PosAmtType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PosAmtType field)
  { return isSetField(field); }
  public boolean isSetPosAmtType()
  { return isSetField(707); }
  public void set(quickfix.field.PosAmt value)
  { setField(value); }
  public quickfix.field.PosAmt get(quickfix.field.PosAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PosAmt getPosAmt() throws FieldNotFound
  { quickfix.field.PosAmt value = new quickfix.field.PosAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PosAmt field)
  { return isSetField(field); }
  public boolean isSetPosAmt()
  { return isSetField(708); }
  public void set(quickfix.field.PositionCurrency value)
  { setField(value); }
  public quickfix.field.PositionCurrency get(quickfix.field.PositionCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PositionCurrency getPositionCurrency() throws FieldNotFound
  { quickfix.field.PositionCurrency value = new quickfix.field.PositionCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PositionCurrency field)
  { return isSetField(field); }
  public boolean isSetPositionCurrency()
  { return isSetField(1055); }
}
  public void set(quickfix.field.MultiLegReportingType value)
  { setField(value); }
  public quickfix.field.MultiLegReportingType get(quickfix.field.MultiLegReportingType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MultiLegReportingType getMultiLegReportingType() throws FieldNotFound
  { quickfix.field.MultiLegReportingType value = new quickfix.field.MultiLegReportingType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MultiLegReportingType field)
  { return isSetField(field); }
  public boolean isSetMultiLegReportingType()
  { return isSetField(442); }
  public void set(quickfix.field.TradeLegRefID value)
  { setField(value); }
  public quickfix.field.TradeLegRefID get(quickfix.field.TradeLegRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeLegRefID getTradeLegRefID() throws FieldNotFound
  { quickfix.field.TradeLegRefID value = new quickfix.field.TradeLegRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeLegRefID field)
  { return isSetField(field); }
  public boolean isSetTradeLegRefID()
  { return isSetField(824); }
  public void set(quickfix.field.NoLegs value)
  { setField(value); }
  public quickfix.field.NoLegs get(quickfix.field.NoLegs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoLegs getNoLegs() throws FieldNotFound
  { quickfix.field.NoLegs value = new quickfix.field.NoLegs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoLegs field)
  { return isSetField(field); }
  public boolean isSetNoLegs()
  { return isSetField(555); }
  public static class NoLegs extends Group {
    public NoLegs() {
      super(555,600,
      new int[] {600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,999,1001,687,690,683,564,565,539,654,566,587,588,637,990,675,1073,1074,1075,0 } ); }
  public void set(quickfix.field.LegSymbol value)
  { setField(value); }
  public quickfix.field.LegSymbol get(quickfix.field.LegSymbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSymbol getLegSymbol() throws FieldNotFound
  { quickfix.field.LegSymbol value = new quickfix.field.LegSymbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSymbol field)
  { return isSetField(field); }
  public boolean isSetLegSymbol()
  { return isSetField(600); }
  public void set(quickfix.field.LegSymbolSfx value)
  { setField(value); }
  public quickfix.field.LegSymbolSfx get(quickfix.field.LegSymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSymbolSfx getLegSymbolSfx() throws FieldNotFound
  { quickfix.field.LegSymbolSfx value = new quickfix.field.LegSymbolSfx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSymbolSfx field)
  { return isSetField(field); }
  public boolean isSetLegSymbolSfx()
  { return isSetField(601); }
  public void set(quickfix.field.LegSecurityID value)
  { setField(value); }
  public quickfix.field.LegSecurityID get(quickfix.field.LegSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityID getLegSecurityID() throws FieldNotFound
  { quickfix.field.LegSecurityID value = new quickfix.field.LegSecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityID field)
  { return isSetField(field); }
  public boolean isSetLegSecurityID()
  { return isSetField(602); }
  public void set(quickfix.field.LegSecurityIDSource value)
  { setField(value); }
  public quickfix.field.LegSecurityIDSource get(quickfix.field.LegSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityIDSource getLegSecurityIDSource() throws FieldNotFound
  { quickfix.field.LegSecurityIDSource value = new quickfix.field.LegSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetLegSecurityIDSource()
  { return isSetField(603); }
  public void set(quickfix.field.LegProduct value)
  { setField(value); }
  public quickfix.field.LegProduct get(quickfix.field.LegProduct  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegProduct getLegProduct() throws FieldNotFound
  { quickfix.field.LegProduct value = new quickfix.field.LegProduct();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegProduct field)
  { return isSetField(field); }
  public boolean isSetLegProduct()
  { return isSetField(607); }
  public void set(quickfix.field.LegCFICode value)
  { setField(value); }
  public quickfix.field.LegCFICode get(quickfix.field.LegCFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCFICode getLegCFICode() throws FieldNotFound
  { quickfix.field.LegCFICode value = new quickfix.field.LegCFICode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCFICode field)
  { return isSetField(field); }
  public boolean isSetLegCFICode()
  { return isSetField(608); }
  public void set(quickfix.field.LegSecurityType value)
  { setField(value); }
  public quickfix.field.LegSecurityType get(quickfix.field.LegSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityType getLegSecurityType() throws FieldNotFound
  { quickfix.field.LegSecurityType value = new quickfix.field.LegSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityType field)
  { return isSetField(field); }
  public boolean isSetLegSecurityType()
  { return isSetField(609); }
  public void set(quickfix.field.LegSecuritySubType value)
  { setField(value); }
  public quickfix.field.LegSecuritySubType get(quickfix.field.LegSecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecuritySubType getLegSecuritySubType() throws FieldNotFound
  { quickfix.field.LegSecuritySubType value = new quickfix.field.LegSecuritySubType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecuritySubType field)
  { return isSetField(field); }
  public boolean isSetLegSecuritySubType()
  { return isSetField(764); }
  public void set(quickfix.field.LegMaturityMonthYear value)
  { setField(value); }
  public quickfix.field.LegMaturityMonthYear get(quickfix.field.LegMaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegMaturityMonthYear getLegMaturityMonthYear() throws FieldNotFound
  { quickfix.field.LegMaturityMonthYear value = new quickfix.field.LegMaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegMaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetLegMaturityMonthYear()
  { return isSetField(610); }
  public void set(quickfix.field.LegMaturityDate value)
  { setField(value); }
  public quickfix.field.LegMaturityDate get(quickfix.field.LegMaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegMaturityDate getLegMaturityDate() throws FieldNotFound
  { quickfix.field.LegMaturityDate value = new quickfix.field.LegMaturityDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegMaturityDate field)
  { return isSetField(field); }
  public boolean isSetLegMaturityDate()
  { return isSetField(611); }
  public void set(quickfix.field.LegCouponPaymentDate value)
  { setField(value); }
  public quickfix.field.LegCouponPaymentDate get(quickfix.field.LegCouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCouponPaymentDate getLegCouponPaymentDate() throws FieldNotFound
  { quickfix.field.LegCouponPaymentDate value = new quickfix.field.LegCouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetLegCouponPaymentDate()
  { return isSetField(248); }
  public void set(quickfix.field.LegIssueDate value)
  { setField(value); }
  public quickfix.field.LegIssueDate get(quickfix.field.LegIssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegIssueDate getLegIssueDate() throws FieldNotFound
  { quickfix.field.LegIssueDate value = new quickfix.field.LegIssueDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegIssueDate field)
  { return isSetField(field); }
  public boolean isSetLegIssueDate()
  { return isSetField(249); }
  public void set(quickfix.field.LegRepoCollateralSecurityType value)
  { setField(value); }
  public quickfix.field.LegRepoCollateralSecurityType get(quickfix.field.LegRepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRepoCollateralSecurityType getLegRepoCollateralSecurityType() throws FieldNotFound
  { quickfix.field.LegRepoCollateralSecurityType value = new quickfix.field.LegRepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetLegRepoCollateralSecurityType()
  { return isSetField(250); }
  public void set(quickfix.field.LegRepurchaseTerm value)
  { setField(value); }
  public quickfix.field.LegRepurchaseTerm get(quickfix.field.LegRepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRepurchaseTerm getLegRepurchaseTerm() throws FieldNotFound
  { quickfix.field.LegRepurchaseTerm value = new quickfix.field.LegRepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetLegRepurchaseTerm()
  { return isSetField(251); }
  public void set(quickfix.field.LegRepurchaseRate value)
  { setField(value); }
  public quickfix.field.LegRepurchaseRate get(quickfix.field.LegRepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRepurchaseRate getLegRepurchaseRate() throws FieldNotFound
  { quickfix.field.LegRepurchaseRate value = new quickfix.field.LegRepurchaseRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetLegRepurchaseRate()
  { return isSetField(252); }
  public void set(quickfix.field.LegFactor value)
  { setField(value); }
  public quickfix.field.LegFactor get(quickfix.field.LegFactor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegFactor getLegFactor() throws FieldNotFound
  { quickfix.field.LegFactor value = new quickfix.field.LegFactor();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegFactor field)
  { return isSetField(field); }
  public boolean isSetLegFactor()
  { return isSetField(253); }
  public void set(quickfix.field.LegCreditRating value)
  { setField(value); }
  public quickfix.field.LegCreditRating get(quickfix.field.LegCreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCreditRating getLegCreditRating() throws FieldNotFound
  { quickfix.field.LegCreditRating value = new quickfix.field.LegCreditRating();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCreditRating field)
  { return isSetField(field); }
  public boolean isSetLegCreditRating()
  { return isSetField(257); }
  public void set(quickfix.field.LegInstrRegistry value)
  { setField(value); }
  public quickfix.field.LegInstrRegistry get(quickfix.field.LegInstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegInstrRegistry getLegInstrRegistry() throws FieldNotFound
  { quickfix.field.LegInstrRegistry value = new quickfix.field.LegInstrRegistry();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegInstrRegistry field)
  { return isSetField(field); }
  public boolean isSetLegInstrRegistry()
  { return isSetField(599); }
  public void set(quickfix.field.LegCountryOfIssue value)
  { setField(value); }
  public quickfix.field.LegCountryOfIssue get(quickfix.field.LegCountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCountryOfIssue getLegCountryOfIssue() throws FieldNotFound
  { quickfix.field.LegCountryOfIssue value = new quickfix.field.LegCountryOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegCountryOfIssue()
  { return isSetField(596); }
  public void set(quickfix.field.LegStateOrProvinceOfIssue value)
  { setField(value); }
  public quickfix.field.LegStateOrProvinceOfIssue get(quickfix.field.LegStateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStateOrProvinceOfIssue getLegStateOrProvinceOfIssue() throws FieldNotFound
  { quickfix.field.LegStateOrProvinceOfIssue value = new quickfix.field.LegStateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegStateOrProvinceOfIssue()
  { return isSetField(597); }
  public void set(quickfix.field.LegLocaleOfIssue value)
  { setField(value); }
  public quickfix.field.LegLocaleOfIssue get(quickfix.field.LegLocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegLocaleOfIssue getLegLocaleOfIssue() throws FieldNotFound
  { quickfix.field.LegLocaleOfIssue value = new quickfix.field.LegLocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegLocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegLocaleOfIssue()
  { return isSetField(598); }
  public void set(quickfix.field.LegRedemptionDate value)
  { setField(value); }
  public quickfix.field.LegRedemptionDate get(quickfix.field.LegRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRedemptionDate getLegRedemptionDate() throws FieldNotFound
  { quickfix.field.LegRedemptionDate value = new quickfix.field.LegRedemptionDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetLegRedemptionDate()
  { return isSetField(254); }
  public void set(quickfix.field.LegStrikePrice value)
  { setField(value); }
  public quickfix.field.LegStrikePrice get(quickfix.field.LegStrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStrikePrice getLegStrikePrice() throws FieldNotFound
  { quickfix.field.LegStrikePrice value = new quickfix.field.LegStrikePrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStrikePrice field)
  { return isSetField(field); }
  public boolean isSetLegStrikePrice()
  { return isSetField(612); }
  public void set(quickfix.field.LegStrikeCurrency value)
  { setField(value); }
  public quickfix.field.LegStrikeCurrency get(quickfix.field.LegStrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStrikeCurrency getLegStrikeCurrency() throws FieldNotFound
  { quickfix.field.LegStrikeCurrency value = new quickfix.field.LegStrikeCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetLegStrikeCurrency()
  { return isSetField(942); }
  public void set(quickfix.field.LegOptAttribute value)
  { setField(value); }
  public quickfix.field.LegOptAttribute get(quickfix.field.LegOptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegOptAttribute getLegOptAttribute() throws FieldNotFound
  { quickfix.field.LegOptAttribute value = new quickfix.field.LegOptAttribute();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegOptAttribute field)
  { return isSetField(field); }
  public boolean isSetLegOptAttribute()
  { return isSetField(613); }
  public void set(quickfix.field.LegContractMultiplier value)
  { setField(value); }
  public quickfix.field.LegContractMultiplier get(quickfix.field.LegContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegContractMultiplier getLegContractMultiplier() throws FieldNotFound
  { quickfix.field.LegContractMultiplier value = new quickfix.field.LegContractMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetLegContractMultiplier()
  { return isSetField(614); }
  public void set(quickfix.field.LegCouponRate value)
  { setField(value); }
  public quickfix.field.LegCouponRate get(quickfix.field.LegCouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCouponRate getLegCouponRate() throws FieldNotFound
  { quickfix.field.LegCouponRate value = new quickfix.field.LegCouponRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCouponRate field)
  { return isSetField(field); }
  public boolean isSetLegCouponRate()
  { return isSetField(615); }
  public void set(quickfix.field.LegSecurityExchange value)
  { setField(value); }
  public quickfix.field.LegSecurityExchange get(quickfix.field.LegSecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityExchange getLegSecurityExchange() throws FieldNotFound
  { quickfix.field.LegSecurityExchange value = new quickfix.field.LegSecurityExchange();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityExchange field)
  { return isSetField(field); }
  public boolean isSetLegSecurityExchange()
  { return isSetField(616); }
  public void set(quickfix.field.LegIssuer value)
  { setField(value); }
  public quickfix.field.LegIssuer get(quickfix.field.LegIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegIssuer getLegIssuer() throws FieldNotFound
  { quickfix.field.LegIssuer value = new quickfix.field.LegIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegIssuer field)
  { return isSetField(field); }
  public boolean isSetLegIssuer()
  { return isSetField(617); }
  public void set(quickfix.field.EncodedLegIssuerLen value)
  { setField(value); }
  public quickfix.field.EncodedLegIssuerLen get(quickfix.field.EncodedLegIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegIssuerLen getEncodedLegIssuerLen() throws FieldNotFound
  { quickfix.field.EncodedLegIssuerLen value = new quickfix.field.EncodedLegIssuerLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedLegIssuerLen()
  { return isSetField(618); }
  public void set(quickfix.field.EncodedLegIssuer value)
  { setField(value); }
  public quickfix.field.EncodedLegIssuer get(quickfix.field.EncodedLegIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegIssuer getEncodedLegIssuer() throws FieldNotFound
  { quickfix.field.EncodedLegIssuer value = new quickfix.field.EncodedLegIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedLegIssuer()
  { return isSetField(619); }
  public void set(quickfix.field.LegSecurityDesc value)
  { setField(value); }
  public quickfix.field.LegSecurityDesc get(quickfix.field.LegSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityDesc getLegSecurityDesc() throws FieldNotFound
  { quickfix.field.LegSecurityDesc value = new quickfix.field.LegSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetLegSecurityDesc()
  { return isSetField(620); }
  public void set(quickfix.field.EncodedLegSecurityDescLen value)
  { setField(value); }
  public quickfix.field.EncodedLegSecurityDescLen get(quickfix.field.EncodedLegSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegSecurityDescLen getEncodedLegSecurityDescLen() throws FieldNotFound
  { quickfix.field.EncodedLegSecurityDescLen value = new quickfix.field.EncodedLegSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedLegSecurityDescLen()
  { return isSetField(621); }
  public void set(quickfix.field.EncodedLegSecurityDesc value)
  { setField(value); }
  public quickfix.field.EncodedLegSecurityDesc get(quickfix.field.EncodedLegSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegSecurityDesc getEncodedLegSecurityDesc() throws FieldNotFound
  { quickfix.field.EncodedLegSecurityDesc value = new quickfix.field.EncodedLegSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedLegSecurityDesc()
  { return isSetField(622); }
  public void set(quickfix.field.LegRatioQty value)
  { setField(value); }
  public quickfix.field.LegRatioQty get(quickfix.field.LegRatioQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRatioQty getLegRatioQty() throws FieldNotFound
  { quickfix.field.LegRatioQty value = new quickfix.field.LegRatioQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRatioQty field)
  { return isSetField(field); }
  public boolean isSetLegRatioQty()
  { return isSetField(623); }
  public void set(quickfix.field.LegSide value)
  { setField(value); }
  public quickfix.field.LegSide get(quickfix.field.LegSide  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSide getLegSide() throws FieldNotFound
  { quickfix.field.LegSide value = new quickfix.field.LegSide();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSide field)
  { return isSetField(field); }
  public boolean isSetLegSide()
  { return isSetField(624); }
  public void set(quickfix.field.LegCurrency value)
  { setField(value); }
  public quickfix.field.LegCurrency get(quickfix.field.LegCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCurrency getLegCurrency() throws FieldNotFound
  { quickfix.field.LegCurrency value = new quickfix.field.LegCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCurrency field)
  { return isSetField(field); }
  public boolean isSetLegCurrency()
  { return isSetField(556); }
  public void set(quickfix.field.LegPool value)
  { setField(value); }
  public quickfix.field.LegPool get(quickfix.field.LegPool  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegPool getLegPool() throws FieldNotFound
  { quickfix.field.LegPool value = new quickfix.field.LegPool();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegPool field)
  { return isSetField(field); }
  public boolean isSetLegPool()
  { return isSetField(740); }
  public void set(quickfix.field.LegDatedDate value)
  { setField(value); }
  public quickfix.field.LegDatedDate get(quickfix.field.LegDatedDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegDatedDate getLegDatedDate() throws FieldNotFound
  { quickfix.field.LegDatedDate value = new quickfix.field.LegDatedDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegDatedDate field)
  { return isSetField(field); }
  public boolean isSetLegDatedDate()
  { return isSetField(739); }
  public void set(quickfix.field.LegContractSettlMonth value)
  { setField(value); }
  public quickfix.field.LegContractSettlMonth get(quickfix.field.LegContractSettlMonth  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegContractSettlMonth getLegContractSettlMonth() throws FieldNotFound
  { quickfix.field.LegContractSettlMonth value = new quickfix.field.LegContractSettlMonth();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegContractSettlMonth field)
  { return isSetField(field); }
  public boolean isSetLegContractSettlMonth()
  { return isSetField(955); }
  public void set(quickfix.field.LegInterestAccrualDate value)
  { setField(value); }
  public quickfix.field.LegInterestAccrualDate get(quickfix.field.LegInterestAccrualDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegInterestAccrualDate getLegInterestAccrualDate() throws FieldNotFound
  { quickfix.field.LegInterestAccrualDate value = new quickfix.field.LegInterestAccrualDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegInterestAccrualDate field)
  { return isSetField(field); }
  public boolean isSetLegInterestAccrualDate()
  { return isSetField(956); }
  public void set(quickfix.field.LegUnitofMeasure value)
  { setField(value); }
  public quickfix.field.LegUnitofMeasure get(quickfix.field.LegUnitofMeasure  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegUnitofMeasure getLegUnitofMeasure() throws FieldNotFound
  { quickfix.field.LegUnitofMeasure value = new quickfix.field.LegUnitofMeasure();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegUnitofMeasure field)
  { return isSetField(field); }
  public boolean isSetLegUnitofMeasure()
  { return isSetField(999); }
  public void set(quickfix.field.LegTimeUnit value)
  { setField(value); }
  public quickfix.field.LegTimeUnit get(quickfix.field.LegTimeUnit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegTimeUnit getLegTimeUnit() throws FieldNotFound
  { quickfix.field.LegTimeUnit value = new quickfix.field.LegTimeUnit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegTimeUnit field)
  { return isSetField(field); }
  public boolean isSetLegTimeUnit()
  { return isSetField(1001); }
  public void set(quickfix.field.LegQty value)
  { setField(value); }
  public quickfix.field.LegQty get(quickfix.field.LegQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegQty getLegQty() throws FieldNotFound
  { quickfix.field.LegQty value = new quickfix.field.LegQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegQty field)
  { return isSetField(field); }
  public boolean isSetLegQty()
  { return isSetField(687); }
  public void set(quickfix.field.LegSwapType value)
  { setField(value); }
  public quickfix.field.LegSwapType get(quickfix.field.LegSwapType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSwapType getLegSwapType() throws FieldNotFound
  { quickfix.field.LegSwapType value = new quickfix.field.LegSwapType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSwapType field)
  { return isSetField(field); }
  public boolean isSetLegSwapType()
  { return isSetField(690); }
  public void set(quickfix.field.NoLegStipulations value)
  { setField(value); }
  public quickfix.field.NoLegStipulations get(quickfix.field.NoLegStipulations  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoLegStipulations getNoLegStipulations() throws FieldNotFound
  { quickfix.field.NoLegStipulations value = new quickfix.field.NoLegStipulations();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoLegStipulations field)
  { return isSetField(field); }
  public boolean isSetNoLegStipulations()
  { return isSetField(683); }
  public static class NoLegStipulations extends Group {
    public NoLegStipulations() {
      super(683,688,
      new int[] {688,689,0 } ); }
  public void set(quickfix.field.LegStipulationType value)
  { setField(value); }
  public quickfix.field.LegStipulationType get(quickfix.field.LegStipulationType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStipulationType getLegStipulationType() throws FieldNotFound
  { quickfix.field.LegStipulationType value = new quickfix.field.LegStipulationType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStipulationType field)
  { return isSetField(field); }
  public boolean isSetLegStipulationType()
  { return isSetField(688); }
  public void set(quickfix.field.LegStipulationValue value)
  { setField(value); }
  public quickfix.field.LegStipulationValue get(quickfix.field.LegStipulationValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStipulationValue getLegStipulationValue() throws FieldNotFound
  { quickfix.field.LegStipulationValue value = new quickfix.field.LegStipulationValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStipulationValue field)
  { return isSetField(field); }
  public boolean isSetLegStipulationValue()
  { return isSetField(689); }
}
  public void set(quickfix.field.LegPositionEffect value)
  { setField(value); }
  public quickfix.field.LegPositionEffect get(quickfix.field.LegPositionEffect  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegPositionEffect getLegPositionEffect() throws FieldNotFound
  { quickfix.field.LegPositionEffect value = new quickfix.field.LegPositionEffect();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegPositionEffect field)
  { return isSetField(field); }
  public boolean isSetLegPositionEffect()
  { return isSetField(564); }
  public void set(quickfix.field.LegCoveredOrUncovered value)
  { setField(value); }
  public quickfix.field.LegCoveredOrUncovered get(quickfix.field.LegCoveredOrUncovered  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCoveredOrUncovered getLegCoveredOrUncovered() throws FieldNotFound
  { quickfix.field.LegCoveredOrUncovered value = new quickfix.field.LegCoveredOrUncovered();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCoveredOrUncovered field)
  { return isSetField(field); }
  public boolean isSetLegCoveredOrUncovered()
  { return isSetField(565); }
  public void set(quickfix.field.NoNestedPartyIDs value)
  { setField(value); }
  public quickfix.field.NoNestedPartyIDs get(quickfix.field.NoNestedPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNestedPartyIDs getNoNestedPartyIDs() throws FieldNotFound
  { quickfix.field.NoNestedPartyIDs value = new quickfix.field.NoNestedPartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNestedPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoNestedPartyIDs()
  { return isSetField(539); }
  public static class NoNestedPartyIDs extends Group {
    public NoNestedPartyIDs() {
      super(539,524,
      new int[] {524,525,538,804,0 } ); }
  public void set(quickfix.field.NestedPartyID value)
  { setField(value); }
  public quickfix.field.NestedPartyID get(quickfix.field.NestedPartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartyID getNestedPartyID() throws FieldNotFound
  { quickfix.field.NestedPartyID value = new quickfix.field.NestedPartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartyID field)
  { return isSetField(field); }
  public boolean isSetNestedPartyID()
  { return isSetField(524); }
  public void set(quickfix.field.NestedPartyIDSource value)
  { setField(value); }
  public quickfix.field.NestedPartyIDSource get(quickfix.field.NestedPartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartyIDSource getNestedPartyIDSource() throws FieldNotFound
  { quickfix.field.NestedPartyIDSource value = new quickfix.field.NestedPartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartyIDSource field)
  { return isSetField(field); }
  public boolean isSetNestedPartyIDSource()
  { return isSetField(525); }
  public void set(quickfix.field.NestedPartyRole value)
  { setField(value); }
  public quickfix.field.NestedPartyRole get(quickfix.field.NestedPartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartyRole getNestedPartyRole() throws FieldNotFound
  { quickfix.field.NestedPartyRole value = new quickfix.field.NestedPartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartyRole field)
  { return isSetField(field); }
  public boolean isSetNestedPartyRole()
  { return isSetField(538); }
  public void set(quickfix.field.NoNestedPartySubIDs value)
  { setField(value); }
  public quickfix.field.NoNestedPartySubIDs get(quickfix.field.NoNestedPartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNestedPartySubIDs getNoNestedPartySubIDs() throws FieldNotFound
  { quickfix.field.NoNestedPartySubIDs value = new quickfix.field.NoNestedPartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNestedPartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoNestedPartySubIDs()
  { return isSetField(804); }
  public static class NoNestedPartySubIDs extends Group {
    public NoNestedPartySubIDs() {
      super(804,545,
      new int[] {545,805,0 } ); }
  public void set(quickfix.field.NestedPartySubID value)
  { setField(value); }
  public quickfix.field.NestedPartySubID get(quickfix.field.NestedPartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartySubID getNestedPartySubID() throws FieldNotFound
  { quickfix.field.NestedPartySubID value = new quickfix.field.NestedPartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartySubID field)
  { return isSetField(field); }
  public boolean isSetNestedPartySubID()
  { return isSetField(545); }
  public void set(quickfix.field.NestedPartySubIDType value)
  { setField(value); }
  public quickfix.field.NestedPartySubIDType get(quickfix.field.NestedPartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartySubIDType getNestedPartySubIDType() throws FieldNotFound
  { quickfix.field.NestedPartySubIDType value = new quickfix.field.NestedPartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartySubIDType field)
  { return isSetField(field); }
  public boolean isSetNestedPartySubIDType()
  { return isSetField(805); }
}
}
  public void set(quickfix.field.LegRefID value)
  { setField(value); }
  public quickfix.field.LegRefID get(quickfix.field.LegRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRefID getLegRefID() throws FieldNotFound
  { quickfix.field.LegRefID value = new quickfix.field.LegRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRefID field)
  { return isSetField(field); }
  public boolean isSetLegRefID()
  { return isSetField(654); }
  public void set(quickfix.field.LegPrice value)
  { setField(value); }
  public quickfix.field.LegPrice get(quickfix.field.LegPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegPrice getLegPrice() throws FieldNotFound
  { quickfix.field.LegPrice value = new quickfix.field.LegPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegPrice field)
  { return isSetField(field); }
  public boolean isSetLegPrice()
  { return isSetField(566); }
  public void set(quickfix.field.LegSettlType value)
  { setField(value); }
  public quickfix.field.LegSettlType get(quickfix.field.LegSettlType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSettlType getLegSettlType() throws FieldNotFound
  { quickfix.field.LegSettlType value = new quickfix.field.LegSettlType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSettlType field)
  { return isSetField(field); }
  public boolean isSetLegSettlType()
  { return isSetField(587); }
  public void set(quickfix.field.LegSettlDate value)
  { setField(value); }
  public quickfix.field.LegSettlDate get(quickfix.field.LegSettlDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSettlDate getLegSettlDate() throws FieldNotFound
  { quickfix.field.LegSettlDate value = new quickfix.field.LegSettlDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSettlDate field)
  { return isSetField(field); }
  public boolean isSetLegSettlDate()
  { return isSetField(588); }
  public void set(quickfix.field.LegLastPx value)
  { setField(value); }
  public quickfix.field.LegLastPx get(quickfix.field.LegLastPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegLastPx getLegLastPx() throws FieldNotFound
  { quickfix.field.LegLastPx value = new quickfix.field.LegLastPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegLastPx field)
  { return isSetField(field); }
  public boolean isSetLegLastPx()
  { return isSetField(637); }
  public void set(quickfix.field.LegReportID value)
  { setField(value); }
  public quickfix.field.LegReportID get(quickfix.field.LegReportID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegReportID getLegReportID() throws FieldNotFound
  { quickfix.field.LegReportID value = new quickfix.field.LegReportID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegReportID field)
  { return isSetField(field); }
  public boolean isSetLegReportID()
  { return isSetField(990); }
  public void set(quickfix.field.LegSettlCurrency value)
  { setField(value); }
  public quickfix.field.LegSettlCurrency get(quickfix.field.LegSettlCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSettlCurrency getLegSettlCurrency() throws FieldNotFound
  { quickfix.field.LegSettlCurrency value = new quickfix.field.LegSettlCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSettlCurrency field)
  { return isSetField(field); }
  public boolean isSetLegSettlCurrency()
  { return isSetField(675); }
  public void set(quickfix.field.LegLastForwardPoints value)
  { setField(value); }
  public quickfix.field.LegLastForwardPoints get(quickfix.field.LegLastForwardPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegLastForwardPoints getLegLastForwardPoints() throws FieldNotFound
  { quickfix.field.LegLastForwardPoints value = new quickfix.field.LegLastForwardPoints();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegLastForwardPoints field)
  { return isSetField(field); }
  public boolean isSetLegLastForwardPoints()
  { return isSetField(1073); }
  public void set(quickfix.field.LegCalculatedCcyLastQty value)
  { setField(value); }
  public quickfix.field.LegCalculatedCcyLastQty get(quickfix.field.LegCalculatedCcyLastQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCalculatedCcyLastQty getLegCalculatedCcyLastQty() throws FieldNotFound
  { quickfix.field.LegCalculatedCcyLastQty value = new quickfix.field.LegCalculatedCcyLastQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCalculatedCcyLastQty field)
  { return isSetField(field); }
  public boolean isSetLegCalculatedCcyLastQty()
  { return isSetField(1074); }
  public void set(quickfix.field.LegGrossTradeAmt value)
  { setField(value); }
  public quickfix.field.LegGrossTradeAmt get(quickfix.field.LegGrossTradeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegGrossTradeAmt getLegGrossTradeAmt() throws FieldNotFound
  { quickfix.field.LegGrossTradeAmt value = new quickfix.field.LegGrossTradeAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegGrossTradeAmt field)
  { return isSetField(field); }
  public boolean isSetLegGrossTradeAmt()
  { return isSetField(1075); }
}
  public void set(quickfix.field.TransactTime value)
  { setField(value); }
  public quickfix.field.TransactTime get(quickfix.field.TransactTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { quickfix.field.TransactTime value = new quickfix.field.TransactTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TransactTime field)
  { return isSetField(field); }
  public boolean isSetTransactTime()
  { return isSetField(60); }
  public void set(quickfix.field.NoTrdRegTimestamps value)
  { setField(value); }
  public quickfix.field.NoTrdRegTimestamps get(quickfix.field.NoTrdRegTimestamps  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoTrdRegTimestamps getNoTrdRegTimestamps() throws FieldNotFound
  { quickfix.field.NoTrdRegTimestamps value = new quickfix.field.NoTrdRegTimestamps();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoTrdRegTimestamps field)
  { return isSetField(field); }
  public boolean isSetNoTrdRegTimestamps()
  { return isSetField(768); }
  public static class NoTrdRegTimestamps extends Group {
    public NoTrdRegTimestamps() {
      super(768,769,
      new int[] {769,770,771,1033,1034,1035,0 } ); }
  public void set(quickfix.field.TrdRegTimestamp value)
  { setField(value); }
  public quickfix.field.TrdRegTimestamp get(quickfix.field.TrdRegTimestamp  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TrdRegTimestamp getTrdRegTimestamp() throws FieldNotFound
  { quickfix.field.TrdRegTimestamp value = new quickfix.field.TrdRegTimestamp();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TrdRegTimestamp field)
  { return isSetField(field); }
  public boolean isSetTrdRegTimestamp()
  { return isSetField(769); }
  public void set(quickfix.field.TrdRegTimestampType value)
  { setField(value); }
  public quickfix.field.TrdRegTimestampType get(quickfix.field.TrdRegTimestampType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TrdRegTimestampType getTrdRegTimestampType() throws FieldNotFound
  { quickfix.field.TrdRegTimestampType value = new quickfix.field.TrdRegTimestampType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TrdRegTimestampType field)
  { return isSetField(field); }
  public boolean isSetTrdRegTimestampType()
  { return isSetField(770); }
  public void set(quickfix.field.TrdRegTimestampOrigin value)
  { setField(value); }
  public quickfix.field.TrdRegTimestampOrigin get(quickfix.field.TrdRegTimestampOrigin  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TrdRegTimestampOrigin getTrdRegTimestampOrigin() throws FieldNotFound
  { quickfix.field.TrdRegTimestampOrigin value = new quickfix.field.TrdRegTimestampOrigin();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TrdRegTimestampOrigin field)
  { return isSetField(field); }
  public boolean isSetTrdRegTimestampOrigin()
  { return isSetField(771); }
  public void set(quickfix.field.DeskType value)
  { setField(value); }
  public quickfix.field.DeskType get(quickfix.field.DeskType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DeskType getDeskType() throws FieldNotFound
  { quickfix.field.DeskType value = new quickfix.field.DeskType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DeskType field)
  { return isSetField(field); }
  public boolean isSetDeskType()
  { return isSetField(1033); }
  public void set(quickfix.field.DeskTypeSource value)
  { setField(value); }
  public quickfix.field.DeskTypeSource get(quickfix.field.DeskTypeSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DeskTypeSource getDeskTypeSource() throws FieldNotFound
  { quickfix.field.DeskTypeSource value = new quickfix.field.DeskTypeSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DeskTypeSource field)
  { return isSetField(field); }
  public boolean isSetDeskTypeSource()
  { return isSetField(1034); }
  public void set(quickfix.field.DeskOrderHandlingInst value)
  { setField(value); }
  public quickfix.field.DeskOrderHandlingInst get(quickfix.field.DeskOrderHandlingInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DeskOrderHandlingInst getDeskOrderHandlingInst() throws FieldNotFound
  { quickfix.field.DeskOrderHandlingInst value = new quickfix.field.DeskOrderHandlingInst();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DeskOrderHandlingInst field)
  { return isSetField(field); }
  public boolean isSetDeskOrderHandlingInst()
  { return isSetField(1035); }
}
  public void set(quickfix.field.SettlType value)
  { setField(value); }
  public quickfix.field.SettlType get(quickfix.field.SettlType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlType getSettlType() throws FieldNotFound
  { quickfix.field.SettlType value = new quickfix.field.SettlType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlType field)
  { return isSetField(field); }
  public boolean isSetSettlType()
  { return isSetField(63); }
  public void set(quickfix.field.SettlDate value)
  { setField(value); }
  public quickfix.field.SettlDate get(quickfix.field.SettlDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlDate getSettlDate() throws FieldNotFound
  { quickfix.field.SettlDate value = new quickfix.field.SettlDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlDate field)
  { return isSetField(field); }
  public boolean isSetSettlDate()
  { return isSetField(64); }
  public void set(quickfix.field.MatchStatus value)
  { setField(value); }
  public quickfix.field.MatchStatus get(quickfix.field.MatchStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MatchStatus getMatchStatus() throws FieldNotFound
  { quickfix.field.MatchStatus value = new quickfix.field.MatchStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MatchStatus field)
  { return isSetField(field); }
  public boolean isSetMatchStatus()
  { return isSetField(573); }
  public void set(quickfix.field.MatchType value)
  { setField(value); }
  public quickfix.field.MatchType get(quickfix.field.MatchType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MatchType getMatchType() throws FieldNotFound
  { quickfix.field.MatchType value = new quickfix.field.MatchType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MatchType field)
  { return isSetField(field); }
  public boolean isSetMatchType()
  { return isSetField(574); }
  public void set(quickfix.field.NoSides value)
  { setField(value); }
  public quickfix.field.NoSides get(quickfix.field.NoSides  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoSides getNoSides() throws FieldNotFound
  { quickfix.field.NoSides value = new quickfix.field.NoSides();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoSides field)
  { return isSetField(field); }
  public boolean isSetNoSides()
  { return isSetField(552); }
  public static class NoSides extends Group {
    public NoSides() {
      super(552,54,
      new int[] {54,37,198,11,526,66,453,1,660,581,81,575,576,578,579,821,15,376,377,528,529,582,40,18,483,336,625,943,12,13,479,497,157,230,158,159,738,920,921,922,238,237,118,119,120,155,156,77,58,354,355,752,518,232,136,825,826,591,70,78,1009,1005,1006,1007,83,1008,1016,19,1093,1072,1057,1139,0 } ); }
  public void set(quickfix.field.Side value)
  { setField(value); }
  public quickfix.field.Side get(quickfix.field.Side  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Side getSide() throws FieldNotFound
  { quickfix.field.Side value = new quickfix.field.Side();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Side field)
  { return isSetField(field); }
  public boolean isSetSide()
  { return isSetField(54); }
  public void set(quickfix.field.OrderID value)
  { setField(value); }
  public quickfix.field.OrderID get(quickfix.field.OrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderID getOrderID() throws FieldNotFound
  { quickfix.field.OrderID value = new quickfix.field.OrderID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderID field)
  { return isSetField(field); }
  public boolean isSetOrderID()
  { return isSetField(37); }
  public void set(quickfix.field.SecondaryOrderID value)
  { setField(value); }
  public quickfix.field.SecondaryOrderID get(quickfix.field.SecondaryOrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound
  { quickfix.field.SecondaryOrderID value = new quickfix.field.SecondaryOrderID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryOrderID field)
  { return isSetField(field); }
  public boolean isSetSecondaryOrderID()
  { return isSetField(198); }
  public void set(quickfix.field.ClOrdID value)
  { setField(value); }
  public quickfix.field.ClOrdID get(quickfix.field.ClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClOrdID getClOrdID() throws FieldNotFound
  { quickfix.field.ClOrdID value = new quickfix.field.ClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClOrdID field)
  { return isSetField(field); }
  public boolean isSetClOrdID()
  { return isSetField(11); }
  public void set(quickfix.field.SecondaryClOrdID value)
  { setField(value); }
  public quickfix.field.SecondaryClOrdID get(quickfix.field.SecondaryClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryClOrdID getSecondaryClOrdID() throws FieldNotFound
  { quickfix.field.SecondaryClOrdID value = new quickfix.field.SecondaryClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryClOrdID field)
  { return isSetField(field); }
  public boolean isSetSecondaryClOrdID()
  { return isSetField(526); }
  public void set(quickfix.field.ListID value)
  { setField(value); }
  public quickfix.field.ListID get(quickfix.field.ListID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ListID getListID() throws FieldNotFound
  { quickfix.field.ListID value = new quickfix.field.ListID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ListID field)
  { return isSetField(field); }
  public boolean isSetListID()
  { return isSetField(66); }
  public void set(quickfix.field.NoPartyIDs value)
  { setField(value); }
  public quickfix.field.NoPartyIDs get(quickfix.field.NoPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoPartyIDs getNoPartyIDs() throws FieldNotFound
  { quickfix.field.NoPartyIDs value = new quickfix.field.NoPartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartyIDs()
  { return isSetField(453); }
  public static class NoPartyIDs extends Group {
    public NoPartyIDs() {
      super(453,448,
      new int[] {448,447,452,802,0 } ); }
  public void set(quickfix.field.PartyID value)
  { setField(value); }
  public quickfix.field.PartyID get(quickfix.field.PartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyID getPartyID() throws FieldNotFound
  { quickfix.field.PartyID value = new quickfix.field.PartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyID field)
  { return isSetField(field); }
  public boolean isSetPartyID()
  { return isSetField(448); }
  public void set(quickfix.field.PartyIDSource value)
  { setField(value); }
  public quickfix.field.PartyIDSource get(quickfix.field.PartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyIDSource getPartyIDSource() throws FieldNotFound
  { quickfix.field.PartyIDSource value = new quickfix.field.PartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyIDSource field)
  { return isSetField(field); }
  public boolean isSetPartyIDSource()
  { return isSetField(447); }
  public void set(quickfix.field.PartyRole value)
  { setField(value); }
  public quickfix.field.PartyRole get(quickfix.field.PartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyRole getPartyRole() throws FieldNotFound
  { quickfix.field.PartyRole value = new quickfix.field.PartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyRole field)
  { return isSetField(field); }
  public boolean isSetPartyRole()
  { return isSetField(452); }
  public void set(quickfix.field.NoPartySubIDs value)
  { setField(value); }
  public quickfix.field.NoPartySubIDs get(quickfix.field.NoPartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoPartySubIDs getNoPartySubIDs() throws FieldNotFound
  { quickfix.field.NoPartySubIDs value = new quickfix.field.NoPartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoPartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartySubIDs()
  { return isSetField(802); }
  public static class NoPartySubIDs extends Group {
    public NoPartySubIDs() {
      super(802,523,
      new int[] {523,803,0 } ); }
  public void set(quickfix.field.PartySubID value)
  { setField(value); }
  public quickfix.field.PartySubID get(quickfix.field.PartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartySubID getPartySubID() throws FieldNotFound
  { quickfix.field.PartySubID value = new quickfix.field.PartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartySubID field)
  { return isSetField(field); }
  public boolean isSetPartySubID()
  { return isSetField(523); }
  public void set(quickfix.field.PartySubIDType value)
  { setField(value); }
  public quickfix.field.PartySubIDType get(quickfix.field.PartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartySubIDType getPartySubIDType() throws FieldNotFound
  { quickfix.field.PartySubIDType value = new quickfix.field.PartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartySubIDType field)
  { return isSetField(field); }
  public boolean isSetPartySubIDType()
  { return isSetField(803); }
}
}
  public void set(quickfix.field.Account value)
  { setField(value); }
  public quickfix.field.Account get(quickfix.field.Account  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Account getAccount() throws FieldNotFound
  { quickfix.field.Account value = new quickfix.field.Account();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Account field)
  { return isSetField(field); }
  public boolean isSetAccount()
  { return isSetField(1); }
  public void set(quickfix.field.AcctIDSource value)
  { setField(value); }
  public quickfix.field.AcctIDSource get(quickfix.field.AcctIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AcctIDSource getAcctIDSource() throws FieldNotFound
  { quickfix.field.AcctIDSource value = new quickfix.field.AcctIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AcctIDSource field)
  { return isSetField(field); }
  public boolean isSetAcctIDSource()
  { return isSetField(660); }
  public void set(quickfix.field.AccountType value)
  { setField(value); }
  public quickfix.field.AccountType get(quickfix.field.AccountType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AccountType getAccountType() throws FieldNotFound
  { quickfix.field.AccountType value = new quickfix.field.AccountType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AccountType field)
  { return isSetField(field); }
  public boolean isSetAccountType()
  { return isSetField(581); }
  public void set(quickfix.field.ProcessCode value)
  { setField(value); }
  public quickfix.field.ProcessCode get(quickfix.field.ProcessCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ProcessCode getProcessCode() throws FieldNotFound
  { quickfix.field.ProcessCode value = new quickfix.field.ProcessCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ProcessCode field)
  { return isSetField(field); }
  public boolean isSetProcessCode()
  { return isSetField(81); }
  public void set(quickfix.field.OddLot value)
  { setField(value); }
  public quickfix.field.OddLot get(quickfix.field.OddLot  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OddLot getOddLot() throws FieldNotFound
  { quickfix.field.OddLot value = new quickfix.field.OddLot();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OddLot field)
  { return isSetField(field); }
  public boolean isSetOddLot()
  { return isSetField(575); }
  public void set(quickfix.field.NoClearingInstructions value)
  { setField(value); }
  public quickfix.field.NoClearingInstructions get(quickfix.field.NoClearingInstructions  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoClearingInstructions getNoClearingInstructions() throws FieldNotFound
  { quickfix.field.NoClearingInstructions value = new quickfix.field.NoClearingInstructions();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoClearingInstructions field)
  { return isSetField(field); }
  public boolean isSetNoClearingInstructions()
  { return isSetField(576); }
  public static class NoClearingInstructions extends Group {
    public NoClearingInstructions() {
      super(576,577,
      new int[] {577,0 } ); }
  public void set(quickfix.field.ClearingInstruction value)
  { setField(value); }
  public quickfix.field.ClearingInstruction get(quickfix.field.ClearingInstruction  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClearingInstruction getClearingInstruction() throws FieldNotFound
  { quickfix.field.ClearingInstruction value = new quickfix.field.ClearingInstruction();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClearingInstruction field)
  { return isSetField(field); }
  public boolean isSetClearingInstruction()
  { return isSetField(577); }
}
  public void set(quickfix.field.TradeInputSource value)
  { setField(value); }
  public quickfix.field.TradeInputSource get(quickfix.field.TradeInputSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeInputSource getTradeInputSource() throws FieldNotFound
  { quickfix.field.TradeInputSource value = new quickfix.field.TradeInputSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeInputSource field)
  { return isSetField(field); }
  public boolean isSetTradeInputSource()
  { return isSetField(578); }
  public void set(quickfix.field.TradeInputDevice value)
  { setField(value); }
  public quickfix.field.TradeInputDevice get(quickfix.field.TradeInputDevice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeInputDevice getTradeInputDevice() throws FieldNotFound
  { quickfix.field.TradeInputDevice value = new quickfix.field.TradeInputDevice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeInputDevice field)
  { return isSetField(field); }
  public boolean isSetTradeInputDevice()
  { return isSetField(579); }
  public void set(quickfix.field.OrderInputDevice value)
  { setField(value); }
  public quickfix.field.OrderInputDevice get(quickfix.field.OrderInputDevice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderInputDevice getOrderInputDevice() throws FieldNotFound
  { quickfix.field.OrderInputDevice value = new quickfix.field.OrderInputDevice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderInputDevice field)
  { return isSetField(field); }
  public boolean isSetOrderInputDevice()
  { return isSetField(821); }
  public void set(quickfix.field.Currency value)
  { setField(value); }
  public quickfix.field.Currency get(quickfix.field.Currency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Currency getCurrency() throws FieldNotFound
  { quickfix.field.Currency value = new quickfix.field.Currency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Currency field)
  { return isSetField(field); }
  public boolean isSetCurrency()
  { return isSetField(15); }
  public void set(quickfix.field.ComplianceID value)
  { setField(value); }
  public quickfix.field.ComplianceID get(quickfix.field.ComplianceID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ComplianceID getComplianceID() throws FieldNotFound
  { quickfix.field.ComplianceID value = new quickfix.field.ComplianceID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ComplianceID field)
  { return isSetField(field); }
  public boolean isSetComplianceID()
  { return isSetField(376); }
  public void set(quickfix.field.SolicitedFlag value)
  { setField(value); }
  public quickfix.field.SolicitedFlag get(quickfix.field.SolicitedFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SolicitedFlag getSolicitedFlag() throws FieldNotFound
  { quickfix.field.SolicitedFlag value = new quickfix.field.SolicitedFlag();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SolicitedFlag field)
  { return isSetField(field); }
  public boolean isSetSolicitedFlag()
  { return isSetField(377); }
  public void set(quickfix.field.OrderCapacity value)
  { setField(value); }
  public quickfix.field.OrderCapacity get(quickfix.field.OrderCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderCapacity getOrderCapacity() throws FieldNotFound
  { quickfix.field.OrderCapacity value = new quickfix.field.OrderCapacity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderCapacity field)
  { return isSetField(field); }
  public boolean isSetOrderCapacity()
  { return isSetField(528); }
  public void set(quickfix.field.OrderRestrictions value)
  { setField(value); }
  public quickfix.field.OrderRestrictions get(quickfix.field.OrderRestrictions  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderRestrictions getOrderRestrictions() throws FieldNotFound
  { quickfix.field.OrderRestrictions value = new quickfix.field.OrderRestrictions();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderRestrictions field)
  { return isSetField(field); }
  public boolean isSetOrderRestrictions()
  { return isSetField(529); }
  public void set(quickfix.field.CustOrderCapacity value)
  { setField(value); }
  public quickfix.field.CustOrderCapacity get(quickfix.field.CustOrderCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CustOrderCapacity getCustOrderCapacity() throws FieldNotFound
  { quickfix.field.CustOrderCapacity value = new quickfix.field.CustOrderCapacity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CustOrderCapacity field)
  { return isSetField(field); }
  public boolean isSetCustOrderCapacity()
  { return isSetField(582); }
  public void set(quickfix.field.OrdType value)
  { setField(value); }
  public quickfix.field.OrdType get(quickfix.field.OrdType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrdType getOrdType() throws FieldNotFound
  { quickfix.field.OrdType value = new quickfix.field.OrdType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrdType field)
  { return isSetField(field); }
  public boolean isSetOrdType()
  { return isSetField(40); }
  public void set(quickfix.field.ExecInst value)
  { setField(value); }
  public quickfix.field.ExecInst get(quickfix.field.ExecInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecInst getExecInst() throws FieldNotFound
  { quickfix.field.ExecInst value = new quickfix.field.ExecInst();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecInst field)
  { return isSetField(field); }
  public boolean isSetExecInst()
  { return isSetField(18); }
  public void set(quickfix.field.TransBkdTime value)
  { setField(value); }
  public quickfix.field.TransBkdTime get(quickfix.field.TransBkdTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TransBkdTime getTransBkdTime() throws FieldNotFound
  { quickfix.field.TransBkdTime value = new quickfix.field.TransBkdTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TransBkdTime field)
  { return isSetField(field); }
  public boolean isSetTransBkdTime()
  { return isSetField(483); }
  public void set(quickfix.field.TradingSessionID value)
  { setField(value); }
  public quickfix.field.TradingSessionID get(quickfix.field.TradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound
  { quickfix.field.TradingSessionID value = new quickfix.field.TradingSessionID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradingSessionID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionID()
  { return isSetField(336); }
  public void set(quickfix.field.TradingSessionSubID value)
  { setField(value); }
  public quickfix.field.TradingSessionSubID get(quickfix.field.TradingSessionSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound
  { quickfix.field.TradingSessionSubID value = new quickfix.field.TradingSessionSubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradingSessionSubID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionSubID()
  { return isSetField(625); }
  public void set(quickfix.field.TimeBracket value)
  { setField(value); }
  public quickfix.field.TimeBracket get(quickfix.field.TimeBracket  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TimeBracket getTimeBracket() throws FieldNotFound
  { quickfix.field.TimeBracket value = new quickfix.field.TimeBracket();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TimeBracket field)
  { return isSetField(field); }
  public boolean isSetTimeBracket()
  { return isSetField(943); }
  public void set(quickfix.field.Commission value)
  { setField(value); }
  public quickfix.field.Commission get(quickfix.field.Commission  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Commission getCommission() throws FieldNotFound
  { quickfix.field.Commission value = new quickfix.field.Commission();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Commission field)
  { return isSetField(field); }
  public boolean isSetCommission()
  { return isSetField(12); }
  public void set(quickfix.field.CommType value)
  { setField(value); }
  public quickfix.field.CommType get(quickfix.field.CommType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CommType getCommType() throws FieldNotFound
  { quickfix.field.CommType value = new quickfix.field.CommType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CommType field)
  { return isSetField(field); }
  public boolean isSetCommType()
  { return isSetField(13); }
  public void set(quickfix.field.CommCurrency value)
  { setField(value); }
  public quickfix.field.CommCurrency get(quickfix.field.CommCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CommCurrency getCommCurrency() throws FieldNotFound
  { quickfix.field.CommCurrency value = new quickfix.field.CommCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CommCurrency field)
  { return isSetField(field); }
  public boolean isSetCommCurrency()
  { return isSetField(479); }
  public void set(quickfix.field.FundRenewWaiv value)
  { setField(value); }
  public quickfix.field.FundRenewWaiv get(quickfix.field.FundRenewWaiv  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FundRenewWaiv getFundRenewWaiv() throws FieldNotFound
  { quickfix.field.FundRenewWaiv value = new quickfix.field.FundRenewWaiv();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FundRenewWaiv field)
  { return isSetField(field); }
  public boolean isSetFundRenewWaiv()
  { return isSetField(497); }
  public void set(quickfix.field.NumDaysInterest value)
  { setField(value); }
  public quickfix.field.NumDaysInterest get(quickfix.field.NumDaysInterest  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NumDaysInterest getNumDaysInterest() throws FieldNotFound
  { quickfix.field.NumDaysInterest value = new quickfix.field.NumDaysInterest();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NumDaysInterest field)
  { return isSetField(field); }
  public boolean isSetNumDaysInterest()
  { return isSetField(157); }
  public void set(quickfix.field.ExDate value)
  { setField(value); }
  public quickfix.field.ExDate get(quickfix.field.ExDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExDate getExDate() throws FieldNotFound
  { quickfix.field.ExDate value = new quickfix.field.ExDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExDate field)
  { return isSetField(field); }
  public boolean isSetExDate()
  { return isSetField(230); }
  public void set(quickfix.field.AccruedInterestRate value)
  { setField(value); }
  public quickfix.field.AccruedInterestRate get(quickfix.field.AccruedInterestRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AccruedInterestRate getAccruedInterestRate() throws FieldNotFound
  { quickfix.field.AccruedInterestRate value = new quickfix.field.AccruedInterestRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AccruedInterestRate field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestRate()
  { return isSetField(158); }
  public void set(quickfix.field.AccruedInterestAmt value)
  { setField(value); }
  public quickfix.field.AccruedInterestAmt get(quickfix.field.AccruedInterestAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AccruedInterestAmt getAccruedInterestAmt() throws FieldNotFound
  { quickfix.field.AccruedInterestAmt value = new quickfix.field.AccruedInterestAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AccruedInterestAmt field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestAmt()
  { return isSetField(159); }
  public void set(quickfix.field.InterestAtMaturity value)
  { setField(value); }
  public quickfix.field.InterestAtMaturity get(quickfix.field.InterestAtMaturity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InterestAtMaturity getInterestAtMaturity() throws FieldNotFound
  { quickfix.field.InterestAtMaturity value = new quickfix.field.InterestAtMaturity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InterestAtMaturity field)
  { return isSetField(field); }
  public boolean isSetInterestAtMaturity()
  { return isSetField(738); }
  public void set(quickfix.field.EndAccruedInterestAmt value)
  { setField(value); }
  public quickfix.field.EndAccruedInterestAmt get(quickfix.field.EndAccruedInterestAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EndAccruedInterestAmt getEndAccruedInterestAmt() throws FieldNotFound
  { quickfix.field.EndAccruedInterestAmt value = new quickfix.field.EndAccruedInterestAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EndAccruedInterestAmt field)
  { return isSetField(field); }
  public boolean isSetEndAccruedInterestAmt()
  { return isSetField(920); }
  public void set(quickfix.field.StartCash value)
  { setField(value); }
  public quickfix.field.StartCash get(quickfix.field.StartCash  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StartCash getStartCash() throws FieldNotFound
  { quickfix.field.StartCash value = new quickfix.field.StartCash();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StartCash field)
  { return isSetField(field); }
  public boolean isSetStartCash()
  { return isSetField(921); }
  public void set(quickfix.field.EndCash value)
  { setField(value); }
  public quickfix.field.EndCash get(quickfix.field.EndCash  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EndCash getEndCash() throws FieldNotFound
  { quickfix.field.EndCash value = new quickfix.field.EndCash();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EndCash field)
  { return isSetField(field); }
  public boolean isSetEndCash()
  { return isSetField(922); }
  public void set(quickfix.field.Concession value)
  { setField(value); }
  public quickfix.field.Concession get(quickfix.field.Concession  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Concession getConcession() throws FieldNotFound
  { quickfix.field.Concession value = new quickfix.field.Concession();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Concession field)
  { return isSetField(field); }
  public boolean isSetConcession()
  { return isSetField(238); }
  public void set(quickfix.field.TotalTakedown value)
  { setField(value); }
  public quickfix.field.TotalTakedown get(quickfix.field.TotalTakedown  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotalTakedown getTotalTakedown() throws FieldNotFound
  { quickfix.field.TotalTakedown value = new quickfix.field.TotalTakedown();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotalTakedown field)
  { return isSetField(field); }
  public boolean isSetTotalTakedown()
  { return isSetField(237); }
  public void set(quickfix.field.NetMoney value)
  { setField(value); }
  public quickfix.field.NetMoney get(quickfix.field.NetMoney  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NetMoney getNetMoney() throws FieldNotFound
  { quickfix.field.NetMoney value = new quickfix.field.NetMoney();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NetMoney field)
  { return isSetField(field); }
  public boolean isSetNetMoney()
  { return isSetField(118); }
  public void set(quickfix.field.SettlCurrAmt value)
  { setField(value); }
  public quickfix.field.SettlCurrAmt get(quickfix.field.SettlCurrAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrAmt getSettlCurrAmt() throws FieldNotFound
  { quickfix.field.SettlCurrAmt value = new quickfix.field.SettlCurrAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrAmt field)
  { return isSetField(field); }
  public boolean isSetSettlCurrAmt()
  { return isSetField(119); }
  public void set(quickfix.field.SettlCurrency value)
  { setField(value); }
  public quickfix.field.SettlCurrency get(quickfix.field.SettlCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound
  { quickfix.field.SettlCurrency value = new quickfix.field.SettlCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrency field)
  { return isSetField(field); }
  public boolean isSetSettlCurrency()
  { return isSetField(120); }
  public void set(quickfix.field.SettlCurrFxRate value)
  { setField(value); }
  public quickfix.field.SettlCurrFxRate get(quickfix.field.SettlCurrFxRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrFxRate getSettlCurrFxRate() throws FieldNotFound
  { quickfix.field.SettlCurrFxRate value = new quickfix.field.SettlCurrFxRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrFxRate field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRate()
  { return isSetField(155); }
  public void set(quickfix.field.SettlCurrFxRateCalc value)
  { setField(value); }
  public quickfix.field.SettlCurrFxRateCalc get(quickfix.field.SettlCurrFxRateCalc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrFxRateCalc getSettlCurrFxRateCalc() throws FieldNotFound
  { quickfix.field.SettlCurrFxRateCalc value = new quickfix.field.SettlCurrFxRateCalc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrFxRateCalc field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRateCalc()
  { return isSetField(156); }
  public void set(quickfix.field.PositionEffect value)
  { setField(value); }
  public quickfix.field.PositionEffect get(quickfix.field.PositionEffect  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PositionEffect getPositionEffect() throws FieldNotFound
  { quickfix.field.PositionEffect value = new quickfix.field.PositionEffect();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PositionEffect field)
  { return isSetField(field); }
  public boolean isSetPositionEffect()
  { return isSetField(77); }
  public void set(quickfix.field.Text value)
  { setField(value); }
  public quickfix.field.Text get(quickfix.field.Text  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Text getText() throws FieldNotFound
  { quickfix.field.Text value = new quickfix.field.Text();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Text field)
  { return isSetField(field); }
  public boolean isSetText()
  { return isSetField(58); }
  public void set(quickfix.field.EncodedTextLen value)
  { setField(value); }
  public quickfix.field.EncodedTextLen get(quickfix.field.EncodedTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound
  { quickfix.field.EncodedTextLen value = new quickfix.field.EncodedTextLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedTextLen()
  { return isSetField(354); }
  public void set(quickfix.field.EncodedText value)
  { setField(value); }
  public quickfix.field.EncodedText get(quickfix.field.EncodedText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { quickfix.field.EncodedText value = new quickfix.field.EncodedText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedText field)
  { return isSetField(field); }
  public boolean isSetEncodedText()
  { return isSetField(355); }
  public void set(quickfix.field.SideMultiLegReportingType value)
  { setField(value); }
  public quickfix.field.SideMultiLegReportingType get(quickfix.field.SideMultiLegReportingType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideMultiLegReportingType getSideMultiLegReportingType() throws FieldNotFound
  { quickfix.field.SideMultiLegReportingType value = new quickfix.field.SideMultiLegReportingType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideMultiLegReportingType field)
  { return isSetField(field); }
  public boolean isSetSideMultiLegReportingType()
  { return isSetField(752); }
  public void set(quickfix.field.NoContAmts value)
  { setField(value); }
  public quickfix.field.NoContAmts get(quickfix.field.NoContAmts  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoContAmts getNoContAmts() throws FieldNotFound
  { quickfix.field.NoContAmts value = new quickfix.field.NoContAmts();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoContAmts field)
  { return isSetField(field); }
  public boolean isSetNoContAmts()
  { return isSetField(518); }
  public static class NoContAmts extends Group {
    public NoContAmts() {
      super(518,519,
      new int[] {519,520,521,0 } ); }
  public void set(quickfix.field.ContAmtType value)
  { setField(value); }
  public quickfix.field.ContAmtType get(quickfix.field.ContAmtType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContAmtType getContAmtType() throws FieldNotFound
  { quickfix.field.ContAmtType value = new quickfix.field.ContAmtType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContAmtType field)
  { return isSetField(field); }
  public boolean isSetContAmtType()
  { return isSetField(519); }
  public void set(quickfix.field.ContAmtValue value)
  { setField(value); }
  public quickfix.field.ContAmtValue get(quickfix.field.ContAmtValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContAmtValue getContAmtValue() throws FieldNotFound
  { quickfix.field.ContAmtValue value = new quickfix.field.ContAmtValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContAmtValue field)
  { return isSetField(field); }
  public boolean isSetContAmtValue()
  { return isSetField(520); }
  public void set(quickfix.field.ContAmtCurr value)
  { setField(value); }
  public quickfix.field.ContAmtCurr get(quickfix.field.ContAmtCurr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContAmtCurr getContAmtCurr() throws FieldNotFound
  { quickfix.field.ContAmtCurr value = new quickfix.field.ContAmtCurr();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContAmtCurr field)
  { return isSetField(field); }
  public boolean isSetContAmtCurr()
  { return isSetField(521); }
}
  public void set(quickfix.field.NoStipulations value)
  { setField(value); }
  public quickfix.field.NoStipulations get(quickfix.field.NoStipulations  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoStipulations getNoStipulations() throws FieldNotFound
  { quickfix.field.NoStipulations value = new quickfix.field.NoStipulations();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoStipulations field)
  { return isSetField(field); }
  public boolean isSetNoStipulations()
  { return isSetField(232); }
  public static class NoStipulations extends Group {
    public NoStipulations() {
      super(232,233,
      new int[] {233,234,0 } ); }
  public void set(quickfix.field.StipulationType value)
  { setField(value); }
  public quickfix.field.StipulationType get(quickfix.field.StipulationType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StipulationType getStipulationType() throws FieldNotFound
  { quickfix.field.StipulationType value = new quickfix.field.StipulationType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StipulationType field)
  { return isSetField(field); }
  public boolean isSetStipulationType()
  { return isSetField(233); }
  public void set(quickfix.field.StipulationValue value)
  { setField(value); }
  public quickfix.field.StipulationValue get(quickfix.field.StipulationValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StipulationValue getStipulationValue() throws FieldNotFound
  { quickfix.field.StipulationValue value = new quickfix.field.StipulationValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StipulationValue field)
  { return isSetField(field); }
  public boolean isSetStipulationValue()
  { return isSetField(234); }
}
  public void set(quickfix.field.NoMiscFees value)
  { setField(value); }
  public quickfix.field.NoMiscFees get(quickfix.field.NoMiscFees  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoMiscFees getNoMiscFees() throws FieldNotFound
  { quickfix.field.NoMiscFees value = new quickfix.field.NoMiscFees();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoMiscFees field)
  { return isSetField(field); }
  public boolean isSetNoMiscFees()
  { return isSetField(136); }
  public static class NoMiscFees extends Group {
    public NoMiscFees() {
      super(136,137,
      new int[] {137,138,139,891,0 } ); }
  public void set(quickfix.field.MiscFeeAmt value)
  { setField(value); }
  public quickfix.field.MiscFeeAmt get(quickfix.field.MiscFeeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MiscFeeAmt getMiscFeeAmt() throws FieldNotFound
  { quickfix.field.MiscFeeAmt value = new quickfix.field.MiscFeeAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MiscFeeAmt field)
  { return isSetField(field); }
  public boolean isSetMiscFeeAmt()
  { return isSetField(137); }
  public void set(quickfix.field.MiscFeeCurr value)
  { setField(value); }
  public quickfix.field.MiscFeeCurr get(quickfix.field.MiscFeeCurr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MiscFeeCurr getMiscFeeCurr() throws FieldNotFound
  { quickfix.field.MiscFeeCurr value = new quickfix.field.MiscFeeCurr();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MiscFeeCurr field)
  { return isSetField(field); }
  public boolean isSetMiscFeeCurr()
  { return isSetField(138); }
  public void set(quickfix.field.MiscFeeType value)
  { setField(value); }
  public quickfix.field.MiscFeeType get(quickfix.field.MiscFeeType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MiscFeeType getMiscFeeType() throws FieldNotFound
  { quickfix.field.MiscFeeType value = new quickfix.field.MiscFeeType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MiscFeeType field)
  { return isSetField(field); }
  public boolean isSetMiscFeeType()
  { return isSetField(139); }
  public void set(quickfix.field.MiscFeeBasis value)
  { setField(value); }
  public quickfix.field.MiscFeeBasis get(quickfix.field.MiscFeeBasis  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MiscFeeBasis getMiscFeeBasis() throws FieldNotFound
  { quickfix.field.MiscFeeBasis value = new quickfix.field.MiscFeeBasis();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MiscFeeBasis field)
  { return isSetField(field); }
  public boolean isSetMiscFeeBasis()
  { return isSetField(891); }
}
  public void set(quickfix.field.ExchangeRule value)
  { setField(value); }
  public quickfix.field.ExchangeRule get(quickfix.field.ExchangeRule  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExchangeRule getExchangeRule() throws FieldNotFound
  { quickfix.field.ExchangeRule value = new quickfix.field.ExchangeRule();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExchangeRule field)
  { return isSetField(field); }
  public boolean isSetExchangeRule()
  { return isSetField(825); }
  public void set(quickfix.field.TradeAllocIndicator value)
  { setField(value); }
  public quickfix.field.TradeAllocIndicator get(quickfix.field.TradeAllocIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeAllocIndicator getTradeAllocIndicator() throws FieldNotFound
  { quickfix.field.TradeAllocIndicator value = new quickfix.field.TradeAllocIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeAllocIndicator field)
  { return isSetField(field); }
  public boolean isSetTradeAllocIndicator()
  { return isSetField(826); }
  public void set(quickfix.field.PreallocMethod value)
  { setField(value); }
  public quickfix.field.PreallocMethod get(quickfix.field.PreallocMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PreallocMethod getPreallocMethod() throws FieldNotFound
  { quickfix.field.PreallocMethod value = new quickfix.field.PreallocMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PreallocMethod field)
  { return isSetField(field); }
  public boolean isSetPreallocMethod()
  { return isSetField(591); }
  public void set(quickfix.field.AllocID value)
  { setField(value); }
  public quickfix.field.AllocID get(quickfix.field.AllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocID getAllocID() throws FieldNotFound
  { quickfix.field.AllocID value = new quickfix.field.AllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocID field)
  { return isSetField(field); }
  public boolean isSetAllocID()
  { return isSetField(70); }
  public void set(quickfix.field.NoAllocs value)
  { setField(value); }
  public quickfix.field.NoAllocs get(quickfix.field.NoAllocs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoAllocs getNoAllocs() throws FieldNotFound
  { quickfix.field.NoAllocs value = new quickfix.field.NoAllocs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoAllocs field)
  { return isSetField(field); }
  public boolean isSetNoAllocs()
  { return isSetField(78); }
  public static class NoAllocs extends Group {
    public NoAllocs() {
      super(78,79,
      new int[] {79,661,736,467,756,80,993,1002,989,1136,0 } ); }
  public void set(quickfix.field.AllocAccount value)
  { setField(value); }
  public quickfix.field.AllocAccount get(quickfix.field.AllocAccount  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound
  { quickfix.field.AllocAccount value = new quickfix.field.AllocAccount();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocAccount field)
  { return isSetField(field); }
  public boolean isSetAllocAccount()
  { return isSetField(79); }
  public void set(quickfix.field.AllocAcctIDSource value)
  { setField(value); }
  public quickfix.field.AllocAcctIDSource get(quickfix.field.AllocAcctIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocAcctIDSource getAllocAcctIDSource() throws FieldNotFound
  { quickfix.field.AllocAcctIDSource value = new quickfix.field.AllocAcctIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocAcctIDSource field)
  { return isSetField(field); }
  public boolean isSetAllocAcctIDSource()
  { return isSetField(661); }
  public void set(quickfix.field.AllocSettlCurrency value)
  { setField(value); }
  public quickfix.field.AllocSettlCurrency get(quickfix.field.AllocSettlCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocSettlCurrency getAllocSettlCurrency() throws FieldNotFound
  { quickfix.field.AllocSettlCurrency value = new quickfix.field.AllocSettlCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocSettlCurrency field)
  { return isSetField(field); }
  public boolean isSetAllocSettlCurrency()
  { return isSetField(736); }
  public void set(quickfix.field.IndividualAllocID value)
  { setField(value); }
  public quickfix.field.IndividualAllocID get(quickfix.field.IndividualAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IndividualAllocID getIndividualAllocID() throws FieldNotFound
  { quickfix.field.IndividualAllocID value = new quickfix.field.IndividualAllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IndividualAllocID field)
  { return isSetField(field); }
  public boolean isSetIndividualAllocID()
  { return isSetField(467); }
  public void set(quickfix.field.NoNested2PartyIDs value)
  { setField(value); }
  public quickfix.field.NoNested2PartyIDs get(quickfix.field.NoNested2PartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNested2PartyIDs getNoNested2PartyIDs() throws FieldNotFound
  { quickfix.field.NoNested2PartyIDs value = new quickfix.field.NoNested2PartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNested2PartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoNested2PartyIDs()
  { return isSetField(756); }
  public static class NoNested2PartyIDs extends Group {
    public NoNested2PartyIDs() {
      super(756,757,
      new int[] {757,758,759,806,0 } ); }
  public void set(quickfix.field.Nested2PartyID value)
  { setField(value); }
  public quickfix.field.Nested2PartyID get(quickfix.field.Nested2PartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartyID getNested2PartyID() throws FieldNotFound
  { quickfix.field.Nested2PartyID value = new quickfix.field.Nested2PartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartyID field)
  { return isSetField(field); }
  public boolean isSetNested2PartyID()
  { return isSetField(757); }
  public void set(quickfix.field.Nested2PartyIDSource value)
  { setField(value); }
  public quickfix.field.Nested2PartyIDSource get(quickfix.field.Nested2PartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartyIDSource getNested2PartyIDSource() throws FieldNotFound
  { quickfix.field.Nested2PartyIDSource value = new quickfix.field.Nested2PartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartyIDSource field)
  { return isSetField(field); }
  public boolean isSetNested2PartyIDSource()
  { return isSetField(758); }
  public void set(quickfix.field.Nested2PartyRole value)
  { setField(value); }
  public quickfix.field.Nested2PartyRole get(quickfix.field.Nested2PartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartyRole getNested2PartyRole() throws FieldNotFound
  { quickfix.field.Nested2PartyRole value = new quickfix.field.Nested2PartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartyRole field)
  { return isSetField(field); }
  public boolean isSetNested2PartyRole()
  { return isSetField(759); }
  public void set(quickfix.field.NoNested2PartySubIDs value)
  { setField(value); }
  public quickfix.field.NoNested2PartySubIDs get(quickfix.field.NoNested2PartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNested2PartySubIDs getNoNested2PartySubIDs() throws FieldNotFound
  { quickfix.field.NoNested2PartySubIDs value = new quickfix.field.NoNested2PartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNested2PartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoNested2PartySubIDs()
  { return isSetField(806); }
  public static class NoNested2PartySubIDs extends Group {
    public NoNested2PartySubIDs() {
      super(806,760,
      new int[] {760,807,0 } ); }
  public void set(quickfix.field.Nested2PartySubID value)
  { setField(value); }
  public quickfix.field.Nested2PartySubID get(quickfix.field.Nested2PartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartySubID getNested2PartySubID() throws FieldNotFound
  { quickfix.field.Nested2PartySubID value = new quickfix.field.Nested2PartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartySubID field)
  { return isSetField(field); }
  public boolean isSetNested2PartySubID()
  { return isSetField(760); }
  public void set(quickfix.field.Nested2PartySubIDType value)
  { setField(value); }
  public quickfix.field.Nested2PartySubIDType get(quickfix.field.Nested2PartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartySubIDType getNested2PartySubIDType() throws FieldNotFound
  { quickfix.field.Nested2PartySubIDType value = new quickfix.field.Nested2PartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartySubIDType field)
  { return isSetField(field); }
  public boolean isSetNested2PartySubIDType()
  { return isSetField(807); }
}
}
  public void set(quickfix.field.AllocQty value)
  { setField(value); }
  public quickfix.field.AllocQty get(quickfix.field.AllocQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocQty getAllocQty() throws FieldNotFound
  { quickfix.field.AllocQty value = new quickfix.field.AllocQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocQty field)
  { return isSetField(field); }
  public boolean isSetAllocQty()
  { return isSetField(80); }
  public void set(quickfix.field.AllocCustomerCapacity value)
  { setField(value); }
  public quickfix.field.AllocCustomerCapacity get(quickfix.field.AllocCustomerCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocCustomerCapacity getAllocCustomerCapacity() throws FieldNotFound
  { quickfix.field.AllocCustomerCapacity value = new quickfix.field.AllocCustomerCapacity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocCustomerCapacity field)
  { return isSetField(field); }
  public boolean isSetAllocCustomerCapacity()
  { return isSetField(993); }
  public void set(quickfix.field.AllocMethod value)
  { setField(value); }
  public quickfix.field.AllocMethod get(quickfix.field.AllocMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocMethod getAllocMethod() throws FieldNotFound
  { quickfix.field.AllocMethod value = new quickfix.field.AllocMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocMethod field)
  { return isSetField(field); }
  public boolean isSetAllocMethod()
  { return isSetField(1002); }
  public void set(quickfix.field.SecondaryIndividualAllocID value)
  { setField(value); }
  public quickfix.field.SecondaryIndividualAllocID get(quickfix.field.SecondaryIndividualAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryIndividualAllocID getSecondaryIndividualAllocID() throws FieldNotFound
  { quickfix.field.SecondaryIndividualAllocID value = new quickfix.field.SecondaryIndividualAllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryIndividualAllocID field)
  { return isSetField(field); }
  public boolean isSetSecondaryIndividualAllocID()
  { return isSetField(989); }
  public void set(quickfix.field.AllocClearingFeeIndicator value)
  { setField(value); }
  public quickfix.field.AllocClearingFeeIndicator get(quickfix.field.AllocClearingFeeIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocClearingFeeIndicator getAllocClearingFeeIndicator() throws FieldNotFound
  { quickfix.field.AllocClearingFeeIndicator value = new quickfix.field.AllocClearingFeeIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocClearingFeeIndicator field)
  { return isSetField(field); }
  public boolean isSetAllocClearingFeeIndicator()
  { return isSetField(1136); }
}
  public void set(quickfix.field.SideQty value)
  { setField(value); }
  public quickfix.field.SideQty get(quickfix.field.SideQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideQty getSideQty() throws FieldNotFound
  { quickfix.field.SideQty value = new quickfix.field.SideQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideQty field)
  { return isSetField(field); }
  public boolean isSetSideQty()
  { return isSetField(1009); }
  public void set(quickfix.field.SideTradeReportID value)
  { setField(value); }
  public quickfix.field.SideTradeReportID get(quickfix.field.SideTradeReportID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideTradeReportID getSideTradeReportID() throws FieldNotFound
  { quickfix.field.SideTradeReportID value = new quickfix.field.SideTradeReportID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideTradeReportID field)
  { return isSetField(field); }
  public boolean isSetSideTradeReportID()
  { return isSetField(1005); }
  public void set(quickfix.field.SideFillStationCd value)
  { setField(value); }
  public quickfix.field.SideFillStationCd get(quickfix.field.SideFillStationCd  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideFillStationCd getSideFillStationCd() throws FieldNotFound
  { quickfix.field.SideFillStationCd value = new quickfix.field.SideFillStationCd();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideFillStationCd field)
  { return isSetField(field); }
  public boolean isSetSideFillStationCd()
  { return isSetField(1006); }
  public void set(quickfix.field.SideReasonCd value)
  { setField(value); }
  public quickfix.field.SideReasonCd get(quickfix.field.SideReasonCd  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideReasonCd getSideReasonCd() throws FieldNotFound
  { quickfix.field.SideReasonCd value = new quickfix.field.SideReasonCd();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideReasonCd field)
  { return isSetField(field); }
  public boolean isSetSideReasonCd()
  { return isSetField(1007); }
  public void set(quickfix.field.RptSeq value)
  { setField(value); }
  public quickfix.field.RptSeq get(quickfix.field.RptSeq  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RptSeq getRptSeq() throws FieldNotFound
  { quickfix.field.RptSeq value = new quickfix.field.RptSeq();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RptSeq field)
  { return isSetField(field); }
  public boolean isSetRptSeq()
  { return isSetField(83); }
  public void set(quickfix.field.SideTrdSubTyp value)
  { setField(value); }
  public quickfix.field.SideTrdSubTyp get(quickfix.field.SideTrdSubTyp  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideTrdSubTyp getSideTrdSubTyp() throws FieldNotFound
  { quickfix.field.SideTrdSubTyp value = new quickfix.field.SideTrdSubTyp();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideTrdSubTyp field)
  { return isSetField(field); }
  public boolean isSetSideTrdSubTyp()
  { return isSetField(1008); }
  public void set(quickfix.field.NoSideTrdRegTS value)
  { setField(value); }
  public quickfix.field.NoSideTrdRegTS get(quickfix.field.NoSideTrdRegTS  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoSideTrdRegTS getNoSideTrdRegTS() throws FieldNotFound
  { quickfix.field.NoSideTrdRegTS value = new quickfix.field.NoSideTrdRegTS();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoSideTrdRegTS field)
  { return isSetField(field); }
  public boolean isSetNoSideTrdRegTS()
  { return isSetField(1016); }
  public static class NoSideTrdRegTS extends Group {
    public NoSideTrdRegTS() {
      super(1016,1012,
      new int[] {1012,1013,1014,0 } ); }
  public void set(quickfix.field.SideTrdRegTimestamp value)
  { setField(value); }
  public quickfix.field.SideTrdRegTimestamp get(quickfix.field.SideTrdRegTimestamp  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideTrdRegTimestamp getSideTrdRegTimestamp() throws FieldNotFound
  { quickfix.field.SideTrdRegTimestamp value = new quickfix.field.SideTrdRegTimestamp();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideTrdRegTimestamp field)
  { return isSetField(field); }
  public boolean isSetSideTrdRegTimestamp()
  { return isSetField(1012); }
  public void set(quickfix.field.SideTrdRegTimestampType value)
  { setField(value); }
  public quickfix.field.SideTrdRegTimestampType get(quickfix.field.SideTrdRegTimestampType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideTrdRegTimestampType getSideTrdRegTimestampType() throws FieldNotFound
  { quickfix.field.SideTrdRegTimestampType value = new quickfix.field.SideTrdRegTimestampType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideTrdRegTimestampType field)
  { return isSetField(field); }
  public boolean isSetSideTrdRegTimestampType()
  { return isSetField(1013); }
  public void set(quickfix.field.SideTrdRegTimestampSrc value)
  { setField(value); }
  public quickfix.field.SideTrdRegTimestampSrc get(quickfix.field.SideTrdRegTimestampSrc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideTrdRegTimestampSrc getSideTrdRegTimestampSrc() throws FieldNotFound
  { quickfix.field.SideTrdRegTimestampSrc value = new quickfix.field.SideTrdRegTimestampSrc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideTrdRegTimestampSrc field)
  { return isSetField(field); }
  public boolean isSetSideTrdRegTimestampSrc()
  { return isSetField(1014); }
}
  public void set(quickfix.field.ExecRefID value)
  { setField(value); }
  public quickfix.field.ExecRefID get(quickfix.field.ExecRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecRefID getExecRefID() throws FieldNotFound
  { quickfix.field.ExecRefID value = new quickfix.field.ExecRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecRefID field)
  { return isSetField(field); }
  public boolean isSetExecRefID()
  { return isSetField(19); }
  public void set(quickfix.field.LotType value)
  { setField(value); }
  public quickfix.field.LotType get(quickfix.field.LotType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LotType getLotType() throws FieldNotFound
  { quickfix.field.LotType value = new quickfix.field.LotType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LotType field)
  { return isSetField(field); }
  public boolean isSetLotType()
  { return isSetField(1093); }
  public void set(quickfix.field.SideGrossTradeAmt value)
  { setField(value); }
  public quickfix.field.SideGrossTradeAmt get(quickfix.field.SideGrossTradeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SideGrossTradeAmt getSideGrossTradeAmt() throws FieldNotFound
  { quickfix.field.SideGrossTradeAmt value = new quickfix.field.SideGrossTradeAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SideGrossTradeAmt field)
  { return isSetField(field); }
  public boolean isSetSideGrossTradeAmt()
  { return isSetField(1072); }
  public void set(quickfix.field.AggressorIndicator value)
  { setField(value); }
  public quickfix.field.AggressorIndicator get(quickfix.field.AggressorIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AggressorIndicator getAggressorIndicator() throws FieldNotFound
  { quickfix.field.AggressorIndicator value = new quickfix.field.AggressorIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AggressorIndicator field)
  { return isSetField(field); }
  public boolean isSetAggressorIndicator()
  { return isSetField(1057); }
  public void set(quickfix.field.ExchangeSpecialInstructions value)
  { setField(value); }
  public quickfix.field.ExchangeSpecialInstructions get(quickfix.field.ExchangeSpecialInstructions  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExchangeSpecialInstructions getExchangeSpecialInstructions() throws FieldNotFound
  { quickfix.field.ExchangeSpecialInstructions value = new quickfix.field.ExchangeSpecialInstructions();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExchangeSpecialInstructions field)
  { return isSetField(field); }
  public boolean isSetExchangeSpecialInstructions()
  { return isSetField(1139); }
}
  public void set(quickfix.field.CopyMsgIndicator value)
  { setField(value); }
  public quickfix.field.CopyMsgIndicator get(quickfix.field.CopyMsgIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CopyMsgIndicator getCopyMsgIndicator() throws FieldNotFound
  { quickfix.field.CopyMsgIndicator value = new quickfix.field.CopyMsgIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CopyMsgIndicator field)
  { return isSetField(field); }
  public boolean isSetCopyMsgIndicator()
  { return isSetField(797); }
  public void set(quickfix.field.PublishTrdIndicator value)
  { setField(value); }
  public quickfix.field.PublishTrdIndicator get(quickfix.field.PublishTrdIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PublishTrdIndicator getPublishTrdIndicator() throws FieldNotFound
  { quickfix.field.PublishTrdIndicator value = new quickfix.field.PublishTrdIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PublishTrdIndicator field)
  { return isSetField(field); }
  public boolean isSetPublishTrdIndicator()
  { return isSetField(852); }
  public void set(quickfix.field.ShortSaleReason value)
  { setField(value); }
  public quickfix.field.ShortSaleReason get(quickfix.field.ShortSaleReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ShortSaleReason getShortSaleReason() throws FieldNotFound
  { quickfix.field.ShortSaleReason value = new quickfix.field.ShortSaleReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ShortSaleReason field)
  { return isSetField(field); }
  public boolean isSetShortSaleReason()
  { return isSetField(853); }
  public void set(quickfix.field.TrdRptStatus value)
  { setField(value); }
  public quickfix.field.TrdRptStatus get(quickfix.field.TrdRptStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TrdRptStatus getTrdRptStatus() throws FieldNotFound
  { quickfix.field.TrdRptStatus value = new quickfix.field.TrdRptStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TrdRptStatus field)
  { return isSetField(field); }
  public boolean isSetTrdRptStatus()
  { return isSetField(939); }
  public void set(quickfix.field.AsOfIndicator value)
  { setField(value); }
  public quickfix.field.AsOfIndicator get(quickfix.field.AsOfIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AsOfIndicator getAsOfIndicator() throws FieldNotFound
  { quickfix.field.AsOfIndicator value = new quickfix.field.AsOfIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AsOfIndicator field)
  { return isSetField(field); }
  public boolean isSetAsOfIndicator()
  { return isSetField(1015); }
  public void set(quickfix.field.SettlSessID value)
  { setField(value); }
  public quickfix.field.SettlSessID get(quickfix.field.SettlSessID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlSessID getSettlSessID() throws FieldNotFound
  { quickfix.field.SettlSessID value = new quickfix.field.SettlSessID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlSessID field)
  { return isSetField(field); }
  public boolean isSetSettlSessID()
  { return isSetField(716); }
  public void set(quickfix.field.SettlSessSubID value)
  { setField(value); }
  public quickfix.field.SettlSessSubID get(quickfix.field.SettlSessSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlSessSubID getSettlSessSubID() throws FieldNotFound
  { quickfix.field.SettlSessSubID value = new quickfix.field.SettlSessSubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlSessSubID field)
  { return isSetField(field); }
  public boolean isSetSettlSessSubID()
  { return isSetField(717); }
  public void set(quickfix.field.TierCode value)
  { setField(value); }
  public quickfix.field.TierCode get(quickfix.field.TierCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TierCode getTierCode() throws FieldNotFound
  { quickfix.field.TierCode value = new quickfix.field.TierCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TierCode field)
  { return isSetField(field); }
  public boolean isSetTierCode()
  { return isSetField(994); }
  public void set(quickfix.field.MessageEventSource value)
  { setField(value); }
  public quickfix.field.MessageEventSource get(quickfix.field.MessageEventSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MessageEventSource getMessageEventSource() throws FieldNotFound
  { quickfix.field.MessageEventSource value = new quickfix.field.MessageEventSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MessageEventSource field)
  { return isSetField(field); }
  public boolean isSetMessageEventSource()
  { return isSetField(1011); }
  public void set(quickfix.field.LastUpdateTime value)
  { setField(value); }
  public quickfix.field.LastUpdateTime get(quickfix.field.LastUpdateTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastUpdateTime getLastUpdateTime() throws FieldNotFound
  { quickfix.field.LastUpdateTime value = new quickfix.field.LastUpdateTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastUpdateTime field)
  { return isSetField(field); }
  public boolean isSetLastUpdateTime()
  { return isSetField(779); }
  public void set(quickfix.field.RndPx value)
  { setField(value); }
  public quickfix.field.RndPx get(quickfix.field.RndPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RndPx getRndPx() throws FieldNotFound
  { quickfix.field.RndPx value = new quickfix.field.RndPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RndPx field)
  { return isSetField(field); }
  public boolean isSetRndPx()
  { return isSetField(991); }
  public void set(quickfix.field.TradeID value)
  { setField(value); }
  public quickfix.field.TradeID get(quickfix.field.TradeID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeID getTradeID() throws FieldNotFound
  { quickfix.field.TradeID value = new quickfix.field.TradeID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeID field)
  { return isSetField(field); }
  public boolean isSetTradeID()
  { return isSetField(1003); }
  public void set(quickfix.field.SecondaryTradeID value)
  { setField(value); }
  public quickfix.field.SecondaryTradeID get(quickfix.field.SecondaryTradeID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryTradeID getSecondaryTradeID() throws FieldNotFound
  { quickfix.field.SecondaryTradeID value = new quickfix.field.SecondaryTradeID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryTradeID field)
  { return isSetField(field); }
  public boolean isSetSecondaryTradeID()
  { return isSetField(1040); }
  public void set(quickfix.field.FirmTradeID value)
  { setField(value); }
  public quickfix.field.FirmTradeID get(quickfix.field.FirmTradeID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FirmTradeID getFirmTradeID() throws FieldNotFound
  { quickfix.field.FirmTradeID value = new quickfix.field.FirmTradeID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FirmTradeID field)
  { return isSetField(field); }
  public boolean isSetFirmTradeID()
  { return isSetField(1041); }
  public void set(quickfix.field.SecondaryFirmTradeID value)
  { setField(value); }
  public quickfix.field.SecondaryFirmTradeID get(quickfix.field.SecondaryFirmTradeID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryFirmTradeID getSecondaryFirmTradeID() throws FieldNotFound
  { quickfix.field.SecondaryFirmTradeID value = new quickfix.field.SecondaryFirmTradeID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryFirmTradeID field)
  { return isSetField(field); }
  public boolean isSetSecondaryFirmTradeID()
  { return isSetField(1042); }
  public void set(quickfix.field.CalculatedCcyLastQty value)
  { setField(value); }
  public quickfix.field.CalculatedCcyLastQty get(quickfix.field.CalculatedCcyLastQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CalculatedCcyLastQty getCalculatedCcyLastQty() throws FieldNotFound
  { quickfix.field.CalculatedCcyLastQty value = new quickfix.field.CalculatedCcyLastQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CalculatedCcyLastQty field)
  { return isSetField(field); }
  public boolean isSetCalculatedCcyLastQty()
  { return isSetField(1056); }
  public void set(quickfix.field.LastSwapPoints value)
  { setField(value); }
  public quickfix.field.LastSwapPoints get(quickfix.field.LastSwapPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastSwapPoints getLastSwapPoints() throws FieldNotFound
  { quickfix.field.LastSwapPoints value = new quickfix.field.LastSwapPoints();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastSwapPoints field)
  { return isSetField(field); }
  public boolean isSetLastSwapPoints()
  { return isSetField(1071); }
  public void set(quickfix.field.UnderlyingSettlementDate value)
  { setField(value); }
  public quickfix.field.UnderlyingSettlementDate get(quickfix.field.UnderlyingSettlementDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSettlementDate getUnderlyingSettlementDate() throws FieldNotFound
  { quickfix.field.UnderlyingSettlementDate value = new quickfix.field.UnderlyingSettlementDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSettlementDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSettlementDate()
  { return isSetField(987); }
  public void set(quickfix.field.GrossTradeAmt value)
  { setField(value); }
  public quickfix.field.GrossTradeAmt get(quickfix.field.GrossTradeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.GrossTradeAmt getGrossTradeAmt() throws FieldNotFound
  { quickfix.field.GrossTradeAmt value = new quickfix.field.GrossTradeAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.GrossTradeAmt field)
  { return isSetField(field); }
  public boolean isSetGrossTradeAmt()
  { return isSetField(381); }
  public void set(quickfix.field.NoRootPartyIDs value)
  { setField(value); }
  public quickfix.field.NoRootPartyIDs get(quickfix.field.NoRootPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoRootPartyIDs getNoRootPartyIDs() throws FieldNotFound
  { quickfix.field.NoRootPartyIDs value = new quickfix.field.NoRootPartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoRootPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoRootPartyIDs()
  { return isSetField(1116); }
  public static class NoRootPartyIDs extends Group {
    public NoRootPartyIDs() {
      super(1116,1117,
      new int[] {1117,1118,1119,1120,0 } ); }
  public void set(quickfix.field.RootPartyID value)
  { setField(value); }
  public quickfix.field.RootPartyID get(quickfix.field.RootPartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RootPartyID getRootPartyID() throws FieldNotFound
  { quickfix.field.RootPartyID value = new quickfix.field.RootPartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RootPartyID field)
  { return isSetField(field); }
  public boolean isSetRootPartyID()
  { return isSetField(1117); }
  public void set(quickfix.field.RootPartyIDSource value)
  { setField(value); }
  public quickfix.field.RootPartyIDSource get(quickfix.field.RootPartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RootPartyIDSource getRootPartyIDSource() throws FieldNotFound
  { quickfix.field.RootPartyIDSource value = new quickfix.field.RootPartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RootPartyIDSource field)
  { return isSetField(field); }
  public boolean isSetRootPartyIDSource()
  { return isSetField(1118); }
  public void set(quickfix.field.RootPartyRole value)
  { setField(value); }
  public quickfix.field.RootPartyRole get(quickfix.field.RootPartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RootPartyRole getRootPartyRole() throws FieldNotFound
  { quickfix.field.RootPartyRole value = new quickfix.field.RootPartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RootPartyRole field)
  { return isSetField(field); }
  public boolean isSetRootPartyRole()
  { return isSetField(1119); }
  public void set(quickfix.field.NoRootPartySubIDs value)
  { setField(value); }
  public quickfix.field.NoRootPartySubIDs get(quickfix.field.NoRootPartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoRootPartySubIDs getNoRootPartySubIDs() throws FieldNotFound
  { quickfix.field.NoRootPartySubIDs value = new quickfix.field.NoRootPartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoRootPartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoRootPartySubIDs()
  { return isSetField(1120); }
  public static class NoRootPartySubIDs extends Group {
    public NoRootPartySubIDs() {
      super(1120,1121,
      new int[] {1121,1122,0 } ); }
  public void set(quickfix.field.RootPartySubID value)
  { setField(value); }
  public quickfix.field.RootPartySubID get(quickfix.field.RootPartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RootPartySubID getRootPartySubID() throws FieldNotFound
  { quickfix.field.RootPartySubID value = new quickfix.field.RootPartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RootPartySubID field)
  { return isSetField(field); }
  public boolean isSetRootPartySubID()
  { return isSetField(1121); }
  public void set(quickfix.field.RootPartySubIDType value)
  { setField(value); }
  public quickfix.field.RootPartySubIDType get(quickfix.field.RootPartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RootPartySubIDType getRootPartySubIDType() throws FieldNotFound
  { quickfix.field.RootPartySubIDType value = new quickfix.field.RootPartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RootPartySubIDType field)
  { return isSetField(field); }
  public boolean isSetRootPartySubIDType()
  { return isSetField(1122); }
}
}
  public void set(quickfix.field.OrderCategory value)
  { setField(value); }
  public quickfix.field.OrderCategory get(quickfix.field.OrderCategory  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderCategory getOrderCategory() throws FieldNotFound
  { quickfix.field.OrderCategory value = new quickfix.field.OrderCategory();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderCategory field)
  { return isSetField(field); }
  public boolean isSetOrderCategory()
  { return isSetField(1115); }
  public void set(quickfix.field.TradeHandlingInstr value)
  { setField(value); }
  public quickfix.field.TradeHandlingInstr get(quickfix.field.TradeHandlingInstr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeHandlingInstr getTradeHandlingInstr() throws FieldNotFound
  { quickfix.field.TradeHandlingInstr value = new quickfix.field.TradeHandlingInstr();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeHandlingInstr field)
  { return isSetField(field); }
  public boolean isSetTradeHandlingInstr()
  { return isSetField(1123); }
  public void set(quickfix.field.OrigTradeHandlingInstr value)
  { setField(value); }
  public quickfix.field.OrigTradeHandlingInstr get(quickfix.field.OrigTradeHandlingInstr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigTradeHandlingInstr getOrigTradeHandlingInstr() throws FieldNotFound
  { quickfix.field.OrigTradeHandlingInstr value = new quickfix.field.OrigTradeHandlingInstr();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigTradeHandlingInstr field)
  { return isSetField(field); }
  public boolean isSetOrigTradeHandlingInstr()
  { return isSetField(1124); }
  public void set(quickfix.field.OrigTradeDate value)
  { setField(value); }
  public quickfix.field.OrigTradeDate get(quickfix.field.OrigTradeDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigTradeDate getOrigTradeDate() throws FieldNotFound
  { quickfix.field.OrigTradeDate value = new quickfix.field.OrigTradeDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigTradeDate field)
  { return isSetField(field); }
  public boolean isSetOrigTradeDate()
  { return isSetField(1125); }
  public void set(quickfix.field.OrigTradeID value)
  { setField(value); }
  public quickfix.field.OrigTradeID get(quickfix.field.OrigTradeID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigTradeID getOrigTradeID() throws FieldNotFound
  { quickfix.field.OrigTradeID value = new quickfix.field.OrigTradeID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigTradeID field)
  { return isSetField(field); }
  public boolean isSetOrigTradeID()
  { return isSetField(1126); }
  public void set(quickfix.field.OrigSecondaryTradeID value)
  { setField(value); }
  public quickfix.field.OrigSecondaryTradeID get(quickfix.field.OrigSecondaryTradeID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigSecondaryTradeID getOrigSecondaryTradeID() throws FieldNotFound
  { quickfix.field.OrigSecondaryTradeID value = new quickfix.field.OrigSecondaryTradeID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigSecondaryTradeID field)
  { return isSetField(field); }
  public boolean isSetOrigSecondaryTradeID()
  { return isSetField(1127); }
  public void set(quickfix.field.TZTransactTime value)
  { setField(value); }
  public quickfix.field.TZTransactTime get(quickfix.field.TZTransactTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TZTransactTime getTZTransactTime() throws FieldNotFound
  { quickfix.field.TZTransactTime value = new quickfix.field.TZTransactTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TZTransactTime field)
  { return isSetField(field); }
  public boolean isSetTZTransactTime()
  { return isSetField(1132); }
  public void set(quickfix.field.ReportedPxDiff value)
  { setField(value); }
  public quickfix.field.ReportedPxDiff get(quickfix.field.ReportedPxDiff  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ReportedPxDiff getReportedPxDiff() throws FieldNotFound
  { quickfix.field.ReportedPxDiff value = new quickfix.field.ReportedPxDiff();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ReportedPxDiff field)
  { return isSetField(field); }
  public boolean isSetReportedPxDiff()
  { return isSetField(1134); }
}

