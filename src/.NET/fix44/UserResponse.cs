namespace QuickFix44
{

  public class UserResponse : Message
  {
    public UserResponse() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BF"); }

    public UserResponse(
      QuickFix.UserRequestID aUserRequestID,
      QuickFix.Username aUsername )
    : base(MsgType()) {
      set(aUserRequestID);
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

    public void set(QuickFix.UserStatus value)
    { setField(value); }
    public QuickFix.UserStatus get(QuickFix.UserStatus  value)
    { getField(value); return value; }
    public QuickFix.UserStatus getUserStatus()
    { QuickFix.UserStatus value = new QuickFix.UserStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.UserStatus field)
    { return isSetField(field); }
    public bool isSetUserStatus()
    { return isSetField(926); }

    public void set(QuickFix.UserStatusText value)
    { setField(value); }
    public QuickFix.UserStatusText get(QuickFix.UserStatusText  value)
    { getField(value); return value; }
    public QuickFix.UserStatusText getUserStatusText()
    { QuickFix.UserStatusText value = new QuickFix.UserStatusText();
      getField(value); return value; }
    public bool isSet(QuickFix.UserStatusText field)
    { return isSetField(field); }
    public bool isSetUserStatusText()
    { return isSetField(927); }

  };

}

