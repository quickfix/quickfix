namespace QuickFix43
{

  public class SecurityTypes : Message
  {
    public SecurityTypes() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("w"); }

    public SecurityTypes(
      QuickFix.SecurityReqID aSecurityReqID,
      QuickFix.SecurityResponseID aSecurityResponseID,
      QuickFix.SecurityResponseType aSecurityResponseType )
    : base(MsgType()) {
      set(aSecurityReqID);
      set(aSecurityResponseID);
      set(aSecurityResponseType);
    }

    public void set(QuickFix.SecurityReqID value)
    { setField(value); }
    public QuickFix.SecurityReqID get(QuickFix.SecurityReqID  value)
    { getField(value); return value; }
    public QuickFix.SecurityReqID getSecurityReqID()
    { QuickFix.SecurityReqID value = new QuickFix.SecurityReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityReqID field)
    { return isSetField(field); }
    public bool isSetSecurityReqID()
    { return isSetField(320); }

    public void set(QuickFix.SecurityResponseID value)
    { setField(value); }
    public QuickFix.SecurityResponseID get(QuickFix.SecurityResponseID  value)
    { getField(value); return value; }
    public QuickFix.SecurityResponseID getSecurityResponseID()
    { QuickFix.SecurityResponseID value = new QuickFix.SecurityResponseID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityResponseID field)
    { return isSetField(field); }
    public bool isSetSecurityResponseID()
    { return isSetField(322); }

    public void set(QuickFix.SecurityResponseType value)
    { setField(value); }
    public QuickFix.SecurityResponseType get(QuickFix.SecurityResponseType  value)
    { getField(value); return value; }
    public QuickFix.SecurityResponseType getSecurityResponseType()
    { QuickFix.SecurityResponseType value = new QuickFix.SecurityResponseType();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityResponseType field)
    { return isSetField(field); }
    public bool isSetSecurityResponseType()
    { return isSetField(323); }

    public void set(QuickFix.TotalNumSecurityTypes value)
    { setField(value); }
    public QuickFix.TotalNumSecurityTypes get(QuickFix.TotalNumSecurityTypes  value)
    { getField(value); return value; }
    public QuickFix.TotalNumSecurityTypes getTotalNumSecurityTypes()
    { QuickFix.TotalNumSecurityTypes value = new QuickFix.TotalNumSecurityTypes();
      getField(value); return value; }
    public bool isSet(QuickFix.TotalNumSecurityTypes field)
    { return isSetField(field); }
    public bool isSetTotalNumSecurityTypes()
    { return isSetField(557); }

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

    public void set(QuickFix.TradingSessionID value)
    { setField(value); }
    public QuickFix.TradingSessionID get(QuickFix.TradingSessionID  value)
    { getField(value); return value; }
    public QuickFix.TradingSessionID getTradingSessionID()
    { QuickFix.TradingSessionID value = new QuickFix.TradingSessionID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradingSessionID field)
    { return isSetField(field); }
    public bool isSetTradingSessionID()
    { return isSetField(336); }

    public void set(QuickFix.TradingSessionSubID value)
    { setField(value); }
    public QuickFix.TradingSessionSubID get(QuickFix.TradingSessionSubID  value)
    { getField(value); return value; }
    public QuickFix.TradingSessionSubID getTradingSessionSubID()
    { QuickFix.TradingSessionSubID value = new QuickFix.TradingSessionSubID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradingSessionSubID field)
    { return isSetField(field); }
    public bool isSetTradingSessionSubID()
    { return isSetField(625); }

    public void set(QuickFix.SubscriptionRequestType value)
    { setField(value); }
    public QuickFix.SubscriptionRequestType get(QuickFix.SubscriptionRequestType  value)
    { getField(value); return value; }
    public QuickFix.SubscriptionRequestType getSubscriptionRequestType()
    { QuickFix.SubscriptionRequestType value = new QuickFix.SubscriptionRequestType();
      getField(value); return value; }
    public bool isSet(QuickFix.SubscriptionRequestType field)
    { return isSetField(field); }
    public bool isSetSubscriptionRequestType()
    { return isSetField(263); }

    public void set(QuickFix.NoSecurityTypes value)
    { setField(value); }
    public QuickFix.NoSecurityTypes get(QuickFix.NoSecurityTypes  value)
    { getField(value); return value; }
    public QuickFix.NoSecurityTypes getNoSecurityTypes()
    { QuickFix.NoSecurityTypes value = new QuickFix.NoSecurityTypes();
      getField(value); return value; }
    public bool isSet(QuickFix.NoSecurityTypes field)
    { return isSetField(field); }
    public bool isSetNoSecurityTypes()
    { return isSetField(558); }

    public class NoSecurityTypes: QuickFix.Group
    {
    public NoSecurityTypes() : base(558,167,message_order ) {}
    static int[] message_order = new int[] {167,460,461,0};
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

      public void set(QuickFix.Product value)
      { setField(value); }
      public QuickFix.Product get(QuickFix.Product  value)
      { getField(value); return value; }
      public QuickFix.Product getProduct()
      { QuickFix.Product value = new QuickFix.Product();
        getField(value); return value; }
      public bool isSet(QuickFix.Product field)
      { return isSetField(field); }
      public bool isSetProduct()
      { return isSetField(460); }

      public void set(QuickFix.CFICode value)
      { setField(value); }
      public QuickFix.CFICode get(QuickFix.CFICode  value)
      { getField(value); return value; }
      public QuickFix.CFICode getCFICode()
      { QuickFix.CFICode value = new QuickFix.CFICode();
        getField(value); return value; }
      public bool isSet(QuickFix.CFICode field)
      { return isSetField(field); }
      public bool isSetCFICode()
      { return isSetField(461); }

    };
  };

}

