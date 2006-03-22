package quickfix.fix43;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class CrossOrderCancelRequest extends Message
{
  public CrossOrderCancelRequest()
  {
    getHeader().setField(new MsgType("u"));
  }
  public CrossOrderCancelRequest(
    quickfix.field.CrossID aCrossID,
    quickfix.field.OrigCrossID aOrigCrossID,
    quickfix.field.CrossType aCrossType,
    quickfix.field.CrossPrioritization aCrossPrioritization,
    quickfix.field.TransactTime aTransactTime ) {

    getHeader().setField(new MsgType("u"));
    set(aCrossID);
    set(aOrigCrossID);
    set(aCrossType);
    set(aCrossPrioritization);
    set(aTransactTime);
  }

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
  public void set(quickfix.field.CrossID value)
  { setField(value); }
  public quickfix.field.CrossID get(quickfix.field.CrossID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CrossID getCrossID() throws FieldNotFound
  { quickfix.field.CrossID value = new quickfix.field.CrossID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CrossID field)
  { return isSetField(field); }
  public boolean isSetCrossID()
  { return isSetField(548); }
  public void set(quickfix.field.OrigCrossID value)
  { setField(value); }
  public quickfix.field.OrigCrossID get(quickfix.field.OrigCrossID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigCrossID getOrigCrossID() throws FieldNotFound
  { quickfix.field.OrigCrossID value = new quickfix.field.OrigCrossID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigCrossID field)
  { return isSetField(field); }
  public boolean isSetOrigCrossID()
  { return isSetField(551); }
  public void set(quickfix.field.CrossType value)
  { setField(value); }
  public quickfix.field.CrossType get(quickfix.field.CrossType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CrossType getCrossType() throws FieldNotFound
  { quickfix.field.CrossType value = new quickfix.field.CrossType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CrossType field)
  { return isSetField(field); }
  public boolean isSetCrossType()
  { return isSetField(549); }
  public void set(quickfix.field.CrossPrioritization value)
  { setField(value); }
  public quickfix.field.CrossPrioritization get(quickfix.field.CrossPrioritization  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CrossPrioritization getCrossPrioritization() throws FieldNotFound
  { quickfix.field.CrossPrioritization value = new quickfix.field.CrossPrioritization();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CrossPrioritization field)
  { return isSetField(field); }
  public boolean isSetCrossPrioritization()
  { return isSetField(550); }
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
      new int[] {54,41,11,526,583,586,453,229,38,152,516,468,469,376,58,354,355,0 } ); }
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
  public void set(quickfix.field.OrigClOrdID value)
  { setField(value); }
  public quickfix.field.OrigClOrdID get(quickfix.field.OrigClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound
  { quickfix.field.OrigClOrdID value = new quickfix.field.OrigClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigClOrdID field)
  { return isSetField(field); }
  public boolean isSetOrigClOrdID()
  { return isSetField(41); }
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
  public void set(quickfix.field.ClOrdLinkID value)
  { setField(value); }
  public quickfix.field.ClOrdLinkID get(quickfix.field.ClOrdLinkID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClOrdLinkID getClOrdLinkID() throws FieldNotFound
  { quickfix.field.ClOrdLinkID value = new quickfix.field.ClOrdLinkID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClOrdLinkID field)
  { return isSetField(field); }
  public boolean isSetClOrdLinkID()
  { return isSetField(583); }
  public void set(quickfix.field.OrigOrdModTime value)
  { setField(value); }
  public quickfix.field.OrigOrdModTime get(quickfix.field.OrigOrdModTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigOrdModTime getOrigOrdModTime() throws FieldNotFound
  { quickfix.field.OrigOrdModTime value = new quickfix.field.OrigOrdModTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigOrdModTime field)
  { return isSetField(field); }
  public boolean isSetOrigOrdModTime()
  { return isSetField(586); }
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
  public void set(quickfix.field.TradeOriginationDate value)
  { setField(value); }
  public quickfix.field.TradeOriginationDate get(quickfix.field.TradeOriginationDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeOriginationDate getTradeOriginationDate() throws FieldNotFound
  { quickfix.field.TradeOriginationDate value = new quickfix.field.TradeOriginationDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeOriginationDate field)
  { return isSetField(field); }
  public boolean isSetTradeOriginationDate()
  { return isSetField(229); }
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

