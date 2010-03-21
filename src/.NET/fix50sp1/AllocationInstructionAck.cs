namespace QuickFix50Sp1
{

  public class AllocationInstructionAck : Message
  {
    public AllocationInstructionAck() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("P"); }

    public AllocationInstructionAck(
      QuickFix.AllocID aAllocID,
      QuickFix.AllocStatus aAllocStatus )
    : base(MsgType()) {
      set(aAllocID);
      set(aAllocStatus);
    }

    public void set(QuickFix.AllocID value)
    { setField(value); }
    public QuickFix.AllocID get(QuickFix.AllocID  value)
    { getField(value); return value; }
    public QuickFix.AllocID getAllocID()
    { QuickFix.AllocID value = new QuickFix.AllocID();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocID field)
    { return isSetField(field); }
    public bool isSetAllocID()
    { return isSetField(70); }

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
    public void set(QuickFix.SecondaryAllocID value)
    { setField(value); }
    public QuickFix.SecondaryAllocID get(QuickFix.SecondaryAllocID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryAllocID getSecondaryAllocID()
    { QuickFix.SecondaryAllocID value = new QuickFix.SecondaryAllocID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryAllocID field)
    { return isSetField(field); }
    public bool isSetSecondaryAllocID()
    { return isSetField(793); }

    public void set(QuickFix.TradeDate value)
    { setField(value); }
    public QuickFix.TradeDate get(QuickFix.TradeDate  value)
    { getField(value); return value; }
    public QuickFix.TradeDate getTradeDate()
    { QuickFix.TradeDate value = new QuickFix.TradeDate();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeDate field)
    { return isSetField(field); }
    public bool isSetTradeDate()
    { return isSetField(75); }

    public void set(QuickFix.TransactTime value)
    { setField(value); }
    public QuickFix.TransactTime get(QuickFix.TransactTime  value)
    { getField(value); return value; }
    public QuickFix.TransactTime getTransactTime()
    { QuickFix.TransactTime value = new QuickFix.TransactTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TransactTime field)
    { return isSetField(field); }
    public bool isSetTransactTime()
    { return isSetField(60); }

    public void set(QuickFix.AllocStatus value)
    { setField(value); }
    public QuickFix.AllocStatus get(QuickFix.AllocStatus  value)
    { getField(value); return value; }
    public QuickFix.AllocStatus getAllocStatus()
    { QuickFix.AllocStatus value = new QuickFix.AllocStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocStatus field)
    { return isSetField(field); }
    public bool isSetAllocStatus()
    { return isSetField(87); }

    public void set(QuickFix.AllocRejCode value)
    { setField(value); }
    public QuickFix.AllocRejCode get(QuickFix.AllocRejCode  value)
    { getField(value); return value; }
    public QuickFix.AllocRejCode getAllocRejCode()
    { QuickFix.AllocRejCode value = new QuickFix.AllocRejCode();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocRejCode field)
    { return isSetField(field); }
    public bool isSetAllocRejCode()
    { return isSetField(88); }

    public void set(QuickFix.AllocType value)
    { setField(value); }
    public QuickFix.AllocType get(QuickFix.AllocType  value)
    { getField(value); return value; }
    public QuickFix.AllocType getAllocType()
    { QuickFix.AllocType value = new QuickFix.AllocType();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocType field)
    { return isSetField(field); }
    public bool isSetAllocType()
    { return isSetField(626); }

    public void set(QuickFix.AllocIntermedReqType value)
    { setField(value); }
    public QuickFix.AllocIntermedReqType get(QuickFix.AllocIntermedReqType  value)
    { getField(value); return value; }
    public QuickFix.AllocIntermedReqType getAllocIntermedReqType()
    { QuickFix.AllocIntermedReqType value = new QuickFix.AllocIntermedReqType();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocIntermedReqType field)
    { return isSetField(field); }
    public bool isSetAllocIntermedReqType()
    { return isSetField(808); }

    public void set(QuickFix.MatchStatus value)
    { setField(value); }
    public QuickFix.MatchStatus get(QuickFix.MatchStatus  value)
    { getField(value); return value; }
    public QuickFix.MatchStatus getMatchStatus()
    { QuickFix.MatchStatus value = new QuickFix.MatchStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.MatchStatus field)
    { return isSetField(field); }
    public bool isSetMatchStatus()
    { return isSetField(573); }

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

    public void set(QuickFix.NoAllocs value)
    { setField(value); }
    public QuickFix.NoAllocs get(QuickFix.NoAllocs  value)
    { getField(value); return value; }
    public QuickFix.NoAllocs getNoAllocs()
    { QuickFix.NoAllocs value = new QuickFix.NoAllocs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoAllocs field)
    { return isSetField(field); }
    public bool isSetNoAllocs()
    { return isSetField(78); }

    public class NoAllocs: QuickFix.Group
    {
    public NoAllocs() : base(78,79,message_order ) {}
    static int[] message_order = new int[] {79,661,366,467,776,161,360,361,989,993,992,80,539,1047,0};
      public void set(QuickFix.AllocAccount value)
      { setField(value); }
      public QuickFix.AllocAccount get(QuickFix.AllocAccount  value)
      { getField(value); return value; }
      public QuickFix.AllocAccount getAllocAccount()
      { QuickFix.AllocAccount value = new QuickFix.AllocAccount();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocAccount field)
      { return isSetField(field); }
      public bool isSetAllocAccount()
      { return isSetField(79); }

      public void set(QuickFix.AllocAcctIDSource value)
      { setField(value); }
      public QuickFix.AllocAcctIDSource get(QuickFix.AllocAcctIDSource  value)
      { getField(value); return value; }
      public QuickFix.AllocAcctIDSource getAllocAcctIDSource()
      { QuickFix.AllocAcctIDSource value = new QuickFix.AllocAcctIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocAcctIDSource field)
      { return isSetField(field); }
      public bool isSetAllocAcctIDSource()
      { return isSetField(661); }

      public void set(QuickFix.AllocPrice value)
      { setField(value); }
      public QuickFix.AllocPrice get(QuickFix.AllocPrice  value)
      { getField(value); return value; }
      public QuickFix.AllocPrice getAllocPrice()
      { QuickFix.AllocPrice value = new QuickFix.AllocPrice();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocPrice field)
      { return isSetField(field); }
      public bool isSetAllocPrice()
      { return isSetField(366); }

      public void set(QuickFix.IndividualAllocID value)
      { setField(value); }
      public QuickFix.IndividualAllocID get(QuickFix.IndividualAllocID  value)
      { getField(value); return value; }
      public QuickFix.IndividualAllocID getIndividualAllocID()
      { QuickFix.IndividualAllocID value = new QuickFix.IndividualAllocID();
        getField(value); return value; }
      public bool isSet(QuickFix.IndividualAllocID field)
      { return isSetField(field); }
      public bool isSetIndividualAllocID()
      { return isSetField(467); }

      public void set(QuickFix.IndividualAllocRejCode value)
      { setField(value); }
      public QuickFix.IndividualAllocRejCode get(QuickFix.IndividualAllocRejCode  value)
      { getField(value); return value; }
      public QuickFix.IndividualAllocRejCode getIndividualAllocRejCode()
      { QuickFix.IndividualAllocRejCode value = new QuickFix.IndividualAllocRejCode();
        getField(value); return value; }
      public bool isSet(QuickFix.IndividualAllocRejCode field)
      { return isSetField(field); }
      public bool isSetIndividualAllocRejCode()
      { return isSetField(776); }

      public void set(QuickFix.AllocText value)
      { setField(value); }
      public QuickFix.AllocText get(QuickFix.AllocText  value)
      { getField(value); return value; }
      public QuickFix.AllocText getAllocText()
      { QuickFix.AllocText value = new QuickFix.AllocText();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocText field)
      { return isSetField(field); }
      public bool isSetAllocText()
      { return isSetField(161); }

      public void set(QuickFix.EncodedAllocTextLen value)
      { setField(value); }
      public QuickFix.EncodedAllocTextLen get(QuickFix.EncodedAllocTextLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedAllocTextLen getEncodedAllocTextLen()
      { QuickFix.EncodedAllocTextLen value = new QuickFix.EncodedAllocTextLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedAllocTextLen field)
      { return isSetField(field); }
      public bool isSetEncodedAllocTextLen()
      { return isSetField(360); }

      public void set(QuickFix.EncodedAllocText value)
      { setField(value); }
      public QuickFix.EncodedAllocText get(QuickFix.EncodedAllocText  value)
      { getField(value); return value; }
      public QuickFix.EncodedAllocText getEncodedAllocText()
      { QuickFix.EncodedAllocText value = new QuickFix.EncodedAllocText();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedAllocText field)
      { return isSetField(field); }
      public bool isSetEncodedAllocText()
      { return isSetField(361); }

      public void set(QuickFix.SecondaryIndividualAllocID value)
      { setField(value); }
      public QuickFix.SecondaryIndividualAllocID get(QuickFix.SecondaryIndividualAllocID  value)
      { getField(value); return value; }
      public QuickFix.SecondaryIndividualAllocID getSecondaryIndividualAllocID()
      { QuickFix.SecondaryIndividualAllocID value = new QuickFix.SecondaryIndividualAllocID();
        getField(value); return value; }
      public bool isSet(QuickFix.SecondaryIndividualAllocID field)
      { return isSetField(field); }
      public bool isSetSecondaryIndividualAllocID()
      { return isSetField(989); }

      public void set(QuickFix.AllocCustomerCapacity value)
      { setField(value); }
      public QuickFix.AllocCustomerCapacity get(QuickFix.AllocCustomerCapacity  value)
      { getField(value); return value; }
      public QuickFix.AllocCustomerCapacity getAllocCustomerCapacity()
      { QuickFix.AllocCustomerCapacity value = new QuickFix.AllocCustomerCapacity();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocCustomerCapacity field)
      { return isSetField(field); }
      public bool isSetAllocCustomerCapacity()
      { return isSetField(993); }

      public void set(QuickFix.IndividualAllocType value)
      { setField(value); }
      public QuickFix.IndividualAllocType get(QuickFix.IndividualAllocType  value)
      { getField(value); return value; }
      public QuickFix.IndividualAllocType getIndividualAllocType()
      { QuickFix.IndividualAllocType value = new QuickFix.IndividualAllocType();
        getField(value); return value; }
      public bool isSet(QuickFix.IndividualAllocType field)
      { return isSetField(field); }
      public bool isSetIndividualAllocType()
      { return isSetField(992); }

      public void set(QuickFix.AllocQty value)
      { setField(value); }
      public QuickFix.AllocQty get(QuickFix.AllocQty  value)
      { getField(value); return value; }
      public QuickFix.AllocQty getAllocQty()
      { QuickFix.AllocQty value = new QuickFix.AllocQty();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocQty field)
      { return isSetField(field); }
      public bool isSetAllocQty()
      { return isSetField(80); }

      public void set(QuickFix.NoNestedPartyIDs value)
      { setField(value); }
      public QuickFix.NoNestedPartyIDs get(QuickFix.NoNestedPartyIDs  value)
      { getField(value); return value; }
      public QuickFix.NoNestedPartyIDs getNoNestedPartyIDs()
      { QuickFix.NoNestedPartyIDs value = new QuickFix.NoNestedPartyIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoNestedPartyIDs field)
      { return isSetField(field); }
      public bool isSetNoNestedPartyIDs()
      { return isSetField(539); }

      public class NoNestedPartyIDs: QuickFix.Group
      {
      public NoNestedPartyIDs() : base(539,524,message_order ) {}
      static int[] message_order = new int[] {524,525,538,804,0};
        public void set(QuickFix.NestedPartyID value)
        { setField(value); }
        public QuickFix.NestedPartyID get(QuickFix.NestedPartyID  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyID getNestedPartyID()
        { QuickFix.NestedPartyID value = new QuickFix.NestedPartyID();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyID field)
        { return isSetField(field); }
        public bool isSetNestedPartyID()
        { return isSetField(524); }

        public void set(QuickFix.NestedPartyIDSource value)
        { setField(value); }
        public QuickFix.NestedPartyIDSource get(QuickFix.NestedPartyIDSource  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyIDSource getNestedPartyIDSource()
        { QuickFix.NestedPartyIDSource value = new QuickFix.NestedPartyIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyIDSource field)
        { return isSetField(field); }
        public bool isSetNestedPartyIDSource()
        { return isSetField(525); }

        public void set(QuickFix.NestedPartyRole value)
        { setField(value); }
        public QuickFix.NestedPartyRole get(QuickFix.NestedPartyRole  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyRole getNestedPartyRole()
        { QuickFix.NestedPartyRole value = new QuickFix.NestedPartyRole();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyRole field)
        { return isSetField(field); }
        public bool isSetNestedPartyRole()
        { return isSetField(538); }

        public void set(QuickFix.NoNestedPartySubIDs value)
        { setField(value); }
        public QuickFix.NoNestedPartySubIDs get(QuickFix.NoNestedPartySubIDs  value)
        { getField(value); return value; }
        public QuickFix.NoNestedPartySubIDs getNoNestedPartySubIDs()
        { QuickFix.NoNestedPartySubIDs value = new QuickFix.NoNestedPartySubIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoNestedPartySubIDs field)
        { return isSetField(field); }
        public bool isSetNoNestedPartySubIDs()
        { return isSetField(804); }

        public class NoNestedPartySubIDs: QuickFix.Group
        {
        public NoNestedPartySubIDs() : base(804,545,message_order ) {}
        static int[] message_order = new int[] {545,805,0};
          public void set(QuickFix.NestedPartySubID value)
          { setField(value); }
          public QuickFix.NestedPartySubID get(QuickFix.NestedPartySubID  value)
          { getField(value); return value; }
          public QuickFix.NestedPartySubID getNestedPartySubID()
          { QuickFix.NestedPartySubID value = new QuickFix.NestedPartySubID();
            getField(value); return value; }
          public bool isSet(QuickFix.NestedPartySubID field)
          { return isSetField(field); }
          public bool isSetNestedPartySubID()
          { return isSetField(545); }

          public void set(QuickFix.NestedPartySubIDType value)
          { setField(value); }
          public QuickFix.NestedPartySubIDType get(QuickFix.NestedPartySubIDType  value)
          { getField(value); return value; }
          public QuickFix.NestedPartySubIDType getNestedPartySubIDType()
          { QuickFix.NestedPartySubIDType value = new QuickFix.NestedPartySubIDType();
            getField(value); return value; }
          public bool isSet(QuickFix.NestedPartySubIDType field)
          { return isSetField(field); }
          public bool isSetNestedPartySubIDType()
          { return isSetField(805); }

        };
      };
      public void set(QuickFix.AllocPositionEffect value)
      { setField(value); }
      public QuickFix.AllocPositionEffect get(QuickFix.AllocPositionEffect  value)
      { getField(value); return value; }
      public QuickFix.AllocPositionEffect getAllocPositionEffect()
      { QuickFix.AllocPositionEffect value = new QuickFix.AllocPositionEffect();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocPositionEffect field)
      { return isSetField(field); }
      public bool isSetAllocPositionEffect()
      { return isSetField(1047); }

    };
  };

}

