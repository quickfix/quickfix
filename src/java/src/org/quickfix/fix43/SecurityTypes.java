package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class SecurityTypes extends Message 
{ 

  public SecurityTypes() 
  { 
    getHeader().setField(new MsgType("w")); 
  } 
  public SecurityTypes(    
    org.quickfix.field.SecurityReqID aSecurityReqID,    
    org.quickfix.field.SecurityResponseID aSecurityResponseID,    
    org.quickfix.field.SecurityResponseType aSecurityResponseType ) 
  {  
    getHeader().setField(new MsgType("w")); 
    set(aSecurityReqID); 
    set(aSecurityResponseID); 
    set(aSecurityResponseType);  
  } 

  public void set(org.quickfix.field.SecurityReqID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityReqID get(org.quickfix.field.SecurityReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityReqID getSecurityReqID() throws FieldNotFound 
  { org.quickfix.field.SecurityReqID value = new org.quickfix.field.SecurityReqID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecurityResponseID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityResponseID get(org.quickfix.field.SecurityResponseID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityResponseID getSecurityResponseID() throws FieldNotFound 
  { org.quickfix.field.SecurityResponseID value = new org.quickfix.field.SecurityResponseID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecurityResponseType value) 
  { setField(value); } 
  public org.quickfix.field.SecurityResponseType get(org.quickfix.field.SecurityResponseType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityResponseType getSecurityResponseType() throws FieldNotFound 
  { org.quickfix.field.SecurityResponseType value = new org.quickfix.field.SecurityResponseType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TotalNumSecurityTypes value) 
  { setField(value); } 
  public org.quickfix.field.TotalNumSecurityTypes get(org.quickfix.field.TotalNumSecurityTypes value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotalNumSecurityTypes getTotalNumSecurityTypes() throws FieldNotFound 
  { org.quickfix.field.TotalNumSecurityTypes value = new org.quickfix.field.TotalNumSecurityTypes(); 
    getField(value); return value; } 

public static class NoSecurityTypes extends Group { 
  public NoSecurityTypes() { 
    super(558, 167, 
    new int[] { 
               167, 
               460, 
               461, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.SecurityType value) 
  { setField(value); } 
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound 
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Product value) 
  { setField(value); } 
  public org.quickfix.field.Product get(org.quickfix.field.Product value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Product getProduct() throws FieldNotFound 
  { org.quickfix.field.Product value = new org.quickfix.field.Product(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CFICode value) 
  { setField(value); } 
  public org.quickfix.field.CFICode get(org.quickfix.field.CFICode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CFICode getCFICode() throws FieldNotFound 
  { org.quickfix.field.CFICode value = new org.quickfix.field.CFICode(); 
    getField(value); return value; } 

} 

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

  public void set(org.quickfix.field.SubscriptionRequestType value) 
  { setField(value); } 
  public org.quickfix.field.SubscriptionRequestType get(org.quickfix.field.SubscriptionRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SubscriptionRequestType getSubscriptionRequestType() throws FieldNotFound 
  { org.quickfix.field.SubscriptionRequestType value = new org.quickfix.field.SubscriptionRequestType(); 
    getField(value); return value; } 
} 
