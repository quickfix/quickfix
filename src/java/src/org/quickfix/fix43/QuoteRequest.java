package org.quickfix.fix43;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class QuoteRequest extends Message
{
  public QuoteRequest()
  {
    getHeader().setField(new MsgType("R"));
  }
  public QuoteRequest(
    org.quickfix.field.QuoteReqID aQuoteReqID ) {

    getHeader().setField(new MsgType("R"));
    set(aQuoteReqID);
  }

  public void set(org.quickfix.field.QuoteReqID value)
  { setField(value); }
  public org.quickfix.field.QuoteReqID get(org.quickfix.field.QuoteReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QuoteReqID getQuoteReqID() throws FieldNotFound
  { org.quickfix.field.QuoteReqID value = new org.quickfix.field.QuoteReqID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QuoteReqID field)
  { return isSetField(field); }
  public boolean isSetQuoteReqID()
  { return isSetField(131); }
  public void set(org.quickfix.field.RFQReqID value)
  { setField(value); }
  public org.quickfix.field.RFQReqID get(org.quickfix.field.RFQReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RFQReqID getRFQReqID() throws FieldNotFound
  { org.quickfix.field.RFQReqID value = new org.quickfix.field.RFQReqID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RFQReqID field)
  { return isSetField(field); }
  public boolean isSetRFQReqID()
  { return isSetField(644); }
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
  public void set(org.quickfix.field.NoRelatedSym value)
  { setField(value); }
  public org.quickfix.field.NoRelatedSym get(org.quickfix.field.NoRelatedSym  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoRelatedSym getNoRelatedSym() throws FieldNotFound
  { org.quickfix.field.NoRelatedSym value = new org.quickfix.field.NoRelatedSym();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoRelatedSym field)
  { return isSetField(field); }
  public boolean isSetNoRelatedSym()
  { return isSetField(146); }
  public static class NoRelatedSym extends Group {
    public NoRelatedSym() {
      super(146,55,
      new int[] {55,65,48,22,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,140,303,537,336,625,229,54,465,38,152,63,64,40,193,192,126,60,15,218,220,221,222,423,44,640,235,236,0 } ); }
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
  public void set(org.quickfix.field.PrevClosePx value)
  { setField(value); }
  public org.quickfix.field.PrevClosePx get(org.quickfix.field.PrevClosePx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PrevClosePx getPrevClosePx() throws FieldNotFound
  { org.quickfix.field.PrevClosePx value = new org.quickfix.field.PrevClosePx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PrevClosePx field)
  { return isSetField(field); }
  public boolean isSetPrevClosePx()
  { return isSetField(140); }
  public void set(org.quickfix.field.QuoteRequestType value)
  { setField(value); }
  public org.quickfix.field.QuoteRequestType get(org.quickfix.field.QuoteRequestType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QuoteRequestType getQuoteRequestType() throws FieldNotFound
  { org.quickfix.field.QuoteRequestType value = new org.quickfix.field.QuoteRequestType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QuoteRequestType field)
  { return isSetField(field); }
  public boolean isSetQuoteRequestType()
  { return isSetField(303); }
  public void set(org.quickfix.field.QuoteType value)
  { setField(value); }
  public org.quickfix.field.QuoteType get(org.quickfix.field.QuoteType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QuoteType getQuoteType() throws FieldNotFound
  { org.quickfix.field.QuoteType value = new org.quickfix.field.QuoteType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QuoteType field)
  { return isSetField(field); }
  public boolean isSetQuoteType()
  { return isSetField(537); }
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
  public void set(org.quickfix.field.TradeOriginationDate value)
  { setField(value); }
  public org.quickfix.field.TradeOriginationDate get(org.quickfix.field.TradeOriginationDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeOriginationDate getTradeOriginationDate() throws FieldNotFound
  { org.quickfix.field.TradeOriginationDate value = new org.quickfix.field.TradeOriginationDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeOriginationDate field)
  { return isSetField(field); }
  public boolean isSetTradeOriginationDate()
  { return isSetField(229); }
  public void set(org.quickfix.field.NoStipulations value)
  { setField(value); }
  public org.quickfix.field.NoStipulations get(org.quickfix.field.NoStipulations  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoStipulations getNoStipulations() throws FieldNotFound
  { org.quickfix.field.NoStipulations value = new org.quickfix.field.NoStipulations();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoStipulations field)
  { return isSetField(field); }
  public boolean isSetNoStipulations()
  { return isSetField(232); }
  public static class NoStipulations extends Group {
    public NoStipulations() {
      super(232,233,
      new int[] {233,234,0 } ); }
  public void set(org.quickfix.field.StipulationType value)
  { setField(value); }
  public org.quickfix.field.StipulationType get(org.quickfix.field.StipulationType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StipulationType getStipulationType() throws FieldNotFound
  { org.quickfix.field.StipulationType value = new org.quickfix.field.StipulationType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StipulationType field)
  { return isSetField(field); }
  public boolean isSetStipulationType()
  { return isSetField(233); }
  public void set(org.quickfix.field.StipulationValue value)
  { setField(value); }
  public org.quickfix.field.StipulationValue get(org.quickfix.field.StipulationValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StipulationValue getStipulationValue() throws FieldNotFound
  { org.quickfix.field.StipulationValue value = new org.quickfix.field.StipulationValue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StipulationValue field)
  { return isSetField(field); }
  public boolean isSetStipulationValue()
  { return isSetField(234); }
}
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
  public void set(org.quickfix.field.QuantityType value)
  { setField(value); }
  public org.quickfix.field.QuantityType get(org.quickfix.field.QuantityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QuantityType getQuantityType() throws FieldNotFound
  { org.quickfix.field.QuantityType value = new org.quickfix.field.QuantityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QuantityType field)
  { return isSetField(field); }
  public boolean isSetQuantityType()
  { return isSetField(465); }
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
  public void set(org.quickfix.field.OrdType value)
  { setField(value); }
  public org.quickfix.field.OrdType get(org.quickfix.field.OrdType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrdType getOrdType() throws FieldNotFound
  { org.quickfix.field.OrdType value = new org.quickfix.field.OrdType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrdType field)
  { return isSetField(field); }
  public boolean isSetOrdType()
  { return isSetField(40); }
  public void set(org.quickfix.field.FutSettDate2 value)
  { setField(value); }
  public org.quickfix.field.FutSettDate2 get(org.quickfix.field.FutSettDate2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound
  { org.quickfix.field.FutSettDate2 value = new org.quickfix.field.FutSettDate2();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.FutSettDate2 field)
  { return isSetField(field); }
  public boolean isSetFutSettDate2()
  { return isSetField(193); }
  public void set(org.quickfix.field.OrderQty2 value)
  { setField(value); }
  public org.quickfix.field.OrderQty2 get(org.quickfix.field.OrderQty2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound
  { org.quickfix.field.OrderQty2 value = new org.quickfix.field.OrderQty2();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderQty2 field)
  { return isSetField(field); }
  public boolean isSetOrderQty2()
  { return isSetField(192); }
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
  public void set(org.quickfix.field.Spread value)
  { setField(value); }
  public org.quickfix.field.Spread get(org.quickfix.field.Spread  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Spread getSpread() throws FieldNotFound
  { org.quickfix.field.Spread value = new org.quickfix.field.Spread();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Spread field)
  { return isSetField(field); }
  public boolean isSetSpread()
  { return isSetField(218); }
  public void set(org.quickfix.field.BenchmarkCurveCurrency value)
  { setField(value); }
  public org.quickfix.field.BenchmarkCurveCurrency get(org.quickfix.field.BenchmarkCurveCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BenchmarkCurveCurrency getBenchmarkCurveCurrency() throws FieldNotFound
  { org.quickfix.field.BenchmarkCurveCurrency value = new org.quickfix.field.BenchmarkCurveCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BenchmarkCurveCurrency field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurveCurrency()
  { return isSetField(220); }
  public void set(org.quickfix.field.BenchmarkCurveName value)
  { setField(value); }
  public org.quickfix.field.BenchmarkCurveName get(org.quickfix.field.BenchmarkCurveName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BenchmarkCurveName getBenchmarkCurveName() throws FieldNotFound
  { org.quickfix.field.BenchmarkCurveName value = new org.quickfix.field.BenchmarkCurveName();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BenchmarkCurveName field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurveName()
  { return isSetField(221); }
  public void set(org.quickfix.field.BenchmarkCurvePoint value)
  { setField(value); }
  public org.quickfix.field.BenchmarkCurvePoint get(org.quickfix.field.BenchmarkCurvePoint  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BenchmarkCurvePoint getBenchmarkCurvePoint() throws FieldNotFound
  { org.quickfix.field.BenchmarkCurvePoint value = new org.quickfix.field.BenchmarkCurvePoint();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BenchmarkCurvePoint field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurvePoint()
  { return isSetField(222); }
  public void set(org.quickfix.field.PriceType value)
  { setField(value); }
  public org.quickfix.field.PriceType get(org.quickfix.field.PriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PriceType getPriceType() throws FieldNotFound
  { org.quickfix.field.PriceType value = new org.quickfix.field.PriceType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PriceType field)
  { return isSetField(field); }
  public boolean isSetPriceType()
  { return isSetField(423); }
  public void set(org.quickfix.field.Price value)
  { setField(value); }
  public org.quickfix.field.Price get(org.quickfix.field.Price  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Price getPrice() throws FieldNotFound
  { org.quickfix.field.Price value = new org.quickfix.field.Price();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Price field)
  { return isSetField(field); }
  public boolean isSetPrice()
  { return isSetField(44); }
  public void set(org.quickfix.field.Price2 value)
  { setField(value); }
  public org.quickfix.field.Price2 get(org.quickfix.field.Price2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Price2 getPrice2() throws FieldNotFound
  { org.quickfix.field.Price2 value = new org.quickfix.field.Price2();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Price2 field)
  { return isSetField(field); }
  public boolean isSetPrice2()
  { return isSetField(640); }
  public void set(org.quickfix.field.YieldType value)
  { setField(value); }
  public org.quickfix.field.YieldType get(org.quickfix.field.YieldType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.YieldType getYieldType() throws FieldNotFound
  { org.quickfix.field.YieldType value = new org.quickfix.field.YieldType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.YieldType field)
  { return isSetField(field); }
  public boolean isSetYieldType()
  { return isSetField(235); }
  public void set(org.quickfix.field.Yield value)
  { setField(value); }
  public org.quickfix.field.Yield get(org.quickfix.field.Yield  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Yield getYield() throws FieldNotFound
  { org.quickfix.field.Yield value = new org.quickfix.field.Yield();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Yield field)
  { return isSetField(field); }
  public boolean isSetYield()
  { return isSetField(236); }
}
}

