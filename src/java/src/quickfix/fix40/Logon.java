package quickfix.fix40;
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
}

