package org.quickfix.fix43;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class MarketDataIncrementalRefresh extends Message
{
  public MarketDataIncrementalRefresh()
  {
    getHeader().setField(new MsgType("X"));
  }

  public void set(org.quickfix.field.MDReqID value)
  { setField(value); }
  public org.quickfix.field.MDReqID get(org.quickfix.field.MDReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDReqID getMDReqID() throws FieldNotFound
  { org.quickfix.field.MDReqID value = new org.quickfix.field.MDReqID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDReqID field)
  { return isSetField(field); }
  public boolean isSetMDReqID()
  { return isSetField(262); }
  public void set(org.quickfix.field.NoMDEntries value)
  { setField(value); }
  public org.quickfix.field.NoMDEntries get(org.quickfix.field.NoMDEntries  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoMDEntries getNoMDEntries() throws FieldNotFound
  { org.quickfix.field.NoMDEntries value = new org.quickfix.field.NoMDEntries();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoMDEntries field)
  { return isSetField(field); }
  public boolean isSetNoMDEntries()
  { return isSetField(268); }
  public static class NoMDEntries extends Group {
    public NoMDEntries() {
      super(268,279,
      new int[] {279,285,269,278,280,55,65,48,22,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,291,292,270,15,271,272,273,274,275,336,625,276,277,282,283,284,286,59,432,126,110,18,287,37,299,288,289,346,290,546,387,449,450,451,58,354,355,0 } ); }
  public void set(org.quickfix.field.MDUpdateAction value)
  { setField(value); }
  public org.quickfix.field.MDUpdateAction get(org.quickfix.field.MDUpdateAction  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDUpdateAction getMDUpdateAction() throws FieldNotFound
  { org.quickfix.field.MDUpdateAction value = new org.quickfix.field.MDUpdateAction();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDUpdateAction field)
  { return isSetField(field); }
  public boolean isSetMDUpdateAction()
  { return isSetField(279); }
  public void set(org.quickfix.field.DeleteReason value)
  { setField(value); }
  public org.quickfix.field.DeleteReason get(org.quickfix.field.DeleteReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DeleteReason getDeleteReason() throws FieldNotFound
  { org.quickfix.field.DeleteReason value = new org.quickfix.field.DeleteReason();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DeleteReason field)
  { return isSetField(field); }
  public boolean isSetDeleteReason()
  { return isSetField(285); }
  public void set(org.quickfix.field.MDEntryType value)
  { setField(value); }
  public org.quickfix.field.MDEntryType get(org.quickfix.field.MDEntryType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDEntryType getMDEntryType() throws FieldNotFound
  { org.quickfix.field.MDEntryType value = new org.quickfix.field.MDEntryType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDEntryType field)
  { return isSetField(field); }
  public boolean isSetMDEntryType()
  { return isSetField(269); }
  public void set(org.quickfix.field.MDEntryID value)
  { setField(value); }
  public org.quickfix.field.MDEntryID get(org.quickfix.field.MDEntryID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDEntryID getMDEntryID() throws FieldNotFound
  { org.quickfix.field.MDEntryID value = new org.quickfix.field.MDEntryID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDEntryID field)
  { return isSetField(field); }
  public boolean isSetMDEntryID()
  { return isSetField(278); }
  public void set(org.quickfix.field.MDEntryRefID value)
  { setField(value); }
  public org.quickfix.field.MDEntryRefID get(org.quickfix.field.MDEntryRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDEntryRefID getMDEntryRefID() throws FieldNotFound
  { org.quickfix.field.MDEntryRefID value = new org.quickfix.field.MDEntryRefID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDEntryRefID field)
  { return isSetField(field); }
  public boolean isSetMDEntryRefID()
  { return isSetField(280); }
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
  public void set(org.quickfix.field.FinancialStatus value)
  { setField(value); }
  public org.quickfix.field.FinancialStatus get(org.quickfix.field.FinancialStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.FinancialStatus getFinancialStatus() throws FieldNotFound
  { org.quickfix.field.FinancialStatus value = new org.quickfix.field.FinancialStatus();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.FinancialStatus field)
  { return isSetField(field); }
  public boolean isSetFinancialStatus()
  { return isSetField(291); }
  public void set(org.quickfix.field.CorporateAction value)
  { setField(value); }
  public org.quickfix.field.CorporateAction get(org.quickfix.field.CorporateAction  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CorporateAction getCorporateAction() throws FieldNotFound
  { org.quickfix.field.CorporateAction value = new org.quickfix.field.CorporateAction();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CorporateAction field)
  { return isSetField(field); }
  public boolean isSetCorporateAction()
  { return isSetField(292); }
  public void set(org.quickfix.field.MDEntryPx value)
  { setField(value); }
  public org.quickfix.field.MDEntryPx get(org.quickfix.field.MDEntryPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDEntryPx getMDEntryPx() throws FieldNotFound
  { org.quickfix.field.MDEntryPx value = new org.quickfix.field.MDEntryPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDEntryPx field)
  { return isSetField(field); }
  public boolean isSetMDEntryPx()
  { return isSetField(270); }
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
  public void set(org.quickfix.field.MDEntrySize value)
  { setField(value); }
  public org.quickfix.field.MDEntrySize get(org.quickfix.field.MDEntrySize  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDEntrySize getMDEntrySize() throws FieldNotFound
  { org.quickfix.field.MDEntrySize value = new org.quickfix.field.MDEntrySize();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDEntrySize field)
  { return isSetField(field); }
  public boolean isSetMDEntrySize()
  { return isSetField(271); }
  public void set(org.quickfix.field.MDEntryDate value)
  { setField(value); }
  public org.quickfix.field.MDEntryDate get(org.quickfix.field.MDEntryDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDEntryDate getMDEntryDate() throws FieldNotFound
  { org.quickfix.field.MDEntryDate value = new org.quickfix.field.MDEntryDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDEntryDate field)
  { return isSetField(field); }
  public boolean isSetMDEntryDate()
  { return isSetField(272); }
  public void set(org.quickfix.field.MDEntryTime value)
  { setField(value); }
  public org.quickfix.field.MDEntryTime get(org.quickfix.field.MDEntryTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDEntryTime getMDEntryTime() throws FieldNotFound
  { org.quickfix.field.MDEntryTime value = new org.quickfix.field.MDEntryTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDEntryTime field)
  { return isSetField(field); }
  public boolean isSetMDEntryTime()
  { return isSetField(273); }
  public void set(org.quickfix.field.TickDirection value)
  { setField(value); }
  public org.quickfix.field.TickDirection get(org.quickfix.field.TickDirection  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TickDirection getTickDirection() throws FieldNotFound
  { org.quickfix.field.TickDirection value = new org.quickfix.field.TickDirection();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TickDirection field)
  { return isSetField(field); }
  public boolean isSetTickDirection()
  { return isSetField(274); }
  public void set(org.quickfix.field.MDMkt value)
  { setField(value); }
  public org.quickfix.field.MDMkt get(org.quickfix.field.MDMkt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDMkt getMDMkt() throws FieldNotFound
  { org.quickfix.field.MDMkt value = new org.quickfix.field.MDMkt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDMkt field)
  { return isSetField(field); }
  public boolean isSetMDMkt()
  { return isSetField(275); }
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
  public void set(org.quickfix.field.QuoteCondition value)
  { setField(value); }
  public org.quickfix.field.QuoteCondition get(org.quickfix.field.QuoteCondition  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QuoteCondition getQuoteCondition() throws FieldNotFound
  { org.quickfix.field.QuoteCondition value = new org.quickfix.field.QuoteCondition();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QuoteCondition field)
  { return isSetField(field); }
  public boolean isSetQuoteCondition()
  { return isSetField(276); }
  public void set(org.quickfix.field.TradeCondition value)
  { setField(value); }
  public org.quickfix.field.TradeCondition get(org.quickfix.field.TradeCondition  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeCondition getTradeCondition() throws FieldNotFound
  { org.quickfix.field.TradeCondition value = new org.quickfix.field.TradeCondition();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeCondition field)
  { return isSetField(field); }
  public boolean isSetTradeCondition()
  { return isSetField(277); }
  public void set(org.quickfix.field.MDEntryOriginator value)
  { setField(value); }
  public org.quickfix.field.MDEntryOriginator get(org.quickfix.field.MDEntryOriginator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDEntryOriginator getMDEntryOriginator() throws FieldNotFound
  { org.quickfix.field.MDEntryOriginator value = new org.quickfix.field.MDEntryOriginator();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDEntryOriginator field)
  { return isSetField(field); }
  public boolean isSetMDEntryOriginator()
  { return isSetField(282); }
  public void set(org.quickfix.field.LocationID value)
  { setField(value); }
  public org.quickfix.field.LocationID get(org.quickfix.field.LocationID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LocationID getLocationID() throws FieldNotFound
  { org.quickfix.field.LocationID value = new org.quickfix.field.LocationID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LocationID field)
  { return isSetField(field); }
  public boolean isSetLocationID()
  { return isSetField(283); }
  public void set(org.quickfix.field.DeskID value)
  { setField(value); }
  public org.quickfix.field.DeskID get(org.quickfix.field.DeskID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DeskID getDeskID() throws FieldNotFound
  { org.quickfix.field.DeskID value = new org.quickfix.field.DeskID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DeskID field)
  { return isSetField(field); }
  public boolean isSetDeskID()
  { return isSetField(284); }
  public void set(org.quickfix.field.OpenCloseSettleFlag value)
  { setField(value); }
  public org.quickfix.field.OpenCloseSettleFlag get(org.quickfix.field.OpenCloseSettleFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OpenCloseSettleFlag getOpenCloseSettleFlag() throws FieldNotFound
  { org.quickfix.field.OpenCloseSettleFlag value = new org.quickfix.field.OpenCloseSettleFlag();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OpenCloseSettleFlag field)
  { return isSetField(field); }
  public boolean isSetOpenCloseSettleFlag()
  { return isSetField(286); }
  public void set(org.quickfix.field.TimeInForce value)
  { setField(value); }
  public org.quickfix.field.TimeInForce get(org.quickfix.field.TimeInForce  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TimeInForce getTimeInForce() throws FieldNotFound
  { org.quickfix.field.TimeInForce value = new org.quickfix.field.TimeInForce();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TimeInForce field)
  { return isSetField(field); }
  public boolean isSetTimeInForce()
  { return isSetField(59); }
  public void set(org.quickfix.field.ExpireDate value)
  { setField(value); }
  public org.quickfix.field.ExpireDate get(org.quickfix.field.ExpireDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExpireDate getExpireDate() throws FieldNotFound
  { org.quickfix.field.ExpireDate value = new org.quickfix.field.ExpireDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExpireDate field)
  { return isSetField(field); }
  public boolean isSetExpireDate()
  { return isSetField(432); }
  public void set(org.quickfix.field.ExpireTime value)
  { setField(value); }
  public org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExpireTime getExpireTime() throws FieldNotFound
  { org.quickfix.field.ExpireTime value = new org.quickfix.field.ExpireTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExpireTime field)
  { return isSetField(field); }
  public boolean isSetExpireTime()
  { return isSetField(126); }
  public void set(org.quickfix.field.MinQty value)
  { setField(value); }
  public org.quickfix.field.MinQty get(org.quickfix.field.MinQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MinQty getMinQty() throws FieldNotFound
  { org.quickfix.field.MinQty value = new org.quickfix.field.MinQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MinQty field)
  { return isSetField(field); }
  public boolean isSetMinQty()
  { return isSetField(110); }
  public void set(org.quickfix.field.ExecInst value)
  { setField(value); }
  public org.quickfix.field.ExecInst get(org.quickfix.field.ExecInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecInst getExecInst() throws FieldNotFound
  { org.quickfix.field.ExecInst value = new org.quickfix.field.ExecInst();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecInst field)
  { return isSetField(field); }
  public boolean isSetExecInst()
  { return isSetField(18); }
  public void set(org.quickfix.field.SellerDays value)
  { setField(value); }
  public org.quickfix.field.SellerDays get(org.quickfix.field.SellerDays  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SellerDays getSellerDays() throws FieldNotFound
  { org.quickfix.field.SellerDays value = new org.quickfix.field.SellerDays();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SellerDays field)
  { return isSetField(field); }
  public boolean isSetSellerDays()
  { return isSetField(287); }
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
  public void set(org.quickfix.field.QuoteEntryID value)
  { setField(value); }
  public org.quickfix.field.QuoteEntryID get(org.quickfix.field.QuoteEntryID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QuoteEntryID getQuoteEntryID() throws FieldNotFound
  { org.quickfix.field.QuoteEntryID value = new org.quickfix.field.QuoteEntryID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QuoteEntryID field)
  { return isSetField(field); }
  public boolean isSetQuoteEntryID()
  { return isSetField(299); }
  public void set(org.quickfix.field.MDEntryBuyer value)
  { setField(value); }
  public org.quickfix.field.MDEntryBuyer get(org.quickfix.field.MDEntryBuyer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDEntryBuyer getMDEntryBuyer() throws FieldNotFound
  { org.quickfix.field.MDEntryBuyer value = new org.quickfix.field.MDEntryBuyer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDEntryBuyer field)
  { return isSetField(field); }
  public boolean isSetMDEntryBuyer()
  { return isSetField(288); }
  public void set(org.quickfix.field.MDEntrySeller value)
  { setField(value); }
  public org.quickfix.field.MDEntrySeller get(org.quickfix.field.MDEntrySeller  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDEntrySeller getMDEntrySeller() throws FieldNotFound
  { org.quickfix.field.MDEntrySeller value = new org.quickfix.field.MDEntrySeller();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDEntrySeller field)
  { return isSetField(field); }
  public boolean isSetMDEntrySeller()
  { return isSetField(289); }
  public void set(org.quickfix.field.NumberOfOrders value)
  { setField(value); }
  public org.quickfix.field.NumberOfOrders get(org.quickfix.field.NumberOfOrders  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NumberOfOrders getNumberOfOrders() throws FieldNotFound
  { org.quickfix.field.NumberOfOrders value = new org.quickfix.field.NumberOfOrders();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NumberOfOrders field)
  { return isSetField(field); }
  public boolean isSetNumberOfOrders()
  { return isSetField(346); }
  public void set(org.quickfix.field.MDEntryPositionNo value)
  { setField(value); }
  public org.quickfix.field.MDEntryPositionNo get(org.quickfix.field.MDEntryPositionNo  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MDEntryPositionNo getMDEntryPositionNo() throws FieldNotFound
  { org.quickfix.field.MDEntryPositionNo value = new org.quickfix.field.MDEntryPositionNo();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MDEntryPositionNo field)
  { return isSetField(field); }
  public boolean isSetMDEntryPositionNo()
  { return isSetField(290); }
  public void set(org.quickfix.field.Scope value)
  { setField(value); }
  public org.quickfix.field.Scope get(org.quickfix.field.Scope  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Scope getScope() throws FieldNotFound
  { org.quickfix.field.Scope value = new org.quickfix.field.Scope();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Scope field)
  { return isSetField(field); }
  public boolean isSetScope()
  { return isSetField(546); }
  public void set(org.quickfix.field.TotalVolumeTraded value)
  { setField(value); }
  public org.quickfix.field.TotalVolumeTraded get(org.quickfix.field.TotalVolumeTraded  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TotalVolumeTraded getTotalVolumeTraded() throws FieldNotFound
  { org.quickfix.field.TotalVolumeTraded value = new org.quickfix.field.TotalVolumeTraded();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TotalVolumeTraded field)
  { return isSetField(field); }
  public boolean isSetTotalVolumeTraded()
  { return isSetField(387); }
  public void set(org.quickfix.field.TotalVolumeTradedDate value)
  { setField(value); }
  public org.quickfix.field.TotalVolumeTradedDate get(org.quickfix.field.TotalVolumeTradedDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TotalVolumeTradedDate getTotalVolumeTradedDate() throws FieldNotFound
  { org.quickfix.field.TotalVolumeTradedDate value = new org.quickfix.field.TotalVolumeTradedDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TotalVolumeTradedDate field)
  { return isSetField(field); }
  public boolean isSetTotalVolumeTradedDate()
  { return isSetField(449); }
  public void set(org.quickfix.field.TotalVolumeTradedTime value)
  { setField(value); }
  public org.quickfix.field.TotalVolumeTradedTime get(org.quickfix.field.TotalVolumeTradedTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TotalVolumeTradedTime getTotalVolumeTradedTime() throws FieldNotFound
  { org.quickfix.field.TotalVolumeTradedTime value = new org.quickfix.field.TotalVolumeTradedTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TotalVolumeTradedTime field)
  { return isSetField(field); }
  public boolean isSetTotalVolumeTradedTime()
  { return isSetField(450); }
  public void set(org.quickfix.field.NetChgPrevDay value)
  { setField(value); }
  public org.quickfix.field.NetChgPrevDay get(org.quickfix.field.NetChgPrevDay  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NetChgPrevDay getNetChgPrevDay() throws FieldNotFound
  { org.quickfix.field.NetChgPrevDay value = new org.quickfix.field.NetChgPrevDay();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NetChgPrevDay field)
  { return isSetField(field); }
  public boolean isSetNetChgPrevDay()
  { return isSetField(451); }
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
}
}

