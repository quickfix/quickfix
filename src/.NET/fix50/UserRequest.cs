namespace QuickFix50
{

  public class UserRequest : Message
  {
    public UserRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BE"); }

    public UserRequest(
      QuickFix.UserRequestID aUserRequestID,
      QuickFix.UserRequestType aUserRequestType,
      QuickFix.Username aUsername )
    : base(MsgType()) {
      set(aUserRequestID);
      set(aUserRequestType);
      set(aUsername);
    }

    public void set(QuickFix.UserRequestID value)
    { setField(value); }
    public QuickFix.UserRequestID get(QuickFix.UserRequestID  value)
    { getField(value); return value; }
    public QuickFix.UserRequestID getUserRequestID()
    { QuickFix.UserRequestID value = new QuickFix.UserRequestID();
      getField(value); return value; }
    public bool isSet(QuickFix.UserRequestID field)
    { return isSetField(field); }
    public bool isSetUserRequestID()
    { return isSetField(923); }

    public void set(QuickFix.UserRequestType value)
    { setField(value); }
    public QuickFix.UserRequestType get(QuickFix.UserRequestType  value)
    { getField(value); return value; }
    public QuickFix.UserRequestType getUserRequestType()
    { QuickFix.UserRequestType value = new QuickFix.UserRequestType();
      getField(value); return value; }
    public bool isSet(QuickFix.UserRequestType field)
    { return isSetField(field); }
    public bool isSetUserRequestType()
    { return isSetField(924); }

    public void set(QuickFix.Username value)
    { setField(value); }
    public QuickFix.Username get(QuickFix.Username  value)
    { getField(value); return value; }
    public QuickFix.Username getUsername()
    { QuickFix.Username value = new QuickFix.Username();
      getField(value); return value; }
    public bool isSet(QuickFix.Username field)
    { return isSetField(field); }
    public bool isSetUsername()
    { return isSetField(553); }

    public void set(QuickFix.Password value)
    { setField(value); }
    public QuickFix.Password get(QuickFix.Password  value)
    { getField(value); return value; }
    public QuickFix.Password getPassword()
    { QuickFix.Password value = new QuickFix.Password();
      getField(value); return value; }
    public bool isSet(QuickFix.Password field)
    { return isSetField(field); }
    public bool isSetPassword()
    { return isSetField(554); }

    public void set(QuickFix.NewPassword value)
    { setField(value); }
    public QuickFix.NewPassword get(QuickFix.NewPassword  value)
    { getField(value); return value; }
    public QuickFix.NewPassword getNewPassword()
    { QuickFix.NewPassword value = new QuickFix.NewPassword();
      getField(value); return value; }
    public bool isSet(QuickFix.NewPassword field)
    { return isSetField(field); }
    public bool isSetNewPassword()
    { return isSetField(925); }

    public void set(QuickFix.RawDataLength value)
    { setField(value); }
    public QuickFix.RawDataLength get(QuickFix.RawDataLength  value)
    { getField(value); return value; }
    public QuickFix.RawDataLength getRawDataLength()
    { QuickFix.RawDataLength value = new QuickFix.RawDataLength();
      getField(value); return value; }
    public bool isSet(QuickFix.RawDataLength field)
    { return isSetField(field); }
    public bool isSetRawDataLength()
    { return isSetField(95); }

    public void set(QuickFix.RawData value)
    { setField(value); }
    public QuickFix.RawData get(QuickFix.RawData  value)
    { getField(value); return value; }
    public QuickFix.RawData getRawData()
    { QuickFix.RawData value = new QuickFix.RawData();
      getField(value); return value; }
    public bool isSet(QuickFix.RawData field)
    { return isSetField(field); }
    public bool isSetRawData()
    { return isSetField(96); }

  };

}

