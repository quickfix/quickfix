package org.quickfix.fix42; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class IndicationofInterest extends Message 
{ 

  public IndicationofInterest() 
  { 
    getHeader().setField(new MsgType("6")); 
  } 
  public IndicationofInterest(    
    org.quickfix.field.IOIid aIOIid,    
    org.quickfix.field.IOITransType aIOITransType,    
    org.quickfix.field.Symbol aSymbol,    
    org.quickfix.field.Side aSide,    
    org.quickfix.field.IOIShares aIOIShares ) 
  {  
    getHeader().setField(new MsgType("6")); 
    set(aIOIid); 
    set(aIOITransType); 
    set(aSymbol); 
    set(aSide); 
    set(aIOIShares);  
  } 

  public void set(org.quickfix.field.IOIid value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.IOIid get(org.quickfix.field.IOIid value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.IOIid getIOIid() throws FieldNotFound
  { 
    org.quickfix.field.IOIid value = new org.quickfix.field.IOIid();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.IOITransType value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.IOITransType get(org.quickfix.field.IOITransType value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.IOITransType getIOITransType() throws FieldNotFound
  { 
    org.quickfix.field.IOITransType value = new org.quickfix.field.IOITransType();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.IOIRefID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.IOIRefID get(org.quickfix.field.IOIRefID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.IOIRefID getIOIRefID() throws FieldNotFound
  { 
    org.quickfix.field.IOIRefID value = new org.quickfix.field.IOIRefID();  
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

  public void set(org.quickfix.field.IOIShares value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.IOIShares get(org.quickfix.field.IOIShares value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.IOIShares getIOIShares() throws FieldNotFound
  { 
    org.quickfix.field.IOIShares value = new org.quickfix.field.IOIShares();  
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

  public void set(org.quickfix.field.ValidUntilTime value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ValidUntilTime get(org.quickfix.field.ValidUntilTime value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ValidUntilTime getValidUntilTime() throws FieldNotFound
  { 
    org.quickfix.field.ValidUntilTime value = new org.quickfix.field.ValidUntilTime();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.IOIQltyInd value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.IOIQltyInd get(org.quickfix.field.IOIQltyInd value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.IOIQltyInd getIOIQltyInd() throws FieldNotFound
  { 
    org.quickfix.field.IOIQltyInd value = new org.quickfix.field.IOIQltyInd();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.IOINaturalFlag value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.IOINaturalFlag get(org.quickfix.field.IOINaturalFlag value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.IOINaturalFlag getIOINaturalFlag() throws FieldNotFound
  { 
    org.quickfix.field.IOINaturalFlag value = new org.quickfix.field.IOINaturalFlag();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.NoIOIQualifiers value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.NoIOIQualifiers get(org.quickfix.field.NoIOIQualifiers value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.NoIOIQualifiers getNoIOIQualifiers() throws FieldNotFound
  { 
    org.quickfix.field.NoIOIQualifiers value = new org.quickfix.field.NoIOIQualifiers();  
    getField(value);  
    return value;  
  } 

public class NoIOIQualifiers extends Group { 
  public NoIOIQualifiers() { 
    super(199,104, new int[]{104,0}); 
  } 
  void set(org.quickfix.field.IOIQualifier value) 
  { setField(value); } 
  org.quickfix.field.IOIQualifier get(org.quickfix.field.IOIQualifier value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.IOIQualifier getIOIQualifier() throws FieldNotFound 
  { org.quickfix.field.IOIQualifier value = new org.quickfix.field.IOIQualifier(); 
    getField(value); return value; } 

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

  public void set(org.quickfix.field.URLLink value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.URLLink get(org.quickfix.field.URLLink value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.URLLink getURLLink() throws FieldNotFound
  { 
    org.quickfix.field.URLLink value = new org.quickfix.field.URLLink();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.NoRoutingIDs value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.NoRoutingIDs get(org.quickfix.field.NoRoutingIDs value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.NoRoutingIDs getNoRoutingIDs() throws FieldNotFound
  { 
    org.quickfix.field.NoRoutingIDs value = new org.quickfix.field.NoRoutingIDs();  
    getField(value);  
    return value;  
  } 

public class NoRoutingIDs extends Group { 
  public NoRoutingIDs() { 
    super(215,216, new int[]{216,217,0}); 
  } 
  void set(org.quickfix.field.RoutingType value) 
  { setField(value); } 
  org.quickfix.field.RoutingType get(org.quickfix.field.RoutingType value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.RoutingType getRoutingType() throws FieldNotFound 
  { org.quickfix.field.RoutingType value = new org.quickfix.field.RoutingType(); 
    getField(value); return value; } 

  void set(org.quickfix.field.RoutingID value) 
  { setField(value); } 
  org.quickfix.field.RoutingID get(org.quickfix.field.RoutingID value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.RoutingID getRoutingID() throws FieldNotFound 
  { org.quickfix.field.RoutingID value = new org.quickfix.field.RoutingID(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.SpreadToBenchmark value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.SpreadToBenchmark get(org.quickfix.field.SpreadToBenchmark value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.SpreadToBenchmark getSpreadToBenchmark() throws FieldNotFound
  { 
    org.quickfix.field.SpreadToBenchmark value = new org.quickfix.field.SpreadToBenchmark();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Benchmark value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Benchmark get(org.quickfix.field.Benchmark value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Benchmark getBenchmark() throws FieldNotFound
  { 
    org.quickfix.field.Benchmark value = new org.quickfix.field.Benchmark();  
    getField(value);  
    return value;  
  } 
} 
