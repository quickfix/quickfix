namespace QuickFix42
{

  public class News : Message
  {
    public News() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("B"); }

    public News(
      QuickFix.Headline aHeadline )
    : base(MsgType()) {
      set(aHeadline);
    }

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

    public void set(QuickFix.Urgency value)
    { setField(value); }
    public QuickFix.Urgency get(QuickFix.Urgency  value)
    { getField(value); return value; }
    public QuickFix.Urgency getUrgency()
    { QuickFix.Urgency value = new QuickFix.Urgency();
      getField(value); return value; }
    public bool isSet(QuickFix.Urgency field)
    { return isSetField(field); }
    public bool isSetUrgency()
    { return isSetField(61); }

    public void set(QuickFix.Headline value)
    { setField(value); }
    public QuickFix.Headline get(QuickFix.Headline  value)
    { getField(value); return value; }
    public QuickFix.Headline getHeadline()
    { QuickFix.Headline value = new QuickFix.Headline();
      getField(value); return value; }
    public bool isSet(QuickFix.Headline field)
    { return isSetField(field); }
    public bool isSetHeadline()
    { return isSetField(148); }

    public void set(QuickFix.EncodedHeadlineLen value)
    { setField(value); }
    public QuickFix.EncodedHeadlineLen get(QuickFix.EncodedHeadlineLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedHeadlineLen getEncodedHeadlineLen()
    { QuickFix.EncodedHeadlineLen value = new QuickFix.EncodedHeadlineLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedHeadlineLen field)
    { return isSetField(field); }
    public bool isSetEncodedHeadlineLen()
    { return isSetField(358); }

    public void set(QuickFix.EncodedHeadline value)
    { setField(value); }
    public QuickFix.EncodedHeadline get(QuickFix.EncodedHeadline  value)
    { getField(value); return value; }
    public QuickFix.EncodedHeadline getEncodedHeadline()
    { QuickFix.EncodedHeadline value = new QuickFix.EncodedHeadline();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedHeadline field)
    { return isSetField(field); }
    public bool isSetEncodedHeadline()
    { return isSetField(359); }

    public void set(QuickFix.URLLink value)
    { setField(value); }
    public QuickFix.URLLink get(QuickFix.URLLink  value)
    { getField(value); return value; }
    public QuickFix.URLLink getURLLink()
    { QuickFix.URLLink value = new QuickFix.URLLink();
      getField(value); return value; }
    public bool isSet(QuickFix.URLLink field)
    { return isSetField(field); }
    public bool isSetURLLink()
    { return isSetField(149); }

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

    public void set(QuickFix.NoRoutingIDs value)
    { setField(value); }
    public QuickFix.NoRoutingIDs get(QuickFix.NoRoutingIDs  value)
    { getField(value); return value; }
    public QuickFix.NoRoutingIDs getNoRoutingIDs()
    { QuickFix.NoRoutingIDs value = new QuickFix.NoRoutingIDs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoRoutingIDs field)
    { return isSetField(field); }
    public bool isSetNoRoutingIDs()
    { return isSetField(215); }

    public class NoRoutingIDs: QuickFix.Group
    {
    public NoRoutingIDs() : base(215,216,message_order ) {}
    static int[] message_order = new int[] {216,217,0};
      public void set(QuickFix.RoutingType value)
      { setField(value); }
      public QuickFix.RoutingType get(QuickFix.RoutingType  value)
      { getField(value); return value; }
      public QuickFix.RoutingType getRoutingType()
      { QuickFix.RoutingType value = new QuickFix.RoutingType();
        getField(value); return value; }
      public bool isSet(QuickFix.RoutingType field)
      { return isSetField(field); }
      public bool isSetRoutingType()
      { return isSetField(216); }

      public void set(QuickFix.RoutingID value)
      { setField(value); }
      public QuickFix.RoutingID get(QuickFix.RoutingID  value)
      { getField(value); return value; }
      public QuickFix.RoutingID getRoutingID()
      { QuickFix.RoutingID value = new QuickFix.RoutingID();
        getField(value); return value; }
      public bool isSet(QuickFix.RoutingID field)
      { return isSetField(field); }
      public bool isSetRoutingID()
      { return isSetField(217); }

    };
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
    static int[] message_order = new int[] {46,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,0};
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

      public void set(QuickFix.ContractMultiplier value)
      { setField(value); }
      public QuickFix.ContractMultiplier get(QuickFix.ContractMultiplier  value)
      { getField(value); return value; }
      public QuickFix.ContractMultiplier getContractMultiplier()
      { QuickFix.ContractMultiplier value = new QuickFix.ContractMultiplier();
        getField(value); return value; }
      public bool isSet(QuickFix.ContractMultiplier field)
      { return isSetField(field); }
      public bool isSetContractMultiplier()
      { return isSetField(231); }

      public void set(QuickFix.CouponRate value)
      { setField(value); }
      public QuickFix.CouponRate get(QuickFix.CouponRate  value)
      { getField(value); return value; }
      public QuickFix.CouponRate getCouponRate()
      { QuickFix.CouponRate value = new QuickFix.CouponRate();
        getField(value); return value; }
      public bool isSet(QuickFix.CouponRate field)
      { return isSetField(field); }
      public bool isSetCouponRate()
      { return isSetField(223); }

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

      public void set(QuickFix.EncodedIssuerLen value)
      { setField(value); }
      public QuickFix.EncodedIssuerLen get(QuickFix.EncodedIssuerLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedIssuerLen getEncodedIssuerLen()
      { QuickFix.EncodedIssuerLen value = new QuickFix.EncodedIssuerLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedIssuerLen field)
      { return isSetField(field); }
      public bool isSetEncodedIssuerLen()
      { return isSetField(348); }

      public void set(QuickFix.EncodedIssuer value)
      { setField(value); }
      public QuickFix.EncodedIssuer get(QuickFix.EncodedIssuer  value)
      { getField(value); return value; }
      public QuickFix.EncodedIssuer getEncodedIssuer()
      { QuickFix.EncodedIssuer value = new QuickFix.EncodedIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedIssuer field)
      { return isSetField(field); }
      public bool isSetEncodedIssuer()
      { return isSetField(349); }

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

      public void set(QuickFix.EncodedSecurityDescLen value)
      { setField(value); }
      public QuickFix.EncodedSecurityDescLen get(QuickFix.EncodedSecurityDescLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedSecurityDescLen getEncodedSecurityDescLen()
      { QuickFix.EncodedSecurityDescLen value = new QuickFix.EncodedSecurityDescLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedSecurityDescLen field)
      { return isSetField(field); }
      public bool isSetEncodedSecurityDescLen()
      { return isSetField(350); }

      public void set(QuickFix.EncodedSecurityDesc value)
      { setField(value); }
      public QuickFix.EncodedSecurityDesc get(QuickFix.EncodedSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.EncodedSecurityDesc getEncodedSecurityDesc()
      { QuickFix.EncodedSecurityDesc value = new QuickFix.EncodedSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedSecurityDesc field)
      { return isSetField(field); }
      public bool isSetEncodedSecurityDesc()
      { return isSetField(351); }

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
    static int[] message_order = new int[] {58,354,355,0};
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
  };

}

