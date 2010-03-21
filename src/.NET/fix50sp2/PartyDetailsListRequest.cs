namespace QuickFix50Sp2
{

  public class PartyDetailsListRequest : Message
  {
    public PartyDetailsListRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("CF"); }

    public PartyDetailsListRequest(
      QuickFix.PartyDetailsListRequestID aPartyDetailsListRequestID )
    : base(MsgType()) {
      set(aPartyDetailsListRequestID);
    }

    public void set(QuickFix.PartyDetailsListRequestID value)
    { setField(value); }
    public QuickFix.PartyDetailsListRequestID get(QuickFix.PartyDetailsListRequestID  value)
    { getField(value); return value; }
    public QuickFix.PartyDetailsListRequestID getPartyDetailsListRequestID()
    { QuickFix.PartyDetailsListRequestID value = new QuickFix.PartyDetailsListRequestID();
      getField(value); return value; }
    public bool isSet(QuickFix.PartyDetailsListRequestID field)
    { return isSetField(field); }
    public bool isSetPartyDetailsListRequestID()
    { return isSetField(1505); }

    public void set(QuickFix.NoPartyListResponseTypes value)
    { setField(value); }
    public QuickFix.NoPartyListResponseTypes get(QuickFix.NoPartyListResponseTypes  value)
    { getField(value); return value; }
    public QuickFix.NoPartyListResponseTypes getNoPartyListResponseTypes()
    { QuickFix.NoPartyListResponseTypes value = new QuickFix.NoPartyListResponseTypes();
      getField(value); return value; }
    public bool isSet(QuickFix.NoPartyListResponseTypes field)
    { return isSetField(field); }
    public bool isSetNoPartyListResponseTypes()
    { return isSetField(1506); }

    public class NoPartyListResponseTypes: QuickFix.Group
    {
    public NoPartyListResponseTypes() : base(1506,1507,message_order ) {}
    static int[] message_order = new int[] {1507,0};
      public void set(QuickFix.PartyListResponseType value)
      { setField(value); }
      public QuickFix.PartyListResponseType get(QuickFix.PartyListResponseType  value)
      { getField(value); return value; }
      public QuickFix.PartyListResponseType getPartyListResponseType()
      { QuickFix.PartyListResponseType value = new QuickFix.PartyListResponseType();
        getField(value); return value; }
      public bool isSet(QuickFix.PartyListResponseType field)
      { return isSetField(field); }
      public bool isSetPartyListResponseType()
      { return isSetField(1507); }

    };
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
    public void set(QuickFix.NoRequestedPartyRoles value)
    { setField(value); }
    public QuickFix.NoRequestedPartyRoles get(QuickFix.NoRequestedPartyRoles  value)
    { getField(value); return value; }
    public QuickFix.NoRequestedPartyRoles getNoRequestedPartyRoles()
    { QuickFix.NoRequestedPartyRoles value = new QuickFix.NoRequestedPartyRoles();
      getField(value); return value; }
    public bool isSet(QuickFix.NoRequestedPartyRoles field)
    { return isSetField(field); }
    public bool isSetNoRequestedPartyRoles()
    { return isSetField(1508); }

    public class NoRequestedPartyRoles: QuickFix.Group
    {
    public NoRequestedPartyRoles() : base(1508,1509,message_order ) {}
    static int[] message_order = new int[] {1509,0};
      public void set(QuickFix.RequestedPartyRole value)
      { setField(value); }
      public QuickFix.RequestedPartyRole get(QuickFix.RequestedPartyRole  value)
      { getField(value); return value; }
      public QuickFix.RequestedPartyRole getRequestedPartyRole()
      { QuickFix.RequestedPartyRole value = new QuickFix.RequestedPartyRole();
        getField(value); return value; }
      public bool isSet(QuickFix.RequestedPartyRole field)
      { return isSetField(field); }
      public bool isSetRequestedPartyRole()
      { return isSetField(1509); }

    };
    public void set(QuickFix.NoPartyRelationships value)
    { setField(value); }
    public QuickFix.NoPartyRelationships get(QuickFix.NoPartyRelationships  value)
    { getField(value); return value; }
    public QuickFix.NoPartyRelationships getNoPartyRelationships()
    { QuickFix.NoPartyRelationships value = new QuickFix.NoPartyRelationships();
      getField(value); return value; }
    public bool isSet(QuickFix.NoPartyRelationships field)
    { return isSetField(field); }
    public bool isSetNoPartyRelationships()
    { return isSetField(1514); }

    public class NoPartyRelationships: QuickFix.Group
    {
    public NoPartyRelationships() : base(1514,1515,message_order ) {}
    static int[] message_order = new int[] {1515,0};
      public void set(QuickFix.PartyRelationship value)
      { setField(value); }
      public QuickFix.PartyRelationship get(QuickFix.PartyRelationship  value)
      { getField(value); return value; }
      public QuickFix.PartyRelationship getPartyRelationship()
      { QuickFix.PartyRelationship value = new QuickFix.PartyRelationship();
        getField(value); return value; }
      public bool isSet(QuickFix.PartyRelationship field)
      { return isSetField(field); }
      public bool isSetPartyRelationship()
      { return isSetField(1515); }

    };
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

