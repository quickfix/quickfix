package quickfix.fix43;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class QuoteStatusReport extends Message
{
  public QuoteStatusReport()
  {
    getHeader().setField(new MsgType("AI"));
  }
  public QuoteStatusReport(
    quickfix.field.QuoteID aQuoteID ) {

    getHeader().setField(new MsgType("AI"));
    set(aQuoteID);
  }

  public void set(quickfix.field.QuoteStatusReqID value)
  { setField(value); }
  public quickfix.field.QuoteStatusReqID get(quickfix.field.QuoteStatusReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuoteStatusReqID getQuoteStatusReqID() throws FieldNotFound
  { quickfix.field.QuoteStatusReqID value = new quickfix.field.QuoteStatusReqID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuoteStatusReqID field)
  { return isSetField(field); }
  public boolean isSetQuoteStatusReqID()
  { return isSetField(649); }
  public void set(quickfix.field.QuoteReqID value)
  { setField(value); }
  public quickfix.field.QuoteReqID get(quickfix.field.QuoteReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuoteReqID getQuoteReqID() throws FieldNotFound
  { quickfix.field.QuoteReqID value = new quickfix.field.QuoteReqID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuoteReqID field)
  { return isSetField(field); }
  public boolean isSetQuoteReqID()
  { return isSetField(131); }
  public void set(quickfix.field.QuoteID value)
  { setField(value); }
  public quickfix.field.QuoteID get(quickfix.field.QuoteID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuoteID getQuoteID() throws FieldNotFound
  { quickfix.field.QuoteID value = new quickfix.field.QuoteID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuoteID field)
  { return isSetField(field); }
  public boolean isSetQuoteID()
  { return isSetField(117); }
  public void set(quickfix.field.QuoteType value)
  { setField(value); }
  public quickfix.field.QuoteType get(quickfix.field.QuoteType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuoteType getQuoteType() throws FieldNotFound
  { quickfix.field.QuoteType value = new quickfix.field.QuoteType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuoteType field)
  { return isSetField(field); }
  public boolean isSetQuoteType()
  { return isSetField(537); }
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
      new int[] {448,447,452,523,0 } ); }
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
  public void set(quickfix.field.NoSecurityAltID value)
  { setField(value); }
  public quickfix.field.NoSecurityAltID get(quickfix.field.NoSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoSecurityAltID getNoSecurityAltID() throws FieldNotFound
  { quickfix.field.NoSecurityAltID value = new quickfix.field.NoSecurityAltID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetNoSecurityAltID()
  { return isSetField(454); }
  public static class NoSecurityAltID extends Group {
    public NoSecurityAltID() {
      super(454,455,
      new int[] {455,456,0 } ); }
  public void set(quickfix.field.SecurityAltID value)
  { setField(value); }
  public quickfix.field.SecurityAltID get(quickfix.field.SecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityAltID getSecurityAltID() throws FieldNotFound
  { quickfix.field.SecurityAltID value = new quickfix.field.SecurityAltID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityAltID field)
  { return isSetField(field); }
  public boolean isSetSecurityAltID()
  { return isSetField(455); }
  public void set(quickfix.field.SecurityAltIDSource value)
  { setField(value); }
  public quickfix.field.SecurityAltIDSource get(quickfix.field.SecurityAltIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityAltIDSource getSecurityAltIDSource() throws FieldNotFound
  { quickfix.field.SecurityAltIDSource value = new quickfix.field.SecurityAltIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityAltIDSource field)
  { return isSetField(field); }
  public boolean isSetSecurityAltIDSource()
  { return isSetField(456); }
}
  public void set(quickfix.field.BidPx value)
  { setField(value); }
  public quickfix.field.BidPx get(quickfix.field.BidPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidPx getBidPx() throws FieldNotFound
  { quickfix.field.BidPx value = new quickfix.field.BidPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidPx field)
  { return isSetField(field); }
  public boolean isSetBidPx()
  { return isSetField(132); }
  public void set(quickfix.field.OfferPx value)
  { setField(value); }
  public quickfix.field.OfferPx get(quickfix.field.OfferPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OfferPx getOfferPx() throws FieldNotFound
  { quickfix.field.OfferPx value = new quickfix.field.OfferPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OfferPx field)
  { return isSetField(field); }
  public boolean isSetOfferPx()
  { return isSetField(133); }
  public void set(quickfix.field.MktBidPx value)
  { setField(value); }
  public quickfix.field.MktBidPx get(quickfix.field.MktBidPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MktBidPx getMktBidPx() throws FieldNotFound
  { quickfix.field.MktBidPx value = new quickfix.field.MktBidPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MktBidPx field)
  { return isSetField(field); }
  public boolean isSetMktBidPx()
  { return isSetField(645); }
  public void set(quickfix.field.MktOfferPx value)
  { setField(value); }
  public quickfix.field.MktOfferPx get(quickfix.field.MktOfferPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MktOfferPx getMktOfferPx() throws FieldNotFound
  { quickfix.field.MktOfferPx value = new quickfix.field.MktOfferPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MktOfferPx field)
  { return isSetField(field); }
  public boolean isSetMktOfferPx()
  { return isSetField(646); }
  public void set(quickfix.field.MinBidSize value)
  { setField(value); }
  public quickfix.field.MinBidSize get(quickfix.field.MinBidSize  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MinBidSize getMinBidSize() throws FieldNotFound
  { quickfix.field.MinBidSize value = new quickfix.field.MinBidSize();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MinBidSize field)
  { return isSetField(field); }
  public boolean isSetMinBidSize()
  { return isSetField(647); }
  public void set(quickfix.field.BidSize value)
  { setField(value); }
  public quickfix.field.BidSize get(quickfix.field.BidSize  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidSize getBidSize() throws FieldNotFound
  { quickfix.field.BidSize value = new quickfix.field.BidSize();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidSize field)
  { return isSetField(field); }
  public boolean isSetBidSize()
  { return isSetField(134); }
  public void set(quickfix.field.MinOfferSize value)
  { setField(value); }
  public quickfix.field.MinOfferSize get(quickfix.field.MinOfferSize  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MinOfferSize getMinOfferSize() throws FieldNotFound
  { quickfix.field.MinOfferSize value = new quickfix.field.MinOfferSize();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MinOfferSize field)
  { return isSetField(field); }
  public boolean isSetMinOfferSize()
  { return isSetField(648); }
  public void set(quickfix.field.OfferSize value)
  { setField(value); }
  public quickfix.field.OfferSize get(quickfix.field.OfferSize  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OfferSize getOfferSize() throws FieldNotFound
  { quickfix.field.OfferSize value = new quickfix.field.OfferSize();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OfferSize field)
  { return isSetField(field); }
  public boolean isSetOfferSize()
  { return isSetField(135); }
  public void set(quickfix.field.ValidUntilTime value)
  { setField(value); }
  public quickfix.field.ValidUntilTime get(quickfix.field.ValidUntilTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ValidUntilTime getValidUntilTime() throws FieldNotFound
  { quickfix.field.ValidUntilTime value = new quickfix.field.ValidUntilTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ValidUntilTime field)
  { return isSetField(field); }
  public boolean isSetValidUntilTime()
  { return isSetField(62); }
  public void set(quickfix.field.BidSpotRate value)
  { setField(value); }
  public quickfix.field.BidSpotRate get(quickfix.field.BidSpotRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidSpotRate getBidSpotRate() throws FieldNotFound
  { quickfix.field.BidSpotRate value = new quickfix.field.BidSpotRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidSpotRate field)
  { return isSetField(field); }
  public boolean isSetBidSpotRate()
  { return isSetField(188); }
  public void set(quickfix.field.OfferSpotRate value)
  { setField(value); }
  public quickfix.field.OfferSpotRate get(quickfix.field.OfferSpotRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OfferSpotRate getOfferSpotRate() throws FieldNotFound
  { quickfix.field.OfferSpotRate value = new quickfix.field.OfferSpotRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OfferSpotRate field)
  { return isSetField(field); }
  public boolean isSetOfferSpotRate()
  { return isSetField(190); }
  public void set(quickfix.field.BidForwardPoints value)
  { setField(value); }
  public quickfix.field.BidForwardPoints get(quickfix.field.BidForwardPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidForwardPoints getBidForwardPoints() throws FieldNotFound
  { quickfix.field.BidForwardPoints value = new quickfix.field.BidForwardPoints();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidForwardPoints field)
  { return isSetField(field); }
  public boolean isSetBidForwardPoints()
  { return isSetField(189); }
  public void set(quickfix.field.OfferForwardPoints value)
  { setField(value); }
  public quickfix.field.OfferForwardPoints get(quickfix.field.OfferForwardPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OfferForwardPoints getOfferForwardPoints() throws FieldNotFound
  { quickfix.field.OfferForwardPoints value = new quickfix.field.OfferForwardPoints();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OfferForwardPoints field)
  { return isSetField(field); }
  public boolean isSetOfferForwardPoints()
  { return isSetField(191); }
  public void set(quickfix.field.MidPx value)
  { setField(value); }
  public quickfix.field.MidPx get(quickfix.field.MidPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MidPx getMidPx() throws FieldNotFound
  { quickfix.field.MidPx value = new quickfix.field.MidPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MidPx field)
  { return isSetField(field); }
  public boolean isSetMidPx()
  { return isSetField(631); }
  public void set(quickfix.field.BidYield value)
  { setField(value); }
  public quickfix.field.BidYield get(quickfix.field.BidYield  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidYield getBidYield() throws FieldNotFound
  { quickfix.field.BidYield value = new quickfix.field.BidYield();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidYield field)
  { return isSetField(field); }
  public boolean isSetBidYield()
  { return isSetField(632); }
  public void set(quickfix.field.MidYield value)
  { setField(value); }
  public quickfix.field.MidYield get(quickfix.field.MidYield  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MidYield getMidYield() throws FieldNotFound
  { quickfix.field.MidYield value = new quickfix.field.MidYield();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MidYield field)
  { return isSetField(field); }
  public boolean isSetMidYield()
  { return isSetField(633); }
  public void set(quickfix.field.OfferYield value)
  { setField(value); }
  public quickfix.field.OfferYield get(quickfix.field.OfferYield  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OfferYield getOfferYield() throws FieldNotFound
  { quickfix.field.OfferYield value = new quickfix.field.OfferYield();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OfferYield field)
  { return isSetField(field); }
  public boolean isSetOfferYield()
  { return isSetField(634); }
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
  public void set(quickfix.field.FutSettDate value)
  { setField(value); }
  public quickfix.field.FutSettDate get(quickfix.field.FutSettDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound
  { quickfix.field.FutSettDate value = new quickfix.field.FutSettDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FutSettDate field)
  { return isSetField(field); }
  public boolean isSetFutSettDate()
  { return isSetField(64); }
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
  public void set(quickfix.field.FutSettDate2 value)
  { setField(value); }
  public quickfix.field.FutSettDate2 get(quickfix.field.FutSettDate2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound
  { quickfix.field.FutSettDate2 value = new quickfix.field.FutSettDate2();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FutSettDate2 field)
  { return isSetField(field); }
  public boolean isSetFutSettDate2()
  { return isSetField(193); }
  public void set(quickfix.field.OrderQty2 value)
  { setField(value); }
  public quickfix.field.OrderQty2 get(quickfix.field.OrderQty2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound
  { quickfix.field.OrderQty2 value = new quickfix.field.OrderQty2();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderQty2 field)
  { return isSetField(field); }
  public boolean isSetOrderQty2()
  { return isSetField(192); }
  public void set(quickfix.field.BidForwardPoints2 value)
  { setField(value); }
  public quickfix.field.BidForwardPoints2 get(quickfix.field.BidForwardPoints2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidForwardPoints2 getBidForwardPoints2() throws FieldNotFound
  { quickfix.field.BidForwardPoints2 value = new quickfix.field.BidForwardPoints2();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidForwardPoints2 field)
  { return isSetField(field); }
  public boolean isSetBidForwardPoints2()
  { return isSetField(642); }
  public void set(quickfix.field.OfferForwardPoints2 value)
  { setField(value); }
  public quickfix.field.OfferForwardPoints2 get(quickfix.field.OfferForwardPoints2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OfferForwardPoints2 getOfferForwardPoints2() throws FieldNotFound
  { quickfix.field.OfferForwardPoints2 value = new quickfix.field.OfferForwardPoints2();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OfferForwardPoints2 field)
  { return isSetField(field); }
  public boolean isSetOfferForwardPoints2()
  { return isSetField(643); }
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
  public void set(quickfix.field.SettlCurrBidFxRate value)
  { setField(value); }
  public quickfix.field.SettlCurrBidFxRate get(quickfix.field.SettlCurrBidFxRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrBidFxRate getSettlCurrBidFxRate() throws FieldNotFound
  { quickfix.field.SettlCurrBidFxRate value = new quickfix.field.SettlCurrBidFxRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrBidFxRate field)
  { return isSetField(field); }
  public boolean isSetSettlCurrBidFxRate()
  { return isSetField(656); }
  public void set(quickfix.field.SettlCurrOfferFxRate value)
  { setField(value); }
  public quickfix.field.SettlCurrOfferFxRate get(quickfix.field.SettlCurrOfferFxRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrOfferFxRate getSettlCurrOfferFxRate() throws FieldNotFound
  { quickfix.field.SettlCurrOfferFxRate value = new quickfix.field.SettlCurrOfferFxRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrOfferFxRate field)
  { return isSetField(field); }
  public boolean isSetSettlCurrOfferFxRate()
  { return isSetField(657); }
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
  public void set(quickfix.field.ExDestination value)
  { setField(value); }
  public quickfix.field.ExDestination get(quickfix.field.ExDestination  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExDestination getExDestination() throws FieldNotFound
  { quickfix.field.ExDestination value = new quickfix.field.ExDestination();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExDestination field)
  { return isSetField(field); }
  public boolean isSetExDestination()
  { return isSetField(100); }
  public void set(quickfix.field.QuoteStatus value)
  { setField(value); }
  public quickfix.field.QuoteStatus get(quickfix.field.QuoteStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuoteStatus getQuoteStatus() throws FieldNotFound
  { quickfix.field.QuoteStatus value = new quickfix.field.QuoteStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuoteStatus field)
  { return isSetField(field); }
  public boolean isSetQuoteStatus()
  { return isSetField(297); }
}

