namespace QuickFix50Sp2
{

  public class MarketDataRequestReject : Message
  {
    public MarketDataRequestReject() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("Y"); }

    public MarketDataRequestReject(
      QuickFix.MDReqID aMDReqID )
    : base(MsgType()) {
      set(aMDReqID);
    }

    public void set(QuickFix.MDReqID value)
    { setField(value); }
    public QuickFix.MDReqID get(QuickFix.MDReqID  value)
    { getField(value); return value; }
    public QuickFix.MDReqID getMDReqID()
    { QuickFix.MDReqID value = new QuickFix.MDReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.MDReqID field)
    { return isSetField(field); }
    public bool isSetMDReqID()
    { return isSetField(262); }

    public void set(QuickFix.MDReqRejReason value)
    { setField(value); }
    public QuickFix.MDReqRejReason get(QuickFix.MDReqRejReason  value)
    { getField(value); return value; }
    public QuickFix.MDReqRejReason getMDReqRejReason()
    { QuickFix.MDReqRejReason value = new QuickFix.MDReqRejReason();
      getField(value); return value; }
    public bool isSet(QuickFix.MDReqRejReason field)
    { return isSetField(field); }
    public bool isSetMDReqRejReason()
    { return isSetField(281); }

    public void set(QuickFix.NoAltMDSource value)
    { setField(value); }
    public QuickFix.NoAltMDSource get(QuickFix.NoAltMDSource  value)
    { getField(value); return value; }
    public QuickFix.NoAltMDSource getNoAltMDSource()
    { QuickFix.NoAltMDSource value = new QuickFix.NoAltMDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.NoAltMDSource field)
    { return isSetField(field); }
    public bool isSetNoAltMDSource()
    { return isSetField(816); }

    public class NoAltMDSource: QuickFix.Group
    {
    public NoAltMDSource() : base(816,817,message_order ) {}
    static int[] message_order = new int[] {817,0};
      public void set(QuickFix.AltMDSourceID value)
      { setField(value); }
      public QuickFix.AltMDSourceID get(QuickFix.AltMDSourceID  value)
      { getField(value); return value; }
      public QuickFix.AltMDSourceID getAltMDSourceID()
      { QuickFix.AltMDSourceID value = new QuickFix.AltMDSourceID();
        getField(value); return value; }
      public bool isSet(QuickFix.AltMDSourceID field)
      { return isSetField(field); }
      public bool isSetAltMDSourceID()
      { return isSetField(817); }

    };
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

    public void set(QuickFix.NoPartyIDs value)
    { setField(value); }
    public QuickFix.NoPartyIDs get(QuickFix.NoPartyIDs  value)
    { getField(value); return value; }
    public QuickFix.NoPartyIDs getNoPartyIDs()
    { QuickFix.NoPartyIDs value = new QuickFix.NoPartyIDs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoPartyIDs field)
    { return isSetField(field); }
    public bool isSetNoPartyIDs()
    { return isSetField(453); }

    public class NoPartyIDs: QuickFix.Group
    {
    public NoPartyIDs() : base(453,448,message_order ) {}
    static int[] message_order = new int[] {448,447,452,802,0};
      public void set(QuickFix.PartyID value)
      { setField(value); }
      public QuickFix.PartyID get(QuickFix.PartyID  value)
      { getField(value); return value; }
      public QuickFix.PartyID getPartyID()
      { QuickFix.PartyID value = new QuickFix.PartyID();
        getField(value); return value; }
      public bool isSet(QuickFix.PartyID field)
      { return isSetField(field); }
      public bool isSetPartyID()
      { return isSetField(448); }

      public void set(QuickFix.PartyIDSource value)
      { setField(value); }
      public QuickFix.PartyIDSource get(QuickFix.PartyIDSource  value)
      { getField(value); return value; }
      public QuickFix.PartyIDSource getPartyIDSource()
      { QuickFix.PartyIDSource value = new QuickFix.PartyIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.PartyIDSource field)
      { return isSetField(field); }
      public bool isSetPartyIDSource()
      { return isSetField(447); }

      public void set(QuickFix.PartyRole value)
      { setField(value); }
      public QuickFix.PartyRole get(QuickFix.PartyRole  value)
      { getField(value); return value; }
      public QuickFix.PartyRole getPartyRole()
      { QuickFix.PartyRole value = new QuickFix.PartyRole();
        getField(value); return value; }
      public bool isSet(QuickFix.PartyRole field)
      { return isSetField(field); }
      public bool isSetPartyRole()
      { return isSetField(452); }

      public void set(QuickFix.NoPartySubIDs value)
      { setField(value); }
      public QuickFix.NoPartySubIDs get(QuickFix.NoPartySubIDs  value)
      { getField(value); return value; }
      public QuickFix.NoPartySubIDs getNoPartySubIDs()
      { QuickFix.NoPartySubIDs value = new QuickFix.NoPartySubIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoPartySubIDs field)
      { return isSetField(field); }
      public bool isSetNoPartySubIDs()
      { return isSetField(802); }

      public class NoPartySubIDs: QuickFix.Group
      {
      public NoPartySubIDs() : base(802,523,message_order ) {}
      static int[] message_order = new int[] {523,803,0};
        public void set(QuickFix.PartySubID value)
        { setField(value); }
        public QuickFix.PartySubID get(QuickFix.PartySubID  value)
        { getField(value); return value; }
        public QuickFix.PartySubID getPartySubID()
        { QuickFix.PartySubID value = new QuickFix.PartySubID();
          getField(value); return value; }
        public bool isSet(QuickFix.PartySubID field)
        { return isSetField(field); }
        public bool isSetPartySubID()
        { return isSetField(523); }

        public void set(QuickFix.PartySubIDType value)
        { setField(value); }
        public QuickFix.PartySubIDType get(QuickFix.PartySubIDType  value)
        { getField(value); return value; }
        public QuickFix.PartySubIDType getPartySubIDType()
        { QuickFix.PartySubIDType value = new QuickFix.PartySubIDType();
          getField(value); return value; }
        public bool isSet(QuickFix.PartySubIDType field)
        { return isSetField(field); }
        public bool isSetPartySubIDType()
        { return isSetField(803); }

      };
    };
  };

}

