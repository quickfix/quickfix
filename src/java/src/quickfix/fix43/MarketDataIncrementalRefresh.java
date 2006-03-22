package quickfix.fix43;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class MarketDataIncrementalRefresh extends Message
{
  public MarketDataIncrementalRefresh()
  {
    getHeader().setField(new MsgType("X"));
  }

  public void set(quickfix.field.MDReqID value)
  { setField(value); }
  public quickfix.field.MDReqID get(quickfix.field.MDReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDReqID getMDReqID() throws FieldNotFound
  { quickfix.field.MDReqID value = new quickfix.field.MDReqID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDReqID field)
  { return isSetField(field); }
  public boolean isSetMDReqID()
  { return isSetField(262); }
  public void set(quickfix.field.NoMDEntries value)
  { setField(value); }
  public quickfix.field.NoMDEntries get(quickfix.field.NoMDEntries  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoMDEntries getNoMDEntries() throws FieldNotFound
  { quickfix.field.NoMDEntries value = new quickfix.field.NoMDEntries();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoMDEntries field)
  { return isSetField(field); }
  public boolean isSetNoMDEntries()
  { return isSetField(268); }
  public static class NoMDEntries extends Group {
    public NoMDEntries() {
      super(268,279,
      new int[] {279,285,269,278,280,55,65,48,22,454,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,291,292,270,15,271,272,273,274,275,336,625,276,277,282,283,284,286,59,432,126,110,18,287,37,299,288,289,346,290,546,387,449,450,451,58,354,355,0 } ); }
  public void set(quickfix.field.MDUpdateAction value)
  { setField(value); }
  public quickfix.field.MDUpdateAction get(quickfix.field.MDUpdateAction  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDUpdateAction getMDUpdateAction() throws FieldNotFound
  { quickfix.field.MDUpdateAction value = new quickfix.field.MDUpdateAction();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDUpdateAction field)
  { return isSetField(field); }
  public boolean isSetMDUpdateAction()
  { return isSetField(279); }
  public void set(quickfix.field.DeleteReason value)
  { setField(value); }
  public quickfix.field.DeleteReason get(quickfix.field.DeleteReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DeleteReason getDeleteReason() throws FieldNotFound
  { quickfix.field.DeleteReason value = new quickfix.field.DeleteReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DeleteReason field)
  { return isSetField(field); }
  public boolean isSetDeleteReason()
  { return isSetField(285); }
  public void set(quickfix.field.MDEntryType value)
  { setField(value); }
  public quickfix.field.MDEntryType get(quickfix.field.MDEntryType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDEntryType getMDEntryType() throws FieldNotFound
  { quickfix.field.MDEntryType value = new quickfix.field.MDEntryType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDEntryType field)
  { return isSetField(field); }
  public boolean isSetMDEntryType()
  { return isSetField(269); }
  public void set(quickfix.field.MDEntryID value)
  { setField(value); }
  public quickfix.field.MDEntryID get(quickfix.field.MDEntryID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDEntryID getMDEntryID() throws FieldNotFound
  { quickfix.field.MDEntryID value = new quickfix.field.MDEntryID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDEntryID field)
  { return isSetField(field); }
  public boolean isSetMDEntryID()
  { return isSetField(278); }
  public void set(quickfix.field.MDEntryRefID value)
  { setField(value); }
  public quickfix.field.MDEntryRefID get(quickfix.field.MDEntryRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDEntryRefID getMDEntryRefID() throws FieldNotFound
  { quickfix.field.MDEntryRefID value = new quickfix.field.MDEntryRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDEntryRefID field)
  { return isSetField(field); }
  public boolean isSetMDEntryRefID()
  { return isSetField(280); }
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
  public void set(quickfix.field.FinancialStatus value)
  { setField(value); }
  public quickfix.field.FinancialStatus get(quickfix.field.FinancialStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FinancialStatus getFinancialStatus() throws FieldNotFound
  { quickfix.field.FinancialStatus value = new quickfix.field.FinancialStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FinancialStatus field)
  { return isSetField(field); }
  public boolean isSetFinancialStatus()
  { return isSetField(291); }
  public void set(quickfix.field.CorporateAction value)
  { setField(value); }
  public quickfix.field.CorporateAction get(quickfix.field.CorporateAction  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CorporateAction getCorporateAction() throws FieldNotFound
  { quickfix.field.CorporateAction value = new quickfix.field.CorporateAction();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CorporateAction field)
  { return isSetField(field); }
  public boolean isSetCorporateAction()
  { return isSetField(292); }
  public void set(quickfix.field.MDEntryPx value)
  { setField(value); }
  public quickfix.field.MDEntryPx get(quickfix.field.MDEntryPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDEntryPx getMDEntryPx() throws FieldNotFound
  { quickfix.field.MDEntryPx value = new quickfix.field.MDEntryPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDEntryPx field)
  { return isSetField(field); }
  public boolean isSetMDEntryPx()
  { return isSetField(270); }
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
  public void set(quickfix.field.MDEntrySize value)
  { setField(value); }
  public quickfix.field.MDEntrySize get(quickfix.field.MDEntrySize  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDEntrySize getMDEntrySize() throws FieldNotFound
  { quickfix.field.MDEntrySize value = new quickfix.field.MDEntrySize();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDEntrySize field)
  { return isSetField(field); }
  public boolean isSetMDEntrySize()
  { return isSetField(271); }
  public void set(quickfix.field.MDEntryDate value)
  { setField(value); }
  public quickfix.field.MDEntryDate get(quickfix.field.MDEntryDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDEntryDate getMDEntryDate() throws FieldNotFound
  { quickfix.field.MDEntryDate value = new quickfix.field.MDEntryDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDEntryDate field)
  { return isSetField(field); }
  public boolean isSetMDEntryDate()
  { return isSetField(272); }
  public void set(quickfix.field.MDEntryTime value)
  { setField(value); }
  public quickfix.field.MDEntryTime get(quickfix.field.MDEntryTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDEntryTime getMDEntryTime() throws FieldNotFound
  { quickfix.field.MDEntryTime value = new quickfix.field.MDEntryTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDEntryTime field)
  { return isSetField(field); }
  public boolean isSetMDEntryTime()
  { return isSetField(273); }
  public void set(quickfix.field.TickDirection value)
  { setField(value); }
  public quickfix.field.TickDirection get(quickfix.field.TickDirection  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TickDirection getTickDirection() throws FieldNotFound
  { quickfix.field.TickDirection value = new quickfix.field.TickDirection();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TickDirection field)
  { return isSetField(field); }
  public boolean isSetTickDirection()
  { return isSetField(274); }
  public void set(quickfix.field.MDMkt value)
  { setField(value); }
  public quickfix.field.MDMkt get(quickfix.field.MDMkt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDMkt getMDMkt() throws FieldNotFound
  { quickfix.field.MDMkt value = new quickfix.field.MDMkt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDMkt field)
  { return isSetField(field); }
  public boolean isSetMDMkt()
  { return isSetField(275); }
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
  public void set(quickfix.field.QuoteCondition value)
  { setField(value); }
  public quickfix.field.QuoteCondition get(quickfix.field.QuoteCondition  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuoteCondition getQuoteCondition() throws FieldNotFound
  { quickfix.field.QuoteCondition value = new quickfix.field.QuoteCondition();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuoteCondition field)
  { return isSetField(field); }
  public boolean isSetQuoteCondition()
  { return isSetField(276); }
  public void set(quickfix.field.TradeCondition value)
  { setField(value); }
  public quickfix.field.TradeCondition get(quickfix.field.TradeCondition  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeCondition getTradeCondition() throws FieldNotFound
  { quickfix.field.TradeCondition value = new quickfix.field.TradeCondition();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeCondition field)
  { return isSetField(field); }
  public boolean isSetTradeCondition()
  { return isSetField(277); }
  public void set(quickfix.field.MDEntryOriginator value)
  { setField(value); }
  public quickfix.field.MDEntryOriginator get(quickfix.field.MDEntryOriginator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDEntryOriginator getMDEntryOriginator() throws FieldNotFound
  { quickfix.field.MDEntryOriginator value = new quickfix.field.MDEntryOriginator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDEntryOriginator field)
  { return isSetField(field); }
  public boolean isSetMDEntryOriginator()
  { return isSetField(282); }
  public void set(quickfix.field.LocationID value)
  { setField(value); }
  public quickfix.field.LocationID get(quickfix.field.LocationID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LocationID getLocationID() throws FieldNotFound
  { quickfix.field.LocationID value = new quickfix.field.LocationID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LocationID field)
  { return isSetField(field); }
  public boolean isSetLocationID()
  { return isSetField(283); }
  public void set(quickfix.field.DeskID value)
  { setField(value); }
  public quickfix.field.DeskID get(quickfix.field.DeskID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DeskID getDeskID() throws FieldNotFound
  { quickfix.field.DeskID value = new quickfix.field.DeskID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DeskID field)
  { return isSetField(field); }
  public boolean isSetDeskID()
  { return isSetField(284); }
  public void set(quickfix.field.OpenCloseSettleFlag value)
  { setField(value); }
  public quickfix.field.OpenCloseSettleFlag get(quickfix.field.OpenCloseSettleFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OpenCloseSettleFlag getOpenCloseSettleFlag() throws FieldNotFound
  { quickfix.field.OpenCloseSettleFlag value = new quickfix.field.OpenCloseSettleFlag();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OpenCloseSettleFlag field)
  { return isSetField(field); }
  public boolean isSetOpenCloseSettleFlag()
  { return isSetField(286); }
  public void set(quickfix.field.TimeInForce value)
  { setField(value); }
  public quickfix.field.TimeInForce get(quickfix.field.TimeInForce  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TimeInForce getTimeInForce() throws FieldNotFound
  { quickfix.field.TimeInForce value = new quickfix.field.TimeInForce();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TimeInForce field)
  { return isSetField(field); }
  public boolean isSetTimeInForce()
  { return isSetField(59); }
  public void set(quickfix.field.ExpireDate value)
  { setField(value); }
  public quickfix.field.ExpireDate get(quickfix.field.ExpireDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExpireDate getExpireDate() throws FieldNotFound
  { quickfix.field.ExpireDate value = new quickfix.field.ExpireDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExpireDate field)
  { return isSetField(field); }
  public boolean isSetExpireDate()
  { return isSetField(432); }
  public void set(quickfix.field.ExpireTime value)
  { setField(value); }
  public quickfix.field.ExpireTime get(quickfix.field.ExpireTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExpireTime getExpireTime() throws FieldNotFound
  { quickfix.field.ExpireTime value = new quickfix.field.ExpireTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExpireTime field)
  { return isSetField(field); }
  public boolean isSetExpireTime()
  { return isSetField(126); }
  public void set(quickfix.field.MinQty value)
  { setField(value); }
  public quickfix.field.MinQty get(quickfix.field.MinQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MinQty getMinQty() throws FieldNotFound
  { quickfix.field.MinQty value = new quickfix.field.MinQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MinQty field)
  { return isSetField(field); }
  public boolean isSetMinQty()
  { return isSetField(110); }
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
  public void set(quickfix.field.SellerDays value)
  { setField(value); }
  public quickfix.field.SellerDays get(quickfix.field.SellerDays  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SellerDays getSellerDays() throws FieldNotFound
  { quickfix.field.SellerDays value = new quickfix.field.SellerDays();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SellerDays field)
  { return isSetField(field); }
  public boolean isSetSellerDays()
  { return isSetField(287); }
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
  public void set(quickfix.field.QuoteEntryID value)
  { setField(value); }
  public quickfix.field.QuoteEntryID get(quickfix.field.QuoteEntryID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuoteEntryID getQuoteEntryID() throws FieldNotFound
  { quickfix.field.QuoteEntryID value = new quickfix.field.QuoteEntryID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuoteEntryID field)
  { return isSetField(field); }
  public boolean isSetQuoteEntryID()
  { return isSetField(299); }
  public void set(quickfix.field.MDEntryBuyer value)
  { setField(value); }
  public quickfix.field.MDEntryBuyer get(quickfix.field.MDEntryBuyer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDEntryBuyer getMDEntryBuyer() throws FieldNotFound
  { quickfix.field.MDEntryBuyer value = new quickfix.field.MDEntryBuyer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDEntryBuyer field)
  { return isSetField(field); }
  public boolean isSetMDEntryBuyer()
  { return isSetField(288); }
  public void set(quickfix.field.MDEntrySeller value)
  { setField(value); }
  public quickfix.field.MDEntrySeller get(quickfix.field.MDEntrySeller  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDEntrySeller getMDEntrySeller() throws FieldNotFound
  { quickfix.field.MDEntrySeller value = new quickfix.field.MDEntrySeller();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDEntrySeller field)
  { return isSetField(field); }
  public boolean isSetMDEntrySeller()
  { return isSetField(289); }
  public void set(quickfix.field.NumberOfOrders value)
  { setField(value); }
  public quickfix.field.NumberOfOrders get(quickfix.field.NumberOfOrders  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NumberOfOrders getNumberOfOrders() throws FieldNotFound
  { quickfix.field.NumberOfOrders value = new quickfix.field.NumberOfOrders();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NumberOfOrders field)
  { return isSetField(field); }
  public boolean isSetNumberOfOrders()
  { return isSetField(346); }
  public void set(quickfix.field.MDEntryPositionNo value)
  { setField(value); }
  public quickfix.field.MDEntryPositionNo get(quickfix.field.MDEntryPositionNo  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MDEntryPositionNo getMDEntryPositionNo() throws FieldNotFound
  { quickfix.field.MDEntryPositionNo value = new quickfix.field.MDEntryPositionNo();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MDEntryPositionNo field)
  { return isSetField(field); }
  public boolean isSetMDEntryPositionNo()
  { return isSetField(290); }
  public void set(quickfix.field.Scope value)
  { setField(value); }
  public quickfix.field.Scope get(quickfix.field.Scope  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Scope getScope() throws FieldNotFound
  { quickfix.field.Scope value = new quickfix.field.Scope();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Scope field)
  { return isSetField(field); }
  public boolean isSetScope()
  { return isSetField(546); }
  public void set(quickfix.field.TotalVolumeTraded value)
  { setField(value); }
  public quickfix.field.TotalVolumeTraded get(quickfix.field.TotalVolumeTraded  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotalVolumeTraded getTotalVolumeTraded() throws FieldNotFound
  { quickfix.field.TotalVolumeTraded value = new quickfix.field.TotalVolumeTraded();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotalVolumeTraded field)
  { return isSetField(field); }
  public boolean isSetTotalVolumeTraded()
  { return isSetField(387); }
  public void set(quickfix.field.TotalVolumeTradedDate value)
  { setField(value); }
  public quickfix.field.TotalVolumeTradedDate get(quickfix.field.TotalVolumeTradedDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotalVolumeTradedDate getTotalVolumeTradedDate() throws FieldNotFound
  { quickfix.field.TotalVolumeTradedDate value = new quickfix.field.TotalVolumeTradedDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotalVolumeTradedDate field)
  { return isSetField(field); }
  public boolean isSetTotalVolumeTradedDate()
  { return isSetField(449); }
  public void set(quickfix.field.TotalVolumeTradedTime value)
  { setField(value); }
  public quickfix.field.TotalVolumeTradedTime get(quickfix.field.TotalVolumeTradedTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotalVolumeTradedTime getTotalVolumeTradedTime() throws FieldNotFound
  { quickfix.field.TotalVolumeTradedTime value = new quickfix.field.TotalVolumeTradedTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotalVolumeTradedTime field)
  { return isSetField(field); }
  public boolean isSetTotalVolumeTradedTime()
  { return isSetField(450); }
  public void set(quickfix.field.NetChgPrevDay value)
  { setField(value); }
  public quickfix.field.NetChgPrevDay get(quickfix.field.NetChgPrevDay  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NetChgPrevDay getNetChgPrevDay() throws FieldNotFound
  { quickfix.field.NetChgPrevDay value = new quickfix.field.NetChgPrevDay();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NetChgPrevDay field)
  { return isSetField(field); }
  public boolean isSetNetChgPrevDay()
  { return isSetField(451); }
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
}
}

