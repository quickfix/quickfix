package org.quickfix.fix42; 
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

  public void set(org.quickfix.field.HeartBtInt value) 
  { setField(value); } 
  public org.quickfix.field.HeartBtInt get(org.quickfix.field.HeartBtInt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.HeartBtInt getHeartBtInt() throws FieldNotFound 
  { org.quickfix.field.HeartBtInt value = new org.quickfix.field.HeartBtInt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.RawDataLength value) 
  { setField(value); } 
  public org.quickfix.field.RawDataLength get(org.quickfix.field.RawDataLength value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RawDataLength getRawDataLength() throws FieldNotFound 
  { org.quickfix.field.RawDataLength value = new org.quickfix.field.RawDataLength(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.RawData value) 
  { setField(value); } 
  public org.quickfix.field.RawData get(org.quickfix.field.RawData value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RawData getRawData() throws FieldNotFound 
  { org.quickfix.field.RawData value = new org.quickfix.field.RawData(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ResetSeqNumFlag value) 
  { setField(value); } 
  public org.quickfix.field.ResetSeqNumFlag get(org.quickfix.field.ResetSeqNumFlag value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ResetSeqNumFlag getResetSeqNumFlag() throws FieldNotFound 
  { org.quickfix.field.ResetSeqNumFlag value = new org.quickfix.field.ResetSeqNumFlag(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MaxMessageSize value) 
  { setField(value); } 
  public org.quickfix.field.MaxMessageSize get(org.quickfix.field.MaxMessageSize value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaxMessageSize getMaxMessageSize() throws FieldNotFound 
  { org.quickfix.field.MaxMessageSize value = new org.quickfix.field.MaxMessageSize(); 
    getField(value); return value; } 

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

  public void set(org.quickfix.field.MsgDirection value) 
  { setField(value); } 
  public org.quickfix.field.MsgDirection get(org.quickfix.field.MsgDirection value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MsgDirection getMsgDirection() throws FieldNotFound 
  { org.quickfix.field.MsgDirection value = new org.quickfix.field.MsgDirection(); 
    getField(value); return value; } 

} 
} 
