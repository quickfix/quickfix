package org.quickfix.fix41; 
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
    org.quickfix.field.Side aSide,    
    org.quickfix.field.Symbol aSymbol,    
    org.quickfix.field.Shares aShares,    
    org.quickfix.field.AvgPx aAvgPx,    
    org.quickfix.field.TradeDate aTradeDate ) 
  {  
    getHeader().setField(new MsgType("J")); 
    set(aAllocID); 
    set(aAllocTransType); 
    set(aSide); 
    set(aSymbol); 
    set(aShares); 
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
               66, 
               105, 
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

  public void set(org.quickfix.field.WaveNo value) 
  { setField(value); } 
  public org.quickfix.field.WaveNo get(org.quickfix.field.WaveNo value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.WaveNo getWaveNo() throws FieldNotFound 
  { org.quickfix.field.WaveNo value = new org.quickfix.field.WaveNo(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.WaveNo field) 
  { return isSetField(field); } 
  public boolean isSetWaveNo() 
  { return isSetField(105); } 

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
               31, 
               29, 
               0 } 
); 
  } 
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

  public void set(org.quickfix.field.Shares value) 
  { setField(value); } 
  public org.quickfix.field.Shares get(org.quickfix.field.Shares value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Shares getShares() throws FieldNotFound 
  { org.quickfix.field.Shares value = new org.quickfix.field.Shares(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Shares field) 
  { return isSetField(field); } 
  public boolean isSetShares() 
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
    super(78, 12, 
    new int[] { 
               79, 
               80, 
               81, 
               92, 
               208, 
               209, 
               161, 
               76, 
               109, 
               12, 
               13, 
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

  public void set(org.quickfix.field.AllocShares value) 
  { setField(value); } 
  public org.quickfix.field.AllocShares get(org.quickfix.field.AllocShares value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocShares getAllocShares() throws FieldNotFound 
  { org.quickfix.field.AllocShares value = new org.quickfix.field.AllocShares(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocShares field) 
  { return isSetField(field); } 
  public boolean isSetAllocShares() 
  { return isSetField(80); } 

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

  public void set(org.quickfix.field.BrokerOfCredit value) 
  { setField(value); } 
  public org.quickfix.field.BrokerOfCredit get(org.quickfix.field.BrokerOfCredit value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BrokerOfCredit getBrokerOfCredit() throws FieldNotFound 
  { org.quickfix.field.BrokerOfCredit value = new org.quickfix.field.BrokerOfCredit(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.BrokerOfCredit field) 
  { return isSetField(field); } 
  public boolean isSetBrokerOfCredit() 
  { return isSetField(92); } 

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
} 
} 
