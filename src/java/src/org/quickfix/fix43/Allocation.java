package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class Allocation extends Message 
{ 

  public Allocation() 
  { 
    getHeader().setField(new MsgType("J")); 
  } 
  public Allocation(    
    org.quickfix.field.AllocID aAllocID,    
    org.quickfix.field.AllocTransType aAllocTransType,    
    org.quickfix.field.AllocType aAllocType,    
    org.quickfix.field.Side aSide,    
    org.quickfix.field.Quantity aQuantity,    
    org.quickfix.field.AvgPx aAvgPx,    
    org.quickfix.field.TradeDate aTradeDate ) 
  {  
    getHeader().setField(new MsgType("J")); 
    set(aAllocID); 
    set(aAllocTransType); 
    set(aAllocType); 
    set(aSide); 
    set(aQuantity); 
    set(aAvgPx); 
    set(aTradeDate);  
  } 

  public void set(org.quickfix.field.AllocID value) 
  { setField(value); } 
  public org.quickfix.field.AllocID get(org.quickfix.field.AllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocID getAllocID() throws FieldNotFound 
  { org.quickfix.field.AllocID value = new org.quickfix.field.AllocID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocID field) 
  { return isSetField(field); } 
  public boolean isSetAllocID() 
  { return isSetField(70); } 

  public void set(org.quickfix.field.AllocTransType value) 
  { setField(value); } 
  public org.quickfix.field.AllocTransType get(org.quickfix.field.AllocTransType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocTransType getAllocTransType() throws FieldNotFound 
  { org.quickfix.field.AllocTransType value = new org.quickfix.field.AllocTransType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocTransType field) 
  { return isSetField(field); } 
  public boolean isSetAllocTransType() 
  { return isSetField(71); } 

  public void set(org.quickfix.field.AllocType value) 
  { setField(value); } 
  public org.quickfix.field.AllocType get(org.quickfix.field.AllocType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocType getAllocType() throws FieldNotFound 
  { org.quickfix.field.AllocType value = new org.quickfix.field.AllocType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocType field) 
  { return isSetField(field); } 
  public boolean isSetAllocType() 
  { return isSetField(626); } 

  public void set(org.quickfix.field.RefAllocID value) 
  { setField(value); } 
  public org.quickfix.field.RefAllocID get(org.quickfix.field.RefAllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RefAllocID getRefAllocID() throws FieldNotFound 
  { org.quickfix.field.RefAllocID value = new org.quickfix.field.RefAllocID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RefAllocID field) 
  { return isSetField(field); } 
  public boolean isSetRefAllocID() 
  { return isSetField(72); } 

  public void set(org.quickfix.field.AllocLinkID value) 
  { setField(value); } 
  public org.quickfix.field.AllocLinkID get(org.quickfix.field.AllocLinkID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocLinkID getAllocLinkID() throws FieldNotFound 
  { org.quickfix.field.AllocLinkID value = new org.quickfix.field.AllocLinkID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocLinkID field) 
  { return isSetField(field); } 
  public boolean isSetAllocLinkID() 
  { return isSetField(196); } 

  public void set(org.quickfix.field.AllocLinkType value) 
  { setField(value); } 
  public org.quickfix.field.AllocLinkType get(org.quickfix.field.AllocLinkType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocLinkType getAllocLinkType() throws FieldNotFound 
  { org.quickfix.field.AllocLinkType value = new org.quickfix.field.AllocLinkType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocLinkType field) 
  { return isSetField(field); } 
  public boolean isSetAllocLinkType() 
  { return isSetField(197); } 

  public void set(org.quickfix.field.BookingRefID value) 
  { setField(value); } 
  public org.quickfix.field.BookingRefID get(org.quickfix.field.BookingRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BookingRefID getBookingRefID() throws FieldNotFound 
  { org.quickfix.field.BookingRefID value = new org.quickfix.field.BookingRefID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.BookingRefID field) 
  { return isSetField(field); } 
  public boolean isSetBookingRefID() 
  { return isSetField(466); } 
  public void set(org.quickfix.field.NoOrders value) 
  { setField(value); } 
  public org.quickfix.field.NoOrders get(org.quickfix.field.NoOrders value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoOrders getNoOrders() throws FieldNotFound 
  { org.quickfix.field.NoOrders value = new org.quickfix.field.NoOrders(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoOrders field) 
  { return isSetField(field); } 
  public boolean isSetNoOrders() 
  { return isSetField(73); } 

public static class NoOrders extends Group { 
  public NoOrders() { 
    super(73, 11, 
    new int[] { 
               11, 
               37, 
               198, 
               526, 
               66, 
               0 } 
); 
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

  public void set(org.quickfix.field.ListID value) 
  { setField(value); } 
  public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ListID getListID() throws FieldNotFound 
  { org.quickfix.field.ListID value = new org.quickfix.field.ListID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ListID field) 
  { return isSetField(field); } 
  public boolean isSetListID() 
  { return isSetField(66); } 

} 
  public void set(org.quickfix.field.NoExecs value) 
  { setField(value); } 
  public org.quickfix.field.NoExecs get(org.quickfix.field.NoExecs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoExecs getNoExecs() throws FieldNotFound 
  { org.quickfix.field.NoExecs value = new org.quickfix.field.NoExecs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoExecs field) 
  { return isSetField(field); } 
  public boolean isSetNoExecs() 
  { return isSetField(124); } 

public static class NoExecs extends Group { 
  public NoExecs() { 
    super(124, 17, 
    new int[] { 
               32, 
               17, 
               527, 
               31, 
               29, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.LastQty value) 
  { setField(value); } 
  public org.quickfix.field.LastQty get(org.quickfix.field.LastQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastQty getLastQty() throws FieldNotFound 
  { org.quickfix.field.LastQty value = new org.quickfix.field.LastQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LastQty field) 
  { return isSetField(field); } 
  public boolean isSetLastQty() 
  { return isSetField(32); } 

  public void set(org.quickfix.field.ExecID value) 
  { setField(value); } 
  public org.quickfix.field.ExecID get(org.quickfix.field.ExecID value) throws FieldNotFound 
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
  public org.quickfix.field.SecondaryExecID get(org.quickfix.field.SecondaryExecID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryExecID getSecondaryExecID() throws FieldNotFound 
  { org.quickfix.field.SecondaryExecID value = new org.quickfix.field.SecondaryExecID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecondaryExecID field) 
  { return isSetField(field); } 
  public boolean isSetSecondaryExecID() 
  { return isSetField(527); } 

  public void set(org.quickfix.field.LastPx value) 
  { setField(value); } 
  public org.quickfix.field.LastPx get(org.quickfix.field.LastPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastPx getLastPx() throws FieldNotFound 
  { org.quickfix.field.LastPx value = new org.quickfix.field.LastPx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LastPx field) 
  { return isSetField(field); } 
  public boolean isSetLastPx() 
  { return isSetField(31); } 

  public void set(org.quickfix.field.LastCapacity value) 
  { setField(value); } 
  public org.quickfix.field.LastCapacity get(org.quickfix.field.LastCapacity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastCapacity getLastCapacity() throws FieldNotFound 
  { org.quickfix.field.LastCapacity value = new org.quickfix.field.LastCapacity(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LastCapacity field) 
  { return isSetField(field); } 
  public boolean isSetLastCapacity() 
  { return isSetField(29); } 

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

  public void set(org.quickfix.field.Quantity value) 
  { setField(value); } 
  public org.quickfix.field.Quantity get(org.quickfix.field.Quantity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Quantity getQuantity() throws FieldNotFound 
  { org.quickfix.field.Quantity value = new org.quickfix.field.Quantity(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Quantity field) 
  { return isSetField(field); } 
  public boolean isSetQuantity() 
  { return isSetField(53); } 

  public void set(org.quickfix.field.LastMkt value) 
  { setField(value); } 
  public org.quickfix.field.LastMkt get(org.quickfix.field.LastMkt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastMkt getLastMkt() throws FieldNotFound 
  { org.quickfix.field.LastMkt value = new org.quickfix.field.LastMkt(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LastMkt field) 
  { return isSetField(field); } 
  public boolean isSetLastMkt() 
  { return isSetField(30); } 

  public void set(org.quickfix.field.TradeOriginationDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeOriginationDate get(org.quickfix.field.TradeOriginationDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeOriginationDate getTradeOriginationDate() throws FieldNotFound 
  { org.quickfix.field.TradeOriginationDate value = new org.quickfix.field.TradeOriginationDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradeOriginationDate field) 
  { return isSetField(field); } 
  public boolean isSetTradeOriginationDate() 
  { return isSetField(229); } 

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

  public void set(org.quickfix.field.PriceType value) 
  { setField(value); } 
  public org.quickfix.field.PriceType get(org.quickfix.field.PriceType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PriceType getPriceType() throws FieldNotFound 
  { org.quickfix.field.PriceType value = new org.quickfix.field.PriceType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PriceType field) 
  { return isSetField(field); } 
  public boolean isSetPriceType() 
  { return isSetField(423); } 

  public void set(org.quickfix.field.AvgPx value) 
  { setField(value); } 
  public org.quickfix.field.AvgPx get(org.quickfix.field.AvgPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AvgPx getAvgPx() throws FieldNotFound 
  { org.quickfix.field.AvgPx value = new org.quickfix.field.AvgPx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AvgPx field) 
  { return isSetField(field); } 
  public boolean isSetAvgPx() 
  { return isSetField(6); } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Currency field) 
  { return isSetField(field); } 
  public boolean isSetCurrency() 
  { return isSetField(15); } 

  public void set(org.quickfix.field.AvgPrxPrecision value) 
  { setField(value); } 
  public org.quickfix.field.AvgPrxPrecision get(org.quickfix.field.AvgPrxPrecision value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AvgPrxPrecision getAvgPrxPrecision() throws FieldNotFound 
  { org.quickfix.field.AvgPrxPrecision value = new org.quickfix.field.AvgPrxPrecision(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AvgPrxPrecision field) 
  { return isSetField(field); } 
  public boolean isSetAvgPrxPrecision() 
  { return isSetField(74); } 
  public void set(org.quickfix.field.NoPartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoPartyIDs get(org.quickfix.field.NoPartyIDs value) throws FieldNotFound 
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
    super(453, 447, 
    new int[] { 
               448, 
               447, 
               452, 
               523, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.PartyID value) 
  { setField(value); } 
  public org.quickfix.field.PartyID get(org.quickfix.field.PartyID value) throws FieldNotFound 
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
  public org.quickfix.field.PartyIDSource get(org.quickfix.field.PartyIDSource value) throws FieldNotFound 
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
  public org.quickfix.field.PartyRole get(org.quickfix.field.PartyRole value) throws FieldNotFound 
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
  public org.quickfix.field.PartySubID get(org.quickfix.field.PartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartySubID getPartySubID() throws FieldNotFound 
  { org.quickfix.field.PartySubID value = new org.quickfix.field.PartySubID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PartySubID field) 
  { return isSetField(field); } 
  public boolean isSetPartySubID() 
  { return isSetField(523); } 

} 

  public void set(org.quickfix.field.TradeDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeDate get(org.quickfix.field.TradeDate value) throws FieldNotFound 
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
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
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
  public org.quickfix.field.SettlmntTyp get(org.quickfix.field.SettlmntTyp value) throws FieldNotFound 
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
  public org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound 
  { org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.FutSettDate field) 
  { return isSetField(field); } 
  public boolean isSetFutSettDate() 
  { return isSetField(64); } 

  public void set(org.quickfix.field.GrossTradeAmt value) 
  { setField(value); } 
  public org.quickfix.field.GrossTradeAmt get(org.quickfix.field.GrossTradeAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.GrossTradeAmt getGrossTradeAmt() throws FieldNotFound 
  { org.quickfix.field.GrossTradeAmt value = new org.quickfix.field.GrossTradeAmt(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.GrossTradeAmt field) 
  { return isSetField(field); } 
  public boolean isSetGrossTradeAmt() 
  { return isSetField(381); } 

  public void set(org.quickfix.field.Concession value) 
  { setField(value); } 
  public org.quickfix.field.Concession get(org.quickfix.field.Concession value) throws FieldNotFound 
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
  public org.quickfix.field.TotalTakedown get(org.quickfix.field.TotalTakedown value) throws FieldNotFound 
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
  public org.quickfix.field.NetMoney get(org.quickfix.field.NetMoney value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NetMoney getNetMoney() throws FieldNotFound 
  { org.quickfix.field.NetMoney value = new org.quickfix.field.NetMoney(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NetMoney field) 
  { return isSetField(field); } 
  public boolean isSetNetMoney() 
  { return isSetField(118); } 

  public void set(org.quickfix.field.PositionEffect value) 
  { setField(value); } 
  public org.quickfix.field.PositionEffect get(org.quickfix.field.PositionEffect value) throws FieldNotFound 
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

  public void set(org.quickfix.field.NumDaysInterest value) 
  { setField(value); } 
  public org.quickfix.field.NumDaysInterest get(org.quickfix.field.NumDaysInterest value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NumDaysInterest getNumDaysInterest() throws FieldNotFound 
  { org.quickfix.field.NumDaysInterest value = new org.quickfix.field.NumDaysInterest(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NumDaysInterest field) 
  { return isSetField(field); } 
  public boolean isSetNumDaysInterest() 
  { return isSetField(157); } 

  public void set(org.quickfix.field.AccruedInterestRate value) 
  { setField(value); } 
  public org.quickfix.field.AccruedInterestRate get(org.quickfix.field.AccruedInterestRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccruedInterestRate getAccruedInterestRate() throws FieldNotFound 
  { org.quickfix.field.AccruedInterestRate value = new org.quickfix.field.AccruedInterestRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AccruedInterestRate field) 
  { return isSetField(field); } 
  public boolean isSetAccruedInterestRate() 
  { return isSetField(158); } 

  public void set(org.quickfix.field.TotalAccruedInterestAmt value) 
  { setField(value); } 
  public org.quickfix.field.TotalAccruedInterestAmt get(org.quickfix.field.TotalAccruedInterestAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotalAccruedInterestAmt getTotalAccruedInterestAmt() throws FieldNotFound 
  { org.quickfix.field.TotalAccruedInterestAmt value = new org.quickfix.field.TotalAccruedInterestAmt(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TotalAccruedInterestAmt field) 
  { return isSetField(field); } 
  public boolean isSetTotalAccruedInterestAmt() 
  { return isSetField(540); } 

  public void set(org.quickfix.field.LegalConfirm value) 
  { setField(value); } 
  public org.quickfix.field.LegalConfirm get(org.quickfix.field.LegalConfirm value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegalConfirm getLegalConfirm() throws FieldNotFound 
  { org.quickfix.field.LegalConfirm value = new org.quickfix.field.LegalConfirm(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegalConfirm field) 
  { return isSetField(field); } 
  public boolean isSetLegalConfirm() 
  { return isSetField(650); } 
  public void set(org.quickfix.field.NoAllocs value) 
  { setField(value); } 
  public org.quickfix.field.NoAllocs get(org.quickfix.field.NoAllocs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoAllocs getNoAllocs() throws FieldNotFound 
  { org.quickfix.field.NoAllocs value = new org.quickfix.field.NoAllocs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoAllocs field) 
  { return isSetField(field); } 
  public boolean isSetNoAllocs() 
  { return isSetField(78); } 

public static class NoAllocs extends Group { 
  public NoAllocs() { 
    super(78, 79, 
    new int[] { 
               79, 
               366, 
               80, 
               467, 
               81, 
               208, 
               209, 
               161, 
               360, 
               361, 
             12, 
             13, 
             479, 
             497, 
               153, 
               154, 
               119, 
               120, 
               155, 
               156, 
               159, 
               160, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.AllocAccount value) 
  { setField(value); } 
  public org.quickfix.field.AllocAccount get(org.quickfix.field.AllocAccount value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound 
  { org.quickfix.field.AllocAccount value = new org.quickfix.field.AllocAccount(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocAccount field) 
  { return isSetField(field); } 
  public boolean isSetAllocAccount() 
  { return isSetField(79); } 

  public void set(org.quickfix.field.AllocPrice value) 
  { setField(value); } 
  public org.quickfix.field.AllocPrice get(org.quickfix.field.AllocPrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocPrice getAllocPrice() throws FieldNotFound 
  { org.quickfix.field.AllocPrice value = new org.quickfix.field.AllocPrice(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocPrice field) 
  { return isSetField(field); } 
  public boolean isSetAllocPrice() 
  { return isSetField(366); } 

  public void set(org.quickfix.field.AllocQty value) 
  { setField(value); } 
  public org.quickfix.field.AllocQty get(org.quickfix.field.AllocQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocQty getAllocQty() throws FieldNotFound 
  { org.quickfix.field.AllocQty value = new org.quickfix.field.AllocQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocQty field) 
  { return isSetField(field); } 
  public boolean isSetAllocQty() 
  { return isSetField(80); } 

  public void set(org.quickfix.field.IndividualAllocID value) 
  { setField(value); } 
  public org.quickfix.field.IndividualAllocID get(org.quickfix.field.IndividualAllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IndividualAllocID getIndividualAllocID() throws FieldNotFound 
  { org.quickfix.field.IndividualAllocID value = new org.quickfix.field.IndividualAllocID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.IndividualAllocID field) 
  { return isSetField(field); } 
  public boolean isSetIndividualAllocID() 
  { return isSetField(467); } 

  public void set(org.quickfix.field.ProcessCode value) 
  { setField(value); } 
  public org.quickfix.field.ProcessCode get(org.quickfix.field.ProcessCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ProcessCode getProcessCode() throws FieldNotFound 
  { org.quickfix.field.ProcessCode value = new org.quickfix.field.ProcessCode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ProcessCode field) 
  { return isSetField(field); } 
  public boolean isSetProcessCode() 
  { return isSetField(81); } 

  public void set(org.quickfix.field.NotifyBrokerOfCredit value) 
  { setField(value); } 
  public org.quickfix.field.NotifyBrokerOfCredit get(org.quickfix.field.NotifyBrokerOfCredit value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NotifyBrokerOfCredit getNotifyBrokerOfCredit() throws FieldNotFound 
  { org.quickfix.field.NotifyBrokerOfCredit value = new org.quickfix.field.NotifyBrokerOfCredit(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NotifyBrokerOfCredit field) 
  { return isSetField(field); } 
  public boolean isSetNotifyBrokerOfCredit() 
  { return isSetField(208); } 

  public void set(org.quickfix.field.AllocHandlInst value) 
  { setField(value); } 
  public org.quickfix.field.AllocHandlInst get(org.quickfix.field.AllocHandlInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocHandlInst getAllocHandlInst() throws FieldNotFound 
  { org.quickfix.field.AllocHandlInst value = new org.quickfix.field.AllocHandlInst(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocHandlInst field) 
  { return isSetField(field); } 
  public boolean isSetAllocHandlInst() 
  { return isSetField(209); } 

  public void set(org.quickfix.field.AllocText value) 
  { setField(value); } 
  public org.quickfix.field.AllocText get(org.quickfix.field.AllocText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocText getAllocText() throws FieldNotFound 
  { org.quickfix.field.AllocText value = new org.quickfix.field.AllocText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocText field) 
  { return isSetField(field); } 
  public boolean isSetAllocText() 
  { return isSetField(161); } 

  public void set(org.quickfix.field.EncodedAllocTextLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedAllocTextLen get(org.quickfix.field.EncodedAllocTextLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedAllocTextLen getEncodedAllocTextLen() throws FieldNotFound 
  { org.quickfix.field.EncodedAllocTextLen value = new org.quickfix.field.EncodedAllocTextLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedAllocTextLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedAllocTextLen() 
  { return isSetField(360); } 

  public void set(org.quickfix.field.EncodedAllocText value) 
  { setField(value); } 
  public org.quickfix.field.EncodedAllocText get(org.quickfix.field.EncodedAllocText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedAllocText getEncodedAllocText() throws FieldNotFound 
  { org.quickfix.field.EncodedAllocText value = new org.quickfix.field.EncodedAllocText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedAllocText field) 
  { return isSetField(field); } 
  public boolean isSetEncodedAllocText() 
  { return isSetField(361); } 

  public void set(org.quickfix.field.AllocAvgPx value) 
  { setField(value); } 
  public org.quickfix.field.AllocAvgPx get(org.quickfix.field.AllocAvgPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocAvgPx getAllocAvgPx() throws FieldNotFound 
  { org.quickfix.field.AllocAvgPx value = new org.quickfix.field.AllocAvgPx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocAvgPx field) 
  { return isSetField(field); } 
  public boolean isSetAllocAvgPx() 
  { return isSetField(153); } 

  public void set(org.quickfix.field.AllocNetMoney value) 
  { setField(value); } 
  public org.quickfix.field.AllocNetMoney get(org.quickfix.field.AllocNetMoney value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocNetMoney getAllocNetMoney() throws FieldNotFound 
  { org.quickfix.field.AllocNetMoney value = new org.quickfix.field.AllocNetMoney(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocNetMoney field) 
  { return isSetField(field); } 
  public boolean isSetAllocNetMoney() 
  { return isSetField(154); } 

  public void set(org.quickfix.field.SettlCurrAmt value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrAmt get(org.quickfix.field.SettlCurrAmt value) throws FieldNotFound 
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
  public org.quickfix.field.SettlCurrency get(org.quickfix.field.SettlCurrency value) throws FieldNotFound 
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
  public org.quickfix.field.SettlCurrFxRate get(org.quickfix.field.SettlCurrFxRate value) throws FieldNotFound 
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
  public org.quickfix.field.SettlCurrFxRateCalc get(org.quickfix.field.SettlCurrFxRateCalc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrFxRateCalc getSettlCurrFxRateCalc() throws FieldNotFound 
  { org.quickfix.field.SettlCurrFxRateCalc value = new org.quickfix.field.SettlCurrFxRateCalc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlCurrFxRateCalc field) 
  { return isSetField(field); } 
  public boolean isSetSettlCurrFxRateCalc() 
  { return isSetField(156); } 

  public void set(org.quickfix.field.AccruedInterestAmt value) 
  { setField(value); } 
  public org.quickfix.field.AccruedInterestAmt get(org.quickfix.field.AccruedInterestAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccruedInterestAmt getAccruedInterestAmt() throws FieldNotFound 
  { org.quickfix.field.AccruedInterestAmt value = new org.quickfix.field.AccruedInterestAmt(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AccruedInterestAmt field) 
  { return isSetField(field); } 
  public boolean isSetAccruedInterestAmt() 
  { return isSetField(159); } 

  public void set(org.quickfix.field.SettlInstMode value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstMode get(org.quickfix.field.SettlInstMode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstMode getSettlInstMode() throws FieldNotFound 
  { org.quickfix.field.SettlInstMode value = new org.quickfix.field.SettlInstMode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlInstMode field) 
  { return isSetField(field); } 
  public boolean isSetSettlInstMode() 
  { return isSetField(160); } 

  public void set(org.quickfix.field.NoMiscFees value) 
  { setField(value); } 
  public org.quickfix.field.NoMiscFees get(org.quickfix.field.NoMiscFees value) throws FieldNotFound 
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
    super(136, 137, 
    new int[] { 
               137, 
               138, 
               139, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.MiscFeeAmt value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeAmt get(org.quickfix.field.MiscFeeAmt value) throws FieldNotFound 
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
  public org.quickfix.field.MiscFeeCurr get(org.quickfix.field.MiscFeeCurr value) throws FieldNotFound 
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
  public org.quickfix.field.MiscFeeType get(org.quickfix.field.MiscFeeType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeType getMiscFeeType() throws FieldNotFound 
  { org.quickfix.field.MiscFeeType value = new org.quickfix.field.MiscFeeType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MiscFeeType field) 
  { return isSetField(field); } 
  public boolean isSetMiscFeeType() 
  { return isSetField(139); } 

} 
  public void set(org.quickfix.field.NoNestedPartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoNestedPartyIDs get(org.quickfix.field.NoNestedPartyIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoNestedPartyIDs getNoNestedPartyIDs() throws FieldNotFound 
  { org.quickfix.field.NoNestedPartyIDs value = new org.quickfix.field.NoNestedPartyIDs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoNestedPartyIDs field) 
  { return isSetField(field); } 
  public boolean isSetNoNestedPartyIDs() 
  { return isSetField(539); } 

public static class NoNestedPartyIDs extends Group { 
  public NoNestedPartyIDs() { 
    super(539, 524, 
    new int[] { 
               524, 
               525, 
               538, 
               545, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.NestedPartyID value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyID get(org.quickfix.field.NestedPartyID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyID getNestedPartyID() throws FieldNotFound 
  { org.quickfix.field.NestedPartyID value = new org.quickfix.field.NestedPartyID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NestedPartyID field) 
  { return isSetField(field); } 
  public boolean isSetNestedPartyID() 
  { return isSetField(524); } 

  public void set(org.quickfix.field.NestedPartyIDSource value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyIDSource get(org.quickfix.field.NestedPartyIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyIDSource getNestedPartyIDSource() throws FieldNotFound 
  { org.quickfix.field.NestedPartyIDSource value = new org.quickfix.field.NestedPartyIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NestedPartyIDSource field) 
  { return isSetField(field); } 
  public boolean isSetNestedPartyIDSource() 
  { return isSetField(525); } 

  public void set(org.quickfix.field.NestedPartyRole value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyRole get(org.quickfix.field.NestedPartyRole value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyRole getNestedPartyRole() throws FieldNotFound 
  { org.quickfix.field.NestedPartyRole value = new org.quickfix.field.NestedPartyRole(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NestedPartyRole field) 
  { return isSetField(field); } 
  public boolean isSetNestedPartyRole() 
  { return isSetField(538); } 

  public void set(org.quickfix.field.NestedPartySubID value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartySubID get(org.quickfix.field.NestedPartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartySubID getNestedPartySubID() throws FieldNotFound 
  { org.quickfix.field.NestedPartySubID value = new org.quickfix.field.NestedPartySubID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NestedPartySubID field) 
  { return isSetField(field); } 
  public boolean isSetNestedPartySubID() 
  { return isSetField(545); } 

} 
  public void set(org.quickfix.field.Commission value) 
  { setField(value); } 
  public org.quickfix.field.Commission get(org.quickfix.field.Commission value) throws FieldNotFound 
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
  public org.quickfix.field.CommType get(org.quickfix.field.CommType value) throws FieldNotFound 
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
  public org.quickfix.field.CommCurrency get(org.quickfix.field.CommCurrency value) throws FieldNotFound 
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
  public org.quickfix.field.FundRenewWaiv get(org.quickfix.field.FundRenewWaiv value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FundRenewWaiv getFundRenewWaiv() throws FieldNotFound 
  { org.quickfix.field.FundRenewWaiv value = new org.quickfix.field.FundRenewWaiv(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.FundRenewWaiv field) 
  { return isSetField(field); } 
  public boolean isSetFundRenewWaiv() 
  { return isSetField(497); } 
} 
} 
