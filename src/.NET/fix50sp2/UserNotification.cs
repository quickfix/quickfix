namespace QuickFix50Sp2
{

  public class UserNotification : Message
  {
    public UserNotification() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("CB"); }

    public UserNotification(
      QuickFix.UserStatus aUserStatus )
    : base(MsgType()) {
      set(aUserStatus);
    }

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

    public void set(QuickFix.Text value)
    { setField(value); }
    public QuickFix.Text get(QuickFix.Text  value)
    { getField(value); return value; }
    public QuickFix.Text getText()
    { QuickFix.Text value = new QuickFix.Text();
      getField(value); return value; }
    public bool isSet(QuickFix.Text field)
    { return isSetField(field); }
    public bool isSetText()
    { return isSetField(58); }

    public void set(QuickFix.EncodedTextLen value)
    { setField(value); }
    public QuickFix.EncodedTextLen get(QuickFix.EncodedTextLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedTextLen getEncodedTextLen()
    { QuickFix.EncodedTextLen value = new QuickFix.EncodedTextLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedTextLen field)
    { return isSetField(field); }
    public bool isSetEncodedTextLen()
    { return isSetField(354); }

    public void set(QuickFix.EncodedText value)
    { setField(value); }
    public QuickFix.EncodedText get(QuickFix.EncodedText  value)
    { getField(value); return value; }
    public QuickFix.EncodedText getEncodedText()
    { QuickFix.EncodedText value = new QuickFix.EncodedText();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedText field)
    { return isSetField(field); }
    public bool isSetEncodedText()
    { return isSetField(355); }

  };

}

