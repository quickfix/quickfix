package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class OrderMassCancelReport extends Message 
{ 

  public OrderMassCancelReport() 
  { 
    getHeader().setField(new MsgType("r")); 
  } 
  public OrderMassCancelReport(    
    org.quickfix.field.OrderID aOrderID,    
    org.quickfix.field.MassCancelRequestType aMassCancelRequestType,    
    org.quickfix.field.MassCancelResponse aMassCancelResponse ) 
  {  
    getHeader().setField(new MsgType("r")); 
    set(aOrderID); 
    set(aMassCancelRequestType); 
    set(aMassCancelResponse);  
  } 

  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ClOrdID field) 
  { return isSetField(field); } 
  public boolean isSetClOrdID() 
  { return isSetField(11); } 

  public void set(org.quickfix.field.SecondaryClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryClOrdID get(org.quickfix.field.SecondaryClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryClOrdID getSecondaryClOrdID() throws FieldNotFound 
  { org.quickfix.field.SecondaryClOrdID value = new org.quickfix.field.SecondaryClOrdID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecondaryClOrdID field) 
  { return isSetField(field); } 
  public boolean isSetSecondaryClOrdID() 
  { return isSetField(526); } 

  public void set(org.quickfix.field.OrderID value) 
  { setField(value); } 
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound 
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
  public org.quickfix.field.SecondaryOrderID get(org.quickfix.field.SecondaryOrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound 
  { org.quickfix.field.SecondaryOrderID value = new org.quickfix.field.SecondaryOrderID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecondaryOrderID field) 
  { return isSetField(field); } 
  public boolean isSetSecondaryOrderID() 
  { return isSetField(198); } 

  public void set(org.quickfix.field.MassCancelRequestType value) 
  { setField(value); } 
  public org.quickfix.field.MassCancelRequestType get(org.quickfix.field.MassCancelRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MassCancelRequestType getMassCancelRequestType() throws FieldNotFound 
  { org.quickfix.field.MassCancelRequestType value = new org.quickfix.field.MassCancelRequestType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MassCancelRequestType field) 
  { return isSetField(field); } 
  public boolean isSetMassCancelRequestType() 
  { return isSetField(530); } 

  public void set(org.quickfix.field.MassCancelResponse value) 
  { setField(value); } 
  public org.quickfix.field.MassCancelResponse get(org.quickfix.field.MassCancelResponse value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MassCancelResponse getMassCancelResponse() throws FieldNotFound 
  { org.quickfix.field.MassCancelResponse value = new org.quickfix.field.MassCancelResponse(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MassCancelResponse field) 
  { return isSetField(field); } 
  public boolean isSetMassCancelResponse() 
  { return isSetField(531); } 

  public void set(org.quickfix.field.MassCancelRejectReason value) 
  { setField(value); } 
  public org.quickfix.field.MassCancelRejectReason get(org.quickfix.field.MassCancelRejectReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MassCancelRejectReason getMassCancelRejectReason() throws FieldNotFound 
  { org.quickfix.field.MassCancelRejectReason value = new org.quickfix.field.MassCancelRejectReason(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MassCancelRejectReason field) 
  { return isSetField(field); } 
  public boolean isSetMassCancelRejectReason() 
  { return isSetField(532); } 

  public void set(org.quickfix.field.TotalAffectedOrders value) 
  { setField(value); } 
  public org.quickfix.field.TotalAffectedOrders get(org.quickfix.field.TotalAffectedOrders value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotalAffectedOrders getTotalAffectedOrders() throws FieldNotFound 
  { org.quickfix.field.TotalAffectedOrders value = new org.quickfix.field.TotalAffectedOrders(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TotalAffectedOrders field) 
  { return isSetField(field); } 
  public boolean isSetTotalAffectedOrders() 
  { return isSetField(533); } 
  public void set(org.quickfix.field.NoAffectedOrders value) 
  { setField(value); } 
  public org.quickfix.field.NoAffectedOrders get(org.quickfix.field.NoAffectedOrders value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoAffectedOrders getNoAffectedOrders() throws FieldNotFound 
  { org.quickfix.field.NoAffectedOrders value = new org.quickfix.field.NoAffectedOrders(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoAffectedOrders field) 
  { return isSetField(field); } 
  public boolean isSetNoAffectedOrders() 
  { return isSetField(534); } 

public static class NoAffectedOrders extends Group { 
  public NoAffectedOrders() { 
    super(534, 41, 
    new int[] { 
               41, 
               535, 
               536, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.OrigClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.OrigClOrdID get(org.quickfix.field.OrigClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound 
  { org.quickfix.field.OrigClOrdID value = new org.quickfix.field.OrigClOrdID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrigClOrdID field) 
  { return isSetField(field); } 
  public boolean isSetOrigClOrdID() 
  { return isSetField(41); } 

  public void set(org.quickfix.field.AffectedOrderID value) 
  { setField(value); } 
  public org.quickfix.field.AffectedOrderID get(org.quickfix.field.AffectedOrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AffectedOrderID getAffectedOrderID() throws FieldNotFound 
  { org.quickfix.field.AffectedOrderID value = new org.quickfix.field.AffectedOrderID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AffectedOrderID field) 
  { return isSetField(field); } 
  public boolean isSetAffectedOrderID() 
  { return isSetField(535); } 

  public void set(org.quickfix.field.AffectedSecondaryOrderID value) 
  { setField(value); } 
  public org.quickfix.field.AffectedSecondaryOrderID get(org.quickfix.field.AffectedSecondaryOrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AffectedSecondaryOrderID getAffectedSecondaryOrderID() throws FieldNotFound 
  { org.quickfix.field.AffectedSecondaryOrderID value = new org.quickfix.field.AffectedSecondaryOrderID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AffectedSecondaryOrderID field) 
  { return isSetField(field); } 
  public boolean isSetAffectedSecondaryOrderID() 
  { return isSetField(536); } 

} 

  public void set(org.quickfix.field.TradingSessionID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound 
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
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradingSessionSubID field) 
  { return isSetField(field); } 
  public boolean isSetTradingSessionSubID() 
  { return isSetField(625); } 
  public void set(org.quickfix.field.Symbol value) 
  { setField(value); } 
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound 
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
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityIDSource get(org.quickfix.field.SecurityIDSource value) throws FieldNotFound 
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
  public org.quickfix.field.Product get(org.quickfix.field.Product value) throws FieldNotFound 
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
  public org.quickfix.field.CFICode get(org.quickfix.field.CFICode value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound 
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
  public org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear value) throws FieldNotFound 
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
  public org.quickfix.field.MaturityDate get(org.quickfix.field.MaturityDate value) throws FieldNotFound 
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
  public org.quickfix.field.CouponPaymentDate get(org.quickfix.field.CouponPaymentDate value) throws FieldNotFound 
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
  public org.quickfix.field.IssueDate get(org.quickfix.field.IssueDate value) throws FieldNotFound 
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
  public org.quickfix.field.RepoCollateralSecurityType get(org.quickfix.field.RepoCollateralSecurityType value) throws FieldNotFound 
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
  public org.quickfix.field.RepurchaseTerm get(org.quickfix.field.RepurchaseTerm value) throws FieldNotFound 
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
  public org.quickfix.field.RepurchaseRate get(org.quickfix.field.RepurchaseRate value) throws FieldNotFound 
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
  public org.quickfix.field.Factor get(org.quickfix.field.Factor value) throws FieldNotFound 
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
  public org.quickfix.field.CreditRating get(org.quickfix.field.CreditRating value) throws FieldNotFound 
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
  public org.quickfix.field.InstrRegistry get(org.quickfix.field.InstrRegistry value) throws FieldNotFound 
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
  public org.quickfix.field.CountryOfIssue get(org.quickfix.field.CountryOfIssue value) throws FieldNotFound 
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
  public org.quickfix.field.StateOrProvinceOfIssue get(org.quickfix.field.StateOrProvinceOfIssue value) throws FieldNotFound 
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
  public org.quickfix.field.LocaleOfIssue get(org.quickfix.field.LocaleOfIssue value) throws FieldNotFound 
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
  public org.quickfix.field.RedemptionDate get(org.quickfix.field.RedemptionDate value) throws FieldNotFound 
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
  public org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice value) throws FieldNotFound 
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
  public org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute value) throws FieldNotFound 
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
  public org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier value) throws FieldNotFound 
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
  public org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange value) throws FieldNotFound 
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
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc value) throws FieldNotFound 
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
  public org.quickfix.field.NoSecurityAltID get(org.quickfix.field.NoSecurityAltID value) throws FieldNotFound 
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
    super(454, 455, 
    new int[] { 
               455, 
               456, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.SecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityAltID get(org.quickfix.field.SecurityAltID value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityAltIDSource get(org.quickfix.field.SecurityAltIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityAltIDSource getSecurityAltIDSource() throws FieldNotFound 
  { org.quickfix.field.SecurityAltIDSource value = new org.quickfix.field.SecurityAltIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityAltIDSource field) 
  { return isSetField(field); } 
  public boolean isSetSecurityAltIDSource() 
  { return isSetField(456); } 

} 
  public void set(org.quickfix.field.UnderlyingSymbol value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSymbol get(org.quickfix.field.UnderlyingSymbol value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSymbol getUnderlyingSymbol() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSymbol value = new org.quickfix.field.UnderlyingSymbol(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSymbol field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSymbol() 
  { return isSetField(311); } 
  public void set(org.quickfix.field.UnderlyingSymbolSfx value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSymbolSfx get(org.quickfix.field.UnderlyingSymbolSfx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSymbolSfx getUnderlyingSymbolSfx() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSymbolSfx value = new org.quickfix.field.UnderlyingSymbolSfx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSymbolSfx field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSymbolSfx() 
  { return isSetField(312); } 
  public void set(org.quickfix.field.UnderlyingSecurityID value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityID get(org.quickfix.field.UnderlyingSecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityID getUnderlyingSecurityID() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityID value = new org.quickfix.field.UnderlyingSecurityID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityID field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityID() 
  { return isSetField(309); } 
  public void set(org.quickfix.field.UnderlyingSecurityIDSource value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityIDSource get(org.quickfix.field.UnderlyingSecurityIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityIDSource getUnderlyingSecurityIDSource() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityIDSource value = new org.quickfix.field.UnderlyingSecurityIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityIDSource field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityIDSource() 
  { return isSetField(305); } 
  public void set(org.quickfix.field.UnderlyingProduct value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingProduct get(org.quickfix.field.UnderlyingProduct value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingProduct getUnderlyingProduct() throws FieldNotFound 
  { org.quickfix.field.UnderlyingProduct value = new org.quickfix.field.UnderlyingProduct(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingProduct field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingProduct() 
  { return isSetField(462); } 
  public void set(org.quickfix.field.UnderlyingCFICode value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingCFICode get(org.quickfix.field.UnderlyingCFICode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingCFICode getUnderlyingCFICode() throws FieldNotFound 
  { org.quickfix.field.UnderlyingCFICode value = new org.quickfix.field.UnderlyingCFICode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingCFICode field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingCFICode() 
  { return isSetField(463); } 
  public void set(org.quickfix.field.UnderlyingSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityType get(org.quickfix.field.UnderlyingSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityType getUnderlyingSecurityType() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityType value = new org.quickfix.field.UnderlyingSecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityType field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityType() 
  { return isSetField(310); } 
  public void set(org.quickfix.field.UnderlyingMaturityMonthYear value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingMaturityMonthYear get(org.quickfix.field.UnderlyingMaturityMonthYear value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingMaturityMonthYear getUnderlyingMaturityMonthYear() throws FieldNotFound 
  { org.quickfix.field.UnderlyingMaturityMonthYear value = new org.quickfix.field.UnderlyingMaturityMonthYear(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingMaturityMonthYear field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingMaturityMonthYear() 
  { return isSetField(313); } 
  public void set(org.quickfix.field.UnderlyingMaturityDate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingMaturityDate get(org.quickfix.field.UnderlyingMaturityDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingMaturityDate getUnderlyingMaturityDate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingMaturityDate value = new org.quickfix.field.UnderlyingMaturityDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingMaturityDate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingMaturityDate() 
  { return isSetField(542); } 
  public void set(org.quickfix.field.UnderlyingCouponPaymentDate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingCouponPaymentDate get(org.quickfix.field.UnderlyingCouponPaymentDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingCouponPaymentDate getUnderlyingCouponPaymentDate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingCouponPaymentDate value = new org.quickfix.field.UnderlyingCouponPaymentDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingCouponPaymentDate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingCouponPaymentDate() 
  { return isSetField(241); } 
  public void set(org.quickfix.field.UnderlyingIssueDate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingIssueDate get(org.quickfix.field.UnderlyingIssueDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingIssueDate getUnderlyingIssueDate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingIssueDate value = new org.quickfix.field.UnderlyingIssueDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingIssueDate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingIssueDate() 
  { return isSetField(242); } 
  public void set(org.quickfix.field.UnderlyingRepoCollateralSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingRepoCollateralSecurityType get(org.quickfix.field.UnderlyingRepoCollateralSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingRepoCollateralSecurityType getUnderlyingRepoCollateralSecurityType() throws FieldNotFound 
  { org.quickfix.field.UnderlyingRepoCollateralSecurityType value = new org.quickfix.field.UnderlyingRepoCollateralSecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingRepoCollateralSecurityType field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingRepoCollateralSecurityType() 
  { return isSetField(243); } 
  public void set(org.quickfix.field.UnderlyingRepurchaseTerm value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingRepurchaseTerm get(org.quickfix.field.UnderlyingRepurchaseTerm value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingRepurchaseTerm getUnderlyingRepurchaseTerm() throws FieldNotFound 
  { org.quickfix.field.UnderlyingRepurchaseTerm value = new org.quickfix.field.UnderlyingRepurchaseTerm(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingRepurchaseTerm field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingRepurchaseTerm() 
  { return isSetField(244); } 
  public void set(org.quickfix.field.UnderlyingRepurchaseRate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingRepurchaseRate get(org.quickfix.field.UnderlyingRepurchaseRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingRepurchaseRate getUnderlyingRepurchaseRate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingRepurchaseRate value = new org.quickfix.field.UnderlyingRepurchaseRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingRepurchaseRate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingRepurchaseRate() 
  { return isSetField(245); } 
  public void set(org.quickfix.field.UnderlyingFactor value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingFactor get(org.quickfix.field.UnderlyingFactor value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingFactor getUnderlyingFactor() throws FieldNotFound 
  { org.quickfix.field.UnderlyingFactor value = new org.quickfix.field.UnderlyingFactor(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingFactor field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingFactor() 
  { return isSetField(246); } 
  public void set(org.quickfix.field.UnderlyingCreditRating value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingCreditRating get(org.quickfix.field.UnderlyingCreditRating value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingCreditRating getUnderlyingCreditRating() throws FieldNotFound 
  { org.quickfix.field.UnderlyingCreditRating value = new org.quickfix.field.UnderlyingCreditRating(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingCreditRating field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingCreditRating() 
  { return isSetField(256); } 
  public void set(org.quickfix.field.UnderlyingInstrRegistry value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingInstrRegistry get(org.quickfix.field.UnderlyingInstrRegistry value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingInstrRegistry getUnderlyingInstrRegistry() throws FieldNotFound 
  { org.quickfix.field.UnderlyingInstrRegistry value = new org.quickfix.field.UnderlyingInstrRegistry(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingInstrRegistry field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingInstrRegistry() 
  { return isSetField(595); } 
  public void set(org.quickfix.field.UnderlyingCountryOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingCountryOfIssue get(org.quickfix.field.UnderlyingCountryOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingCountryOfIssue getUnderlyingCountryOfIssue() throws FieldNotFound 
  { org.quickfix.field.UnderlyingCountryOfIssue value = new org.quickfix.field.UnderlyingCountryOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingCountryOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingCountryOfIssue() 
  { return isSetField(592); } 
  public void set(org.quickfix.field.UnderlyingStateOrProvinceOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingStateOrProvinceOfIssue get(org.quickfix.field.UnderlyingStateOrProvinceOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingStateOrProvinceOfIssue getUnderlyingStateOrProvinceOfIssue() throws FieldNotFound 
  { org.quickfix.field.UnderlyingStateOrProvinceOfIssue value = new org.quickfix.field.UnderlyingStateOrProvinceOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingStateOrProvinceOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingStateOrProvinceOfIssue() 
  { return isSetField(593); } 
  public void set(org.quickfix.field.UnderlyingLocaleOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingLocaleOfIssue get(org.quickfix.field.UnderlyingLocaleOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingLocaleOfIssue getUnderlyingLocaleOfIssue() throws FieldNotFound 
  { org.quickfix.field.UnderlyingLocaleOfIssue value = new org.quickfix.field.UnderlyingLocaleOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingLocaleOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingLocaleOfIssue() 
  { return isSetField(594); } 
  public void set(org.quickfix.field.UnderlyingRedemptionDate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingRedemptionDate get(org.quickfix.field.UnderlyingRedemptionDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingRedemptionDate getUnderlyingRedemptionDate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingRedemptionDate value = new org.quickfix.field.UnderlyingRedemptionDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingRedemptionDate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingRedemptionDate() 
  { return isSetField(247); } 
  public void set(org.quickfix.field.UnderlyingPutOrCall value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingPutOrCall get(org.quickfix.field.UnderlyingPutOrCall value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingPutOrCall getUnderlyingPutOrCall() throws FieldNotFound 
  { org.quickfix.field.UnderlyingPutOrCall value = new org.quickfix.field.UnderlyingPutOrCall(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingPutOrCall field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingPutOrCall() 
  { return isSetField(315); } 
  public void set(org.quickfix.field.UnderlyingStrikePrice value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingStrikePrice get(org.quickfix.field.UnderlyingStrikePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingStrikePrice getUnderlyingStrikePrice() throws FieldNotFound 
  { org.quickfix.field.UnderlyingStrikePrice value = new org.quickfix.field.UnderlyingStrikePrice(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingStrikePrice field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingStrikePrice() 
  { return isSetField(316); } 
  public void set(org.quickfix.field.UnderlyingOptAttribute value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingOptAttribute get(org.quickfix.field.UnderlyingOptAttribute value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingOptAttribute getUnderlyingOptAttribute() throws FieldNotFound 
  { org.quickfix.field.UnderlyingOptAttribute value = new org.quickfix.field.UnderlyingOptAttribute(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingOptAttribute field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingOptAttribute() 
  { return isSetField(317); } 
  public void set(org.quickfix.field.UnderlyingContractMultiplier value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingContractMultiplier get(org.quickfix.field.UnderlyingContractMultiplier value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingContractMultiplier getUnderlyingContractMultiplier() throws FieldNotFound 
  { org.quickfix.field.UnderlyingContractMultiplier value = new org.quickfix.field.UnderlyingContractMultiplier(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingContractMultiplier field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingContractMultiplier() 
  { return isSetField(436); } 
  public void set(org.quickfix.field.UnderlyingCouponRate value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingCouponRate get(org.quickfix.field.UnderlyingCouponRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingCouponRate getUnderlyingCouponRate() throws FieldNotFound 
  { org.quickfix.field.UnderlyingCouponRate value = new org.quickfix.field.UnderlyingCouponRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingCouponRate field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingCouponRate() 
  { return isSetField(435); } 
  public void set(org.quickfix.field.UnderlyingSecurityExchange value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityExchange get(org.quickfix.field.UnderlyingSecurityExchange value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityExchange getUnderlyingSecurityExchange() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityExchange value = new org.quickfix.field.UnderlyingSecurityExchange(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityExchange field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityExchange() 
  { return isSetField(308); } 
  public void set(org.quickfix.field.UnderlyingIssuer value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingIssuer get(org.quickfix.field.UnderlyingIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingIssuer getUnderlyingIssuer() throws FieldNotFound 
  { org.quickfix.field.UnderlyingIssuer value = new org.quickfix.field.UnderlyingIssuer(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingIssuer field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingIssuer() 
  { return isSetField(306); } 
  public void set(org.quickfix.field.EncodedUnderlyingIssuerLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedUnderlyingIssuerLen get(org.quickfix.field.EncodedUnderlyingIssuerLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedUnderlyingIssuerLen getEncodedUnderlyingIssuerLen() throws FieldNotFound 
  { org.quickfix.field.EncodedUnderlyingIssuerLen value = new org.quickfix.field.EncodedUnderlyingIssuerLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedUnderlyingIssuerLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedUnderlyingIssuerLen() 
  { return isSetField(362); } 
  public void set(org.quickfix.field.EncodedUnderlyingIssuer value) 
  { setField(value); } 
  public org.quickfix.field.EncodedUnderlyingIssuer get(org.quickfix.field.EncodedUnderlyingIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedUnderlyingIssuer getEncodedUnderlyingIssuer() throws FieldNotFound 
  { org.quickfix.field.EncodedUnderlyingIssuer value = new org.quickfix.field.EncodedUnderlyingIssuer(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedUnderlyingIssuer field) 
  { return isSetField(field); } 
  public boolean isSetEncodedUnderlyingIssuer() 
  { return isSetField(363); } 
  public void set(org.quickfix.field.UnderlyingSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityDesc get(org.quickfix.field.UnderlyingSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityDesc getUnderlyingSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityDesc value = new org.quickfix.field.UnderlyingSecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityDesc() 
  { return isSetField(307); } 
  public void set(org.quickfix.field.EncodedUnderlyingSecurityDescLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedUnderlyingSecurityDescLen get(org.quickfix.field.EncodedUnderlyingSecurityDescLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedUnderlyingSecurityDescLen getEncodedUnderlyingSecurityDescLen() throws FieldNotFound 
  { org.quickfix.field.EncodedUnderlyingSecurityDescLen value = new org.quickfix.field.EncodedUnderlyingSecurityDescLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedUnderlyingSecurityDescLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedUnderlyingSecurityDescLen() 
  { return isSetField(364); } 
  public void set(org.quickfix.field.EncodedUnderlyingSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.EncodedUnderlyingSecurityDesc get(org.quickfix.field.EncodedUnderlyingSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedUnderlyingSecurityDesc getEncodedUnderlyingSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.EncodedUnderlyingSecurityDesc value = new org.quickfix.field.EncodedUnderlyingSecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedUnderlyingSecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetEncodedUnderlyingSecurityDesc() 
  { return isSetField(365); } 
  public void set(org.quickfix.field.NoUnderlyingSecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.NoUnderlyingSecurityAltID get(org.quickfix.field.NoUnderlyingSecurityAltID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoUnderlyingSecurityAltID getNoUnderlyingSecurityAltID() throws FieldNotFound 
  { org.quickfix.field.NoUnderlyingSecurityAltID value = new org.quickfix.field.NoUnderlyingSecurityAltID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoUnderlyingSecurityAltID field) 
  { return isSetField(field); } 
  public boolean isSetNoUnderlyingSecurityAltID() 
  { return isSetField(457); } 

public static class NoUnderlyingSecurityAltID extends Group { 
  public NoUnderlyingSecurityAltID() { 
    super(457, 458, 
    new int[] { 
               458, 
               459, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.UnderlyingSecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityAltID get(org.quickfix.field.UnderlyingSecurityAltID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityAltID getUnderlyingSecurityAltID() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityAltID value = new org.quickfix.field.UnderlyingSecurityAltID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityAltID field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityAltID() 
  { return isSetField(458); } 

  public void set(org.quickfix.field.UnderlyingSecurityAltIDSource value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityAltIDSource get(org.quickfix.field.UnderlyingSecurityAltIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityAltIDSource getUnderlyingSecurityAltIDSource() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityAltIDSource value = new org.quickfix.field.UnderlyingSecurityAltIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityAltIDSource field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityAltIDSource() 
  { return isSetField(459); } 

} 

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Side field) 
  { return isSetField(field); } 
  public boolean isSetSide() 
  { return isSetField(54); } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TransactTime field) 
  { return isSetField(field); } 
  public boolean isSetTransactTime() 
  { return isSetField(60); } 

  public void set(org.quickfix.field.Text value) 
  { setField(value); } 
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound 
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedText field) 
  { return isSetField(field); } 
  public boolean isSetEncodedText() 
  { return isSetField(355); } 
} 
