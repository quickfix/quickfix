package org.quickfix.fix40; 
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
    org.quickfix.field.ExecTransType aExecTransType,    
    org.quickfix.field.OrdStatus aOrdStatus,    
    org.quickfix.field.Symbol aSymbol,    
    org.quickfix.field.Side aSide,    
    org.quickfix.field.OrderQty aOrderQty,    
    org.quickfix.field.LastShares aLastShares,    
    org.quickfix.field.LastPx aLastPx,    
    org.quickfix.field.CumQty aCumQty,    
    org.quickfix.field.AvgPx aAvgPx ) 
  {  
    getHeader().setField(new MsgType("8")); 
    set(aOrderID); 
    set(aExecID); 
    set(aExecTransType); 
    set(aOrdStatus); 
    set(aSymbol); 
    set(aSide); 
    set(aOrderQty); 
    set(aLastShares); 
    set(aLastPx); 
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
  public boolean isSet(org.quickfix.field.OrderID field) 
  { return isSetField(field); } 
  public boolean isSetOrderID() 
  { return isSetField(37); } 

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

  public void set(org.quickfix.field.ClientID value) 
  { setField(value); } 
  public org.quickfix.field.ClientID get(org.quickfix.field.ClientID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClientID getClientID() throws FieldNotFound 
  { org.quickfix.field.ClientID value = new org.quickfix.field.ClientID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ClientID field) 
  { return isSetField(field); } 
  public boolean isSetClientID() 
  { return isSetField(109); } 

  public void set(org.quickfix.field.ExecBroker value) 
  { setField(value); } 
  public org.quickfix.field.ExecBroker get(org.quickfix.field.ExecBroker value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecBroker getExecBroker() throws FieldNotFound 
  { org.quickfix.field.ExecBroker value = new org.quickfix.field.ExecBroker(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExecBroker field) 
  { return isSetField(field); } 
  public boolean isSetExecBroker() 
  { return isSetField(76); } 

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

  public void set(org.quickfix.field.ExecTransType value) 
  { setField(value); } 
  public org.quickfix.field.ExecTransType get(org.quickfix.field.ExecTransType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecTransType getExecTransType() throws FieldNotFound 
  { org.quickfix.field.ExecTransType value = new org.quickfix.field.ExecTransType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExecTransType field) 
  { return isSetField(field); } 
  public boolean isSetExecTransType() 
  { return isSetField(20); } 

  public void set(org.quickfix.field.ExecRefID value) 
  { setField(value); } 
  public org.quickfix.field.ExecRefID get(org.quickfix.field.ExecRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecRefID getExecRefID() throws FieldNotFound 
  { org.quickfix.field.ExecRefID value = new org.quickfix.field.ExecRefID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExecRefID field) 
  { return isSetField(field); } 
  public boolean isSetExecRefID() 
  { return isSetField(19); } 

  public void set(org.quickfix.field.OrdStatus value) 
  { setField(value); } 
  public org.quickfix.field.OrdStatus get(org.quickfix.field.OrdStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrdStatus getOrdStatus() throws FieldNotFound 
  { org.quickfix.field.OrdStatus value = new org.quickfix.field.OrdStatus(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrdStatus field) 
  { return isSetField(field); } 
  public boolean isSetOrdStatus() 
  { return isSetField(39); } 

  public void set(org.quickfix.field.OrdRejReason value) 
  { setField(value); } 
  public org.quickfix.field.OrdRejReason get(org.quickfix.field.OrdRejReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrdRejReason getOrdRejReason() throws FieldNotFound 
  { org.quickfix.field.OrdRejReason value = new org.quickfix.field.OrdRejReason(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrdRejReason field) 
  { return isSetField(field); } 
  public boolean isSetOrdRejReason() 
  { return isSetField(103); } 

  public void set(org.quickfix.field.Account value) 
  { setField(value); } 
  public org.quickfix.field.Account get(org.quickfix.field.Account value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Account getAccount() throws FieldNotFound 
  { org.quickfix.field.Account value = new org.quickfix.field.Account(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Account field) 
  { return isSetField(field); } 
  public boolean isSetAccount() 
  { return isSetField(1); } 

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

  public void set(org.quickfix.field.IDSource value) 
  { setField(value); } 
  public org.quickfix.field.IDSource get(org.quickfix.field.IDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IDSource getIDSource() throws FieldNotFound 
  { org.quickfix.field.IDSource value = new org.quickfix.field.IDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.IDSource field) 
  { return isSetField(field); } 
  public boolean isSetIDSource() 
  { return isSetField(22); } 

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

  public void set(org.quickfix.field.OrderQty value) 
  { setField(value); } 
  public org.quickfix.field.OrderQty get(org.quickfix.field.OrderQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderQty getOrderQty() throws FieldNotFound 
  { org.quickfix.field.OrderQty value = new org.quickfix.field.OrderQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderQty field) 
  { return isSetField(field); } 
  public boolean isSetOrderQty() 
  { return isSetField(38); } 

  public void set(org.quickfix.field.OrdType value) 
  { setField(value); } 
  public org.quickfix.field.OrdType get(org.quickfix.field.OrdType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrdType getOrdType() throws FieldNotFound 
  { org.quickfix.field.OrdType value = new org.quickfix.field.OrdType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrdType field) 
  { return isSetField(field); } 
  public boolean isSetOrdType() 
  { return isSetField(40); } 

  public void set(org.quickfix.field.Price value) 
  { setField(value); } 
  public org.quickfix.field.Price get(org.quickfix.field.Price value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Price getPrice() throws FieldNotFound 
  { org.quickfix.field.Price value = new org.quickfix.field.Price(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Price field) 
  { return isSetField(field); } 
  public boolean isSetPrice() 
  { return isSetField(44); } 

  public void set(org.quickfix.field.StopPx value) 
  { setField(value); } 
  public org.quickfix.field.StopPx get(org.quickfix.field.StopPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StopPx getStopPx() throws FieldNotFound 
  { org.quickfix.field.StopPx value = new org.quickfix.field.StopPx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.StopPx field) 
  { return isSetField(field); } 
  public boolean isSetStopPx() 
  { return isSetField(99); } 

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

  public void set(org.quickfix.field.TimeInForce value) 
  { setField(value); } 
  public org.quickfix.field.TimeInForce get(org.quickfix.field.TimeInForce value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TimeInForce getTimeInForce() throws FieldNotFound 
  { org.quickfix.field.TimeInForce value = new org.quickfix.field.TimeInForce(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TimeInForce field) 
  { return isSetField(field); } 
  public boolean isSetTimeInForce() 
  { return isSetField(59); } 

  public void set(org.quickfix.field.ExpireTime value) 
  { setField(value); } 
  public org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExpireTime getExpireTime() throws FieldNotFound 
  { org.quickfix.field.ExpireTime value = new org.quickfix.field.ExpireTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExpireTime field) 
  { return isSetField(field); } 
  public boolean isSetExpireTime() 
  { return isSetField(126); } 

  public void set(org.quickfix.field.ExecInst value) 
  { setField(value); } 
  public org.quickfix.field.ExecInst get(org.quickfix.field.ExecInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecInst getExecInst() throws FieldNotFound 
  { org.quickfix.field.ExecInst value = new org.quickfix.field.ExecInst(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExecInst field) 
  { return isSetField(field); } 
  public boolean isSetExecInst() 
  { return isSetField(18); } 

  public void set(org.quickfix.field.Rule80A value) 
  { setField(value); } 
  public org.quickfix.field.Rule80A get(org.quickfix.field.Rule80A value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Rule80A getRule80A() throws FieldNotFound 
  { org.quickfix.field.Rule80A value = new org.quickfix.field.Rule80A(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Rule80A field) 
  { return isSetField(field); } 
  public boolean isSetRule80A() 
  { return isSetField(47); } 

  public void set(org.quickfix.field.LastShares value) 
  { setField(value); } 
  public org.quickfix.field.LastShares get(org.quickfix.field.LastShares value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastShares getLastShares() throws FieldNotFound 
  { org.quickfix.field.LastShares value = new org.quickfix.field.LastShares(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LastShares field) 
  { return isSetField(field); } 
  public boolean isSetLastShares() 
  { return isSetField(32); } 

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

  public void set(org.quickfix.field.CumQty value) 
  { setField(value); } 
  public org.quickfix.field.CumQty get(org.quickfix.field.CumQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CumQty getCumQty() throws FieldNotFound 
  { org.quickfix.field.CumQty value = new org.quickfix.field.CumQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CumQty field) 
  { return isSetField(field); } 
  public boolean isSetCumQty() 
  { return isSetField(14); } 

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

  public void set(org.quickfix.field.ReportToExch value) 
  { setField(value); } 
  public org.quickfix.field.ReportToExch get(org.quickfix.field.ReportToExch value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ReportToExch getReportToExch() throws FieldNotFound 
  { org.quickfix.field.ReportToExch value = new org.quickfix.field.ReportToExch(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ReportToExch field) 
  { return isSetField(field); } 
  public boolean isSetReportToExch() 
  { return isSetField(113); } 

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
} 
