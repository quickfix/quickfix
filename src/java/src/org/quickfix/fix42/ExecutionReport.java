package org.quickfix.fix42; 
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
    org.quickfix.field.ExecType aExecType,    
    org.quickfix.field.OrdStatus aOrdStatus,    
    org.quickfix.field.Symbol aSymbol,    
    org.quickfix.field.Side aSide,    
    org.quickfix.field.LeavesQty aLeavesQty,    
    org.quickfix.field.CumQty aCumQty,    
    org.quickfix.field.AvgPx aAvgPx ) 
  {  
    getHeader().setField(new MsgType("8")); 
    set(aOrderID); 
    set(aExecID); 
    set(aExecTransType); 
    set(aExecType); 
    set(aOrdStatus); 
    set(aSymbol); 
    set(aSide); 
    set(aLeavesQty); 
    set(aCumQty); 
    set(aAvgPx);  
  } 

  public void set(org.quickfix.field.OrderID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound
  { 
    org.quickfix.field.OrderID value = new org.quickfix.field.OrderID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.SecondaryOrderID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.SecondaryOrderID get(org.quickfix.field.SecondaryOrderID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound
  { 
    org.quickfix.field.SecondaryOrderID value = new org.quickfix.field.SecondaryOrderID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ClOrdID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound
  { 
    org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OrigClOrdID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OrigClOrdID get(org.quickfix.field.OrigClOrdID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound
  { 
    org.quickfix.field.OrigClOrdID value = new org.quickfix.field.OrigClOrdID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ClientID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ClientID get(org.quickfix.field.ClientID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ClientID getClientID() throws FieldNotFound
  { 
    org.quickfix.field.ClientID value = new org.quickfix.field.ClientID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ExecBroker value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ExecBroker get(org.quickfix.field.ExecBroker value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ExecBroker getExecBroker() throws FieldNotFound
  { 
    org.quickfix.field.ExecBroker value = new org.quickfix.field.ExecBroker();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.NoContraBrokers value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.NoContraBrokers get(org.quickfix.field.NoContraBrokers value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.NoContraBrokers getNoContraBrokers() throws FieldNotFound
  { 
    org.quickfix.field.NoContraBrokers value = new org.quickfix.field.NoContraBrokers();  
    getField(value);  
    return value;  
  } 

public class NoContraBrokers extends Group { 
  public NoContraBrokers() { 
    super(382,375, new int[]{375,337,437,438,0}); 
  } 
  void set(org.quickfix.field.ContraBroker value) 
  { setField(value); } 
  org.quickfix.field.ContraBroker get(org.quickfix.field.ContraBroker value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.ContraBroker getContraBroker() throws FieldNotFound 
  { org.quickfix.field.ContraBroker value = new org.quickfix.field.ContraBroker(); 
    getField(value); return value; } 

  void set(org.quickfix.field.ContraTrader value) 
  { setField(value); } 
  org.quickfix.field.ContraTrader get(org.quickfix.field.ContraTrader value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.ContraTrader getContraTrader() throws FieldNotFound 
  { org.quickfix.field.ContraTrader value = new org.quickfix.field.ContraTrader(); 
    getField(value); return value; } 

  void set(org.quickfix.field.ContraTradeQty value) 
  { setField(value); } 
  org.quickfix.field.ContraTradeQty get(org.quickfix.field.ContraTradeQty value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.ContraTradeQty getContraTradeQty() throws FieldNotFound 
  { org.quickfix.field.ContraTradeQty value = new org.quickfix.field.ContraTradeQty(); 
    getField(value); return value; } 

  void set(org.quickfix.field.ContraTradeTime value) 
  { setField(value); } 
  org.quickfix.field.ContraTradeTime get(org.quickfix.field.ContraTradeTime value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.ContraTradeTime getContraTradeTime() throws FieldNotFound 
  { org.quickfix.field.ContraTradeTime value = new org.quickfix.field.ContraTradeTime(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.ListID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ListID getListID() throws FieldNotFound
  { 
    org.quickfix.field.ListID value = new org.quickfix.field.ListID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ExecID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ExecID get(org.quickfix.field.ExecID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ExecID getExecID() throws FieldNotFound
  { 
    org.quickfix.field.ExecID value = new org.quickfix.field.ExecID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ExecTransType value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ExecTransType get(org.quickfix.field.ExecTransType value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ExecTransType getExecTransType() throws FieldNotFound
  { 
    org.quickfix.field.ExecTransType value = new org.quickfix.field.ExecTransType();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ExecRefID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ExecRefID get(org.quickfix.field.ExecRefID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ExecRefID getExecRefID() throws FieldNotFound
  { 
    org.quickfix.field.ExecRefID value = new org.quickfix.field.ExecRefID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ExecType value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ExecType get(org.quickfix.field.ExecType value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ExecType getExecType() throws FieldNotFound
  { 
    org.quickfix.field.ExecType value = new org.quickfix.field.ExecType();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OrdStatus value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OrdStatus get(org.quickfix.field.OrdStatus value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OrdStatus getOrdStatus() throws FieldNotFound
  { 
    org.quickfix.field.OrdStatus value = new org.quickfix.field.OrdStatus();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OrdRejReason value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OrdRejReason get(org.quickfix.field.OrdRejReason value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OrdRejReason getOrdRejReason() throws FieldNotFound
  { 
    org.quickfix.field.OrdRejReason value = new org.quickfix.field.OrdRejReason();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ExecRestatementReason value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ExecRestatementReason get(org.quickfix.field.ExecRestatementReason value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ExecRestatementReason getExecRestatementReason() throws FieldNotFound
  { 
    org.quickfix.field.ExecRestatementReason value = new org.quickfix.field.ExecRestatementReason();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Account value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Account get(org.quickfix.field.Account value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Account getAccount() throws FieldNotFound
  { 
    org.quickfix.field.Account value = new org.quickfix.field.Account();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.SettlmntTyp value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.SettlmntTyp get(org.quickfix.field.SettlmntTyp value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.SettlmntTyp getSettlmntTyp() throws FieldNotFound
  { 
    org.quickfix.field.SettlmntTyp value = new org.quickfix.field.SettlmntTyp();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.FutSettDate value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound
  { 
    org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Symbol value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Symbol getSymbol() throws FieldNotFound
  { 
    org.quickfix.field.Symbol value = new org.quickfix.field.Symbol();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.SymbolSfx value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound
  { 
    org.quickfix.field.SymbolSfx value = new org.quickfix.field.SymbolSfx();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.SecurityID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound
  { 
    org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.IDSource value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.IDSource get(org.quickfix.field.IDSource value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.IDSource getIDSource() throws FieldNotFound
  { 
    org.quickfix.field.IDSource value = new org.quickfix.field.IDSource();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.SecurityType value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound
  { 
    org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.MaturityMonthYear value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound
  { 
    org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.MaturityDay value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.MaturityDay get(org.quickfix.field.MaturityDay value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.MaturityDay getMaturityDay() throws FieldNotFound
  { 
    org.quickfix.field.MaturityDay value = new org.quickfix.field.MaturityDay();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.PutOrCall value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.PutOrCall get(org.quickfix.field.PutOrCall value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.PutOrCall getPutOrCall() throws FieldNotFound
  { 
    org.quickfix.field.PutOrCall value = new org.quickfix.field.PutOrCall();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.StrikePrice value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound
  { 
    org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OptAttribute value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound
  { 
    org.quickfix.field.OptAttribute value = new org.quickfix.field.OptAttribute();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ContractMultiplier value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound
  { 
    org.quickfix.field.ContractMultiplier value = new org.quickfix.field.ContractMultiplier();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.CouponRate value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.CouponRate getCouponRate() throws FieldNotFound
  { 
    org.quickfix.field.CouponRate value = new org.quickfix.field.CouponRate();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.SecurityExchange value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound
  { 
    org.quickfix.field.SecurityExchange value = new org.quickfix.field.SecurityExchange();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Issuer value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Issuer getIssuer() throws FieldNotFound
  { 
    org.quickfix.field.Issuer value = new org.quickfix.field.Issuer();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.EncodedIssuerLen value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound
  { 
    org.quickfix.field.EncodedIssuerLen value = new org.quickfix.field.EncodedIssuerLen();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.EncodedIssuer value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound
  { 
    org.quickfix.field.EncodedIssuer value = new org.quickfix.field.EncodedIssuer();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.SecurityDesc value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound
  { 
    org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.EncodedSecurityDescLen value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound
  { 
    org.quickfix.field.EncodedSecurityDescLen value = new org.quickfix.field.EncodedSecurityDescLen();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.EncodedSecurityDesc value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound
  { 
    org.quickfix.field.EncodedSecurityDesc value = new org.quickfix.field.EncodedSecurityDesc();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Side value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Side getSide() throws FieldNotFound
  { 
    org.quickfix.field.Side value = new org.quickfix.field.Side();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OrderQty value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OrderQty get(org.quickfix.field.OrderQty value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OrderQty getOrderQty() throws FieldNotFound
  { 
    org.quickfix.field.OrderQty value = new org.quickfix.field.OrderQty();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.CashOrderQty value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.CashOrderQty get(org.quickfix.field.CashOrderQty value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.CashOrderQty getCashOrderQty() throws FieldNotFound
  { 
    org.quickfix.field.CashOrderQty value = new org.quickfix.field.CashOrderQty();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OrdType value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OrdType get(org.quickfix.field.OrdType value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OrdType getOrdType() throws FieldNotFound
  { 
    org.quickfix.field.OrdType value = new org.quickfix.field.OrdType();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Price value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Price get(org.quickfix.field.Price value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Price getPrice() throws FieldNotFound
  { 
    org.quickfix.field.Price value = new org.quickfix.field.Price();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.StopPx value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.StopPx get(org.quickfix.field.StopPx value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.StopPx getStopPx() throws FieldNotFound
  { 
    org.quickfix.field.StopPx value = new org.quickfix.field.StopPx();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.PegDifference value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.PegDifference get(org.quickfix.field.PegDifference value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.PegDifference getPegDifference() throws FieldNotFound
  { 
    org.quickfix.field.PegDifference value = new org.quickfix.field.PegDifference();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.DiscretionInst value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.DiscretionInst get(org.quickfix.field.DiscretionInst value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.DiscretionInst getDiscretionInst() throws FieldNotFound
  { 
    org.quickfix.field.DiscretionInst value = new org.quickfix.field.DiscretionInst();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.DiscretionOffset value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.DiscretionOffset get(org.quickfix.field.DiscretionOffset value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.DiscretionOffset getDiscretionOffset() throws FieldNotFound
  { 
    org.quickfix.field.DiscretionOffset value = new org.quickfix.field.DiscretionOffset();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Currency value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound
  { 
    org.quickfix.field.Currency value = new org.quickfix.field.Currency();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ComplianceID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ComplianceID get(org.quickfix.field.ComplianceID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ComplianceID getComplianceID() throws FieldNotFound
  { 
    org.quickfix.field.ComplianceID value = new org.quickfix.field.ComplianceID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.SolicitedFlag value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.SolicitedFlag get(org.quickfix.field.SolicitedFlag value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.SolicitedFlag getSolicitedFlag() throws FieldNotFound
  { 
    org.quickfix.field.SolicitedFlag value = new org.quickfix.field.SolicitedFlag();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.TimeInForce value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.TimeInForce get(org.quickfix.field.TimeInForce value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.TimeInForce getTimeInForce() throws FieldNotFound
  { 
    org.quickfix.field.TimeInForce value = new org.quickfix.field.TimeInForce();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.EffectiveTime value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EffectiveTime get(org.quickfix.field.EffectiveTime value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EffectiveTime getEffectiveTime() throws FieldNotFound
  { 
    org.quickfix.field.EffectiveTime value = new org.quickfix.field.EffectiveTime();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ExpireDate value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ExpireDate get(org.quickfix.field.ExpireDate value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ExpireDate getExpireDate() throws FieldNotFound
  { 
    org.quickfix.field.ExpireDate value = new org.quickfix.field.ExpireDate();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ExpireTime value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ExpireTime getExpireTime() throws FieldNotFound
  { 
    org.quickfix.field.ExpireTime value = new org.quickfix.field.ExpireTime();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ExecInst value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ExecInst get(org.quickfix.field.ExecInst value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ExecInst getExecInst() throws FieldNotFound
  { 
    org.quickfix.field.ExecInst value = new org.quickfix.field.ExecInst();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Rule80A value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Rule80A get(org.quickfix.field.Rule80A value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Rule80A getRule80A() throws FieldNotFound
  { 
    org.quickfix.field.Rule80A value = new org.quickfix.field.Rule80A();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.LastShares value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.LastShares get(org.quickfix.field.LastShares value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.LastShares getLastShares() throws FieldNotFound
  { 
    org.quickfix.field.LastShares value = new org.quickfix.field.LastShares();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.LastPx value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.LastPx get(org.quickfix.field.LastPx value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.LastPx getLastPx() throws FieldNotFound
  { 
    org.quickfix.field.LastPx value = new org.quickfix.field.LastPx();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.LastSpotRate value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.LastSpotRate get(org.quickfix.field.LastSpotRate value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.LastSpotRate getLastSpotRate() throws FieldNotFound
  { 
    org.quickfix.field.LastSpotRate value = new org.quickfix.field.LastSpotRate();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.LastForwardPoints value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.LastForwardPoints get(org.quickfix.field.LastForwardPoints value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.LastForwardPoints getLastForwardPoints() throws FieldNotFound
  { 
    org.quickfix.field.LastForwardPoints value = new org.quickfix.field.LastForwardPoints();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.LastMkt value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.LastMkt get(org.quickfix.field.LastMkt value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.LastMkt getLastMkt() throws FieldNotFound
  { 
    org.quickfix.field.LastMkt value = new org.quickfix.field.LastMkt();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.TradingSessionID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound
  { 
    org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.LastCapacity value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.LastCapacity get(org.quickfix.field.LastCapacity value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.LastCapacity getLastCapacity() throws FieldNotFound
  { 
    org.quickfix.field.LastCapacity value = new org.quickfix.field.LastCapacity();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.LeavesQty value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.LeavesQty get(org.quickfix.field.LeavesQty value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.LeavesQty getLeavesQty() throws FieldNotFound
  { 
    org.quickfix.field.LeavesQty value = new org.quickfix.field.LeavesQty();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.CumQty value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.CumQty get(org.quickfix.field.CumQty value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.CumQty getCumQty() throws FieldNotFound
  { 
    org.quickfix.field.CumQty value = new org.quickfix.field.CumQty();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.AvgPx value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.AvgPx get(org.quickfix.field.AvgPx value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.AvgPx getAvgPx() throws FieldNotFound
  { 
    org.quickfix.field.AvgPx value = new org.quickfix.field.AvgPx();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.DayOrderQty value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.DayOrderQty get(org.quickfix.field.DayOrderQty value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.DayOrderQty getDayOrderQty() throws FieldNotFound
  { 
    org.quickfix.field.DayOrderQty value = new org.quickfix.field.DayOrderQty();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.DayCumQty value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.DayCumQty get(org.quickfix.field.DayCumQty value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.DayCumQty getDayCumQty() throws FieldNotFound
  { 
    org.quickfix.field.DayCumQty value = new org.quickfix.field.DayCumQty();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.DayAvgPx value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.DayAvgPx get(org.quickfix.field.DayAvgPx value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.DayAvgPx getDayAvgPx() throws FieldNotFound
  { 
    org.quickfix.field.DayAvgPx value = new org.quickfix.field.DayAvgPx();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.GTBookingInst value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.GTBookingInst get(org.quickfix.field.GTBookingInst value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.GTBookingInst getGTBookingInst() throws FieldNotFound
  { 
    org.quickfix.field.GTBookingInst value = new org.quickfix.field.GTBookingInst();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.TradeDate value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.TradeDate get(org.quickfix.field.TradeDate value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.TradeDate getTradeDate() throws FieldNotFound
  { 
    org.quickfix.field.TradeDate value = new org.quickfix.field.TradeDate();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.TransactTime value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { 
    org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ReportToExch value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ReportToExch get(org.quickfix.field.ReportToExch value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ReportToExch getReportToExch() throws FieldNotFound
  { 
    org.quickfix.field.ReportToExch value = new org.quickfix.field.ReportToExch();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Commission value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Commission get(org.quickfix.field.Commission value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Commission getCommission() throws FieldNotFound
  { 
    org.quickfix.field.Commission value = new org.quickfix.field.Commission();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.CommType value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.CommType get(org.quickfix.field.CommType value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.CommType getCommType() throws FieldNotFound
  { 
    org.quickfix.field.CommType value = new org.quickfix.field.CommType();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.GrossTradeAmt value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.GrossTradeAmt get(org.quickfix.field.GrossTradeAmt value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.GrossTradeAmt getGrossTradeAmt() throws FieldNotFound
  { 
    org.quickfix.field.GrossTradeAmt value = new org.quickfix.field.GrossTradeAmt();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.SettlCurrAmt value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.SettlCurrAmt get(org.quickfix.field.SettlCurrAmt value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.SettlCurrAmt getSettlCurrAmt() throws FieldNotFound
  { 
    org.quickfix.field.SettlCurrAmt value = new org.quickfix.field.SettlCurrAmt();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.SettlCurrency value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.SettlCurrency get(org.quickfix.field.SettlCurrency value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound
  { 
    org.quickfix.field.SettlCurrency value = new org.quickfix.field.SettlCurrency();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.HandlInst value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.HandlInst get(org.quickfix.field.HandlInst value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.HandlInst getHandlInst() throws FieldNotFound
  { 
    org.quickfix.field.HandlInst value = new org.quickfix.field.HandlInst();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.MinQty value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.MinQty get(org.quickfix.field.MinQty value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.MinQty getMinQty() throws FieldNotFound
  { 
    org.quickfix.field.MinQty value = new org.quickfix.field.MinQty();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.MaxFloor value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.MaxFloor get(org.quickfix.field.MaxFloor value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.MaxFloor getMaxFloor() throws FieldNotFound
  { 
    org.quickfix.field.MaxFloor value = new org.quickfix.field.MaxFloor();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OpenClose value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OpenClose get(org.quickfix.field.OpenClose value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OpenClose getOpenClose() throws FieldNotFound
  { 
    org.quickfix.field.OpenClose value = new org.quickfix.field.OpenClose();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.MaxShow value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.MaxShow get(org.quickfix.field.MaxShow value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.MaxShow getMaxShow() throws FieldNotFound
  { 
    org.quickfix.field.MaxShow value = new org.quickfix.field.MaxShow();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Text value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Text getText() throws FieldNotFound
  { 
    org.quickfix.field.Text value = new org.quickfix.field.Text();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.EncodedTextLen value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound
  { 
    org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.EncodedText value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { 
    org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.FutSettDate2 value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.FutSettDate2 get(org.quickfix.field.FutSettDate2 value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound
  { 
    org.quickfix.field.FutSettDate2 value = new org.quickfix.field.FutSettDate2();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OrderQty2 value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OrderQty2 get(org.quickfix.field.OrderQty2 value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound
  { 
    org.quickfix.field.OrderQty2 value = new org.quickfix.field.OrderQty2();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ClearingFirm value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ClearingFirm get(org.quickfix.field.ClearingFirm value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ClearingFirm getClearingFirm() throws FieldNotFound
  { 
    org.quickfix.field.ClearingFirm value = new org.quickfix.field.ClearingFirm();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ClearingAccount value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ClearingAccount get(org.quickfix.field.ClearingAccount value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ClearingAccount getClearingAccount() throws FieldNotFound
  { 
    org.quickfix.field.ClearingAccount value = new org.quickfix.field.ClearingAccount();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.MultiLegReportingType value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.MultiLegReportingType get(org.quickfix.field.MultiLegReportingType value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.MultiLegReportingType getMultiLegReportingType() throws FieldNotFound
  { 
    org.quickfix.field.MultiLegReportingType value = new org.quickfix.field.MultiLegReportingType();  
    getField(value);  
    return value;  
  } 
} 
