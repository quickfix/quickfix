package org.quickfix.fix40; 
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
    org.quickfix.field.Symbol aSymbol,    
    org.quickfix.field.BidPx aBidPx ) 
  {  
    getHeader().setField(new MsgType("S")); 
    set(aQuoteID); 
    set(aSymbol); 
    set(aBidPx);  
  } 

  public void set(org.quickfix.field.QuoteReqID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteReqID get(org.quickfix.field.QuoteReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteReqID getQuoteReqID() throws FieldNotFound 
  { org.quickfix.field.QuoteReqID value = new org.quickfix.field.QuoteReqID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.QuoteID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteID get(org.quickfix.field.QuoteID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteID getQuoteID() throws FieldNotFound 
  { org.quickfix.field.QuoteID value = new org.quickfix.field.QuoteID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Symbol value) 
  { setField(value); } 
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Symbol getSymbol() throws FieldNotFound 
  { org.quickfix.field.Symbol value = new org.quickfix.field.Symbol(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SymbolSfx value) 
  { setField(value); } 
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound 
  { org.quickfix.field.SymbolSfx value = new org.quickfix.field.SymbolSfx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecurityID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound 
  { org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.IDSource value) 
  { setField(value); } 
  public org.quickfix.field.IDSource get(org.quickfix.field.IDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IDSource getIDSource() throws FieldNotFound 
  { org.quickfix.field.IDSource value = new org.quickfix.field.IDSource(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Issuer value) 
  { setField(value); } 
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Issuer getIssuer() throws FieldNotFound 
  { org.quickfix.field.Issuer value = new org.quickfix.field.Issuer(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BidPx value) 
  { setField(value); } 
  public org.quickfix.field.BidPx get(org.quickfix.field.BidPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidPx getBidPx() throws FieldNotFound 
  { org.quickfix.field.BidPx value = new org.quickfix.field.BidPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OfferPx value) 
  { setField(value); } 
  public org.quickfix.field.OfferPx get(org.quickfix.field.OfferPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferPx getOfferPx() throws FieldNotFound 
  { org.quickfix.field.OfferPx value = new org.quickfix.field.OfferPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BidSize value) 
  { setField(value); } 
  public org.quickfix.field.BidSize get(org.quickfix.field.BidSize value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidSize getBidSize() throws FieldNotFound 
  { org.quickfix.field.BidSize value = new org.quickfix.field.BidSize(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OfferSize value) 
  { setField(value); } 
  public org.quickfix.field.OfferSize get(org.quickfix.field.OfferSize value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferSize getOfferSize() throws FieldNotFound 
  { org.quickfix.field.OfferSize value = new org.quickfix.field.OfferSize(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ValidUntilTime value) 
  { setField(value); } 
  public org.quickfix.field.ValidUntilTime get(org.quickfix.field.ValidUntilTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ValidUntilTime getValidUntilTime() throws FieldNotFound 
  { org.quickfix.field.ValidUntilTime value = new org.quickfix.field.ValidUntilTime(); 
    getField(value); return value; } 
} 
