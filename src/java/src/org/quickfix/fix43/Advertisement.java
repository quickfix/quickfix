package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class Advertisement extends Message 
{ 

  public Advertisement() 
  { 
    getHeader().setField(new MsgType("7")); 
  } 
  public Advertisement(    
    org.quickfix.field.AdvId aAdvId,    
    org.quickfix.field.AdvTransType aAdvTransType,    
    org.quickfix.field.AdvSide aAdvSide,    
    org.quickfix.field.Quantity aQuantity ) 
  {  
    getHeader().setField(new MsgType("7")); 
    set(aAdvId); 
    set(aAdvTransType); 
    set(aAdvSide); 
    set(aQuantity);  
  } 

  public void set(org.quickfix.field.AdvId value) 
  { setField(value); } 
  public org.quickfix.field.AdvId get(org.quickfix.field.AdvId value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AdvId getAdvId() throws FieldNotFound 
  { org.quickfix.field.AdvId value = new org.quickfix.field.AdvId(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AdvTransType value) 
  { setField(value); } 
  public org.quickfix.field.AdvTransType get(org.quickfix.field.AdvTransType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AdvTransType getAdvTransType() throws FieldNotFound 
  { org.quickfix.field.AdvTransType value = new org.quickfix.field.AdvTransType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AdvRefID value) 
  { setField(value); } 
  public org.quickfix.field.AdvRefID get(org.quickfix.field.AdvRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AdvRefID getAdvRefID() throws FieldNotFound 
  { org.quickfix.field.AdvRefID value = new org.quickfix.field.AdvRefID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AdvSide value) 
  { setField(value); } 
  public org.quickfix.field.AdvSide get(org.quickfix.field.AdvSide value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AdvSide getAdvSide() throws FieldNotFound 
  { org.quickfix.field.AdvSide value = new org.quickfix.field.AdvSide(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Quantity value) 
  { setField(value); } 
  public org.quickfix.field.Quantity get(org.quickfix.field.Quantity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Quantity getQuantity() throws FieldNotFound 
  { org.quickfix.field.Quantity value = new org.quickfix.field.Quantity(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Price value) 
  { setField(value); } 
  public org.quickfix.field.Price get(org.quickfix.field.Price value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Price getPrice() throws FieldNotFound 
  { org.quickfix.field.Price value = new org.quickfix.field.Price(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
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

  public void set(org.quickfix.field.URLLink value) 
  { setField(value); } 
  public org.quickfix.field.URLLink get(org.quickfix.field.URLLink value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.URLLink getURLLink() throws FieldNotFound 
  { org.quickfix.field.URLLink value = new org.quickfix.field.URLLink(); 
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
} 
