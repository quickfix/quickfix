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
  public boolean isSet(org.quickfix.field.SecurityReqID field) 
  { return isSetField(field); } 
  public boolean isSetSecurityReqID() 
  { return isSetField(320); } 

  public void set(org.quickfix.field.SecurityResponseID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityResponseID get(org.quickfix.field.SecurityResponseID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityResponseID getSecurityResponseID() throws FieldNotFound 
  { org.quickfix.field.SecurityResponseID value = new org.quickfix.field.SecurityResponseID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityResponseID field) 
  { return isSetField(field); } 
  public boolean isSetSecurityResponseID() 
  { return isSetField(322); } 

  public void set(org.quickfix.field.SecurityResponseType value) 
  { setField(value); } 
  public org.quickfix.field.SecurityResponseType get(org.quickfix.field.SecurityResponseType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityResponseType getSecurityResponseType() throws FieldNotFound 
  { org.quickfix.field.SecurityResponseType value = new org.quickfix.field.SecurityResponseType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityResponseType field) 
  { return isSetField(field); } 
  public boolean isSetSecurityResponseType() 
  { return isSetField(323); } 

  public void set(org.quickfix.field.TotalNumSecurityTypes value) 
  { setField(value); } 
  public org.quickfix.field.TotalNumSecurityTypes get(org.quickfix.field.TotalNumSecurityTypes value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotalNumSecurityTypes getTotalNumSecurityTypes() throws FieldNotFound 
  { org.quickfix.field.TotalNumSecurityTypes value = new org.quickfix.field.TotalNumSecurityTypes(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TotalNumSecurityTypes field) 
  { return isSetField(field); } 
  public boolean isSetTotalNumSecurityTypes() 
  { return isSetField(557); } 
  public void set(org.quickfix.field.NoSecurityTypes value) 
  { setField(value); } 
  public org.quickfix.field.NoSecurityTypes get(org.quickfix.field.NoSecurityTypes value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoSecurityTypes getNoSecurityTypes() throws FieldNotFound 
  { org.quickfix.field.NoSecurityTypes value = new org.quickfix.field.NoSecurityTypes(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoSecurityTypes field) 
  { return isSetField(field); } 
  public boolean isSetNoSecurityTypes() 
  { return isSetField(558); } 

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
  public boolean isSet(org.quickfix.field.SecurityType field) 
  { return isSetField(field); } 
  public boolean isSetSecurityType() 
  { return isSetField(167); } 

  public void set(org.quickfix.field.Product value) 
  { setField(value); } 
  public org.quickfix.field.Product get(org.quickfix.field.Product value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Product getProduct() throws FieldNotFound 
  { org.quickfix.field.Product value = new org.quickfix.field.Product(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Product field) 
  { return isSetField(field); } 
  public boolean isSetProduct() 
  { return isSetField(460); } 

  public void set(org.quickfix.field.CFICode value) 
  { setField(value); } 
  public org.quickfix.field.CFICode get(org.quickfix.field.CFICode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CFICode getCFICode() throws FieldNotFound 
  { org.quickfix.field.CFICode value = new org.quickfix.field.CFICode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CFICode field) 
  { return isSetField(field); } 
  public boolean isSetCFICode() 
  { return isSetField(461); } 

} 

  public void set(org.quickfix.field.Text value) 
  { setField(value); } 
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Text getText() throws FieldNotFound 
  { org.quickfix.field.Text value = new org.quickfix.field.Text(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Text field) 
  { return isSetField(field); } 
  public boolean isSetText() 
  { return isSetField(58); } 

  public void set(org.quickfix.field.EncodedTextLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound 
  { org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedTextLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedTextLen() 
  { return isSetField(354); } 

  public void set(org.quickfix.field.EncodedText value) 
  { setField(value); } 
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound 
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedText field) 
  { return isSetField(field); } 
  public boolean isSetEncodedText() 
  { return isSetField(355); } 

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
