package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class OrderMassStatusRequest extends Message 
{ 

  public OrderMassStatusRequest() 
  { 
    getHeader().setField(new MsgType("AF")); 
  } 
  public OrderMassStatusRequest(    
    org.quickfix.field.MassStatusReqID aMassStatusReqID,    
    org.quickfix.field.MassStatusReqType aMassStatusReqType ) 
  {  
    getHeader().setField(new MsgType("AF")); 
    set(aMassStatusReqID); 
    set(aMassStatusReqType);  
  } 

  public void set(org.quickfix.field.MassStatusReqID value) 
  { setField(value); } 
  public org.quickfix.field.MassStatusReqID get(org.quickfix.field.MassStatusReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MassStatusReqID getMassStatusReqID() throws FieldNotFound 
  { org.quickfix.field.MassStatusReqID value = new org.quickfix.field.MassStatusReqID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MassStatusReqType value) 
  { setField(value); } 
  public org.quickfix.field.MassStatusReqType get(org.quickfix.field.MassStatusReqType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MassStatusReqType getMassStatusReqType() throws FieldNotFound 
  { org.quickfix.field.MassStatusReqType value = new org.quickfix.field.MassStatusReqType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Account value) 
  { setField(value); } 
  public org.quickfix.field.Account get(org.quickfix.field.Account value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Account getAccount() throws FieldNotFound 
  { org.quickfix.field.Account value = new org.quickfix.field.Account(); 
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

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 
} 
