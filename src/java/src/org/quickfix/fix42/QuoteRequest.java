package org.quickfix.fix42; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class QuoteRequest extends Message 
{ 

  public QuoteRequest() 
  { 
    getHeader().setField(new MsgType("R")); 
  } 
  public QuoteRequest(    
    org.quickfix.field.QuoteReqID aQuoteReqID,    
    org.quickfix.field.NoRelatedSym aNoRelatedSym ) 
  {  
    getHeader().setField(new MsgType("R")); 
    set(aQuoteReqID); 
    set(aNoRelatedSym);  
  } 

  public void set(org.quickfix.field.QuoteReqID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.QuoteReqID get(org.quickfix.field.QuoteReqID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.QuoteReqID getQuoteReqID() throws FieldNotFound
  { 
    org.quickfix.field.QuoteReqID value = new org.quickfix.field.QuoteReqID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.NoRelatedSym value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.NoRelatedSym get(org.quickfix.field.NoRelatedSym value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.NoRelatedSym getNoRelatedSym() throws FieldNotFound
  { 
    org.quickfix.field.NoRelatedSym value = new org.quickfix.field.NoRelatedSym();  
    getField(value);  
    return value;  
  } 

public class NoRelatedSym extends Group { 
  public NoRelatedSym() { 
    super(146,55, new int[]{55,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,140,303,336,54,38,64,40,193,192,126,60,15,0}); 
  } 
  void set(org.quickfix.field.Symbol value) 
  { setField(value); } 
  org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.Symbol getSymbol() throws FieldNotFound 
  { org.quickfix.field.Symbol value = new org.quickfix.field.Symbol(); 
    getField(value); return value; } 

  void set(org.quickfix.field.SymbolSfx value) 
  { setField(value); } 
  org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound 
  { org.quickfix.field.SymbolSfx value = new org.quickfix.field.SymbolSfx(); 
    getField(value); return value; } 

  void set(org.quickfix.field.SecurityID value) 
  { setField(value); } 
  org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound 
  { org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID(); 
    getField(value); return value; } 

  void set(org.quickfix.field.IDSource value) 
  { setField(value); } 
  org.quickfix.field.IDSource get(org.quickfix.field.IDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.IDSource getIDSource() throws FieldNotFound 
  { org.quickfix.field.IDSource value = new org.quickfix.field.IDSource(); 
    getField(value); return value; } 

  void set(org.quickfix.field.SecurityType value) 
  { setField(value); } 
  org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound 
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType(); 
    getField(value); return value; } 

  void set(org.quickfix.field.MaturityMonthYear value) 
  { setField(value); } 
  org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound 
  { org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear(); 
    getField(value); return value; } 

  void set(org.quickfix.field.MaturityDay value) 
  { setField(value); } 
  org.quickfix.field.MaturityDay get(org.quickfix.field.MaturityDay value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.MaturityDay getMaturityDay() throws FieldNotFound 
  { org.quickfix.field.MaturityDay value = new org.quickfix.field.MaturityDay(); 
    getField(value); return value; } 

  void set(org.quickfix.field.PutOrCall value) 
  { setField(value); } 
  org.quickfix.field.PutOrCall get(org.quickfix.field.PutOrCall value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.PutOrCall getPutOrCall() throws FieldNotFound 
  { org.quickfix.field.PutOrCall value = new org.quickfix.field.PutOrCall(); 
    getField(value); return value; } 

  void set(org.quickfix.field.StrikePrice value) 
  { setField(value); } 
  org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound 
  { org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice(); 
    getField(value); return value; } 

  void set(org.quickfix.field.OptAttribute value) 
  { setField(value); } 
  org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound 
  { org.quickfix.field.OptAttribute value = new org.quickfix.field.OptAttribute(); 
    getField(value); return value; } 

  void set(org.quickfix.field.ContractMultiplier value) 
  { setField(value); } 
  org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound 
  { org.quickfix.field.ContractMultiplier value = new org.quickfix.field.ContractMultiplier(); 
    getField(value); return value; } 

  void set(org.quickfix.field.CouponRate value) 
  { setField(value); } 
  org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.CouponRate getCouponRate() throws FieldNotFound 
  { org.quickfix.field.CouponRate value = new org.quickfix.field.CouponRate(); 
    getField(value); return value; } 

  void set(org.quickfix.field.SecurityExchange value) 
  { setField(value); } 
  org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound 
  { org.quickfix.field.SecurityExchange value = new org.quickfix.field.SecurityExchange(); 
    getField(value); return value; } 

  void set(org.quickfix.field.Issuer value) 
  { setField(value); } 
  org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.Issuer getIssuer() throws FieldNotFound 
  { org.quickfix.field.Issuer value = new org.quickfix.field.Issuer(); 
    getField(value); return value; } 

  void set(org.quickfix.field.EncodedIssuerLen value) 
  { setField(value); } 
  org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound 
  { org.quickfix.field.EncodedIssuerLen value = new org.quickfix.field.EncodedIssuerLen(); 
    getField(value); return value; } 

  void set(org.quickfix.field.EncodedIssuer value) 
  { setField(value); } 
  org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound 
  { org.quickfix.field.EncodedIssuer value = new org.quickfix.field.EncodedIssuer(); 
    getField(value); return value; } 

  void set(org.quickfix.field.SecurityDesc value) 
  { setField(value); } 
  org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc(); 
    getField(value); return value; } 

  void set(org.quickfix.field.EncodedSecurityDescLen value) 
  { setField(value); } 
  org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound 
  { org.quickfix.field.EncodedSecurityDescLen value = new org.quickfix.field.EncodedSecurityDescLen(); 
    getField(value); return value; } 

  void set(org.quickfix.field.EncodedSecurityDesc value) 
  { setField(value); } 
  org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.EncodedSecurityDesc value = new org.quickfix.field.EncodedSecurityDesc(); 
    getField(value); return value; } 

  void set(org.quickfix.field.PrevClosePx value) 
  { setField(value); } 
  org.quickfix.field.PrevClosePx get(org.quickfix.field.PrevClosePx value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.PrevClosePx getPrevClosePx() throws FieldNotFound 
  { org.quickfix.field.PrevClosePx value = new org.quickfix.field.PrevClosePx(); 
    getField(value); return value; } 

  void set(org.quickfix.field.QuoteRequestType value) 
  { setField(value); } 
  org.quickfix.field.QuoteRequestType get(org.quickfix.field.QuoteRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.QuoteRequestType getQuoteRequestType() throws FieldNotFound 
  { org.quickfix.field.QuoteRequestType value = new org.quickfix.field.QuoteRequestType(); 
    getField(value); return value; } 

  void set(org.quickfix.field.TradingSessionID value) 
  { setField(value); } 
  org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID(); 
    getField(value); return value; } 

  void set(org.quickfix.field.Side value) 
  { setField(value); } 
  org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 

  void set(org.quickfix.field.OrderQty value) 
  { setField(value); } 
  org.quickfix.field.OrderQty get(org.quickfix.field.OrderQty value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.OrderQty getOrderQty() throws FieldNotFound 
  { org.quickfix.field.OrderQty value = new org.quickfix.field.OrderQty(); 
    getField(value); return value; } 

  void set(org.quickfix.field.FutSettDate value) 
  { setField(value); } 
  org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound 
  { org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate(); 
    getField(value); return value; } 

  void set(org.quickfix.field.OrdType value) 
  { setField(value); } 
  org.quickfix.field.OrdType get(org.quickfix.field.OrdType value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.OrdType getOrdType() throws FieldNotFound 
  { org.quickfix.field.OrdType value = new org.quickfix.field.OrdType(); 
    getField(value); return value; } 

  void set(org.quickfix.field.FutSettDate2 value) 
  { setField(value); } 
  org.quickfix.field.FutSettDate2 get(org.quickfix.field.FutSettDate2 value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound 
  { org.quickfix.field.FutSettDate2 value = new org.quickfix.field.FutSettDate2(); 
    getField(value); return value; } 

  void set(org.quickfix.field.OrderQty2 value) 
  { setField(value); } 
  org.quickfix.field.OrderQty2 get(org.quickfix.field.OrderQty2 value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound 
  { org.quickfix.field.OrderQty2 value = new org.quickfix.field.OrderQty2(); 
    getField(value); return value; } 

  void set(org.quickfix.field.ExpireTime value) 
  { setField(value); } 
  org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.ExpireTime getExpireTime() throws FieldNotFound 
  { org.quickfix.field.ExpireTime value = new org.quickfix.field.ExpireTime(); 
    getField(value); return value; } 

  void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 

  void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
    getField(value); return value; } 

} 
} 
