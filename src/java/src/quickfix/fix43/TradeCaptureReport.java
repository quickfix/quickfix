package org.quickfix.fix43;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class TradeCaptureReport extends Message
{
  public TradeCaptureReport()
  {
    getHeader().setField(new MsgType("AE"));
  }
  public TradeCaptureReport(
    org.quickfix.field.TradeReportID aTradeReportID,
    org.quickfix.field.ExecType aExecType,
    org.quickfix.field.PreviouslyReported aPreviouslyReported,
    org.quickfix.field.LastQty aLastQty,
    org.quickfix.field.LastPx aLastPx,
    org.quickfix.field.TradeDate aTradeDate,
    org.quickfix.field.TransactTime aTransactTime ) {

    getHeader().setField(new MsgType("AE"));
    set(aTradeReportID);
    set(aExecType);
    set(aPreviouslyReported);
    set(aLastQty);
    set(aLastPx);
    set(aTradeDate);
    set(aTransactTime);
  }

  public void set(org.quickfix.field.TradeReportID value)
  { setField(value); }
  public org.quickfix.field.TradeReportID get(org.quickfix.field.TradeReportID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeReportID getTradeReportID() throws FieldNotFound
  { org.quickfix.field.TradeReportID value = new org.quickfix.field.TradeReportID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeReportID field)
  { return isSetField(field); }
  public boolean isSetTradeReportID()
  { return isSetField(571); }
  public void set(org.quickfix.field.TradeReportTransType value)
  { setField(value); }
  public org.quickfix.field.TradeReportTransType get(org.quickfix.field.TradeReportTransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeReportTransType getTradeReportTransType() throws FieldNotFound
  { org.quickfix.field.TradeReportTransType value = new org.quickfix.field.TradeReportTransType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeReportTransType field)
  { return isSetField(field); }
  public boolean isSetTradeReportTransType()
  { return isSetField(487); }
  public void set(org.quickfix.field.TradeRequestID value)
  { setField(value); }
  public org.quickfix.field.TradeRequestID get(org.quickfix.field.TradeRequestID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeRequestID getTradeRequestID() throws FieldNotFound
  { org.quickfix.field.TradeRequestID value = new org.quickfix.field.TradeRequestID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeRequestID field)
  { return isSetField(field); }
  public boolean isSetTradeRequestID()
  { return isSetField(568); }
  public void set(org.quickfix.field.ExecType value)
  { setField(value); }
  public org.quickfix.field.ExecType get(org.quickfix.field.ExecType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecType getExecType() throws FieldNotFound
  { org.quickfix.field.ExecType value = new org.quickfix.field.ExecType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecType field)
  { return isSetField(field); }
  public boolean isSetExecType()
  { return isSetField(150); }
  public void set(org.quickfix.field.TradeReportRefID value)
  { setField(value); }
  public org.quickfix.field.TradeReportRefID get(org.quickfix.field.TradeReportRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeReportRefID getTradeReportRefID() throws FieldNotFound
  { org.quickfix.field.TradeReportRefID value = new org.quickfix.field.TradeReportRefID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeReportRefID field)
  { return isSetField(field); }
  public boolean isSetTradeReportRefID()
  { return isSetField(572); }
  public void set(org.quickfix.field.ExecID value)
  { setField(value); }
  public org.quickfix.field.ExecID get(org.quickfix.field.ExecID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecID getExecID() throws FieldNotFound
  { org.quickfix.field.ExecID value = new org.quickfix.field.ExecID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecID field)
  { return isSetField(field); }
  public boolean isSetExecID()
  { return isSetField(17); }
  public void set(org.quickfix.field.SecondaryExecID value)
  { setField(value); }
  public org.quickfix.field.SecondaryExecID get(org.quickfix.field.SecondaryExecID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecondaryExecID getSecondaryExecID() throws FieldNotFound
  { org.quickfix.field.SecondaryExecID value = new org.quickfix.field.SecondaryExecID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecondaryExecID field)
  { return isSetField(field); }
  public boolean isSetSecondaryExecID()
  { return isSetField(527); }
  public void set(org.quickfix.field.ExecRestatementReason value)
  { setField(value); }
  public org.quickfix.field.ExecRestatementReason get(org.quickfix.field.ExecRestatementReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecRestatementReason getExecRestatementReason() throws FieldNotFound
  { org.quickfix.field.ExecRestatementReason value = new org.quickfix.field.ExecRestatementReason();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecRestatementReason field)
  { return isSetField(field); }
  public boolean isSetExecRestatementReason()
  { return isSetField(378); }
  public void set(org.quickfix.field.PreviouslyReported value)
  { setField(value); }
  public org.quickfix.field.PreviouslyReported get(org.quickfix.field.PreviouslyReported  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PreviouslyReported getPreviouslyReported() throws FieldNotFound
  { org.quickfix.field.PreviouslyReported value = new org.quickfix.field.PreviouslyReported();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PreviouslyReported field)
  { return isSetField(field); }
  public boolean isSetPreviouslyReported()
  { return isSetField(570); }
  public void set(org.quickfix.field.Symbol value)
  { setField(value); }
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Symbol getSymbol() throws FieldNotFound
  { org.quickfix.field.Symbol value = new org.quickfix.field.Symbol();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Symbol field)
  { return isSetField(field); }
  public boolean isSetSymbol()
  { return isSetField(55); }
  public void set(org.quickfix.field.SymbolSfx value)
  { setField(value); }
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound
  { org.quickfix.field.SymbolSfx value = new org.quickfix.field.SymbolSfx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SymbolSfx field)
  { return isSetField(field); }
  public boolean isSetSymbolSfx()
  { return isSetField(65); }
  public void set(org.quickfix.field.SecurityID value)
  { setField(value); }
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound
  { org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityID field)
  { return isSetField(field); }
  public boolean isSetSecurityID()
  { return isSetField(48); }
  public void set(org.quickfix.field.SecurityIDSource value)
  { setField(value); }
  public org.quickfix.field.SecurityIDSource get(org.quickfix.field.SecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityIDSource getSecurityIDSource() throws FieldNotFound
  { org.quickfix.field.SecurityIDSource value = new org.quickfix.field.SecurityIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetSecurityIDSource()
  { return isSetField(22); }
  public void set(org.quickfix.field.Product value)
  { setField(value); }
  public org.quickfix.field.Product get(org.quickfix.field.Product  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Product getProduct() throws FieldNotFound
  { org.quickfix.field.Product value = new org.quickfix.field.Product();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Product field)
  { return isSetField(field); }
  public boolean isSetProduct()
  { return isSetField(460); }
  public void set(org.quickfix.field.CFICode value)
  { setField(value); }
  public org.quickfix.field.CFICode get(org.quickfix.field.CFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CFICode getCFICode() throws FieldNotFound
  { org.quickfix.field.CFICode value = new org.quickfix.field.CFICode();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CFICode field)
  { return isSetField(field); }
  public boolean isSetCFICode()
  { return isSetField(461); }
  public void set(org.quickfix.field.SecurityType value)
  { setField(value); }
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityType field)
  { return isSetField(field); }
  public boolean isSetSecurityType()
  { return isSetField(167); }
  public void set(org.quickfix.field.MaturityMonthYear value)
  { setField(value); }
  public org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound
  { org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetMaturityMonthYear()
  { return isSetField(200); }
  public void set(org.quickfix.field.MaturityDate value)
  { setField(value); }
  public org.quickfix.field.MaturityDate get(org.quickfix.field.MaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MaturityDate getMaturityDate() throws FieldNotFound
  { org.quickfix.field.MaturityDate value = new org.quickfix.field.MaturityDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MaturityDate field)
  { return isSetField(field); }
  public boolean isSetMaturityDate()
  { return isSetField(541); }
  public void set(org.quickfix.field.CouponPaymentDate value)
  { setField(value); }
  public org.quickfix.field.CouponPaymentDate get(org.quickfix.field.CouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CouponPaymentDate getCouponPaymentDate() throws FieldNotFound
  { org.quickfix.field.CouponPaymentDate value = new org.quickfix.field.CouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetCouponPaymentDate()
  { return isSetField(224); }
  public void set(org.quickfix.field.IssueDate value)
  { setField(value); }
  public org.quickfix.field.IssueDate get(org.quickfix.field.IssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IssueDate getIssueDate() throws FieldNotFound
  { org.quickfix.field.IssueDate value = new org.quickfix.field.IssueDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IssueDate field)
  { return isSetField(field); }
  public boolean isSetIssueDate()
  { return isSetField(225); }
  public void set(org.quickfix.field.RepoCollateralSecurityType value)
  { setField(value); }
  public org.quickfix.field.RepoCollateralSecurityType get(org.quickfix.field.RepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RepoCollateralSecurityType getRepoCollateralSecurityType() throws FieldNotFound
  { org.quickfix.field.RepoCollateralSecurityType value = new org.quickfix.field.RepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetRepoCollateralSecurityType()
  { return isSetField(239); }
  public void set(org.quickfix.field.RepurchaseTerm value)
  { setField(value); }
  public org.quickfix.field.RepurchaseTerm get(org.quickfix.field.RepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RepurchaseTerm getRepurchaseTerm() throws FieldNotFound
  { org.quickfix.field.RepurchaseTerm value = new org.quickfix.field.RepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetRepurchaseTerm()
  { return isSetField(226); }
  public void set(org.quickfix.field.RepurchaseRate value)
  { setField(value); }
  public org.quickfix.field.RepurchaseRate get(org.quickfix.field.RepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RepurchaseRate getRepurchaseRate() throws FieldNotFound
  { org.quickfix.field.RepurchaseRate value = new org.quickfix.field.RepurchaseRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetRepurchaseRate()
  { return isSetField(227); }
  public void set(org.quickfix.field.Factor value)
  { setField(value); }
  public org.quickfix.field.Factor get(org.quickfix.field.Factor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Factor getFactor() throws FieldNotFound
  { org.quickfix.field.Factor value = new org.quickfix.field.Factor();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Factor field)
  { return isSetField(field); }
  public boolean isSetFactor()
  { return isSetField(228); }
  public void set(org.quickfix.field.CreditRating value)
  { setField(value); }
  public org.quickfix.field.CreditRating get(org.quickfix.field.CreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CreditRating getCreditRating() throws FieldNotFound
  { org.quickfix.field.CreditRating value = new org.quickfix.field.CreditRating();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CreditRating field)
  { return isSetField(field); }
  public boolean isSetCreditRating()
  { return isSetField(255); }
  public void set(org.quickfix.field.InstrRegistry value)
  { setField(value); }
  public org.quickfix.field.InstrRegistry get(org.quickfix.field.InstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.InstrRegistry getInstrRegistry() throws FieldNotFound
  { org.quickfix.field.InstrRegistry value = new org.quickfix.field.InstrRegistry();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.InstrRegistry field)
  { return isSetField(field); }
  public boolean isSetInstrRegistry()
  { return isSetField(543); }
  public void set(org.quickfix.field.CountryOfIssue value)
  { setField(value); }
  public org.quickfix.field.CountryOfIssue get(org.quickfix.field.CountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CountryOfIssue getCountryOfIssue() throws FieldNotFound
  { org.quickfix.field.CountryOfIssue value = new org.quickfix.field.CountryOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetCountryOfIssue()
  { return isSetField(470); }
  public void set(org.quickfix.field.StateOrProvinceOfIssue value)
  { setField(value); }
  public org.quickfix.field.StateOrProvinceOfIssue get(org.quickfix.field.StateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StateOrProvinceOfIssue getStateOrProvinceOfIssue() throws FieldNotFound
  { org.quickfix.field.StateOrProvinceOfIssue value = new org.quickfix.field.StateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetStateOrProvinceOfIssue()
  { return isSetField(471); }
  public void set(org.quickfix.field.LocaleOfIssue value)
  { setField(value); }
  public org.quickfix.field.LocaleOfIssue get(org.quickfix.field.LocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LocaleOfIssue getLocaleOfIssue() throws FieldNotFound
  { org.quickfix.field.LocaleOfIssue value = new org.quickfix.field.LocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetLocaleOfIssue()
  { return isSetField(472); }
  public void set(org.quickfix.field.RedemptionDate value)
  { setField(value); }
  public org.quickfix.field.RedemptionDate get(org.quickfix.field.RedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RedemptionDate getRedemptionDate() throws FieldNotFound
  { org.quickfix.field.RedemptionDate value = new org.quickfix.field.RedemptionDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RedemptionDate field)
  { return isSetField(field); }
  public boolean isSetRedemptionDate()
  { return isSetField(240); }
  public void set(org.quickfix.field.StrikePrice value)
  { setField(value); }
  public org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound
  { org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StrikePrice field)
  { return isSetField(field); }
  public boolean isSetStrikePrice()
  { return isSetField(202); }
  public void set(org.quickfix.field.OptAttribute value)
  { setField(value); }
  public org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound
  { org.quickfix.field.OptAttribute value = new org.quickfix.field.OptAttribute();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OptAttribute field)
  { return isSetField(field); }
  public boolean isSetOptAttribute()
  { return isSetField(206); }
  public void set(org.quickfix.field.ContractMultiplier value)
  { setField(value); }
  public org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound
  { org.quickfix.field.ContractMultiplier value = new org.quickfix.field.ContractMultiplier();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetContractMultiplier()
  { return isSetField(231); }
  public void set(org.quickfix.field.CouponRate value)
  { setField(value); }
  public org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CouponRate getCouponRate() throws FieldNotFound
  { org.quickfix.field.CouponRate value = new org.quickfix.field.CouponRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CouponRate field)
  { return isSetField(field); }
  public boolean isSetCouponRate()
  { return isSetField(223); }
  public void set(org.quickfix.field.SecurityExchange value)
  { setField(value); }
  public org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound
  { org.quickfix.field.SecurityExchange value = new org.quickfix.field.SecurityExchange();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityExchange field)
  { return isSetField(field); }
  public boolean isSetSecurityExchange()
  { return isSetField(207); }
  public void set(org.quickfix.field.Issuer value)
  { setField(value); }
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Issuer getIssuer() throws FieldNotFound
  { org.quickfix.field.Issuer value = new org.quickfix.field.Issuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Issuer field)
  { return isSetField(field); }
  public boolean isSetIssuer()
  { return isSetField(106); }
  public void set(org.quickfix.field.EncodedIssuerLen value)
  { setField(value); }
  public org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound
  { org.quickfix.field.EncodedIssuerLen value = new org.quickfix.field.EncodedIssuerLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuerLen()
  { return isSetField(348); }
  public void set(org.quickfix.field.EncodedIssuer value)
  { setField(value); }
  public org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound
  { org.quickfix.field.EncodedIssuer value = new org.quickfix.field.EncodedIssuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuer()
  { return isSetField(349); }
  public void set(org.quickfix.field.SecurityDesc value)
  { setField(value); }
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound
  { org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityDesc field)
  { return isSetField(field); }
  public boolean isSetSecurityDesc()
  { return isSetField(107); }
  public void set(org.quickfix.field.EncodedSecurityDescLen value)
  { setField(value); }
  public org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound
  { org.quickfix.field.EncodedSecurityDescLen value = new org.quickfix.field.EncodedSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDescLen()
  { return isSetField(350); }
  public void set(org.quickfix.field.EncodedSecurityDesc value)
  { setField(value); }
  public org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound
  { org.quickfix.field.EncodedSecurityDesc value = new org.quickfix.field.EncodedSecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDesc()
  { return isSetField(351); }
  public void set(org.quickfix.field.NoSecurityAltID value)
  { setField(value); }
  public org.quickfix.field.NoSecurityAltID get(org.quickfix.field.NoSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoSecurityAltID getNoSecurityAltID() throws FieldNotFound
  { org.quickfix.field.NoSecurityAltID value = new org.quickfix.field.NoSecurityAltID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetNoSecurityAltID()
  { return isSetField(454); }
  public static class NoSecurityAltID extends Group {
    public NoSecurityAltID() {
      super(454,455,
      new int[] {455,456,0 } ); }
  public void set(org.quickfix.field.SecurityAltID value)
  { setField(value); }
  public org.quickfix.field.SecurityAltID get(org.quickfix.field.SecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityAltID getSecurityAltID() throws FieldNotFound
  { org.quickfix.field.SecurityAltID value = new org.quickfix.field.SecurityAltID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityAltID field)
  { return isSetField(field); }
  public boolean isSetSecurityAltID()
  { return isSetField(455); }
  public void set(org.quickfix.field.SecurityAltIDSource value)
  { setField(value); }
  public org.quickfix.field.SecurityAltIDSource get(org.quickfix.field.SecurityAltIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityAltIDSource getSecurityAltIDSource() throws FieldNotFound
  { org.quickfix.field.SecurityAltIDSource value = new org.quickfix.field.SecurityAltIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityAltIDSource field)
  { return isSetField(field); }
  public boolean isSetSecurityAltIDSource()
  { return isSetField(456); }
}
  public void set(org.quickfix.field.OrderQty value)
  { setField(value); }
  public org.quickfix.field.OrderQty get(org.quickfix.field.OrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderQty getOrderQty() throws FieldNotFound
  { org.quickfix.field.OrderQty value = new org.quickfix.field.OrderQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderQty field)
  { return isSetField(field); }
  public boolean isSetOrderQty()
  { return isSetField(38); }
  public void set(org.quickfix.field.CashOrderQty value)
  { setField(value); }
  public org.quickfix.field.CashOrderQty get(org.quickfix.field.CashOrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CashOrderQty getCashOrderQty() throws FieldNotFound
  { org.quickfix.field.CashOrderQty value = new org.quickfix.field.CashOrderQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CashOrderQty field)
  { return isSetField(field); }
  public boolean isSetCashOrderQty()
  { return isSetField(152); }
  public void set(org.quickfix.field.OrderPercent value)
  { setField(value); }
  public org.quickfix.field.OrderPercent get(org.quickfix.field.OrderPercent  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderPercent getOrderPercent() throws FieldNotFound
  { org.quickfix.field.OrderPercent value = new org.quickfix.field.OrderPercent();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderPercent field)
  { return isSetField(field); }
  public boolean isSetOrderPercent()
  { return isSetField(516); }
  public void set(org.quickfix.field.RoundingDirection value)
  { setField(value); }
  public org.quickfix.field.RoundingDirection get(org.quickfix.field.RoundingDirection  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RoundingDirection getRoundingDirection() throws FieldNotFound
  { org.quickfix.field.RoundingDirection value = new org.quickfix.field.RoundingDirection();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RoundingDirection field)
  { return isSetField(field); }
  public boolean isSetRoundingDirection()
  { return isSetField(468); }
  public void set(org.quickfix.field.RoundingModulus value)
  { setField(value); }
  public org.quickfix.field.RoundingModulus get(org.quickfix.field.RoundingModulus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RoundingModulus getRoundingModulus() throws FieldNotFound
  { org.quickfix.field.RoundingModulus value = new org.quickfix.field.RoundingModulus();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RoundingModulus field)
  { return isSetField(field); }
  public boolean isSetRoundingModulus()
  { return isSetField(469); }
  public void set(org.quickfix.field.LastQty value)
  { setField(value); }
  public org.quickfix.field.LastQty get(org.quickfix.field.LastQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastQty getLastQty() throws FieldNotFound
  { org.quickfix.field.LastQty value = new org.quickfix.field.LastQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastQty field)
  { return isSetField(field); }
  public boolean isSetLastQty()
  { return isSetField(32); }
  public void set(org.quickfix.field.LastPx value)
  { setField(value); }
  public org.quickfix.field.LastPx get(org.quickfix.field.LastPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastPx getLastPx() throws FieldNotFound
  { org.quickfix.field.LastPx value = new org.quickfix.field.LastPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastPx field)
  { return isSetField(field); }
  public boolean isSetLastPx()
  { return isSetField(31); }
  public void set(org.quickfix.field.LastSpotRate value)
  { setField(value); }
  public org.quickfix.field.LastSpotRate get(org.quickfix.field.LastSpotRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastSpotRate getLastSpotRate() throws FieldNotFound
  { org.quickfix.field.LastSpotRate value = new org.quickfix.field.LastSpotRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastSpotRate field)
  { return isSetField(field); }
  public boolean isSetLastSpotRate()
  { return isSetField(194); }
  public void set(org.quickfix.field.LastForwardPoints value)
  { setField(value); }
  public org.quickfix.field.LastForwardPoints get(org.quickfix.field.LastForwardPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastForwardPoints getLastForwardPoints() throws FieldNotFound
  { org.quickfix.field.LastForwardPoints value = new org.quickfix.field.LastForwardPoints();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastForwardPoints field)
  { return isSetField(field); }
  public boolean isSetLastForwardPoints()
  { return isSetField(195); }
  public void set(org.quickfix.field.LastMkt value)
  { setField(value); }
  public org.quickfix.field.LastMkt get(org.quickfix.field.LastMkt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastMkt getLastMkt() throws FieldNotFound
  { org.quickfix.field.LastMkt value = new org.quickfix.field.LastMkt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastMkt field)
  { return isSetField(field); }
  public boolean isSetLastMkt()
  { return isSetField(30); }
  public void set(org.quickfix.field.TradeDate value)
  { setField(value); }
  public org.quickfix.field.TradeDate get(org.quickfix.field.TradeDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeDate getTradeDate() throws FieldNotFound
  { org.quickfix.field.TradeDate value = new org.quickfix.field.TradeDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeDate field)
  { return isSetField(field); }
  public boolean isSetTradeDate()
  { return isSetField(75); }
  public void set(org.quickfix.field.TransactTime value)
  { setField(value); }
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TransactTime field)
  { return isSetField(field); }
  public boolean isSetTransactTime()
  { return isSetField(60); }
  public void set(org.quickfix.field.SettlmntTyp value)
  { setField(value); }
  public org.quickfix.field.SettlmntTyp get(org.quickfix.field.SettlmntTyp  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlmntTyp getSettlmntTyp() throws FieldNotFound
  { org.quickfix.field.SettlmntTyp value = new org.quickfix.field.SettlmntTyp();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlmntTyp field)
  { return isSetField(field); }
  public boolean isSetSettlmntTyp()
  { return isSetField(63); }
  public void set(org.quickfix.field.FutSettDate value)
  { setField(value); }
  public org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound
  { org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.FutSettDate field)
  { return isSetField(field); }
  public boolean isSetFutSettDate()
  { return isSetField(64); }
  public void set(org.quickfix.field.MatchStatus value)
  { setField(value); }
  public org.quickfix.field.MatchStatus get(org.quickfix.field.MatchStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MatchStatus getMatchStatus() throws FieldNotFound
  { org.quickfix.field.MatchStatus value = new org.quickfix.field.MatchStatus();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MatchStatus field)
  { return isSetField(field); }
  public boolean isSetMatchStatus()
  { return isSetField(573); }
  public void set(org.quickfix.field.MatchType value)
  { setField(value); }
  public org.quickfix.field.MatchType get(org.quickfix.field.MatchType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MatchType getMatchType() throws FieldNotFound
  { org.quickfix.field.MatchType value = new org.quickfix.field.MatchType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MatchType field)
  { return isSetField(field); }
  public boolean isSetMatchType()
  { return isSetField(574); }
  public void set(org.quickfix.field.NoSides value)
  { setField(value); }
  public org.quickfix.field.NoSides get(org.quickfix.field.NoSides  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoSides getNoSides() throws FieldNotFound
  { org.quickfix.field.NoSides value = new org.quickfix.field.NoSides();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoSides field)
  { return isSetField(field); }
  public boolean isSetNoSides()
  { return isSetField(552); }
  public static class NoSides extends Group {
    public NoSides() {
      super(552,54,
      new int[] {54,37,198,11,1,581,81,575,635,578,579,15,376,377,528,529,582,483,336,625,12,13,479,497,381,157,230,158,159,238,237,118,119,120,155,156,77,58,354,355,442,0 } ); }
  public void set(org.quickfix.field.Side value)
  { setField(value); }
  public org.quickfix.field.Side get(org.quickfix.field.Side  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Side getSide() throws FieldNotFound
  { org.quickfix.field.Side value = new org.quickfix.field.Side();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Side field)
  { return isSetField(field); }
  public boolean isSetSide()
  { return isSetField(54); }
  public void set(org.quickfix.field.OrderID value)
  { setField(value); }
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound
  { org.quickfix.field.OrderID value = new org.quickfix.field.OrderID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderID field)
  { return isSetField(field); }
  public boolean isSetOrderID()
  { return isSetField(37); }
  public void set(org.quickfix.field.SecondaryOrderID value)
  { setField(value); }
  public org.quickfix.field.SecondaryOrderID get(org.quickfix.field.SecondaryOrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound
  { org.quickfix.field.SecondaryOrderID value = new org.quickfix.field.SecondaryOrderID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecondaryOrderID field)
  { return isSetField(field); }
  public boolean isSetSecondaryOrderID()
  { return isSetField(198); }
  public void set(org.quickfix.field.ClOrdID value)
  { setField(value); }
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ClOrdID field)
  { return isSetField(field); }
  public boolean isSetClOrdID()
  { return isSetField(11); }
  public void set(org.quickfix.field.NoPartyIDs value)
  { setField(value); }
  public org.quickfix.field.NoPartyIDs get(org.quickfix.field.NoPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoPartyIDs getNoPartyIDs() throws FieldNotFound
  { org.quickfix.field.NoPartyIDs value = new org.quickfix.field.NoPartyIDs();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartyIDs()
  { return isSetField(453); }
  public static class NoPartyIDs extends Group {
    public NoPartyIDs() {
      super(453,448,
      new int[] {448,447,452,523,0 } ); }
  public void set(org.quickfix.field.PartyID value)
  { setField(value); }
  public org.quickfix.field.PartyID get(org.quickfix.field.PartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartyID getPartyID() throws FieldNotFound
  { org.quickfix.field.PartyID value = new org.quickfix.field.PartyID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartyID field)
  { return isSetField(field); }
  public boolean isSetPartyID()
  { return isSetField(448); }
  public void set(org.quickfix.field.PartyIDSource value)
  { setField(value); }
  public org.quickfix.field.PartyIDSource get(org.quickfix.field.PartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartyIDSource getPartyIDSource() throws FieldNotFound
  { org.quickfix.field.PartyIDSource value = new org.quickfix.field.PartyIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartyIDSource field)
  { return isSetField(field); }
  public boolean isSetPartyIDSource()
  { return isSetField(447); }
  public void set(org.quickfix.field.PartyRole value)
  { setField(value); }
  public org.quickfix.field.PartyRole get(org.quickfix.field.PartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartyRole getPartyRole() throws FieldNotFound
  { org.quickfix.field.PartyRole value = new org.quickfix.field.PartyRole();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartyRole field)
  { return isSetField(field); }
  public boolean isSetPartyRole()
  { return isSetField(452); }
  public void set(org.quickfix.field.PartySubID value)
  { setField(value); }
  public org.quickfix.field.PartySubID get(org.quickfix.field.PartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartySubID getPartySubID() throws FieldNotFound
  { org.quickfix.field.PartySubID value = new org.quickfix.field.PartySubID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartySubID field)
  { return isSetField(field); }
  public boolean isSetPartySubID()
  { return isSetField(523); }
}
  public void set(org.quickfix.field.Account value)
  { setField(value); }
  public org.quickfix.field.Account get(org.quickfix.field.Account  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Account getAccount() throws FieldNotFound
  { org.quickfix.field.Account value = new org.quickfix.field.Account();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Account field)
  { return isSetField(field); }
  public boolean isSetAccount()
  { return isSetField(1); }
  public void set(org.quickfix.field.AccountType value)
  { setField(value); }
  public org.quickfix.field.AccountType get(org.quickfix.field.AccountType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AccountType getAccountType() throws FieldNotFound
  { org.quickfix.field.AccountType value = new org.quickfix.field.AccountType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AccountType field)
  { return isSetField(field); }
  public boolean isSetAccountType()
  { return isSetField(581); }
  public void set(org.quickfix.field.ProcessCode value)
  { setField(value); }
  public org.quickfix.field.ProcessCode get(org.quickfix.field.ProcessCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ProcessCode getProcessCode() throws FieldNotFound
  { org.quickfix.field.ProcessCode value = new org.quickfix.field.ProcessCode();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ProcessCode field)
  { return isSetField(field); }
  public boolean isSetProcessCode()
  { return isSetField(81); }
  public void set(org.quickfix.field.OddLot value)
  { setField(value); }
  public org.quickfix.field.OddLot get(org.quickfix.field.OddLot  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OddLot getOddLot() throws FieldNotFound
  { org.quickfix.field.OddLot value = new org.quickfix.field.OddLot();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OddLot field)
  { return isSetField(field); }
  public boolean isSetOddLot()
  { return isSetField(575); }
  public void set(org.quickfix.field.ClearingFeeIndicator value)
  { setField(value); }
  public org.quickfix.field.ClearingFeeIndicator get(org.quickfix.field.ClearingFeeIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ClearingFeeIndicator getClearingFeeIndicator() throws FieldNotFound
  { org.quickfix.field.ClearingFeeIndicator value = new org.quickfix.field.ClearingFeeIndicator();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ClearingFeeIndicator field)
  { return isSetField(field); }
  public boolean isSetClearingFeeIndicator()
  { return isSetField(635); }
  public void set(org.quickfix.field.TradeInputSource value)
  { setField(value); }
  public org.quickfix.field.TradeInputSource get(org.quickfix.field.TradeInputSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeInputSource getTradeInputSource() throws FieldNotFound
  { org.quickfix.field.TradeInputSource value = new org.quickfix.field.TradeInputSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeInputSource field)
  { return isSetField(field); }
  public boolean isSetTradeInputSource()
  { return isSetField(578); }
  public void set(org.quickfix.field.TradeInputDevice value)
  { setField(value); }
  public org.quickfix.field.TradeInputDevice get(org.quickfix.field.TradeInputDevice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeInputDevice getTradeInputDevice() throws FieldNotFound
  { org.quickfix.field.TradeInputDevice value = new org.quickfix.field.TradeInputDevice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeInputDevice field)
  { return isSetField(field); }
  public boolean isSetTradeInputDevice()
  { return isSetField(579); }
  public void set(org.quickfix.field.Currency value)
  { setField(value); }
  public org.quickfix.field.Currency get(org.quickfix.field.Currency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Currency field)
  { return isSetField(field); }
  public boolean isSetCurrency()
  { return isSetField(15); }
  public void set(org.quickfix.field.ComplianceID value)
  { setField(value); }
  public org.quickfix.field.ComplianceID get(org.quickfix.field.ComplianceID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ComplianceID getComplianceID() throws FieldNotFound
  { org.quickfix.field.ComplianceID value = new org.quickfix.field.ComplianceID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ComplianceID field)
  { return isSetField(field); }
  public boolean isSetComplianceID()
  { return isSetField(376); }
  public void set(org.quickfix.field.SolicitedFlag value)
  { setField(value); }
  public org.quickfix.field.SolicitedFlag get(org.quickfix.field.SolicitedFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SolicitedFlag getSolicitedFlag() throws FieldNotFound
  { org.quickfix.field.SolicitedFlag value = new org.quickfix.field.SolicitedFlag();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SolicitedFlag field)
  { return isSetField(field); }
  public boolean isSetSolicitedFlag()
  { return isSetField(377); }
  public void set(org.quickfix.field.OrderCapacity value)
  { setField(value); }
  public org.quickfix.field.OrderCapacity get(org.quickfix.field.OrderCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderCapacity getOrderCapacity() throws FieldNotFound
  { org.quickfix.field.OrderCapacity value = new org.quickfix.field.OrderCapacity();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderCapacity field)
  { return isSetField(field); }
  public boolean isSetOrderCapacity()
  { return isSetField(528); }
  public void set(org.quickfix.field.OrderRestrictions value)
  { setField(value); }
  public org.quickfix.field.OrderRestrictions get(org.quickfix.field.OrderRestrictions  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderRestrictions getOrderRestrictions() throws FieldNotFound
  { org.quickfix.field.OrderRestrictions value = new org.quickfix.field.OrderRestrictions();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderRestrictions field)
  { return isSetField(field); }
  public boolean isSetOrderRestrictions()
  { return isSetField(529); }
  public void set(org.quickfix.field.CustOrderCapacity value)
  { setField(value); }
  public org.quickfix.field.CustOrderCapacity get(org.quickfix.field.CustOrderCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CustOrderCapacity getCustOrderCapacity() throws FieldNotFound
  { org.quickfix.field.CustOrderCapacity value = new org.quickfix.field.CustOrderCapacity();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CustOrderCapacity field)
  { return isSetField(field); }
  public boolean isSetCustOrderCapacity()
  { return isSetField(582); }
  public void set(org.quickfix.field.TransBkdTime value)
  { setField(value); }
  public org.quickfix.field.TransBkdTime get(org.quickfix.field.TransBkdTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TransBkdTime getTransBkdTime() throws FieldNotFound
  { org.quickfix.field.TransBkdTime value = new org.quickfix.field.TransBkdTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TransBkdTime field)
  { return isSetField(field); }
  public boolean isSetTransBkdTime()
  { return isSetField(483); }
  public void set(org.quickfix.field.TradingSessionID value)
  { setField(value); }
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradingSessionID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionID()
  { return isSetField(336); }
  public void set(org.quickfix.field.TradingSessionSubID value)
  { setField(value); }
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradingSessionSubID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionSubID()
  { return isSetField(625); }
  public void set(org.quickfix.field.Commission value)
  { setField(value); }
  public org.quickfix.field.Commission get(org.quickfix.field.Commission  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Commission getCommission() throws FieldNotFound
  { org.quickfix.field.Commission value = new org.quickfix.field.Commission();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Commission field)
  { return isSetField(field); }
  public boolean isSetCommission()
  { return isSetField(12); }
  public void set(org.quickfix.field.CommType value)
  { setField(value); }
  public org.quickfix.field.CommType get(org.quickfix.field.CommType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CommType getCommType() throws FieldNotFound
  { org.quickfix.field.CommType value = new org.quickfix.field.CommType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CommType field)
  { return isSetField(field); }
  public boolean isSetCommType()
  { return isSetField(13); }
  public void set(org.quickfix.field.CommCurrency value)
  { setField(value); }
  public org.quickfix.field.CommCurrency get(org.quickfix.field.CommCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CommCurrency getCommCurrency() throws FieldNotFound
  { org.quickfix.field.CommCurrency value = new org.quickfix.field.CommCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CommCurrency field)
  { return isSetField(field); }
  public boolean isSetCommCurrency()
  { return isSetField(479); }
  public void set(org.quickfix.field.FundRenewWaiv value)
  { setField(value); }
  public org.quickfix.field.FundRenewWaiv get(org.quickfix.field.FundRenewWaiv  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.FundRenewWaiv getFundRenewWaiv() throws FieldNotFound
  { org.quickfix.field.FundRenewWaiv value = new org.quickfix.field.FundRenewWaiv();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.FundRenewWaiv field)
  { return isSetField(field); }
  public boolean isSetFundRenewWaiv()
  { return isSetField(497); }
  public void set(org.quickfix.field.GrossTradeAmt value)
  { setField(value); }
  public org.quickfix.field.GrossTradeAmt get(org.quickfix.field.GrossTradeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.GrossTradeAmt getGrossTradeAmt() throws FieldNotFound
  { org.quickfix.field.GrossTradeAmt value = new org.quickfix.field.GrossTradeAmt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.GrossTradeAmt field)
  { return isSetField(field); }
  public boolean isSetGrossTradeAmt()
  { return isSetField(381); }
  public void set(org.quickfix.field.NumDaysInterest value)
  { setField(value); }
  public org.quickfix.field.NumDaysInterest get(org.quickfix.field.NumDaysInterest  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NumDaysInterest getNumDaysInterest() throws FieldNotFound
  { org.quickfix.field.NumDaysInterest value = new org.quickfix.field.NumDaysInterest();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NumDaysInterest field)
  { return isSetField(field); }
  public boolean isSetNumDaysInterest()
  { return isSetField(157); }
  public void set(org.quickfix.field.ExDate value)
  { setField(value); }
  public org.quickfix.field.ExDate get(org.quickfix.field.ExDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExDate getExDate() throws FieldNotFound
  { org.quickfix.field.ExDate value = new org.quickfix.field.ExDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExDate field)
  { return isSetField(field); }
  public boolean isSetExDate()
  { return isSetField(230); }
  public void set(org.quickfix.field.AccruedInterestRate value)
  { setField(value); }
  public org.quickfix.field.AccruedInterestRate get(org.quickfix.field.AccruedInterestRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AccruedInterestRate getAccruedInterestRate() throws FieldNotFound
  { org.quickfix.field.AccruedInterestRate value = new org.quickfix.field.AccruedInterestRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AccruedInterestRate field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestRate()
  { return isSetField(158); }
  public void set(org.quickfix.field.AccruedInterestAmt value)
  { setField(value); }
  public org.quickfix.field.AccruedInterestAmt get(org.quickfix.field.AccruedInterestAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AccruedInterestAmt getAccruedInterestAmt() throws FieldNotFound
  { org.quickfix.field.AccruedInterestAmt value = new org.quickfix.field.AccruedInterestAmt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AccruedInterestAmt field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestAmt()
  { return isSetField(159); }
  public void set(org.quickfix.field.Concession value)
  { setField(value); }
  public org.quickfix.field.Concession get(org.quickfix.field.Concession  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Concession getConcession() throws FieldNotFound
  { org.quickfix.field.Concession value = new org.quickfix.field.Concession();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Concession field)
  { return isSetField(field); }
  public boolean isSetConcession()
  { return isSetField(238); }
  public void set(org.quickfix.field.TotalTakedown value)
  { setField(value); }
  public org.quickfix.field.TotalTakedown get(org.quickfix.field.TotalTakedown  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TotalTakedown getTotalTakedown() throws FieldNotFound
  { org.quickfix.field.TotalTakedown value = new org.quickfix.field.TotalTakedown();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TotalTakedown field)
  { return isSetField(field); }
  public boolean isSetTotalTakedown()
  { return isSetField(237); }
  public void set(org.quickfix.field.NetMoney value)
  { setField(value); }
  public org.quickfix.field.NetMoney get(org.quickfix.field.NetMoney  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NetMoney getNetMoney() throws FieldNotFound
  { org.quickfix.field.NetMoney value = new org.quickfix.field.NetMoney();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NetMoney field)
  { return isSetField(field); }
  public boolean isSetNetMoney()
  { return isSetField(118); }
  public void set(org.quickfix.field.SettlCurrAmt value)
  { setField(value); }
  public org.quickfix.field.SettlCurrAmt get(org.quickfix.field.SettlCurrAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlCurrAmt getSettlCurrAmt() throws FieldNotFound
  { org.quickfix.field.SettlCurrAmt value = new org.quickfix.field.SettlCurrAmt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlCurrAmt field)
  { return isSetField(field); }
  public boolean isSetSettlCurrAmt()
  { return isSetField(119); }
  public void set(org.quickfix.field.SettlCurrency value)
  { setField(value); }
  public org.quickfix.field.SettlCurrency get(org.quickfix.field.SettlCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound
  { org.quickfix.field.SettlCurrency value = new org.quickfix.field.SettlCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlCurrency field)
  { return isSetField(field); }
  public boolean isSetSettlCurrency()
  { return isSetField(120); }
  public void set(org.quickfix.field.SettlCurrFxRate value)
  { setField(value); }
  public org.quickfix.field.SettlCurrFxRate get(org.quickfix.field.SettlCurrFxRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlCurrFxRate getSettlCurrFxRate() throws FieldNotFound
  { org.quickfix.field.SettlCurrFxRate value = new org.quickfix.field.SettlCurrFxRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlCurrFxRate field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRate()
  { return isSetField(155); }
  public void set(org.quickfix.field.SettlCurrFxRateCalc value)
  { setField(value); }
  public org.quickfix.field.SettlCurrFxRateCalc get(org.quickfix.field.SettlCurrFxRateCalc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlCurrFxRateCalc getSettlCurrFxRateCalc() throws FieldNotFound
  { org.quickfix.field.SettlCurrFxRateCalc value = new org.quickfix.field.SettlCurrFxRateCalc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlCurrFxRateCalc field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRateCalc()
  { return isSetField(156); }
  public void set(org.quickfix.field.PositionEffect value)
  { setField(value); }
  public org.quickfix.field.PositionEffect get(org.quickfix.field.PositionEffect  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PositionEffect getPositionEffect() throws FieldNotFound
  { org.quickfix.field.PositionEffect value = new org.quickfix.field.PositionEffect();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PositionEffect field)
  { return isSetField(field); }
  public boolean isSetPositionEffect()
  { return isSetField(77); }
  public void set(org.quickfix.field.Text value)
  { setField(value); }
  public org.quickfix.field.Text get(org.quickfix.field.Text  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Text getText() throws FieldNotFound
  { org.quickfix.field.Text value = new org.quickfix.field.Text();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Text field)
  { return isSetField(field); }
  public boolean isSetText()
  { return isSetField(58); }
  public void set(org.quickfix.field.EncodedTextLen value)
  { setField(value); }
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound
  { org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedTextLen()
  { return isSetField(354); }
  public void set(org.quickfix.field.EncodedText value)
  { setField(value); }
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedText field)
  { return isSetField(field); }
  public boolean isSetEncodedText()
  { return isSetField(355); }
  public void set(org.quickfix.field.MultiLegReportingType value)
  { setField(value); }
  public org.quickfix.field.MultiLegReportingType get(org.quickfix.field.MultiLegReportingType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MultiLegReportingType getMultiLegReportingType() throws FieldNotFound
  { org.quickfix.field.MultiLegReportingType value = new org.quickfix.field.MultiLegReportingType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MultiLegReportingType field)
  { return isSetField(field); }
  public boolean isSetMultiLegReportingType()
  { return isSetField(442); }
  public void set(org.quickfix.field.NoClearingInstructions value)
  { setField(value); }
  public org.quickfix.field.NoClearingInstructions get(org.quickfix.field.NoClearingInstructions  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoClearingInstructions getNoClearingInstructions() throws FieldNotFound
  { org.quickfix.field.NoClearingInstructions value = new org.quickfix.field.NoClearingInstructions();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoClearingInstructions field)
  { return isSetField(field); }
  public boolean isSetNoClearingInstructions()
  { return isSetField(576); }
  public static class NoClearingInstructions extends Group {
    public NoClearingInstructions() {
      super(576,577,
      new int[] {577,0 } ); }
  public void set(org.quickfix.field.ClearingInstruction value)
  { setField(value); }
  public org.quickfix.field.ClearingInstruction get(org.quickfix.field.ClearingInstruction  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ClearingInstruction getClearingInstruction() throws FieldNotFound
  { org.quickfix.field.ClearingInstruction value = new org.quickfix.field.ClearingInstruction();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ClearingInstruction field)
  { return isSetField(field); }
  public boolean isSetClearingInstruction()
  { return isSetField(577); }
}
  public void set(org.quickfix.field.NoContAmts value)
  { setField(value); }
  public org.quickfix.field.NoContAmts get(org.quickfix.field.NoContAmts  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoContAmts getNoContAmts() throws FieldNotFound
  { org.quickfix.field.NoContAmts value = new org.quickfix.field.NoContAmts();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoContAmts field)
  { return isSetField(field); }
  public boolean isSetNoContAmts()
  { return isSetField(518); }
  public static class NoContAmts extends Group {
    public NoContAmts() {
      super(518,519,
      new int[] {519,520,521,0 } ); }
  public void set(org.quickfix.field.ContAmtType value)
  { setField(value); }
  public org.quickfix.field.ContAmtType get(org.quickfix.field.ContAmtType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ContAmtType getContAmtType() throws FieldNotFound
  { org.quickfix.field.ContAmtType value = new org.quickfix.field.ContAmtType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ContAmtType field)
  { return isSetField(field); }
  public boolean isSetContAmtType()
  { return isSetField(519); }
  public void set(org.quickfix.field.ContAmtValue value)
  { setField(value); }
  public org.quickfix.field.ContAmtValue get(org.quickfix.field.ContAmtValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ContAmtValue getContAmtValue() throws FieldNotFound
  { org.quickfix.field.ContAmtValue value = new org.quickfix.field.ContAmtValue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ContAmtValue field)
  { return isSetField(field); }
  public boolean isSetContAmtValue()
  { return isSetField(520); }
  public void set(org.quickfix.field.ContAmtCurr value)
  { setField(value); }
  public org.quickfix.field.ContAmtCurr get(org.quickfix.field.ContAmtCurr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ContAmtCurr getContAmtCurr() throws FieldNotFound
  { org.quickfix.field.ContAmtCurr value = new org.quickfix.field.ContAmtCurr();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ContAmtCurr field)
  { return isSetField(field); }
  public boolean isSetContAmtCurr()
  { return isSetField(521); }
}
  public void set(org.quickfix.field.NoMiscFees value)
  { setField(value); }
  public org.quickfix.field.NoMiscFees get(org.quickfix.field.NoMiscFees  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoMiscFees getNoMiscFees() throws FieldNotFound
  { org.quickfix.field.NoMiscFees value = new org.quickfix.field.NoMiscFees();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoMiscFees field)
  { return isSetField(field); }
  public boolean isSetNoMiscFees()
  { return isSetField(136); }
  public static class NoMiscFees extends Group {
    public NoMiscFees() {
      super(136,137,
      new int[] {137,138,139,0 } ); }
  public void set(org.quickfix.field.MiscFeeAmt value)
  { setField(value); }
  public org.quickfix.field.MiscFeeAmt get(org.quickfix.field.MiscFeeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MiscFeeAmt getMiscFeeAmt() throws FieldNotFound
  { org.quickfix.field.MiscFeeAmt value = new org.quickfix.field.MiscFeeAmt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MiscFeeAmt field)
  { return isSetField(field); }
  public boolean isSetMiscFeeAmt()
  { return isSetField(137); }
  public void set(org.quickfix.field.MiscFeeCurr value)
  { setField(value); }
  public org.quickfix.field.MiscFeeCurr get(org.quickfix.field.MiscFeeCurr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MiscFeeCurr getMiscFeeCurr() throws FieldNotFound
  { org.quickfix.field.MiscFeeCurr value = new org.quickfix.field.MiscFeeCurr();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MiscFeeCurr field)
  { return isSetField(field); }
  public boolean isSetMiscFeeCurr()
  { return isSetField(138); }
  public void set(org.quickfix.field.MiscFeeType value)
  { setField(value); }
  public org.quickfix.field.MiscFeeType get(org.quickfix.field.MiscFeeType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MiscFeeType getMiscFeeType() throws FieldNotFound
  { org.quickfix.field.MiscFeeType value = new org.quickfix.field.MiscFeeType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MiscFeeType field)
  { return isSetField(field); }
  public boolean isSetMiscFeeType()
  { return isSetField(139); }
}
}
}

