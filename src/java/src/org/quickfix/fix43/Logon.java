package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class Logon extends Message 
{ 

  public Logon() 
  { 
    getHeader().setField(new MsgType("A")); 
  } 
  public Logon(    
    org.quickfix.field.EncryptMethod aEncryptMethod,    
    org.quickfix.field.HeartBtInt aHeartBtInt ) 
  {  
    getHeader().setField(new MsgType("A")); 
    set(aEncryptMethod); 
    set(aHeartBtInt);  
  } 

  public void set(org.quickfix.field.EncryptMethod value) 
  { setField(value); } 
  public org.quickfix.field.EncryptMethod get(org.quickfix.field.EncryptMethod value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncryptMethod getEncryptMethod() throws FieldNotFound 
  { org.quickfix.field.EncryptMethod value = new org.quickfix.field.EncryptMethod(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncryptMethod field) 
  { return isSetField(field); } 
  public boolean isSetEncryptMethod() 
  { return isSetField(98); } 

  public void set(org.quickfix.field.HeartBtInt value) 
  { setField(value); } 
  public org.quickfix.field.HeartBtInt get(org.quickfix.field.HeartBtInt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.HeartBtInt getHeartBtInt() throws FieldNotFound 
  { org.quickfix.field.HeartBtInt value = new org.quickfix.field.HeartBtInt(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.HeartBtInt field) 
  { return isSetField(field); } 
  public boolean isSetHeartBtInt() 
  { return isSetField(108); } 

  public void set(org.quickfix.field.RawDataLength value) 
  { setField(value); } 
  public org.quickfix.field.RawDataLength get(org.quickfix.field.RawDataLength value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RawDataLength getRawDataLength() throws FieldNotFound 
  { org.quickfix.field.RawDataLength value = new org.quickfix.field.RawDataLength(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RawDataLength field) 
  { return isSetField(field); } 
  public boolean isSetRawDataLength() 
  { return isSetField(95); } 

  public void set(org.quickfix.field.RawData value) 
  { setField(value); } 
  public org.quickfix.field.RawData get(org.quickfix.field.RawData value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RawData getRawData() throws FieldNotFound 
  { org.quickfix.field.RawData value = new org.quickfix.field.RawData(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RawData field) 
  { return isSetField(field); } 
  public boolean isSetRawData() 
  { return isSetField(96); } 

  public void set(org.quickfix.field.ResetSeqNumFlag value) 
  { setField(value); } 
  public org.quickfix.field.ResetSeqNumFlag get(org.quickfix.field.ResetSeqNumFlag value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ResetSeqNumFlag getResetSeqNumFlag() throws FieldNotFound 
  { org.quickfix.field.ResetSeqNumFlag value = new org.quickfix.field.ResetSeqNumFlag(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ResetSeqNumFlag field) 
  { return isSetField(field); } 
  public boolean isSetResetSeqNumFlag() 
  { return isSetField(141); } 

  public void set(org.quickfix.field.MaxMessageSize value) 
  { setField(value); } 
  public org.quickfix.field.MaxMessageSize get(org.quickfix.field.MaxMessageSize value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaxMessageSize getMaxMessageSize() throws FieldNotFound 
  { org.quickfix.field.MaxMessageSize value = new org.quickfix.field.MaxMessageSize(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MaxMessageSize field) 
  { return isSetField(field); } 
  public boolean isSetMaxMessageSize() 
  { return isSetField(383); } 
  public void set(org.quickfix.field.NoMsgTypes value) 
  { setField(value); } 
  public org.quickfix.field.NoMsgTypes get(org.quickfix.field.NoMsgTypes value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoMsgTypes getNoMsgTypes() throws FieldNotFound 
  { org.quickfix.field.NoMsgTypes value = new org.quickfix.field.NoMsgTypes(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoMsgTypes field) 
  { return isSetField(field); } 
  public boolean isSetNoMsgTypes() 
  { return isSetField(384); } 

public static class NoMsgTypes extends Group { 
  public NoMsgTypes() { 
    super(384, 372, 
    new int[] { 
               372, 
               385, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.RefMsgType value) 
  { setField(value); } 
  public org.quickfix.field.RefMsgType get(org.quickfix.field.RefMsgType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RefMsgType getRefMsgType() throws FieldNotFound 
  { org.quickfix.field.RefMsgType value = new org.quickfix.field.RefMsgType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RefMsgType field) 
  { return isSetField(field); } 
  public boolean isSetRefMsgType() 
  { return isSetField(372); } 

  public void set(org.quickfix.field.MsgDirection value) 
  { setField(value); } 
  public org.quickfix.field.MsgDirection get(org.quickfix.field.MsgDirection value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MsgDirection getMsgDirection() throws FieldNotFound 
  { org.quickfix.field.MsgDirection value = new org.quickfix.field.MsgDirection(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MsgDirection field) 
  { return isSetField(field); } 
  public boolean isSetMsgDirection() 
  { return isSetField(385); } 

} 

  public void set(org.quickfix.field.TestMessageIndicator value) 
  { setField(value); } 
  public org.quickfix.field.TestMessageIndicator get(org.quickfix.field.TestMessageIndicator value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TestMessageIndicator getTestMessageIndicator() throws FieldNotFound 
  { org.quickfix.field.TestMessageIndicator value = new org.quickfix.field.TestMessageIndicator(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TestMessageIndicator field) 
  { return isSetField(field); } 
  public boolean isSetTestMessageIndicator() 
  { return isSetField(464); } 

  public void set(org.quickfix.field.Username value) 
  { setField(value); } 
  public org.quickfix.field.Username get(org.quickfix.field.Username value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Username getUsername() throws FieldNotFound 
  { org.quickfix.field.Username value = new org.quickfix.field.Username(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Username field) 
  { return isSetField(field); } 
  public boolean isSetUsername() 
  { return isSetField(553); } 

  public void set(org.quickfix.field.Password value) 
  { setField(value); } 
  public org.quickfix.field.Password get(org.quickfix.field.Password value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Password getPassword() throws FieldNotFound 
  { org.quickfix.field.Password value = new org.quickfix.field.Password(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Password field) 
  { return isSetField(field); } 
  public boolean isSetPassword() 
  { return isSetField(554); } 
} 
