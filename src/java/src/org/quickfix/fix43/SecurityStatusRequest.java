package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class SecurityStatusRequest extends Message 
{ 

  public SecurityStatusRequest() 
  { 
    getHeader().setField(new MsgType("e")); 
  } 
  public SecurityStatusRequest(    
    org.quickfix.field.SecurityStatusReqID aSecurityStatusReqID,    
    org.quickfix.field.SubscriptionRequestType aSubscriptionRequestType ) 
  {  
    getHeader().setField(new MsgType("e")); 
    set(aSecurityStatusReqID); 
    set(aSubscriptionRequestType);  
  } 

  public void set(org.quickfix.field.SecurityStatusReqID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityStatusReqID get(org.quickfix.field.SecurityStatusReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityStatusReqID getSecurityStatusReqID() throws FieldNotFound 
  { org.quickfix.field.SecurityStatusReqID value = new org.quickfix.field.SecurityStatusReqID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SubscriptionRequestType value) 
  { setField(value); } 
  public org.quickfix.field.SubscriptionRequestType get(org.quickfix.field.SubscriptionRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SubscriptionRequestType getSubscriptionRequestType() throws FieldNotFound 
  { org.quickfix.field.SubscriptionRequestType value = new org.quickfix.field.SubscriptionRequestType(); 
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
