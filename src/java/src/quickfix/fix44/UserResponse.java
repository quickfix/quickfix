package quickfix.fix44;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class UserResponse extends Message
{
  public UserResponse()
  {
    getHeader().setField(new MsgType("BF"));
  }
  public UserResponse(
    quickfix.field.UserRequestID aUserRequestID,
    quickfix.field.Username aUsername ) {

    getHeader().setField(new MsgType("BF"));
    set(aUserRequestID);
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
  public void set(quickfix.field.UserStatus value)
  { setField(value); }
  public quickfix.field.UserStatus get(quickfix.field.UserStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UserStatus getUserStatus() throws FieldNotFound
  { quickfix.field.UserStatus value = new quickfix.field.UserStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UserStatus field)
  { return isSetField(field); }
  public boolean isSetUserStatus()
  { return isSetField(926); }
  public void set(quickfix.field.UserStatusText value)
  { setField(value); }
  public quickfix.field.UserStatusText get(quickfix.field.UserStatusText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UserStatusText getUserStatusText() throws FieldNotFound
  { quickfix.field.UserStatusText value = new quickfix.field.UserStatusText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UserStatusText field)
  { return isSetField(field); }
  public boolean isSetUserStatusText()
  { return isSetField(927); }
}

