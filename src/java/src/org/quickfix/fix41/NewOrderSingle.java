package org.quickfix.fix41; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class NewOrderSingle extends Message 
{ 

  public NewOrderSingle() 
  { 
    getHeader().setField(new MsgType("D")); 
  } 
  public NewOrderSingle(    
    org.quickfix.field.ClOrdID aClOrdID,    
    org.quickfix.field.HandlInst aHandlInst,    
    org.quickfix.field.Symbol aSymbol,    
    org.quickfix.field.Side aSide,    
    org.quickfix.field.OrdType aOrdType ) 
  {  
    getHeader().setField(new MsgType("D")); 
    set(aClOrdID); 
    set(aHandlInst); 
    set(aSymbol); 
    set(aSide); 
    set(aOrdType);  
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

  public void set(org.quickfix.field.HandlInst value) 
  { setField(value); } 
  public org.quickfix.field.HandlInst get(org.quickfix.field.HandlInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.HandlInst getHandlInst() throws FieldNotFound 
  { org.quickfix.field.HandlInst value = new org.quickfix.field.HandlInst(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.HandlInst field) 
  { return isSetField(field); } 
  public boolean isSetHandlInst() 
  { return isSetField(21); } 

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

  public void set(org.quickfix.field.MinQty value) 
  { setField(value); } 
  public org.quickfix.field.MinQty get(org.quickfix.field.MinQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MinQty getMinQty() throws FieldNotFound 
  { org.quickfix.field.MinQty value = new org.quickfix.field.MinQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MinQty field) 
  { return isSetField(field); } 
  public boolean isSetMinQty() 
  { return isSetField(110); } 

  public void set(org.quickfix.field.MaxFloor value) 
  { setField(value); } 
  public org.quickfix.field.MaxFloor get(org.quickfix.field.MaxFloor value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaxFloor getMaxFloor() throws FieldNotFound 
  { org.quickfix.field.MaxFloor value = new org.quickfix.field.MaxFloor(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MaxFloor field) 
  { return isSetField(field); } 
  public boolean isSetMaxFloor() 
  { return isSetField(111); } 

  public void set(org.quickfix.field.ExDestination value) 
  { setField(value); } 
  public org.quickfix.field.ExDestination get(org.quickfix.field.ExDestination value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExDestination getExDestination() throws FieldNotFound 
  { org.quickfix.field.ExDestination value = new org.quickfix.field.ExDestination(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExDestination field) 
  { return isSetField(field); } 
  public boolean isSetExDestination() 
  { return isSetField(100); } 

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

  public void set(org.quickfix.field.MaturityDay value) 
  { setField(value); } 
  public org.quickfix.field.MaturityDay get(org.quickfix.field.MaturityDay value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaturityDay getMaturityDay() throws FieldNotFound 
  { org.quickfix.field.MaturityDay value = new org.quickfix.field.MaturityDay(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MaturityDay field) 
  { return isSetField(field); } 
  public boolean isSetMaturityDay() 
  { return isSetField(205); } 

  public void set(org.quickfix.field.PutOrCall value) 
  { setField(value); } 
  public org.quickfix.field.PutOrCall get(org.quickfix.field.PutOrCall value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PutOrCall getPutOrCall() throws FieldNotFound 
  { org.quickfix.field.PutOrCall value = new org.quickfix.field.PutOrCall(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PutOrCall field) 
  { return isSetField(field); } 
  public boolean isSetPutOrCall() 
  { return isSetField(201); } 

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

  public void set(org.quickfix.field.PrevClosePx value) 
  { setField(value); } 
  public org.quickfix.field.PrevClosePx get(org.quickfix.field.PrevClosePx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PrevClosePx getPrevClosePx() throws FieldNotFound 
  { org.quickfix.field.PrevClosePx value = new org.quickfix.field.PrevClosePx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PrevClosePx field) 
  { return isSetField(field); } 
  public boolean isSetPrevClosePx() 
  { return isSetField(140); } 

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

  public void set(org.quickfix.field.LocateReqd value) 
  { setField(value); } 
  public org.quickfix.field.LocateReqd get(org.quickfix.field.LocateReqd value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LocateReqd getLocateReqd() throws FieldNotFound 
  { org.quickfix.field.LocateReqd value = new org.quickfix.field.LocateReqd(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LocateReqd field) 
  { return isSetField(field); } 
  public boolean isSetLocateReqd() 
  { return isSetField(114); } 

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

  public void set(org.quickfix.field.CashOrderQty value) 
  { setField(value); } 
  public org.quickfix.field.CashOrderQty get(org.quickfix.field.CashOrderQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashOrderQty getCashOrderQty() throws FieldNotFound 
  { org.quickfix.field.CashOrderQty value = new org.quickfix.field.CashOrderQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CashOrderQty field) 
  { return isSetField(field); } 
  public boolean isSetCashOrderQty() 
  { return isSetField(152); } 

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

  public void set(org.quickfix.field.IOIid value) 
  { setField(value); } 
  public org.quickfix.field.IOIid get(org.quickfix.field.IOIid value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IOIid getIOIid() throws FieldNotFound 
  { org.quickfix.field.IOIid value = new org.quickfix.field.IOIid(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.IOIid field) 
  { return isSetField(field); } 
  public boolean isSetIOIid() 
  { return isSetField(23); } 

  public void set(org.quickfix.field.QuoteID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteID get(org.quickfix.field.QuoteID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteID getQuoteID() throws FieldNotFound 
  { org.quickfix.field.QuoteID value = new org.quickfix.field.QuoteID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteID field) 
  { return isSetField(field); } 
  public boolean isSetQuoteID() 
  { return isSetField(117); } 

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

  public void set(org.quickfix.field.ForexReq value) 
  { setField(value); } 
  public org.quickfix.field.ForexReq get(org.quickfix.field.ForexReq value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ForexReq getForexReq() throws FieldNotFound 
  { org.quickfix.field.ForexReq value = new org.quickfix.field.ForexReq(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ForexReq field) 
  { return isSetField(field); } 
  public boolean isSetForexReq() 
  { return isSetField(121); } 

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

  public void set(org.quickfix.field.FutSettDate2 value) 
  { setField(value); } 
  public org.quickfix.field.FutSettDate2 get(org.quickfix.field.FutSettDate2 value) throws FieldNotFound 
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
  public org.quickfix.field.OrderQty2 get(org.quickfix.field.OrderQty2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound 
  { org.quickfix.field.OrderQty2 value = new org.quickfix.field.OrderQty2(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderQty2 field) 
  { return isSetField(field); } 
  public boolean isSetOrderQty2() 
  { return isSetField(192); } 

  public void set(org.quickfix.field.OpenClose value) 
  { setField(value); } 
  public org.quickfix.field.OpenClose get(org.quickfix.field.OpenClose value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OpenClose getOpenClose() throws FieldNotFound 
  { org.quickfix.field.OpenClose value = new org.quickfix.field.OpenClose(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OpenClose field) 
  { return isSetField(field); } 
  public boolean isSetOpenClose() 
  { return isSetField(77); } 

  public void set(org.quickfix.field.CoveredOrUncovered value) 
  { setField(value); } 
  public org.quickfix.field.CoveredOrUncovered get(org.quickfix.field.CoveredOrUncovered value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CoveredOrUncovered getCoveredOrUncovered() throws FieldNotFound 
  { org.quickfix.field.CoveredOrUncovered value = new org.quickfix.field.CoveredOrUncovered(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CoveredOrUncovered field) 
  { return isSetField(field); } 
  public boolean isSetCoveredOrUncovered() 
  { return isSetField(203); } 

  public void set(org.quickfix.field.CustomerOrFirm value) 
  { setField(value); } 
  public org.quickfix.field.CustomerOrFirm get(org.quickfix.field.CustomerOrFirm value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CustomerOrFirm getCustomerOrFirm() throws FieldNotFound 
  { org.quickfix.field.CustomerOrFirm value = new org.quickfix.field.CustomerOrFirm(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CustomerOrFirm field) 
  { return isSetField(field); } 
  public boolean isSetCustomerOrFirm() 
  { return isSetField(204); } 

  public void set(org.quickfix.field.MaxShow value) 
  { setField(value); } 
  public org.quickfix.field.MaxShow get(org.quickfix.field.MaxShow value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaxShow getMaxShow() throws FieldNotFound 
  { org.quickfix.field.MaxShow value = new org.quickfix.field.MaxShow(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MaxShow field) 
  { return isSetField(field); } 
  public boolean isSetMaxShow() 
  { return isSetField(210); } 

  public void set(org.quickfix.field.PegDifference value) 
  { setField(value); } 
  public org.quickfix.field.PegDifference get(org.quickfix.field.PegDifference value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PegDifference getPegDifference() throws FieldNotFound 
  { org.quickfix.field.PegDifference value = new org.quickfix.field.PegDifference(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PegDifference field) 
  { return isSetField(field); } 
  public boolean isSetPegDifference() 
  { return isSetField(211); } 
} 
