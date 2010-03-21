namespace QuickFix50Sp2
{

  public class RegistrationInstructionsResponse : Message
  {
    public RegistrationInstructionsResponse() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("p"); }

    public RegistrationInstructionsResponse(
      QuickFix.RegistID aRegistID,
      QuickFix.RegistTransType aRegistTransType,
      QuickFix.RegistRefID aRegistRefID,
      QuickFix.RegistStatus aRegistStatus )
    : base(MsgType()) {
      set(aRegistID);
      set(aRegistTransType);
      set(aRegistRefID);
      set(aRegistStatus);
    }

    public void set(QuickFix.RegistID value)
    { setField(value); }
    public QuickFix.RegistID get(QuickFix.RegistID  value)
    { getField(value); return value; }
    public QuickFix.RegistID getRegistID()
    { QuickFix.RegistID value = new QuickFix.RegistID();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistID field)
    { return isSetField(field); }
    public bool isSetRegistID()
    { return isSetField(513); }

    public void set(QuickFix.RegistTransType value)
    { setField(value); }
    public QuickFix.RegistTransType get(QuickFix.RegistTransType  value)
    { getField(value); return value; }
    public QuickFix.RegistTransType getRegistTransType()
    { QuickFix.RegistTransType value = new QuickFix.RegistTransType();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistTransType field)
    { return isSetField(field); }
    public bool isSetRegistTransType()
    { return isSetField(514); }

    public void set(QuickFix.RegistRefID value)
    { setField(value); }
    public QuickFix.RegistRefID get(QuickFix.RegistRefID  value)
    { getField(value); return value; }
    public QuickFix.RegistRefID getRegistRefID()
    { QuickFix.RegistRefID value = new QuickFix.RegistRefID();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistRefID field)
    { return isSetField(field); }
    public bool isSetRegistRefID()
    { return isSetField(508); }

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
    public void set(QuickFix.Account value)
    { setField(value); }
    public QuickFix.Account get(QuickFix.Account  value)
    { getField(value); return value; }
    public QuickFix.Account getAccount()
    { QuickFix.Account value = new QuickFix.Account();
      getField(value); return value; }
    public bool isSet(QuickFix.Account field)
    { return isSetField(field); }
    public bool isSetAccount()
    { return isSetField(1); }

    public void set(QuickFix.AcctIDSource value)
    { setField(value); }
    public QuickFix.AcctIDSource get(QuickFix.AcctIDSource  value)
    { getField(value); return value; }
    public QuickFix.AcctIDSource getAcctIDSource()
    { QuickFix.AcctIDSource value = new QuickFix.AcctIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.AcctIDSource field)
    { return isSetField(field); }
    public bool isSetAcctIDSource()
    { return isSetField(660); }

    public void set(QuickFix.RegistStatus value)
    { setField(value); }
    public QuickFix.RegistStatus get(QuickFix.RegistStatus  value)
    { getField(value); return value; }
    public QuickFix.RegistStatus getRegistStatus()
    { QuickFix.RegistStatus value = new QuickFix.RegistStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistStatus field)
    { return isSetField(field); }
    public bool isSetRegistStatus()
    { return isSetField(506); }

    public void set(QuickFix.RegistRejReasonCode value)
    { setField(value); }
    public QuickFix.RegistRejReasonCode get(QuickFix.RegistRejReasonCode  value)
    { getField(value); return value; }
    public QuickFix.RegistRejReasonCode getRegistRejReasonCode()
    { QuickFix.RegistRejReasonCode value = new QuickFix.RegistRejReasonCode();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistRejReasonCode field)
    { return isSetField(field); }
    public bool isSetRegistRejReasonCode()
    { return isSetField(507); }

    public void set(QuickFix.RegistRejReasonText value)
    { setField(value); }
    public QuickFix.RegistRejReasonText get(QuickFix.RegistRejReasonText  value)
    { getField(value); return value; }
    public QuickFix.RegistRejReasonText getRegistRejReasonText()
    { QuickFix.RegistRejReasonText value = new QuickFix.RegistRejReasonText();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistRejReasonText field)
    { return isSetField(field); }
    public bool isSetRegistRejReasonText()
    { return isSetField(496); }

  };

}

