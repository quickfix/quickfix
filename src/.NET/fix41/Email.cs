namespace QuickFix41
{

  public class Email : Message
  {
    public Email() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("C"); }

    public Email(
      QuickFix.EmailThreadID aEmailThreadID,
      QuickFix.EmailType aEmailType,
      QuickFix.Subject aSubject )
    : base(MsgType()) {
      set(aEmailThreadID);
      set(aEmailType);
      set(aSubject);
    }

    public void set(QuickFix.EmailThreadID value)
    { setField(value); }
    public QuickFix.EmailThreadID get(QuickFix.EmailThreadID  value)
    { getField(value); return value; }
    public QuickFix.EmailThreadID getEmailThreadID()
    { QuickFix.EmailThreadID value = new QuickFix.EmailThreadID();
      getField(value); return value; }
    public bool isSet(QuickFix.EmailThreadID field)
    { return isSetField(field); }
    public bool isSetEmailThreadID()
    { return isSetField(164); }

    public void set(QuickFix.EmailType value)
    { setField(value); }
    public QuickFix.EmailType get(QuickFix.EmailType  value)
    { getField(value); return value; }
    public QuickFix.EmailType getEmailType()
    { QuickFix.EmailType value = new QuickFix.EmailType();
      getField(value); return value; }
    public bool isSet(QuickFix.EmailType field)
    { return isSetField(field); }
    public bool isSetEmailType()
    { return isSetField(94); }

    public void set(QuickFix.OrigTime value)
    { setField(value); }
    public QuickFix.OrigTime get(QuickFix.OrigTime  value)
    { getField(value); return value; }
    public QuickFix.OrigTime getOrigTime()
    { QuickFix.OrigTime value = new QuickFix.OrigTime();
      getField(value); return value; }
    public bool isSet(QuickFix.OrigTime field)
    { return isSetField(field); }
    public bool isSetOrigTime()
    { return isSetField(42); }

    public void set(QuickFix.Subject value)
    { setField(value); }
    public QuickFix.Subject get(QuickFix.Subject  value)
    { getField(value); return value; }
    public QuickFix.Subject getSubject()
    { QuickFix.Subject value = new QuickFix.Subject();
      getField(value); return value; }
    public bool isSet(QuickFix.Subject field)
    { return isSetField(field); }
    public bool isSetSubject()
    { return isSetField(147); }

    public void set(QuickFix.OrderID value)
    { setField(value); }
    public QuickFix.OrderID get(QuickFix.OrderID  value)
    { getField(value); return value; }
    public QuickFix.OrderID getOrderID()
    { QuickFix.OrderID value = new QuickFix.OrderID();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderID field)
    { return isSetField(field); }
    public bool isSetOrderID()
    { return isSetField(37); }

    public void set(QuickFix.ClOrdID value)
    { setField(value); }
    public QuickFix.ClOrdID get(QuickFix.ClOrdID  value)
    { getField(value); return value; }
    public QuickFix.ClOrdID getClOrdID()
    { QuickFix.ClOrdID value = new QuickFix.ClOrdID();
      getField(value); return value; }
    public bool isSet(QuickFix.ClOrdID field)
    { return isSetField(field); }
    public bool isSetClOrdID()
    { return isSetField(11); }

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

    public void set(QuickFix.NoRelatedSym value)
    { setField(value); }
    public QuickFix.NoRelatedSym get(QuickFix.NoRelatedSym  value)
    { getField(value); return value; }
    public QuickFix.NoRelatedSym getNoRelatedSym()
    { QuickFix.NoRelatedSym value = new QuickFix.NoRelatedSym();
      getField(value); return value; }
    public bool isSet(QuickFix.NoRelatedSym field)
    { return isSetField(field); }
    public bool isSetNoRelatedSym()
    { return isSetField(146); }

    public class NoRelatedSym: QuickFix.Group
    {
    public NoRelatedSym() : base(146,46,message_order ) {}
    static int[] message_order = new int[] {46,65,48,22,167,200,205,201,202,206,207,106,107,0};
      public void set(QuickFix.RelatdSym value)
      { setField(value); }
      public QuickFix.RelatdSym get(QuickFix.RelatdSym  value)
      { getField(value); return value; }
      public QuickFix.RelatdSym getRelatdSym()
      { QuickFix.RelatdSym value = new QuickFix.RelatdSym();
        getField(value); return value; }
      public bool isSet(QuickFix.RelatdSym field)
      { return isSetField(field); }
      public bool isSetRelatdSym()
      { return isSetField(46); }

      public void set(QuickFix.SymbolSfx value)
      { setField(value); }
      public QuickFix.SymbolSfx get(QuickFix.SymbolSfx  value)
      { getField(value); return value; }
      public QuickFix.SymbolSfx getSymbolSfx()
      { QuickFix.SymbolSfx value = new QuickFix.SymbolSfx();
        getField(value); return value; }
      public bool isSet(QuickFix.SymbolSfx field)
      { return isSetField(field); }
      public bool isSetSymbolSfx()
      { return isSetField(65); }

      public void set(QuickFix.SecurityID value)
      { setField(value); }
      public QuickFix.SecurityID get(QuickFix.SecurityID  value)
      { getField(value); return value; }
      public QuickFix.SecurityID getSecurityID()
      { QuickFix.SecurityID value = new QuickFix.SecurityID();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityID field)
      { return isSetField(field); }
      public bool isSetSecurityID()
      { return isSetField(48); }

      public void set(QuickFix.IDSource value)
      { setField(value); }
      public QuickFix.IDSource get(QuickFix.IDSource  value)
      { getField(value); return value; }
      public QuickFix.IDSource getIDSource()
      { QuickFix.IDSource value = new QuickFix.IDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.IDSource field)
      { return isSetField(field); }
      public bool isSetIDSource()
      { return isSetField(22); }

      public void set(QuickFix.SecurityType value)
      { setField(value); }
      public QuickFix.SecurityType get(QuickFix.SecurityType  value)
      { getField(value); return value; }
      public QuickFix.SecurityType getSecurityType()
      { QuickFix.SecurityType value = new QuickFix.SecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityType field)
      { return isSetField(field); }
      public bool isSetSecurityType()
      { return isSetField(167); }

      public void set(QuickFix.MaturityMonthYear value)
      { setField(value); }
      public QuickFix.MaturityMonthYear get(QuickFix.MaturityMonthYear  value)
      { getField(value); return value; }
      public QuickFix.MaturityMonthYear getMaturityMonthYear()
      { QuickFix.MaturityMonthYear value = new QuickFix.MaturityMonthYear();
        getField(value); return value; }
      public bool isSet(QuickFix.MaturityMonthYear field)
      { return isSetField(field); }
      public bool isSetMaturityMonthYear()
      { return isSetField(200); }

      public void set(QuickFix.MaturityDay value)
      { setField(value); }
      public QuickFix.MaturityDay get(QuickFix.MaturityDay  value)
      { getField(value); return value; }
      public QuickFix.MaturityDay getMaturityDay()
      { QuickFix.MaturityDay value = new QuickFix.MaturityDay();
        getField(value); return value; }
      public bool isSet(QuickFix.MaturityDay field)
      { return isSetField(field); }
      public bool isSetMaturityDay()
      { return isSetField(205); }

      public void set(QuickFix.PutOrCall value)
      { setField(value); }
      public QuickFix.PutOrCall get(QuickFix.PutOrCall  value)
      { getField(value); return value; }
      public QuickFix.PutOrCall getPutOrCall()
      { QuickFix.PutOrCall value = new QuickFix.PutOrCall();
        getField(value); return value; }
      public bool isSet(QuickFix.PutOrCall field)
      { return isSetField(field); }
      public bool isSetPutOrCall()
      { return isSetField(201); }

      public void set(QuickFix.StrikePrice value)
      { setField(value); }
      public QuickFix.StrikePrice get(QuickFix.StrikePrice  value)
      { getField(value); return value; }
      public QuickFix.StrikePrice getStrikePrice()
      { QuickFix.StrikePrice value = new QuickFix.StrikePrice();
        getField(value); return value; }
      public bool isSet(QuickFix.StrikePrice field)
      { return isSetField(field); }
      public bool isSetStrikePrice()
      { return isSetField(202); }

      public void set(QuickFix.OptAttribute value)
      { setField(value); }
      public QuickFix.OptAttribute get(QuickFix.OptAttribute  value)
      { getField(value); return value; }
      public QuickFix.OptAttribute getOptAttribute()
      { QuickFix.OptAttribute value = new QuickFix.OptAttribute();
        getField(value); return value; }
      public bool isSet(QuickFix.OptAttribute field)
      { return isSetField(field); }
      public bool isSetOptAttribute()
      { return isSetField(206); }

      public void set(QuickFix.SecurityExchange value)
      { setField(value); }
      public QuickFix.SecurityExchange get(QuickFix.SecurityExchange  value)
      { getField(value); return value; }
      public QuickFix.SecurityExchange getSecurityExchange()
      { QuickFix.SecurityExchange value = new QuickFix.SecurityExchange();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityExchange field)
      { return isSetField(field); }
      public bool isSetSecurityExchange()
      { return isSetField(207); }

      public void set(QuickFix.Issuer value)
      { setField(value); }
      public QuickFix.Issuer get(QuickFix.Issuer  value)
      { getField(value); return value; }
      public QuickFix.Issuer getIssuer()
      { QuickFix.Issuer value = new QuickFix.Issuer();
        getField(value); return value; }
      public bool isSet(QuickFix.Issuer field)
      { return isSetField(field); }
      public bool isSetIssuer()
      { return isSetField(106); }

      public void set(QuickFix.SecurityDesc value)
      { setField(value); }
      public QuickFix.SecurityDesc get(QuickFix.SecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.SecurityDesc getSecurityDesc()
      { QuickFix.SecurityDesc value = new QuickFix.SecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityDesc field)
      { return isSetField(field); }
      public bool isSetSecurityDesc()
      { return isSetField(107); }

    };
    public void set(QuickFix.LinesOfText value)
    { setField(value); }
    public QuickFix.LinesOfText get(QuickFix.LinesOfText  value)
    { getField(value); return value; }
    public QuickFix.LinesOfText getLinesOfText()
    { QuickFix.LinesOfText value = new QuickFix.LinesOfText();
      getField(value); return value; }
    public bool isSet(QuickFix.LinesOfText field)
    { return isSetField(field); }
    public bool isSetLinesOfText()
    { return isSetField(33); }

    public class LinesOfText: QuickFix.Group
    {
    public LinesOfText() : base(33,58,message_order ) {}
    static int[] message_order = new int[] {58,0};
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

    };
  };

}

