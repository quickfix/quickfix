package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class NewOrderMultileg extends Message 
{ 

  public NewOrderMultileg() 
  { 
    getHeader().setField(new MsgType("AB")); 
  } 
  public NewOrderMultileg(    
    org.quickfix.field.ClOrdID aClOrdID,    
    org.quickfix.field.HandlInst aHandlInst,    
    org.quickfix.field.Side aSide,    
    org.quickfix.field.TransactTime aTransactTime,    
    org.quickfix.field.OrdType aOrdType ) 
  {  
    getHeader().setField(new MsgType("AB")); 
    set(aClOrdID); 
    set(aHandlInst); 
    set(aSide); 
    set(aTransactTime); 
    set(aOrdType);  
  } 

  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecondaryClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryClOrdID get(org.quickfix.field.SecondaryClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryClOrdID getSecondaryClOrdID() throws FieldNotFound 
  { org.quickfix.field.SecondaryClOrdID value = new org.quickfix.field.SecondaryClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClOrdLinkID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdLinkID get(org.quickfix.field.ClOrdLinkID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdLinkID getClOrdLinkID() throws FieldNotFound 
  { org.quickfix.field.ClOrdLinkID value = new org.quickfix.field.ClOrdLinkID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Account value) 
  { setField(value); } 
  public org.quickfix.field.Account get(org.quickfix.field.Account value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Account getAccount() throws FieldNotFound 
  { org.quickfix.field.Account value = new org.quickfix.field.Account(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AccountType value) 
  { setField(value); } 
  public org.quickfix.field.AccountType get(org.quickfix.field.AccountType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccountType getAccountType() throws FieldNotFound 
  { org.quickfix.field.AccountType value = new org.quickfix.field.AccountType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.DayBookingInst value) 
  { setField(value); } 
  public org.quickfix.field.DayBookingInst get(org.quickfix.field.DayBookingInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DayBookingInst getDayBookingInst() throws FieldNotFound 
  { org.quickfix.field.DayBookingInst value = new org.quickfix.field.DayBookingInst(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BookingUnit value) 
  { setField(value); } 
  public org.quickfix.field.BookingUnit get(org.quickfix.field.BookingUnit value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BookingUnit getBookingUnit() throws FieldNotFound 
  { org.quickfix.field.BookingUnit value = new org.quickfix.field.BookingUnit(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PreallocMethod value) 
  { setField(value); } 
  public org.quickfix.field.PreallocMethod get(org.quickfix.field.PreallocMethod value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PreallocMethod getPreallocMethod() throws FieldNotFound 
  { org.quickfix.field.PreallocMethod value = new org.quickfix.field.PreallocMethod(); 
    getField(value); return value; } 

public static class NoAllocs extends Group { 
  public NoAllocs() { 
    super(78, 79, 
    new int[] { 
               79, 
               467, 
               80, 
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

  public void set(org.quickfix.field.IndividualAllocID value) 
  { setField(value); } 
  public org.quickfix.field.IndividualAllocID get(org.quickfix.field.IndividualAllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IndividualAllocID getIndividualAllocID() throws FieldNotFound 
  { org.quickfix.field.IndividualAllocID value = new org.quickfix.field.IndividualAllocID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AllocQty value) 
  { setField(value); } 
  public org.quickfix.field.AllocQty get(org.quickfix.field.AllocQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocQty getAllocQty() throws FieldNotFound 
  { org.quickfix.field.AllocQty value = new org.quickfix.field.AllocQty(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.SettlmntTyp value) 
  { setField(value); } 
  public org.quickfix.field.SettlmntTyp get(org.quickfix.field.SettlmntTyp value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlmntTyp getSettlmntTyp() throws FieldNotFound 
  { org.quickfix.field.SettlmntTyp value = new org.quickfix.field.SettlmntTyp(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.FutSettDate value) 
  { setField(value); } 
  public org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound 
  { org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashMargin value) 
  { setField(value); } 
  public org.quickfix.field.CashMargin get(org.quickfix.field.CashMargin value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashMargin getCashMargin() throws FieldNotFound 
  { org.quickfix.field.CashMargin value = new org.quickfix.field.CashMargin(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClearingFeeIndicator value) 
  { setField(value); } 
  public org.quickfix.field.ClearingFeeIndicator get(org.quickfix.field.ClearingFeeIndicator value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClearingFeeIndicator getClearingFeeIndicator() throws FieldNotFound 
  { org.quickfix.field.ClearingFeeIndicator value = new org.quickfix.field.ClearingFeeIndicator(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.HandlInst value) 
  { setField(value); } 
  public org.quickfix.field.HandlInst get(org.quickfix.field.HandlInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.HandlInst getHandlInst() throws FieldNotFound 
  { org.quickfix.field.HandlInst value = new org.quickfix.field.HandlInst(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecInst value) 
  { setField(value); } 
  public org.quickfix.field.ExecInst get(org.quickfix.field.ExecInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecInst getExecInst() throws FieldNotFound 
  { org.quickfix.field.ExecInst value = new org.quickfix.field.ExecInst(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MinQty value) 
  { setField(value); } 
  public org.quickfix.field.MinQty get(org.quickfix.field.MinQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MinQty getMinQty() throws FieldNotFound 
  { org.quickfix.field.MinQty value = new org.quickfix.field.MinQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MaxFloor value) 
  { setField(value); } 
  public org.quickfix.field.MaxFloor get(org.quickfix.field.MaxFloor value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaxFloor getMaxFloor() throws FieldNotFound 
  { org.quickfix.field.MaxFloor value = new org.quickfix.field.MaxFloor(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExDestination value) 
  { setField(value); } 
  public org.quickfix.field.ExDestination get(org.quickfix.field.ExDestination value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExDestination getExDestination() throws FieldNotFound 
  { org.quickfix.field.ExDestination value = new org.quickfix.field.ExDestination(); 
    getField(value); return value; } 

public static class NoTradingSessions extends Group { 
  public NoTradingSessions() { 
    super(386, 336, 
    new int[] { 
               336, 
               625, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.TradingSessionID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradingSessionSubID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.ProcessCode value) 
  { setField(value); } 
  public org.quickfix.field.ProcessCode get(org.quickfix.field.ProcessCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ProcessCode getProcessCode() throws FieldNotFound 
  { org.quickfix.field.ProcessCode value = new org.quickfix.field.ProcessCode(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PrevClosePx value) 
  { setField(value); } 
  public org.quickfix.field.PrevClosePx get(org.quickfix.field.PrevClosePx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PrevClosePx getPrevClosePx() throws FieldNotFound 
  { org.quickfix.field.PrevClosePx value = new org.quickfix.field.PrevClosePx(); 
    getField(value); return value; } 

public static class NoLegs extends Group { 
  public NoLegs() { 
    super(555, 564, 
    new int[] { 
             600, 
             601, 
             602, 
             603, 
             607, 
             608, 
             609, 
             610, 
             611, 
             248, 
             249, 
             250, 
             251, 
             252, 
             253, 
             257, 
             599, 
             596, 
             597, 
             598, 
             254, 
             612, 
             613, 
             614, 
             615, 
             616, 
             617, 
             618, 
             619, 
             620, 
             621, 
             622, 
             623, 
             624, 
               564, 
               565, 
               654, 
               566, 
               587, 
               588, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.LegPositionEffect value) 
  { setField(value); } 
  public org.quickfix.field.LegPositionEffect get(org.quickfix.field.LegPositionEffect value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegPositionEffect getLegPositionEffect() throws FieldNotFound 
  { org.quickfix.field.LegPositionEffect value = new org.quickfix.field.LegPositionEffect(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LegCoveredOrUncovered value) 
  { setField(value); } 
  public org.quickfix.field.LegCoveredOrUncovered get(org.quickfix.field.LegCoveredOrUncovered value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCoveredOrUncovered getLegCoveredOrUncovered() throws FieldNotFound 
  { org.quickfix.field.LegCoveredOrUncovered value = new org.quickfix.field.LegCoveredOrUncovered(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LegRefID value) 
  { setField(value); } 
  public org.quickfix.field.LegRefID get(org.quickfix.field.LegRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRefID getLegRefID() throws FieldNotFound 
  { org.quickfix.field.LegRefID value = new org.quickfix.field.LegRefID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LegPrice value) 
  { setField(value); } 
  public org.quickfix.field.LegPrice get(org.quickfix.field.LegPrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegPrice getLegPrice() throws FieldNotFound 
  { org.quickfix.field.LegPrice value = new org.quickfix.field.LegPrice(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LegSettlmntTyp value) 
  { setField(value); } 
  public org.quickfix.field.LegSettlmntTyp get(org.quickfix.field.LegSettlmntTyp value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSettlmntTyp getLegSettlmntTyp() throws FieldNotFound 
  { org.quickfix.field.LegSettlmntTyp value = new org.quickfix.field.LegSettlmntTyp(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LegFutSettDate value) 
  { setField(value); } 
  public org.quickfix.field.LegFutSettDate get(org.quickfix.field.LegFutSettDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegFutSettDate getLegFutSettDate() throws FieldNotFound 
  { org.quickfix.field.LegFutSettDate value = new org.quickfix.field.LegFutSettDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LegSymbol value) 
  { setField(value); } 
  public org.quickfix.field.LegSymbol get(org.quickfix.field.LegSymbol value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSymbol getLegSymbol() throws FieldNotFound 
  { org.quickfix.field.LegSymbol value = new org.quickfix.field.LegSymbol(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSymbolSfx value) 
  { setField(value); } 
  public org.quickfix.field.LegSymbolSfx get(org.quickfix.field.LegSymbolSfx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSymbolSfx getLegSymbolSfx() throws FieldNotFound 
  { org.quickfix.field.LegSymbolSfx value = new org.quickfix.field.LegSymbolSfx(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSecurityID value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityID get(org.quickfix.field.LegSecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityID getLegSecurityID() throws FieldNotFound 
  { org.quickfix.field.LegSecurityID value = new org.quickfix.field.LegSecurityID(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSecurityIDSource value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityIDSource get(org.quickfix.field.LegSecurityIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityIDSource getLegSecurityIDSource() throws FieldNotFound 
  { org.quickfix.field.LegSecurityIDSource value = new org.quickfix.field.LegSecurityIDSource(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegProduct value) 
  { setField(value); } 
  public org.quickfix.field.LegProduct get(org.quickfix.field.LegProduct value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegProduct getLegProduct() throws FieldNotFound 
  { org.quickfix.field.LegProduct value = new org.quickfix.field.LegProduct(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegCFICode value) 
  { setField(value); } 
  public org.quickfix.field.LegCFICode get(org.quickfix.field.LegCFICode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCFICode getLegCFICode() throws FieldNotFound 
  { org.quickfix.field.LegCFICode value = new org.quickfix.field.LegCFICode(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityType get(org.quickfix.field.LegSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityType getLegSecurityType() throws FieldNotFound 
  { org.quickfix.field.LegSecurityType value = new org.quickfix.field.LegSecurityType(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegMaturityMonthYear value) 
  { setField(value); } 
  public org.quickfix.field.LegMaturityMonthYear get(org.quickfix.field.LegMaturityMonthYear value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegMaturityMonthYear getLegMaturityMonthYear() throws FieldNotFound 
  { org.quickfix.field.LegMaturityMonthYear value = new org.quickfix.field.LegMaturityMonthYear(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegMaturityDate value) 
  { setField(value); } 
  public org.quickfix.field.LegMaturityDate get(org.quickfix.field.LegMaturityDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegMaturityDate getLegMaturityDate() throws FieldNotFound 
  { org.quickfix.field.LegMaturityDate value = new org.quickfix.field.LegMaturityDate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegCouponPaymentDate value) 
  { setField(value); } 
  public org.quickfix.field.LegCouponPaymentDate get(org.quickfix.field.LegCouponPaymentDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCouponPaymentDate getLegCouponPaymentDate() throws FieldNotFound 
  { org.quickfix.field.LegCouponPaymentDate value = new org.quickfix.field.LegCouponPaymentDate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegIssueDate value) 
  { setField(value); } 
  public org.quickfix.field.LegIssueDate get(org.quickfix.field.LegIssueDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegIssueDate getLegIssueDate() throws FieldNotFound 
  { org.quickfix.field.LegIssueDate value = new org.quickfix.field.LegIssueDate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegRepoCollateralSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.LegRepoCollateralSecurityType get(org.quickfix.field.LegRepoCollateralSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRepoCollateralSecurityType getLegRepoCollateralSecurityType() throws FieldNotFound 
  { org.quickfix.field.LegRepoCollateralSecurityType value = new org.quickfix.field.LegRepoCollateralSecurityType(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegRepurchaseTerm value) 
  { setField(value); } 
  public org.quickfix.field.LegRepurchaseTerm get(org.quickfix.field.LegRepurchaseTerm value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRepurchaseTerm getLegRepurchaseTerm() throws FieldNotFound 
  { org.quickfix.field.LegRepurchaseTerm value = new org.quickfix.field.LegRepurchaseTerm(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegRepurchaseRate value) 
  { setField(value); } 
  public org.quickfix.field.LegRepurchaseRate get(org.quickfix.field.LegRepurchaseRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRepurchaseRate getLegRepurchaseRate() throws FieldNotFound 
  { org.quickfix.field.LegRepurchaseRate value = new org.quickfix.field.LegRepurchaseRate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegFactor value) 
  { setField(value); } 
  public org.quickfix.field.LegFactor get(org.quickfix.field.LegFactor value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegFactor getLegFactor() throws FieldNotFound 
  { org.quickfix.field.LegFactor value = new org.quickfix.field.LegFactor(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegCreditRating value) 
  { setField(value); } 
  public org.quickfix.field.LegCreditRating get(org.quickfix.field.LegCreditRating value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCreditRating getLegCreditRating() throws FieldNotFound 
  { org.quickfix.field.LegCreditRating value = new org.quickfix.field.LegCreditRating(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegInstrRegistry value) 
  { setField(value); } 
  public org.quickfix.field.LegInstrRegistry get(org.quickfix.field.LegInstrRegistry value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegInstrRegistry getLegInstrRegistry() throws FieldNotFound 
  { org.quickfix.field.LegInstrRegistry value = new org.quickfix.field.LegInstrRegistry(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegCountryOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.LegCountryOfIssue get(org.quickfix.field.LegCountryOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCountryOfIssue getLegCountryOfIssue() throws FieldNotFound 
  { org.quickfix.field.LegCountryOfIssue value = new org.quickfix.field.LegCountryOfIssue(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegStateOrProvinceOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.LegStateOrProvinceOfIssue get(org.quickfix.field.LegStateOrProvinceOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegStateOrProvinceOfIssue getLegStateOrProvinceOfIssue() throws FieldNotFound 
  { org.quickfix.field.LegStateOrProvinceOfIssue value = new org.quickfix.field.LegStateOrProvinceOfIssue(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegLocaleOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.LegLocaleOfIssue get(org.quickfix.field.LegLocaleOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegLocaleOfIssue getLegLocaleOfIssue() throws FieldNotFound 
  { org.quickfix.field.LegLocaleOfIssue value = new org.quickfix.field.LegLocaleOfIssue(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegRedemptionDate value) 
  { setField(value); } 
  public org.quickfix.field.LegRedemptionDate get(org.quickfix.field.LegRedemptionDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRedemptionDate getLegRedemptionDate() throws FieldNotFound 
  { org.quickfix.field.LegRedemptionDate value = new org.quickfix.field.LegRedemptionDate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegStrikePrice value) 
  { setField(value); } 
  public org.quickfix.field.LegStrikePrice get(org.quickfix.field.LegStrikePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegStrikePrice getLegStrikePrice() throws FieldNotFound 
  { org.quickfix.field.LegStrikePrice value = new org.quickfix.field.LegStrikePrice(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegOptAttribute value) 
  { setField(value); } 
  public org.quickfix.field.LegOptAttribute get(org.quickfix.field.LegOptAttribute value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegOptAttribute getLegOptAttribute() throws FieldNotFound 
  { org.quickfix.field.LegOptAttribute value = new org.quickfix.field.LegOptAttribute(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegContractMultiplier value) 
  { setField(value); } 
  public org.quickfix.field.LegContractMultiplier get(org.quickfix.field.LegContractMultiplier value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegContractMultiplier getLegContractMultiplier() throws FieldNotFound 
  { org.quickfix.field.LegContractMultiplier value = new org.quickfix.field.LegContractMultiplier(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegCouponRate value) 
  { setField(value); } 
  public org.quickfix.field.LegCouponRate get(org.quickfix.field.LegCouponRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCouponRate getLegCouponRate() throws FieldNotFound 
  { org.quickfix.field.LegCouponRate value = new org.quickfix.field.LegCouponRate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSecurityExchange value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityExchange get(org.quickfix.field.LegSecurityExchange value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityExchange getLegSecurityExchange() throws FieldNotFound 
  { org.quickfix.field.LegSecurityExchange value = new org.quickfix.field.LegSecurityExchange(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegIssuer value) 
  { setField(value); } 
  public org.quickfix.field.LegIssuer get(org.quickfix.field.LegIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegIssuer getLegIssuer() throws FieldNotFound 
  { org.quickfix.field.LegIssuer value = new org.quickfix.field.LegIssuer(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.EncodedLegIssuerLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegIssuerLen get(org.quickfix.field.EncodedLegIssuerLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegIssuerLen getEncodedLegIssuerLen() throws FieldNotFound 
  { org.quickfix.field.EncodedLegIssuerLen value = new org.quickfix.field.EncodedLegIssuerLen(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.EncodedLegIssuer value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegIssuer get(org.quickfix.field.EncodedLegIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegIssuer getEncodedLegIssuer() throws FieldNotFound 
  { org.quickfix.field.EncodedLegIssuer value = new org.quickfix.field.EncodedLegIssuer(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityDesc get(org.quickfix.field.LegSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityDesc getLegSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.LegSecurityDesc value = new org.quickfix.field.LegSecurityDesc(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.EncodedLegSecurityDescLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegSecurityDescLen get(org.quickfix.field.EncodedLegSecurityDescLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegSecurityDescLen getEncodedLegSecurityDescLen() throws FieldNotFound 
  { org.quickfix.field.EncodedLegSecurityDescLen value = new org.quickfix.field.EncodedLegSecurityDescLen(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.EncodedLegSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegSecurityDesc get(org.quickfix.field.EncodedLegSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegSecurityDesc getEncodedLegSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.EncodedLegSecurityDesc value = new org.quickfix.field.EncodedLegSecurityDesc(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegRatioQty value) 
  { setField(value); } 
  public org.quickfix.field.LegRatioQty get(org.quickfix.field.LegRatioQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRatioQty getLegRatioQty() throws FieldNotFound 
  { org.quickfix.field.LegRatioQty value = new org.quickfix.field.LegRatioQty(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSide value) 
  { setField(value); } 
  public org.quickfix.field.LegSide get(org.quickfix.field.LegSide value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSide getLegSide() throws FieldNotFound 
  { org.quickfix.field.LegSide value = new org.quickfix.field.LegSide(); 
    getField(value); return value; } 
} 

  public void set(org.quickfix.field.LocateReqd value) 
  { setField(value); } 
  public org.quickfix.field.LocateReqd get(org.quickfix.field.LocateReqd value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LocateReqd getLocateReqd() throws FieldNotFound 
  { org.quickfix.field.LocateReqd value = new org.quickfix.field.LocateReqd(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.QuantityType value) 
  { setField(value); } 
  public org.quickfix.field.QuantityType get(org.quickfix.field.QuantityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuantityType getQuantityType() throws FieldNotFound 
  { org.quickfix.field.QuantityType value = new org.quickfix.field.QuantityType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrdType value) 
  { setField(value); } 
  public org.quickfix.field.OrdType get(org.quickfix.field.OrdType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrdType getOrdType() throws FieldNotFound 
  { org.quickfix.field.OrdType value = new org.quickfix.field.OrdType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PriceType value) 
  { setField(value); } 
  public org.quickfix.field.PriceType get(org.quickfix.field.PriceType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PriceType getPriceType() throws FieldNotFound 
  { org.quickfix.field.PriceType value = new org.quickfix.field.PriceType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Price value) 
  { setField(value); } 
  public org.quickfix.field.Price get(org.quickfix.field.Price value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Price getPrice() throws FieldNotFound 
  { org.quickfix.field.Price value = new org.quickfix.field.Price(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.StopPx value) 
  { setField(value); } 
  public org.quickfix.field.StopPx get(org.quickfix.field.StopPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StopPx getStopPx() throws FieldNotFound 
  { org.quickfix.field.StopPx value = new org.quickfix.field.StopPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ComplianceID value) 
  { setField(value); } 
  public org.quickfix.field.ComplianceID get(org.quickfix.field.ComplianceID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ComplianceID getComplianceID() throws FieldNotFound 
  { org.quickfix.field.ComplianceID value = new org.quickfix.field.ComplianceID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SolicitedFlag value) 
  { setField(value); } 
  public org.quickfix.field.SolicitedFlag get(org.quickfix.field.SolicitedFlag value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SolicitedFlag getSolicitedFlag() throws FieldNotFound 
  { org.quickfix.field.SolicitedFlag value = new org.quickfix.field.SolicitedFlag(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.IOIid value) 
  { setField(value); } 
  public org.quickfix.field.IOIid get(org.quickfix.field.IOIid value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IOIid getIOIid() throws FieldNotFound 
  { org.quickfix.field.IOIid value = new org.quickfix.field.IOIid(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.QuoteID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteID get(org.quickfix.field.QuoteID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteID getQuoteID() throws FieldNotFound 
  { org.quickfix.field.QuoteID value = new org.quickfix.field.QuoteID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TimeInForce value) 
  { setField(value); } 
  public org.quickfix.field.TimeInForce get(org.quickfix.field.TimeInForce value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TimeInForce getTimeInForce() throws FieldNotFound 
  { org.quickfix.field.TimeInForce value = new org.quickfix.field.TimeInForce(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EffectiveTime value) 
  { setField(value); } 
  public org.quickfix.field.EffectiveTime get(org.quickfix.field.EffectiveTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EffectiveTime getEffectiveTime() throws FieldNotFound 
  { org.quickfix.field.EffectiveTime value = new org.quickfix.field.EffectiveTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExpireDate value) 
  { setField(value); } 
  public org.quickfix.field.ExpireDate get(org.quickfix.field.ExpireDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExpireDate getExpireDate() throws FieldNotFound 
  { org.quickfix.field.ExpireDate value = new org.quickfix.field.ExpireDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExpireTime value) 
  { setField(value); } 
  public org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExpireTime getExpireTime() throws FieldNotFound 
  { org.quickfix.field.ExpireTime value = new org.quickfix.field.ExpireTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.GTBookingInst value) 
  { setField(value); } 
  public org.quickfix.field.GTBookingInst get(org.quickfix.field.GTBookingInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.GTBookingInst getGTBookingInst() throws FieldNotFound 
  { org.quickfix.field.GTBookingInst value = new org.quickfix.field.GTBookingInst(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrderCapacity value) 
  { setField(value); } 
  public org.quickfix.field.OrderCapacity get(org.quickfix.field.OrderCapacity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderCapacity getOrderCapacity() throws FieldNotFound 
  { org.quickfix.field.OrderCapacity value = new org.quickfix.field.OrderCapacity(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrderRestrictions value) 
  { setField(value); } 
  public org.quickfix.field.OrderRestrictions get(org.quickfix.field.OrderRestrictions value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderRestrictions getOrderRestrictions() throws FieldNotFound 
  { org.quickfix.field.OrderRestrictions value = new org.quickfix.field.OrderRestrictions(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CustOrderCapacity value) 
  { setField(value); } 
  public org.quickfix.field.CustOrderCapacity get(org.quickfix.field.CustOrderCapacity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CustOrderCapacity getCustOrderCapacity() throws FieldNotFound 
  { org.quickfix.field.CustOrderCapacity value = new org.quickfix.field.CustOrderCapacity(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ForexReq value) 
  { setField(value); } 
  public org.quickfix.field.ForexReq get(org.quickfix.field.ForexReq value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ForexReq getForexReq() throws FieldNotFound 
  { org.quickfix.field.ForexReq value = new org.quickfix.field.ForexReq(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrency value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrency get(org.quickfix.field.SettlCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound 
  { org.quickfix.field.SettlCurrency value = new org.quickfix.field.SettlCurrency(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Text value) 
  { setField(value); } 
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Text getText() throws FieldNotFound 
  { org.quickfix.field.Text value = new org.quickfix.field.Text(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EncodedTextLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound 
  { org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EncodedText value) 
  { setField(value); } 
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound 
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PositionEffect value) 
  { setField(value); } 
  public org.quickfix.field.PositionEffect get(org.quickfix.field.PositionEffect value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PositionEffect getPositionEffect() throws FieldNotFound 
  { org.quickfix.field.PositionEffect value = new org.quickfix.field.PositionEffect(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CoveredOrUncovered value) 
  { setField(value); } 
  public org.quickfix.field.CoveredOrUncovered get(org.quickfix.field.CoveredOrUncovered value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CoveredOrUncovered getCoveredOrUncovered() throws FieldNotFound 
  { org.quickfix.field.CoveredOrUncovered value = new org.quickfix.field.CoveredOrUncovered(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MaxShow value) 
  { setField(value); } 
  public org.quickfix.field.MaxShow get(org.quickfix.field.MaxShow value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaxShow getMaxShow() throws FieldNotFound 
  { org.quickfix.field.MaxShow value = new org.quickfix.field.MaxShow(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PegDifference value) 
  { setField(value); } 
  public org.quickfix.field.PegDifference get(org.quickfix.field.PegDifference value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PegDifference getPegDifference() throws FieldNotFound 
  { org.quickfix.field.PegDifference value = new org.quickfix.field.PegDifference(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.DiscretionInst value) 
  { setField(value); } 
  public org.quickfix.field.DiscretionInst get(org.quickfix.field.DiscretionInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DiscretionInst getDiscretionInst() throws FieldNotFound 
  { org.quickfix.field.DiscretionInst value = new org.quickfix.field.DiscretionInst(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.DiscretionOffset value) 
  { setField(value); } 
  public org.quickfix.field.DiscretionOffset get(org.quickfix.field.DiscretionOffset value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DiscretionOffset getDiscretionOffset() throws FieldNotFound 
  { org.quickfix.field.DiscretionOffset value = new org.quickfix.field.DiscretionOffset(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CancellationRights value) 
  { setField(value); } 
  public org.quickfix.field.CancellationRights get(org.quickfix.field.CancellationRights value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CancellationRights getCancellationRights() throws FieldNotFound 
  { org.quickfix.field.CancellationRights value = new org.quickfix.field.CancellationRights(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MoneyLaunderingStatus value) 
  { setField(value); } 
  public org.quickfix.field.MoneyLaunderingStatus get(org.quickfix.field.MoneyLaunderingStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MoneyLaunderingStatus getMoneyLaunderingStatus() throws FieldNotFound 
  { org.quickfix.field.MoneyLaunderingStatus value = new org.quickfix.field.MoneyLaunderingStatus(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.RegistID value) 
  { setField(value); } 
  public org.quickfix.field.RegistID get(org.quickfix.field.RegistID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistID getRegistID() throws FieldNotFound 
  { org.quickfix.field.RegistID value = new org.quickfix.field.RegistID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Designation value) 
  { setField(value); } 
  public org.quickfix.field.Designation get(org.quickfix.field.Designation value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Designation getDesignation() throws FieldNotFound 
  { org.quickfix.field.Designation value = new org.quickfix.field.Designation(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MultiLegRptTypeReq value) 
  { setField(value); } 
  public org.quickfix.field.MultiLegRptTypeReq get(org.quickfix.field.MultiLegRptTypeReq value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MultiLegRptTypeReq getMultiLegRptTypeReq() throws FieldNotFound 
  { org.quickfix.field.MultiLegRptTypeReq value = new org.quickfix.field.MultiLegRptTypeReq(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NetMoney value) 
  { setField(value); } 
  public org.quickfix.field.NetMoney get(org.quickfix.field.NetMoney value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NetMoney getNetMoney() throws FieldNotFound 
  { org.quickfix.field.NetMoney value = new org.quickfix.field.NetMoney(); 
    getField(value); return value; } 
} 
