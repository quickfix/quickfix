package org.quickfix.fix42; 
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
    org.quickfix.field.NoOrders aNoOrders,    
    org.quickfix.field.Side aSide,    
    org.quickfix.field.Symbol aSymbol,    
    org.quickfix.field.Shares aShares,    
    org.quickfix.field.AvgPx aAvgPx,    
    org.quickfix.field.TradeDate aTradeDate,    
    org.quickfix.field.NoAllocs aNoAllocs ) 
  {  
    getHeader().setField(new MsgType("J")); 
    set(aAllocID); 
    set(aAllocTransType); 
    set(aNoOrders); 
    set(aSide); 
    set(aSymbol); 
    set(aShares); 
    set(aAvgPx); 
    set(aTradeDate); 
    set(aNoAllocs);  
  } 

  public void set(org.quickfix.field.AllocID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.AllocID get(org.quickfix.field.AllocID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.AllocID getAllocID() throws FieldNotFound
  { 
    org.quickfix.field.AllocID value = new org.quickfix.field.AllocID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.AllocTransType value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.AllocTransType get(org.quickfix.field.AllocTransType value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.AllocTransType getAllocTransType() throws FieldNotFound
  { 
    org.quickfix.field.AllocTransType value = new org.quickfix.field.AllocTransType();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.RefAllocID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.RefAllocID get(org.quickfix.field.RefAllocID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.RefAllocID getRefAllocID() throws FieldNotFound
  { 
    org.quickfix.field.RefAllocID value = new org.quickfix.field.RefAllocID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.AllocLinkID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.AllocLinkID get(org.quickfix.field.AllocLinkID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.AllocLinkID getAllocLinkID() throws FieldNotFound
  { 
    org.quickfix.field.AllocLinkID value = new org.quickfix.field.AllocLinkID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.AllocLinkType value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.AllocLinkType get(org.quickfix.field.AllocLinkType value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.AllocLinkType getAllocLinkType() throws FieldNotFound
  { 
    org.quickfix.field.AllocLinkType value = new org.quickfix.field.AllocLinkType();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.NoOrders value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.NoOrders get(org.quickfix.field.NoOrders value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.NoOrders getNoOrders() throws FieldNotFound
  { 
    org.quickfix.field.NoOrders value = new org.quickfix.field.NoOrders();  
    getField(value);  
    return value;  
  } 

public static class NoOrders extends Group { 
  public NoOrders() { 
    super(73,11, new int[]{11,37,198,66,105,0}); 
  } 
  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
    getField(value); return value; } 

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

  public void set(org.quickfix.field.ListID value) 
  { setField(value); } 
  public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ListID getListID() throws FieldNotFound 
  { org.quickfix.field.ListID value = new org.quickfix.field.ListID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.WaveNo value) 
  { setField(value); } 
  public org.quickfix.field.WaveNo get(org.quickfix.field.WaveNo value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.WaveNo getWaveNo() throws FieldNotFound 
  { org.quickfix.field.WaveNo value = new org.quickfix.field.WaveNo(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.NoExecs value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.NoExecs get(org.quickfix.field.NoExecs value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.NoExecs getNoExecs() throws FieldNotFound
  { 
    org.quickfix.field.NoExecs value = new org.quickfix.field.NoExecs();  
    getField(value);  
    return value;  
  } 

public static class NoExecs extends Group { 
  public NoExecs() { 
    super(124,32, new int[]{32,17,31,29,0}); 
  } 
  public void set(org.quickfix.field.LastShares value) 
  { setField(value); } 
  public org.quickfix.field.LastShares get(org.quickfix.field.LastShares value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastShares getLastShares() throws FieldNotFound 
  { org.quickfix.field.LastShares value = new org.quickfix.field.LastShares(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecID value) 
  { setField(value); } 
  public org.quickfix.field.ExecID get(org.quickfix.field.ExecID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecID getExecID() throws FieldNotFound 
  { org.quickfix.field.ExecID value = new org.quickfix.field.ExecID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastPx value) 
  { setField(value); } 
  public org.quickfix.field.LastPx get(org.quickfix.field.LastPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastPx getLastPx() throws FieldNotFound 
  { org.quickfix.field.LastPx value = new org.quickfix.field.LastPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastCapacity value) 
  { setField(value); } 
  public org.quickfix.field.LastCapacity get(org.quickfix.field.LastCapacity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastCapacity getLastCapacity() throws FieldNotFound 
  { org.quickfix.field.LastCapacity value = new org.quickfix.field.LastCapacity(); 
    getField(value); return value; } 

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

  public void set(org.quickfix.field.Shares value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Shares get(org.quickfix.field.Shares value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Shares getShares() throws FieldNotFound
  { 
    org.quickfix.field.Shares value = new org.quickfix.field.Shares();  
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

  public void set(org.quickfix.field.AvgPrxPrecision value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.AvgPrxPrecision get(org.quickfix.field.AvgPrxPrecision value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.AvgPrxPrecision getAvgPrxPrecision() throws FieldNotFound
  { 
    org.quickfix.field.AvgPrxPrecision value = new org.quickfix.field.AvgPrxPrecision();  
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

  public void set(org.quickfix.field.NetMoney value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.NetMoney get(org.quickfix.field.NetMoney value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.NetMoney getNetMoney() throws FieldNotFound
  { 
    org.quickfix.field.NetMoney value = new org.quickfix.field.NetMoney();  
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

  public void set(org.quickfix.field.NumDaysInterest value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.NumDaysInterest get(org.quickfix.field.NumDaysInterest value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.NumDaysInterest getNumDaysInterest() throws FieldNotFound
  { 
    org.quickfix.field.NumDaysInterest value = new org.quickfix.field.NumDaysInterest();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.AccruedInterestRate value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.AccruedInterestRate get(org.quickfix.field.AccruedInterestRate value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.AccruedInterestRate getAccruedInterestRate() throws FieldNotFound
  { 
    org.quickfix.field.AccruedInterestRate value = new org.quickfix.field.AccruedInterestRate();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.NoAllocs value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.NoAllocs get(org.quickfix.field.NoAllocs value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.NoAllocs getNoAllocs() throws FieldNotFound
  { 
    org.quickfix.field.NoAllocs value = new org.quickfix.field.NoAllocs();  
    getField(value);  
    return value;  
  } 

public static class NoAllocs extends Group { 
  public NoAllocs() { 
    super(78,79, new int[]{79,366,80,81,92,208,209,161,360,361,76,109,12,13,153,154,119,120,155,156,159,160,136,0}); 
  } 
  public void set(org.quickfix.field.AllocAccount value) 
  { setField(value); } 
  public org.quickfix.field.AllocAccount get(org.quickfix.field.AllocAccount value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound 
  { org.quickfix.field.AllocAccount value = new org.quickfix.field.AllocAccount(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AllocPrice value) 
  { setField(value); } 
  public org.quickfix.field.AllocPrice get(org.quickfix.field.AllocPrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocPrice getAllocPrice() throws FieldNotFound 
  { org.quickfix.field.AllocPrice value = new org.quickfix.field.AllocPrice(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AllocShares value) 
  { setField(value); } 
  public org.quickfix.field.AllocShares get(org.quickfix.field.AllocShares value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocShares getAllocShares() throws FieldNotFound 
  { org.quickfix.field.AllocShares value = new org.quickfix.field.AllocShares(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ProcessCode value) 
  { setField(value); } 
  public org.quickfix.field.ProcessCode get(org.quickfix.field.ProcessCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ProcessCode getProcessCode() throws FieldNotFound 
  { org.quickfix.field.ProcessCode value = new org.quickfix.field.ProcessCode(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BrokerOfCredit value) 
  { setField(value); } 
  public org.quickfix.field.BrokerOfCredit get(org.quickfix.field.BrokerOfCredit value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BrokerOfCredit getBrokerOfCredit() throws FieldNotFound 
  { org.quickfix.field.BrokerOfCredit value = new org.quickfix.field.BrokerOfCredit(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NotifyBrokerOfCredit value) 
  { setField(value); } 
  public org.quickfix.field.NotifyBrokerOfCredit get(org.quickfix.field.NotifyBrokerOfCredit value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NotifyBrokerOfCredit getNotifyBrokerOfCredit() throws FieldNotFound 
  { org.quickfix.field.NotifyBrokerOfCredit value = new org.quickfix.field.NotifyBrokerOfCredit(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AllocHandlInst value) 
  { setField(value); } 
  public org.quickfix.field.AllocHandlInst get(org.quickfix.field.AllocHandlInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocHandlInst getAllocHandlInst() throws FieldNotFound 
  { org.quickfix.field.AllocHandlInst value = new org.quickfix.field.AllocHandlInst(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AllocText value) 
  { setField(value); } 
  public org.quickfix.field.AllocText get(org.quickfix.field.AllocText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocText getAllocText() throws FieldNotFound 
  { org.quickfix.field.AllocText value = new org.quickfix.field.AllocText(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EncodedAllocTextLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedAllocTextLen get(org.quickfix.field.EncodedAllocTextLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedAllocTextLen getEncodedAllocTextLen() throws FieldNotFound 
  { org.quickfix.field.EncodedAllocTextLen value = new org.quickfix.field.EncodedAllocTextLen(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EncodedAllocText value) 
  { setField(value); } 
  public org.quickfix.field.EncodedAllocText get(org.quickfix.field.EncodedAllocText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedAllocText getEncodedAllocText() throws FieldNotFound 
  { org.quickfix.field.EncodedAllocText value = new org.quickfix.field.EncodedAllocText(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecBroker value) 
  { setField(value); } 
  public org.quickfix.field.ExecBroker get(org.quickfix.field.ExecBroker value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecBroker getExecBroker() throws FieldNotFound 
  { org.quickfix.field.ExecBroker value = new org.quickfix.field.ExecBroker(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClientID value) 
  { setField(value); } 
  public org.quickfix.field.ClientID get(org.quickfix.field.ClientID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClientID getClientID() throws FieldNotFound 
  { org.quickfix.field.ClientID value = new org.quickfix.field.ClientID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Commission value) 
  { setField(value); } 
  public org.quickfix.field.Commission get(org.quickfix.field.Commission value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Commission getCommission() throws FieldNotFound 
  { org.quickfix.field.Commission value = new org.quickfix.field.Commission(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CommType value) 
  { setField(value); } 
  public org.quickfix.field.CommType get(org.quickfix.field.CommType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CommType getCommType() throws FieldNotFound 
  { org.quickfix.field.CommType value = new org.quickfix.field.CommType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AllocAvgPx value) 
  { setField(value); } 
  public org.quickfix.field.AllocAvgPx get(org.quickfix.field.AllocAvgPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocAvgPx getAllocAvgPx() throws FieldNotFound 
  { org.quickfix.field.AllocAvgPx value = new org.quickfix.field.AllocAvgPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AllocNetMoney value) 
  { setField(value); } 
  public org.quickfix.field.AllocNetMoney get(org.quickfix.field.AllocNetMoney value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocNetMoney getAllocNetMoney() throws FieldNotFound 
  { org.quickfix.field.AllocNetMoney value = new org.quickfix.field.AllocNetMoney(); 
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

  public void set(org.quickfix.field.AccruedInterestAmt value) 
  { setField(value); } 
  public org.quickfix.field.AccruedInterestAmt get(org.quickfix.field.AccruedInterestAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccruedInterestAmt getAccruedInterestAmt() throws FieldNotFound 
  { org.quickfix.field.AccruedInterestAmt value = new org.quickfix.field.AccruedInterestAmt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlInstMode value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstMode get(org.quickfix.field.SettlInstMode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstMode getSettlInstMode() throws FieldNotFound 
  { org.quickfix.field.SettlInstMode value = new org.quickfix.field.SettlInstMode(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NoMiscFees value) 
  { setField(value); } 
  public org.quickfix.field.NoMiscFees get(org.quickfix.field.NoMiscFees value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoMiscFees getNoMiscFees() throws FieldNotFound 
  { org.quickfix.field.NoMiscFees value = new org.quickfix.field.NoMiscFees(); 
    getField(value); return value; } 


public static class NoMiscFees extends Group { 
  public NoMiscFees() { 
    super(136,137, new int[]{137,138,139,0}); 
  } 
  public void set(org.quickfix.field.MiscFeeAmt value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeAmt get(org.quickfix.field.MiscFeeAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeAmt getMiscFeeAmt() throws FieldNotFound 
  { org.quickfix.field.MiscFeeAmt value = new org.quickfix.field.MiscFeeAmt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MiscFeeCurr value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeCurr get(org.quickfix.field.MiscFeeCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeCurr getMiscFeeCurr() throws FieldNotFound 
  { org.quickfix.field.MiscFeeCurr value = new org.quickfix.field.MiscFeeCurr(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MiscFeeType value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeType get(org.quickfix.field.MiscFeeType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeType getMiscFeeType() throws FieldNotFound 
  { org.quickfix.field.MiscFeeType value = new org.quickfix.field.MiscFeeType(); 
    getField(value); return value; } 

} 
} 
} 
