package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class MarketDataRequestReject extends Message 
{ 

  public MarketDataRequestReject() 
  { 
    getHeader().setField(new MsgType("Y")); 
  } 
  public MarketDataRequestReject(    
    org.quickfix.field.MDReqID aMDReqID ) 
  {  
    getHeader().setField(new MsgType("Y")); 
    set(aMDReqID);  
  } 

  public void set(org.quickfix.field.MDReqID value) 
  { setField(value); } 
  public org.quickfix.field.MDReqID get(org.quickfix.field.MDReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDReqID getMDReqID() throws FieldNotFound 
  { org.quickfix.field.MDReqID value = new org.quickfix.field.MDReqID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MDReqRejReason value) 
  { setField(value); } 
  public org.quickfix.field.MDReqRejReason get(org.quickfix.field.MDReqRejReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDReqRejReason getMDReqRejReason() throws FieldNotFound 
  { org.quickfix.field.MDReqRejReason value = new org.quickfix.field.MDReqRejReason(); 
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
} 
