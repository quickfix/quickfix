package org.quickfix.fix41;
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
    org.quickfix.field.HeartBtInt aHeartBtInt ) {

      getHeader().setField(new MsgType("A"));
      set(aEncryptMethod);
      set(aHeartBtInt);
  }

  public void set(org.quickfix.field.EncryptMethod value)
  { setField(value); }
  public org.quickfix.field.EncryptMethod get(org.quickfix.field.EncryptMethod  value)
    throws FieldNotFound
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
  public org.quickfix.field.HeartBtInt get(org.quickfix.field.HeartBtInt  value)
    throws FieldNotFound
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
  public org.quickfix.field.RawDataLength get(org.quickfix.field.RawDataLength  value)
    throws FieldNotFound
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
  public org.quickfix.field.RawData get(org.quickfix.field.RawData  value)
    throws FieldNotFound
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
  public org.quickfix.field.ResetSeqNumFlag get(org.quickfix.field.ResetSeqNumFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ResetSeqNumFlag getResetSeqNumFlag() throws FieldNotFound
  { org.quickfix.field.ResetSeqNumFlag value = new org.quickfix.field.ResetSeqNumFlag();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ResetSeqNumFlag field)
  { return isSetField(field); }
  public boolean isSetResetSeqNumFlag()
  { return isSetField(141); }
}

