namespace QuickFix44
{

  public class Logon : Message
  {
    public Logon() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("A"); }

    public Logon(
      QuickFix.EncryptMethod aEncryptMethod,
      QuickFix.HeartBtInt aHeartBtInt )
    : base(MsgType()) {
      set(aEncryptMethod);
      set(aHeartBtInt);
    }

    public void set(QuickFix.EncryptMethod value)
    { setField(value); }
    public QuickFix.EncryptMethod get(QuickFix.EncryptMethod  value)
    { getField(value); return value; }
    public QuickFix.EncryptMethod getEncryptMethod()
    { QuickFix.EncryptMethod value = new QuickFix.EncryptMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.EncryptMethod field)
    { return isSetField(field); }
    public bool isSetEncryptMethod()
    { return isSetField(98); }

    public void set(QuickFix.HeartBtInt value)
    { setField(value); }
    public QuickFix.HeartBtInt get(QuickFix.HeartBtInt  value)
    { getField(value); return value; }
    public QuickFix.HeartBtInt getHeartBtInt()
    { QuickFix.HeartBtInt value = new QuickFix.HeartBtInt();
      getField(value); return value; }
    public bool isSet(QuickFix.HeartBtInt field)
    { return isSetField(field); }
    public bool isSetHeartBtInt()
    { return isSetField(108); }

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

    public void set(QuickFix.ResetSeqNumFlag value)
    { setField(value); }
    public QuickFix.ResetSeqNumFlag get(QuickFix.ResetSeqNumFlag  value)
    { getField(value); return value; }
    public QuickFix.ResetSeqNumFlag getResetSeqNumFlag()
    { QuickFix.ResetSeqNumFlag value = new QuickFix.ResetSeqNumFlag();
      getField(value); return value; }
    public bool isSet(QuickFix.ResetSeqNumFlag field)
    { return isSetField(field); }
    public bool isSetResetSeqNumFlag()
    { return isSetField(141); }

    public void set(QuickFix.NextExpectedMsgSeqNum value)
    { setField(value); }
    public QuickFix.NextExpectedMsgSeqNum get(QuickFix.NextExpectedMsgSeqNum  value)
    { getField(value); return value; }
    public QuickFix.NextExpectedMsgSeqNum getNextExpectedMsgSeqNum()
    { QuickFix.NextExpectedMsgSeqNum value = new QuickFix.NextExpectedMsgSeqNum();
      getField(value); return value; }
    public bool isSet(QuickFix.NextExpectedMsgSeqNum field)
    { return isSetField(field); }
    public bool isSetNextExpectedMsgSeqNum()
    { return isSetField(789); }

    public void set(QuickFix.MaxMessageSize value)
    { setField(value); }
    public QuickFix.MaxMessageSize get(QuickFix.MaxMessageSize  value)
    { getField(value); return value; }
    public QuickFix.MaxMessageSize getMaxMessageSize()
    { QuickFix.MaxMessageSize value = new QuickFix.MaxMessageSize();
      getField(value); return value; }
    public bool isSet(QuickFix.MaxMessageSize field)
    { return isSetField(field); }
    public bool isSetMaxMessageSize()
    { return isSetField(383); }

    public void set(QuickFix.TestMessageIndicator value)
    { setField(value); }
    public QuickFix.TestMessageIndicator get(QuickFix.TestMessageIndicator  value)
    { getField(value); return value; }
    public QuickFix.TestMessageIndicator getTestMessageIndicator()
    { QuickFix.TestMessageIndicator value = new QuickFix.TestMessageIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.TestMessageIndicator field)
    { return isSetField(field); }
    public bool isSetTestMessageIndicator()
    { return isSetField(464); }

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

    public void set(QuickFix.NoMsgTypes value)
    { setField(value); }
    public QuickFix.NoMsgTypes get(QuickFix.NoMsgTypes  value)
    { getField(value); return value; }
    public QuickFix.NoMsgTypes getNoMsgTypes()
    { QuickFix.NoMsgTypes value = new QuickFix.NoMsgTypes();
      getField(value); return value; }
    public bool isSet(QuickFix.NoMsgTypes field)
    { return isSetField(field); }
    public bool isSetNoMsgTypes()
    { return isSetField(384); }

    public class NoMsgTypes: QuickFix.Group
    {
    public NoMsgTypes() : base(384,372,message_order ) {}
    static int[] message_order = new int[] {372,385,0};
      public void set(QuickFix.RefMsgType value)
      { setField(value); }
      public QuickFix.RefMsgType get(QuickFix.RefMsgType  value)
      { getField(value); return value; }
      public QuickFix.RefMsgType getRefMsgType()
      { QuickFix.RefMsgType value = new QuickFix.RefMsgType();
        getField(value); return value; }
      public bool isSet(QuickFix.RefMsgType field)
      { return isSetField(field); }
      public bool isSetRefMsgType()
      { return isSetField(372); }

      public void set(QuickFix.MsgDirection value)
      { setField(value); }
      public QuickFix.MsgDirection get(QuickFix.MsgDirection  value)
      { getField(value); return value; }
      public QuickFix.MsgDirection getMsgDirection()
      { QuickFix.MsgDirection value = new QuickFix.MsgDirection();
        getField(value); return value; }
      public bool isSet(QuickFix.MsgDirection field)
      { return isSetField(field); }
      public bool isSetMsgDirection()
      { return isSetField(385); }

    };
  };

}

