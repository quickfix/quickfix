package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class ExecutionReport extends Message 
{ 

  public ExecutionReport() 
  { 
    getHeader().setField(new MsgType("8")); 
  } 
  public ExecutionReport(    
    org.quickfix.field.OrderID aOrderID,    
    org.quickfix.field.ExecID aExecID,    
    org.quickfix.field.ExecType aExecType,    
    org.quickfix.field.OrdStatus aOrdStatus,    
    org.quickfix.field.Side aSide,    
    org.quickfix.field.LeavesQty aLeavesQty,    
    org.quickfix.field.CumQty aCumQty,    
    org.quickfix.field.AvgPx aAvgPx ) 
  {  
    getHeader().setField(new MsgType("8")); 
    set(aOrderID); 
    set(aExecID); 
    set(aExecType); 
    set(aOrdStatus); 
    set(aSide); 
    set(aLeavesQty); 
    set(aCumQty); 
    set(aAvgPx);  
  } 

  public void set(org.quickfix.field.OrderID value) 
  { setField(value); } 
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound 
  { org.quickfix.field.OrderID value = new org.quickfix.field.OrderID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecondaryOrderID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryOrderID get(org.quickfix.field.SecondaryOrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound 
  { org.quickfix.field.SecondaryOrderID value = new org.quickfix.field.SecondaryOrderID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecondaryClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryClOrdID get(org.quickfix.field.SecondaryClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryClOrdID getSecondaryClOrdID() throws FieldNotFound 
  { org.quickfix.field.SecondaryClOrdID value = new org.quickfix.field.SecondaryClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecondaryExecID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryExecID get(org.quickfix.field.SecondaryExecID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryExecID getSecondaryExecID() throws FieldNotFound 
  { org.quickfix.field.SecondaryExecID value = new org.quickfix.field.SecondaryExecID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrigClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.OrigClOrdID get(org.quickfix.field.OrigClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound 
  { org.quickfix.field.OrigClOrdID value = new org.quickfix.field.OrigClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClOrdLinkID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdLinkID get(org.quickfix.field.ClOrdLinkID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdLinkID getClOrdLinkID() throws FieldNotFound 
  { org.quickfix.field.ClOrdLinkID value = new org.quickfix.field.ClOrdLinkID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradeOriginationDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeOriginationDate get(org.quickfix.field.TradeOriginationDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeOriginationDate getTradeOriginationDate() throws FieldNotFound 
  { org.quickfix.field.TradeOriginationDate value = new org.quickfix.field.TradeOriginationDate(); 
    getField(value); return value; } 

public static class NoContraBrokers extends Group { 
  public NoContraBrokers() { 
    super(382, 337, 
    new int[] { 
               375, 
               337, 
               437, 
               438, 
               655, 
               519, 
               520, 
               521, 
               564, 
               565, 
             539, 
             524, 
             525, 
             538, 
             545, 
               654, 
               566, 
               587, 
               588, 
               637, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.ContraBroker value) 
  { setField(value); } 
  public org.quickfix.field.ContraBroker get(org.quickfix.field.ContraBroker value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraBroker getContraBroker() throws FieldNotFound 
  { org.quickfix.field.ContraBroker value = new org.quickfix.field.ContraBroker(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraTrader value) 
  { setField(value); } 
  public org.quickfix.field.ContraTrader get(org.quickfix.field.ContraTrader value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraTrader getContraTrader() throws FieldNotFound 
  { org.quickfix.field.ContraTrader value = new org.quickfix.field.ContraTrader(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraTradeQty value) 
  { setField(value); } 
  public org.quickfix.field.ContraTradeQty get(org.quickfix.field.ContraTradeQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraTradeQty getContraTradeQty() throws FieldNotFound 
  { org.quickfix.field.ContraTradeQty value = new org.quickfix.field.ContraTradeQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraTradeTime value) 
  { setField(value); } 
  public org.quickfix.field.ContraTradeTime get(org.quickfix.field.ContraTradeTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraTradeTime getContraTradeTime() throws FieldNotFound 
  { org.quickfix.field.ContraTradeTime value = new org.quickfix.field.ContraTradeTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraLegRefID value) 
  { setField(value); } 
  public org.quickfix.field.ContraLegRefID get(org.quickfix.field.ContraLegRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraLegRefID getContraLegRefID() throws FieldNotFound 
  { org.quickfix.field.ContraLegRefID value = new org.quickfix.field.ContraLegRefID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtType value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtType get(org.quickfix.field.ContAmtType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtType getContAmtType() throws FieldNotFound 
  { org.quickfix.field.ContAmtType value = new org.quickfix.field.ContAmtType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtValue value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtValue get(org.quickfix.field.ContAmtValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtValue getContAmtValue() throws FieldNotFound 
  { org.quickfix.field.ContAmtValue value = new org.quickfix.field.ContAmtValue(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtCurr value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtCurr get(org.quickfix.field.ContAmtCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtCurr getContAmtCurr() throws FieldNotFound 
  { org.quickfix.field.ContAmtCurr value = new org.quickfix.field.ContAmtCurr(); 
    getField(value); return value; } 

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

  public void set(org.quickfix.field.LegLastPx value) 
  { setField(value); } 
  public org.quickfix.field.LegLastPx get(org.quickfix.field.LegLastPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegLastPx getLegLastPx() throws FieldNotFound 
  { org.quickfix.field.LegLastPx value = new org.quickfix.field.LegLastPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NoNestedPartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoNestedPartyIDs get(org.quickfix.field.NoNestedPartyIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoNestedPartyIDs getNoNestedPartyIDs() throws FieldNotFound 
  { org.quickfix.field.NoNestedPartyIDs value = new org.quickfix.field.NoNestedPartyIDs(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartyID value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyID get(org.quickfix.field.NestedPartyID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyID getNestedPartyID() throws FieldNotFound 
  { org.quickfix.field.NestedPartyID value = new org.quickfix.field.NestedPartyID(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartyIDSource value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyIDSource get(org.quickfix.field.NestedPartyIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyIDSource getNestedPartyIDSource() throws FieldNotFound 
  { org.quickfix.field.NestedPartyIDSource value = new org.quickfix.field.NestedPartyIDSource(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartyRole value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyRole get(org.quickfix.field.NestedPartyRole value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyRole getNestedPartyRole() throws FieldNotFound 
  { org.quickfix.field.NestedPartyRole value = new org.quickfix.field.NestedPartyRole(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartySubID value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartySubID get(org.quickfix.field.NestedPartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartySubID getNestedPartySubID() throws FieldNotFound 
  { org.quickfix.field.NestedPartySubID value = new org.quickfix.field.NestedPartySubID(); 
    getField(value); return value; } 
} 

  public void set(org.quickfix.field.ListID value) 
  { setField(value); } 
  public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ListID getListID() throws FieldNotFound 
  { org.quickfix.field.ListID value = new org.quickfix.field.ListID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CrossID value) 
  { setField(value); } 
  public org.quickfix.field.CrossID get(org.quickfix.field.CrossID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CrossID getCrossID() throws FieldNotFound 
  { org.quickfix.field.CrossID value = new org.quickfix.field.CrossID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrigCrossID value) 
  { setField(value); } 
  public org.quickfix.field.OrigCrossID get(org.quickfix.field.OrigCrossID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigCrossID getOrigCrossID() throws FieldNotFound 
  { org.quickfix.field.OrigCrossID value = new org.quickfix.field.OrigCrossID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CrossType value) 
  { setField(value); } 
  public org.quickfix.field.CrossType get(org.quickfix.field.CrossType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CrossType getCrossType() throws FieldNotFound 
  { org.quickfix.field.CrossType value = new org.quickfix.field.CrossType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecID value) 
  { setField(value); } 
  public org.quickfix.field.ExecID get(org.quickfix.field.ExecID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecID getExecID() throws FieldNotFound 
  { org.quickfix.field.ExecID value = new org.quickfix.field.ExecID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecRefID value) 
  { setField(value); } 
  public org.quickfix.field.ExecRefID get(org.quickfix.field.ExecRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecRefID getExecRefID() throws FieldNotFound 
  { org.quickfix.field.ExecRefID value = new org.quickfix.field.ExecRefID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecType value) 
  { setField(value); } 
  public org.quickfix.field.ExecType get(org.quickfix.field.ExecType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecType getExecType() throws FieldNotFound 
  { org.quickfix.field.ExecType value = new org.quickfix.field.ExecType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrdStatus value) 
  { setField(value); } 
  public org.quickfix.field.OrdStatus get(org.quickfix.field.OrdStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrdStatus getOrdStatus() throws FieldNotFound 
  { org.quickfix.field.OrdStatus value = new org.quickfix.field.OrdStatus(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.WorkingIndicator value) 
  { setField(value); } 
  public org.quickfix.field.WorkingIndicator get(org.quickfix.field.WorkingIndicator value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.WorkingIndicator getWorkingIndicator() throws FieldNotFound 
  { org.quickfix.field.WorkingIndicator value = new org.quickfix.field.WorkingIndicator(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrdRejReason value) 
  { setField(value); } 
  public org.quickfix.field.OrdRejReason get(org.quickfix.field.OrdRejReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrdRejReason getOrdRejReason() throws FieldNotFound 
  { org.quickfix.field.OrdRejReason value = new org.quickfix.field.OrdRejReason(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecRestatementReason value) 
  { setField(value); } 
  public org.quickfix.field.ExecRestatementReason get(org.quickfix.field.ExecRestatementReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecRestatementReason getExecRestatementReason() throws FieldNotFound 
  { org.quickfix.field.ExecRestatementReason value = new org.quickfix.field.ExecRestatementReason(); 
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

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
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

  public void set(org.quickfix.field.ExecInst value) 
  { setField(value); } 
  public org.quickfix.field.ExecInst get(org.quickfix.field.ExecInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecInst getExecInst() throws FieldNotFound 
  { org.quickfix.field.ExecInst value = new org.quickfix.field.ExecInst(); 
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

  public void set(org.quickfix.field.Rule80A value) 
  { setField(value); } 
  public org.quickfix.field.Rule80A get(org.quickfix.field.Rule80A value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Rule80A getRule80A() throws FieldNotFound 
  { org.quickfix.field.Rule80A value = new org.quickfix.field.Rule80A(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastQty value) 
  { setField(value); } 
  public org.quickfix.field.LastQty get(org.quickfix.field.LastQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastQty getLastQty() throws FieldNotFound 
  { org.quickfix.field.LastQty value = new org.quickfix.field.LastQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.UnderlyingLastQty value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingLastQty get(org.quickfix.field.UnderlyingLastQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingLastQty getUnderlyingLastQty() throws FieldNotFound 
  { org.quickfix.field.UnderlyingLastQty value = new org.quickfix.field.UnderlyingLastQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastPx value) 
  { setField(value); } 
  public org.quickfix.field.LastPx get(org.quickfix.field.LastPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastPx getLastPx() throws FieldNotFound 
  { org.quickfix.field.LastPx value = new org.quickfix.field.LastPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.UnderlyingLastPx value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingLastPx get(org.quickfix.field.UnderlyingLastPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingLastPx getUnderlyingLastPx() throws FieldNotFound 
  { org.quickfix.field.UnderlyingLastPx value = new org.quickfix.field.UnderlyingLastPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastSpotRate value) 
  { setField(value); } 
  public org.quickfix.field.LastSpotRate get(org.quickfix.field.LastSpotRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastSpotRate getLastSpotRate() throws FieldNotFound 
  { org.quickfix.field.LastSpotRate value = new org.quickfix.field.LastSpotRate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastForwardPoints value) 
  { setField(value); } 
  public org.quickfix.field.LastForwardPoints get(org.quickfix.field.LastForwardPoints value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastForwardPoints getLastForwardPoints() throws FieldNotFound 
  { org.quickfix.field.LastForwardPoints value = new org.quickfix.field.LastForwardPoints(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastMkt value) 
  { setField(value); } 
  public org.quickfix.field.LastMkt get(org.quickfix.field.LastMkt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastMkt getLastMkt() throws FieldNotFound 
  { org.quickfix.field.LastMkt value = new org.quickfix.field.LastMkt(); 
    getField(value); return value; } 

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

  public void set(org.quickfix.field.LastCapacity value) 
  { setField(value); } 
  public org.quickfix.field.LastCapacity get(org.quickfix.field.LastCapacity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastCapacity getLastCapacity() throws FieldNotFound 
  { org.quickfix.field.LastCapacity value = new org.quickfix.field.LastCapacity(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LeavesQty value) 
  { setField(value); } 
  public org.quickfix.field.LeavesQty get(org.quickfix.field.LeavesQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LeavesQty getLeavesQty() throws FieldNotFound 
  { org.quickfix.field.LeavesQty value = new org.quickfix.field.LeavesQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CumQty value) 
  { setField(value); } 
  public org.quickfix.field.CumQty get(org.quickfix.field.CumQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CumQty getCumQty() throws FieldNotFound 
  { org.quickfix.field.CumQty value = new org.quickfix.field.CumQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AvgPx value) 
  { setField(value); } 
  public org.quickfix.field.AvgPx get(org.quickfix.field.AvgPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AvgPx getAvgPx() throws FieldNotFound 
  { org.quickfix.field.AvgPx value = new org.quickfix.field.AvgPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.DayOrderQty value) 
  { setField(value); } 
  public org.quickfix.field.DayOrderQty get(org.quickfix.field.DayOrderQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DayOrderQty getDayOrderQty() throws FieldNotFound 
  { org.quickfix.field.DayOrderQty value = new org.quickfix.field.DayOrderQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.DayCumQty value) 
  { setField(value); } 
  public org.quickfix.field.DayCumQty get(org.quickfix.field.DayCumQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DayCumQty getDayCumQty() throws FieldNotFound 
  { org.quickfix.field.DayCumQty value = new org.quickfix.field.DayCumQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.DayAvgPx value) 
  { setField(value); } 
  public org.quickfix.field.DayAvgPx get(org.quickfix.field.DayAvgPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DayAvgPx getDayAvgPx() throws FieldNotFound 
  { org.quickfix.field.DayAvgPx value = new org.quickfix.field.DayAvgPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.GTBookingInst value) 
  { setField(value); } 
  public org.quickfix.field.GTBookingInst get(org.quickfix.field.GTBookingInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.GTBookingInst getGTBookingInst() throws FieldNotFound 
  { org.quickfix.field.GTBookingInst value = new org.quickfix.field.GTBookingInst(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradeDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeDate get(org.quickfix.field.TradeDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeDate getTradeDate() throws FieldNotFound 
  { org.quickfix.field.TradeDate value = new org.quickfix.field.TradeDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ReportToExch value) 
  { setField(value); } 
  public org.quickfix.field.ReportToExch get(org.quickfix.field.ReportToExch value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ReportToExch getReportToExch() throws FieldNotFound 
  { org.quickfix.field.ReportToExch value = new org.quickfix.field.ReportToExch(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.GrossTradeAmt value) 
  { setField(value); } 
  public org.quickfix.field.GrossTradeAmt get(org.quickfix.field.GrossTradeAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.GrossTradeAmt getGrossTradeAmt() throws FieldNotFound 
  { org.quickfix.field.GrossTradeAmt value = new org.quickfix.field.GrossTradeAmt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NumDaysInterest value) 
  { setField(value); } 
  public org.quickfix.field.NumDaysInterest get(org.quickfix.field.NumDaysInterest value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NumDaysInterest getNumDaysInterest() throws FieldNotFound 
  { org.quickfix.field.NumDaysInterest value = new org.quickfix.field.NumDaysInterest(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExDate value) 
  { setField(value); } 
  public org.quickfix.field.ExDate get(org.quickfix.field.ExDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExDate getExDate() throws FieldNotFound 
  { org.quickfix.field.ExDate value = new org.quickfix.field.ExDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AccruedInterestRate value) 
  { setField(value); } 
  public org.quickfix.field.AccruedInterestRate get(org.quickfix.field.AccruedInterestRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccruedInterestRate getAccruedInterestRate() throws FieldNotFound 
  { org.quickfix.field.AccruedInterestRate value = new org.quickfix.field.AccruedInterestRate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AccruedInterestAmt value) 
  { setField(value); } 
  public org.quickfix.field.AccruedInterestAmt get(org.quickfix.field.AccruedInterestAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccruedInterestAmt getAccruedInterestAmt() throws FieldNotFound 
  { org.quickfix.field.AccruedInterestAmt value = new org.quickfix.field.AccruedInterestAmt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradedFlatSwitch value) 
  { setField(value); } 
  public org.quickfix.field.TradedFlatSwitch get(org.quickfix.field.TradedFlatSwitch value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradedFlatSwitch getTradedFlatSwitch() throws FieldNotFound 
  { org.quickfix.field.TradedFlatSwitch value = new org.quickfix.field.TradedFlatSwitch(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BasisFeatureDate value) 
  { setField(value); } 
  public org.quickfix.field.BasisFeatureDate get(org.quickfix.field.BasisFeatureDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BasisFeatureDate getBasisFeatureDate() throws FieldNotFound 
  { org.quickfix.field.BasisFeatureDate value = new org.quickfix.field.BasisFeatureDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BasisFeaturePrice value) 
  { setField(value); } 
  public org.quickfix.field.BasisFeaturePrice get(org.quickfix.field.BasisFeaturePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BasisFeaturePrice getBasisFeaturePrice() throws FieldNotFound 
  { org.quickfix.field.BasisFeaturePrice value = new org.quickfix.field.BasisFeaturePrice(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Concession value) 
  { setField(value); } 
  public org.quickfix.field.Concession get(org.quickfix.field.Concession value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Concession getConcession() throws FieldNotFound 
  { org.quickfix.field.Concession value = new org.quickfix.field.Concession(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TotalTakedown value) 
  { setField(value); } 
  public org.quickfix.field.TotalTakedown get(org.quickfix.field.TotalTakedown value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotalTakedown getTotalTakedown() throws FieldNotFound 
  { org.quickfix.field.TotalTakedown value = new org.quickfix.field.TotalTakedown(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NetMoney value) 
  { setField(value); } 
  public org.quickfix.field.NetMoney get(org.quickfix.field.NetMoney value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NetMoney getNetMoney() throws FieldNotFound 
  { org.quickfix.field.NetMoney value = new org.quickfix.field.NetMoney(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrAmt value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrAmt get(org.quickfix.field.SettlCurrAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrAmt getSettlCurrAmt() throws FieldNotFound 
  { org.quickfix.field.SettlCurrAmt value = new org.quickfix.field.SettlCurrAmt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrency value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrency get(org.quickfix.field.SettlCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound 
  { org.quickfix.field.SettlCurrency value = new org.quickfix.field.SettlCurrency(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrFxRate value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrFxRate get(org.quickfix.field.SettlCurrFxRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrFxRate getSettlCurrFxRate() throws FieldNotFound 
  { org.quickfix.field.SettlCurrFxRate value = new org.quickfix.field.SettlCurrFxRate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrFxRateCalc value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrFxRateCalc get(org.quickfix.field.SettlCurrFxRateCalc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrFxRateCalc getSettlCurrFxRateCalc() throws FieldNotFound 
  { org.quickfix.field.SettlCurrFxRateCalc value = new org.quickfix.field.SettlCurrFxRateCalc(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.HandlInst value) 
  { setField(value); } 
  public org.quickfix.field.HandlInst get(org.quickfix.field.HandlInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.HandlInst getHandlInst() throws FieldNotFound 
  { org.quickfix.field.HandlInst value = new org.quickfix.field.HandlInst(); 
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

  public void set(org.quickfix.field.PositionEffect value) 
  { setField(value); } 
  public org.quickfix.field.PositionEffect get(org.quickfix.field.PositionEffect value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PositionEffect getPositionEffect() throws FieldNotFound 
  { org.quickfix.field.PositionEffect value = new org.quickfix.field.PositionEffect(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MaxShow value) 
  { setField(value); } 
  public org.quickfix.field.MaxShow get(org.quickfix.field.MaxShow value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaxShow getMaxShow() throws FieldNotFound 
  { org.quickfix.field.MaxShow value = new org.quickfix.field.MaxShow(); 
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

  public void set(org.quickfix.field.FutSettDate2 value) 
  { setField(value); } 
  public org.quickfix.field.FutSettDate2 get(org.quickfix.field.FutSettDate2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound 
  { org.quickfix.field.FutSettDate2 value = new org.quickfix.field.FutSettDate2(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrderQty2 value) 
  { setField(value); } 
  public org.quickfix.field.OrderQty2 get(org.quickfix.field.OrderQty2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound 
  { org.quickfix.field.OrderQty2 value = new org.quickfix.field.OrderQty2(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastForwardPoints2 value) 
  { setField(value); } 
  public org.quickfix.field.LastForwardPoints2 get(org.quickfix.field.LastForwardPoints2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastForwardPoints2 getLastForwardPoints2() throws FieldNotFound 
  { org.quickfix.field.LastForwardPoints2 value = new org.quickfix.field.LastForwardPoints2(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MultiLegReportingType value) 
  { setField(value); } 
  public org.quickfix.field.MultiLegReportingType get(org.quickfix.field.MultiLegReportingType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MultiLegReportingType getMultiLegReportingType() throws FieldNotFound 
  { org.quickfix.field.MultiLegReportingType value = new org.quickfix.field.MultiLegReportingType(); 
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

  public void set(org.quickfix.field.TransBkdTime value) 
  { setField(value); } 
  public org.quickfix.field.TransBkdTime get(org.quickfix.field.TransBkdTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransBkdTime getTransBkdTime() throws FieldNotFound 
  { org.quickfix.field.TransBkdTime value = new org.quickfix.field.TransBkdTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecValuationPoint value) 
  { setField(value); } 
  public org.quickfix.field.ExecValuationPoint get(org.quickfix.field.ExecValuationPoint value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecValuationPoint getExecValuationPoint() throws FieldNotFound 
  { org.quickfix.field.ExecValuationPoint value = new org.quickfix.field.ExecValuationPoint(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecPriceType value) 
  { setField(value); } 
  public org.quickfix.field.ExecPriceType get(org.quickfix.field.ExecPriceType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecPriceType getExecPriceType() throws FieldNotFound 
  { org.quickfix.field.ExecPriceType value = new org.quickfix.field.ExecPriceType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecPriceAdjustment value) 
  { setField(value); } 
  public org.quickfix.field.ExecPriceAdjustment get(org.quickfix.field.ExecPriceAdjustment value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecPriceAdjustment getExecPriceAdjustment() throws FieldNotFound 
  { org.quickfix.field.ExecPriceAdjustment value = new org.quickfix.field.ExecPriceAdjustment(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PriorityIndicator value) 
  { setField(value); } 
  public org.quickfix.field.PriorityIndicator get(org.quickfix.field.PriorityIndicator value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PriorityIndicator getPriorityIndicator() throws FieldNotFound 
  { org.quickfix.field.PriorityIndicator value = new org.quickfix.field.PriorityIndicator(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PriceImprovement value) 
  { setField(value); } 
  public org.quickfix.field.PriceImprovement get(org.quickfix.field.PriceImprovement value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PriceImprovement getPriceImprovement() throws FieldNotFound 
  { org.quickfix.field.PriceImprovement value = new org.quickfix.field.PriceImprovement(); 
    getField(value); return value; } 

public static class NoContAmts extends Group { 
  public NoContAmts() { 
    super(518, 337, 
    new int[] { 
               375, 
               337, 
               437, 
               438, 
               655, 
               519, 
               520, 
               521, 
               564, 
               565, 
             539, 
             524, 
             525, 
             538, 
             545, 
               654, 
               566, 
               587, 
               588, 
               637, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.ContraBroker value) 
  { setField(value); } 
  public org.quickfix.field.ContraBroker get(org.quickfix.field.ContraBroker value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraBroker getContraBroker() throws FieldNotFound 
  { org.quickfix.field.ContraBroker value = new org.quickfix.field.ContraBroker(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraTrader value) 
  { setField(value); } 
  public org.quickfix.field.ContraTrader get(org.quickfix.field.ContraTrader value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraTrader getContraTrader() throws FieldNotFound 
  { org.quickfix.field.ContraTrader value = new org.quickfix.field.ContraTrader(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraTradeQty value) 
  { setField(value); } 
  public org.quickfix.field.ContraTradeQty get(org.quickfix.field.ContraTradeQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraTradeQty getContraTradeQty() throws FieldNotFound 
  { org.quickfix.field.ContraTradeQty value = new org.quickfix.field.ContraTradeQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraTradeTime value) 
  { setField(value); } 
  public org.quickfix.field.ContraTradeTime get(org.quickfix.field.ContraTradeTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraTradeTime getContraTradeTime() throws FieldNotFound 
  { org.quickfix.field.ContraTradeTime value = new org.quickfix.field.ContraTradeTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraLegRefID value) 
  { setField(value); } 
  public org.quickfix.field.ContraLegRefID get(org.quickfix.field.ContraLegRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraLegRefID getContraLegRefID() throws FieldNotFound 
  { org.quickfix.field.ContraLegRefID value = new org.quickfix.field.ContraLegRefID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtType value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtType get(org.quickfix.field.ContAmtType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtType getContAmtType() throws FieldNotFound 
  { org.quickfix.field.ContAmtType value = new org.quickfix.field.ContAmtType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtValue value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtValue get(org.quickfix.field.ContAmtValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtValue getContAmtValue() throws FieldNotFound 
  { org.quickfix.field.ContAmtValue value = new org.quickfix.field.ContAmtValue(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtCurr value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtCurr get(org.quickfix.field.ContAmtCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtCurr getContAmtCurr() throws FieldNotFound 
  { org.quickfix.field.ContAmtCurr value = new org.quickfix.field.ContAmtCurr(); 
    getField(value); return value; } 

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

  public void set(org.quickfix.field.LegLastPx value) 
  { setField(value); } 
  public org.quickfix.field.LegLastPx get(org.quickfix.field.LegLastPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegLastPx getLegLastPx() throws FieldNotFound 
  { org.quickfix.field.LegLastPx value = new org.quickfix.field.LegLastPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NoNestedPartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoNestedPartyIDs get(org.quickfix.field.NoNestedPartyIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoNestedPartyIDs getNoNestedPartyIDs() throws FieldNotFound 
  { org.quickfix.field.NoNestedPartyIDs value = new org.quickfix.field.NoNestedPartyIDs(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartyID value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyID get(org.quickfix.field.NestedPartyID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyID getNestedPartyID() throws FieldNotFound 
  { org.quickfix.field.NestedPartyID value = new org.quickfix.field.NestedPartyID(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartyIDSource value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyIDSource get(org.quickfix.field.NestedPartyIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyIDSource getNestedPartyIDSource() throws FieldNotFound 
  { org.quickfix.field.NestedPartyIDSource value = new org.quickfix.field.NestedPartyIDSource(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartyRole value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyRole get(org.quickfix.field.NestedPartyRole value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyRole getNestedPartyRole() throws FieldNotFound 
  { org.quickfix.field.NestedPartyRole value = new org.quickfix.field.NestedPartyRole(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartySubID value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartySubID get(org.quickfix.field.NestedPartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartySubID getNestedPartySubID() throws FieldNotFound 
  { org.quickfix.field.NestedPartySubID value = new org.quickfix.field.NestedPartySubID(); 
    getField(value); return value; } 
} 

public static class NoLegs extends Group { 
  public NoLegs() { 
    super(555, 337, 
    new int[] { 
               375, 
               337, 
               437, 
               438, 
               655, 
               519, 
               520, 
               521, 
               564, 
               565, 
             539, 
             524, 
             525, 
             538, 
             545, 
               654, 
               566, 
               587, 
               588, 
               637, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.ContraBroker value) 
  { setField(value); } 
  public org.quickfix.field.ContraBroker get(org.quickfix.field.ContraBroker value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraBroker getContraBroker() throws FieldNotFound 
  { org.quickfix.field.ContraBroker value = new org.quickfix.field.ContraBroker(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraTrader value) 
  { setField(value); } 
  public org.quickfix.field.ContraTrader get(org.quickfix.field.ContraTrader value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraTrader getContraTrader() throws FieldNotFound 
  { org.quickfix.field.ContraTrader value = new org.quickfix.field.ContraTrader(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraTradeQty value) 
  { setField(value); } 
  public org.quickfix.field.ContraTradeQty get(org.quickfix.field.ContraTradeQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraTradeQty getContraTradeQty() throws FieldNotFound 
  { org.quickfix.field.ContraTradeQty value = new org.quickfix.field.ContraTradeQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraTradeTime value) 
  { setField(value); } 
  public org.quickfix.field.ContraTradeTime get(org.quickfix.field.ContraTradeTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraTradeTime getContraTradeTime() throws FieldNotFound 
  { org.quickfix.field.ContraTradeTime value = new org.quickfix.field.ContraTradeTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContraLegRefID value) 
  { setField(value); } 
  public org.quickfix.field.ContraLegRefID get(org.quickfix.field.ContraLegRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContraLegRefID getContraLegRefID() throws FieldNotFound 
  { org.quickfix.field.ContraLegRefID value = new org.quickfix.field.ContraLegRefID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtType value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtType get(org.quickfix.field.ContAmtType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtType getContAmtType() throws FieldNotFound 
  { org.quickfix.field.ContAmtType value = new org.quickfix.field.ContAmtType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtValue value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtValue get(org.quickfix.field.ContAmtValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtValue getContAmtValue() throws FieldNotFound 
  { org.quickfix.field.ContAmtValue value = new org.quickfix.field.ContAmtValue(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtCurr value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtCurr get(org.quickfix.field.ContAmtCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtCurr getContAmtCurr() throws FieldNotFound 
  { org.quickfix.field.ContAmtCurr value = new org.quickfix.field.ContAmtCurr(); 
    getField(value); return value; } 

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

  public void set(org.quickfix.field.LegLastPx value) 
  { setField(value); } 
  public org.quickfix.field.LegLastPx get(org.quickfix.field.LegLastPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegLastPx getLegLastPx() throws FieldNotFound 
  { org.quickfix.field.LegLastPx value = new org.quickfix.field.LegLastPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NoNestedPartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoNestedPartyIDs get(org.quickfix.field.NoNestedPartyIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoNestedPartyIDs getNoNestedPartyIDs() throws FieldNotFound 
  { org.quickfix.field.NoNestedPartyIDs value = new org.quickfix.field.NoNestedPartyIDs(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartyID value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyID get(org.quickfix.field.NestedPartyID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyID getNestedPartyID() throws FieldNotFound 
  { org.quickfix.field.NestedPartyID value = new org.quickfix.field.NestedPartyID(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartyIDSource value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyIDSource get(org.quickfix.field.NestedPartyIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyIDSource getNestedPartyIDSource() throws FieldNotFound 
  { org.quickfix.field.NestedPartyIDSource value = new org.quickfix.field.NestedPartyIDSource(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartyRole value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyRole get(org.quickfix.field.NestedPartyRole value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyRole getNestedPartyRole() throws FieldNotFound 
  { org.quickfix.field.NestedPartyRole value = new org.quickfix.field.NestedPartyRole(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NestedPartySubID value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartySubID get(org.quickfix.field.NestedPartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartySubID getNestedPartySubID() throws FieldNotFound 
  { org.quickfix.field.NestedPartySubID value = new org.quickfix.field.NestedPartySubID(); 
    getField(value); return value; } 
} 
} 
