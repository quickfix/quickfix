namespace QuickFix40
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

  };

}

