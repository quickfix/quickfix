package org.quickfix.fix41; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class Quote extends Message 
{ 

  public Quote() 
  { 
    getHeader().setField(new MsgType("S")); 
  } 
  public Quote(    
    org.quickfix.field.QuoteID aQuoteID,    
    org.quickfix.field.Symbol aSymbol ) 
  {  
    getHeader().setField(new MsgType("S")); 
    set(aQuoteID); 
    set(aSymbol);  
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

  public void set(org.quickfix.field.QuoteID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.QuoteID get(org.quickfix.field.QuoteID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.QuoteID getQuoteID() throws FieldNotFound
  { 
    org.quickfix.field.QuoteID value = new org.quickfix.field.QuoteID();  
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

  public void set(org.quickfix.field.BidPx value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.BidPx get(org.quickfix.field.BidPx value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.BidPx getBidPx() throws FieldNotFound
  { 
    org.quickfix.field.BidPx value = new org.quickfix.field.BidPx();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OfferPx value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OfferPx get(org.quickfix.field.OfferPx value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OfferPx getOfferPx() throws FieldNotFound
  { 
    org.quickfix.field.OfferPx value = new org.quickfix.field.OfferPx();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.BidSize value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.BidSize get(org.quickfix.field.BidSize value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.BidSize getBidSize() throws FieldNotFound
  { 
    org.quickfix.field.BidSize value = new org.quickfix.field.BidSize();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OfferSize value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OfferSize get(org.quickfix.field.OfferSize value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OfferSize getOfferSize() throws FieldNotFound
  { 
    org.quickfix.field.OfferSize value = new org.quickfix.field.OfferSize();  
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

  public void set(org.quickfix.field.BidSpotRate value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.BidSpotRate get(org.quickfix.field.BidSpotRate value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.BidSpotRate getBidSpotRate() throws FieldNotFound
  { 
    org.quickfix.field.BidSpotRate value = new org.quickfix.field.BidSpotRate();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OfferSpotRate value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OfferSpotRate get(org.quickfix.field.OfferSpotRate value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OfferSpotRate getOfferSpotRate() throws FieldNotFound
  { 
    org.quickfix.field.OfferSpotRate value = new org.quickfix.field.OfferSpotRate();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.BidForwardPoints value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.BidForwardPoints get(org.quickfix.field.BidForwardPoints value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.BidForwardPoints getBidForwardPoints() throws FieldNotFound
  { 
    org.quickfix.field.BidForwardPoints value = new org.quickfix.field.BidForwardPoints();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OfferForwardPoints value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OfferForwardPoints get(org.quickfix.field.OfferForwardPoints value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OfferForwardPoints getOfferForwardPoints() throws FieldNotFound
  { 
    org.quickfix.field.OfferForwardPoints value = new org.quickfix.field.OfferForwardPoints();  
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
} 
