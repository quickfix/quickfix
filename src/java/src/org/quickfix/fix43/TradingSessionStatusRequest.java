package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class TradingSessionStatusRequest extends Message 
{ 

  public TradingSessionStatusRequest() 
  { 
    getHeader().setField(new MsgType("g")); 
  } 
  public TradingSessionStatusRequest(    
    org.quickfix.field.TradSesReqID aTradSesReqID,    
    org.quickfix.field.SubscriptionRequestType aSubscriptionRequestType ) 
  {  
    getHeader().setField(new MsgType("g")); 
    set(aTradSesReqID); 
    set(aSubscriptionRequestType);  
  } 

  public void set(org.quickfix.field.TradSesReqID value) 
  { setField(value); } 
  public org.quickfix.field.TradSesReqID get(org.quickfix.field.TradSesReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradSesReqID getTradSesReqID() throws FieldNotFound 
  { org.quickfix.field.TradSesReqID value = new org.quickfix.field.TradSesReqID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradSesReqID field) 
  { return isSetField(field); } 
  public boolean isSetTradSesReqID() 
  { return isSetField(335); } 

  public void set(org.quickfix.field.TradingSessionID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradingSessionID field) 
  { return isSetField(field); } 
  public boolean isSetTradingSessionID() 
  { return isSetField(336); } 

  public void set(org.quickfix.field.TradingSessionSubID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradingSessionSubID field) 
  { return isSetField(field); } 
  public boolean isSetTradingSessionSubID() 
  { return isSetField(625); } 

  public void set(org.quickfix.field.TradSesMethod value) 
  { setField(value); } 
  public org.quickfix.field.TradSesMethod get(org.quickfix.field.TradSesMethod value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradSesMethod getTradSesMethod() throws FieldNotFound 
  { org.quickfix.field.TradSesMethod value = new org.quickfix.field.TradSesMethod(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradSesMethod field) 
  { return isSetField(field); } 
  public boolean isSetTradSesMethod() 
  { return isSetField(338); } 

  public void set(org.quickfix.field.TradSesMode value) 
  { setField(value); } 
  public org.quickfix.field.TradSesMode get(org.quickfix.field.TradSesMode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradSesMode getTradSesMode() throws FieldNotFound 
  { org.quickfix.field.TradSesMode value = new org.quickfix.field.TradSesMode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradSesMode field) 
  { return isSetField(field); } 
  public boolean isSetTradSesMode() 
  { return isSetField(339); } 

  public void set(org.quickfix.field.SubscriptionRequestType value) 
  { setField(value); } 
  public org.quickfix.field.SubscriptionRequestType get(org.quickfix.field.SubscriptionRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SubscriptionRequestType getSubscriptionRequestType() throws FieldNotFound 
  { org.quickfix.field.SubscriptionRequestType value = new org.quickfix.field.SubscriptionRequestType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SubscriptionRequestType field) 
  { return isSetField(field); } 
  public boolean isSetSubscriptionRequestType() 
  { return isSetField(263); } 
} 
