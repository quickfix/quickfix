package quickfix.fix44;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class UserRequest extends Message
{
  public UserRequest()
  {
    getHeader().setField(new MsgType("BE"));
  }
  public UserRequest(
    quickfix.field.UserRequestID aUserRequestID,
    quickfix.field.UserRequestType aUserRequestType,
    quickfix.field.Username aUsername ) {

    getHeader().setField(new MsgType("BE"));
    set(aUserRequestID);
    set(aUserRequestType);
    set(aUsername);
  }

  public void set(quickfix.field.UserRequestID value)
  { setField(value); }
  public quickfix.field.UserRequestID get(quickfix.field.UserRequestID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UserRequestID getUserRequestID() throws FieldNotFound
  { quickfix.field.UserRequestID value = new quickfix.field.UserRequestID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UserRequestID field)
  { return isSetField(field); }
  public boolean isSetUserRequestID()
  { return isSetField(923); }
  public void set(quickfix.field.UserRequestType value)
  { setField(value); }
  public quickfix.field.UserRequestType get(quickfix.field.UserRequestType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UserRequestType getUserRequestType() throws FieldNotFound
  { quickfix.field.UserRequestType value = new quickfix.field.UserRequestType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UserRequestType field)
  { return isSetField(field); }
  public boolean isSetUserRequestType()
  { return isSetField(924); }
  public void set(quickfix.field.Username value)
  { setField(value); }
  public quickfix.field.Username get(quickfix.field.Username  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Username getUsername() throws FieldNotFound
  { quickfix.field.Username value = new quickfix.field.Username();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Username field)
  { return isSetField(field); }
  public boolean isSetUsername()
  { return isSetField(553); }
  public void set(quickfix.field.Password value)
  { setField(value); }
  public quickfix.field.Password get(quickfix.field.Password  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Password getPassword() throws FieldNotFound
  { quickfix.field.Password value = new quickfix.field.Password();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Password field)
  { return isSetField(field); }
  public boolean isSetPassword()
  { return isSetField(554); }
  public void set(quickfix.field.NewPassword value)
  { setField(value); }
  public quickfix.field.NewPassword get(quickfix.field.NewPassword  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NewPassword getNewPassword() throws FieldNotFound
  { quickfix.field.NewPassword value = new quickfix.field.NewPassword();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NewPassword field)
  { return isSetField(field); }
  public boolean isSetNewPassword()
  { return isSetField(925); }
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

