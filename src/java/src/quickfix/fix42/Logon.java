package quickfix.fix42;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class Logon extends Message
{
  public Logon()
  {
    getHeader().setField(new MsgType("A"));
  }
  public Logon(
    quickfix.field.EncryptMethod aEncryptMethod,
    quickfix.field.HeartBtInt aHeartBtInt ) {

      getHeader().setField(new MsgType("A"));
      set(aEncryptMethod);
      set(aHeartBtInt);
  }

  public void set(quickfix.field.EncryptMethod value)
  { setField(value); }
  public quickfix.field.EncryptMethod get(quickfix.field.EncryptMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncryptMethod getEncryptMethod() throws FieldNotFound
  { quickfix.field.EncryptMethod value = new quickfix.field.EncryptMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncryptMethod field)
  { return isSetField(field); }
  public boolean isSetEncryptMethod()
  { return isSetField(98); }
  public void set(quickfix.field.HeartBtInt value)
  { setField(value); }
  public quickfix.field.HeartBtInt get(quickfix.field.HeartBtInt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.HeartBtInt getHeartBtInt() throws FieldNotFound
  { quickfix.field.HeartBtInt value = new quickfix.field.HeartBtInt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.HeartBtInt field)
  { return isSetField(field); }
  public boolean isSetHeartBtInt()
  { return isSetField(108); }
  public void set(quickfix.field.RawDataLength value)
  { setField(value); }
  public quickfix.field.RawDataLength get(quickfix.field.RawDataLength  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RawDataLength getRawDataLength() throws FieldNotFound
  { quickfix.field.RawDataLength value = new quickfix.field.RawDataLength();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RawDataLength field)
  { return isSetField(field); }
  public boolean isSetRawDataLength()
  { return isSetField(95); }
  public void set(quickfix.field.RawData value)
  { setField(value); }
  public quickfix.field.RawData get(quickfix.field.RawData  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RawData getRawData() throws FieldNotFound
  { quickfix.field.RawData value = new quickfix.field.RawData();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RawData field)
  { return isSetField(field); }
  public boolean isSetRawData()
  { return isSetField(96); }
  public void set(quickfix.field.ResetSeqNumFlag value)
  { setField(value); }
  public quickfix.field.ResetSeqNumFlag get(quickfix.field.ResetSeqNumFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ResetSeqNumFlag getResetSeqNumFlag() throws FieldNotFound
  { quickfix.field.ResetSeqNumFlag value = new quickfix.field.ResetSeqNumFlag();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ResetSeqNumFlag field)
  { return isSetField(field); }
  public boolean isSetResetSeqNumFlag()
  { return isSetField(141); }
  public void set(quickfix.field.MaxMessageSize value)
  { setField(value); }
  public quickfix.field.MaxMessageSize get(quickfix.field.MaxMessageSize  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaxMessageSize getMaxMessageSize() throws FieldNotFound
  { quickfix.field.MaxMessageSize value = new quickfix.field.MaxMessageSize();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaxMessageSize field)
  { return isSetField(field); }
  public boolean isSetMaxMessageSize()
  { return isSetField(383); }
  public void set(quickfix.field.NoMsgTypes value)
  { setField(value); }
  public quickfix.field.NoMsgTypes get(quickfix.field.NoMsgTypes  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoMsgTypes getNoMsgTypes() throws FieldNotFound
  { quickfix.field.NoMsgTypes value = new quickfix.field.NoMsgTypes();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoMsgTypes field)
  { return isSetField(field); }
  public boolean isSetNoMsgTypes()
  { return isSetField(384); }
  public static class NoMsgTypes extends Group {
    public NoMsgTypes() {
      super(384,372,
      new int[] {372,385,0 } ); }
    public void set(quickfix.field.RefMsgType value)
    { setField(value); }
    public quickfix.field.RefMsgType get(quickfix.field.RefMsgType  value)
      throws FieldNotFound
    { getField(value); return value; }
    public quickfix.field.RefMsgType getRefMsgType() throws FieldNotFound
    { quickfix.field.RefMsgType value = new quickfix.field.RefMsgType();
      getField(value); return value; }
    public boolean isSet(quickfix.field.RefMsgType field)
    { return isSetField(field); }
    public boolean isSetRefMsgType()
    { return isSetField(372); }
    public void set(quickfix.field.MsgDirection value)
    { setField(value); }
    public quickfix.field.MsgDirection get(quickfix.field.MsgDirection  value)
      throws FieldNotFound
    { getField(value); return value; }
    public quickfix.field.MsgDirection getMsgDirection() throws FieldNotFound
    { quickfix.field.MsgDirection value = new quickfix.field.MsgDirection();
      getField(value); return value; }
    public boolean isSet(quickfix.field.MsgDirection field)
    { return isSetField(field); }
    public boolean isSetMsgDirection()
    { return isSetField(385); }
}
}

