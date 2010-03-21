namespace QuickFix50Sp2
{

  public class ConfirmationRequest : Message
  {
    public ConfirmationRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BH"); }

    public ConfirmationRequest(
      QuickFix.ConfirmReqID aConfirmReqID,
      QuickFix.ConfirmType aConfirmType,
      QuickFix.TransactTime aTransactTime )
    : base(MsgType()) {
      set(aConfirmReqID);
      set(aConfirmType);
      set(aTransactTime);
    }

    public void set(QuickFix.ConfirmReqID value)
    { setField(value); }
    public QuickFix.ConfirmReqID get(QuickFix.ConfirmReqID  value)
    { getField(value); return value; }
    public QuickFix.ConfirmReqID getConfirmReqID()
    { QuickFix.ConfirmReqID value = new QuickFix.ConfirmReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.ConfirmReqID field)
    { return isSetField(field); }
    public bool isSetConfirmReqID()
    { return isSetField(859); }

    public void set(QuickFix.ConfirmType value)
    { setField(value); }
    public QuickFix.ConfirmType get(QuickFix.ConfirmType  value)
    { getField(value); return value; }
    public QuickFix.ConfirmType getConfirmType()
    { QuickFix.ConfirmType value = new QuickFix.ConfirmType();
      getField(value); return value; }
    public bool isSet(QuickFix.ConfirmType field)
    { return isSetField(field); }
    public bool isSetConfirmType()
    { return isSetField(773); }

    public void set(QuickFix.NoOrders value)
    { setField(value); }
    public QuickFix.NoOrders get(QuickFix.NoOrders  value)
    { getField(value); return value; }
    public QuickFix.NoOrders getNoOrders()
    { QuickFix.NoOrders value = new QuickFix.NoOrders();
      getField(value); return value; }
    public bool isSet(QuickFix.NoOrders field)
    { return isSetField(field); }
    public bool isSetNoOrders()
    { return isSetField(73); }

    public class NoOrders: QuickFix.Group
    {
    public NoOrders() : base(73,11,message_order ) {}
    static int[] message_order = new int[] {11,37,198,526,66,756,38,799,800,0};
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

      public void set(QuickFix.SecondaryOrderID value)
      { setField(value); }
      public QuickFix.SecondaryOrderID get(QuickFix.SecondaryOrderID  value)
      { getField(value); return value; }
      public QuickFix.SecondaryOrderID getSecondaryOrderID()
      { QuickFix.SecondaryOrderID value = new QuickFix.SecondaryOrderID();
        getField(value); return value; }
      public bool isSet(QuickFix.SecondaryOrderID field)
      { return isSetField(field); }
      public bool isSetSecondaryOrderID()
      { return isSetField(198); }

      public void set(QuickFix.SecondaryClOrdID value)
      { setField(value); }
      public QuickFix.SecondaryClOrdID get(QuickFix.SecondaryClOrdID  value)
      { getField(value); return value; }
      public QuickFix.SecondaryClOrdID getSecondaryClOrdID()
      { QuickFix.SecondaryClOrdID value = new QuickFix.SecondaryClOrdID();
        getField(value); return value; }
      public bool isSet(QuickFix.SecondaryClOrdID field)
      { return isSetField(field); }
      public bool isSetSecondaryClOrdID()
      { return isSetField(526); }

      public void set(QuickFix.ListID value)
      { setField(value); }
      public QuickFix.ListID get(QuickFix.ListID  value)
      { getField(value); return value; }
      public QuickFix.ListID getListID()
      { QuickFix.ListID value = new QuickFix.ListID();
        getField(value); return value; }
      public bool isSet(QuickFix.ListID field)
      { return isSetField(field); }
      public bool isSetListID()
      { return isSetField(66); }

      public void set(QuickFix.NoNested2PartyIDs value)
      { setField(value); }
      public QuickFix.NoNested2PartyIDs get(QuickFix.NoNested2PartyIDs  value)
      { getField(value); return value; }
      public QuickFix.NoNested2PartyIDs getNoNested2PartyIDs()
      { QuickFix.NoNested2PartyIDs value = new QuickFix.NoNested2PartyIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoNested2PartyIDs field)
      { return isSetField(field); }
      public bool isSetNoNested2PartyIDs()
      { return isSetField(756); }

      public class NoNested2PartyIDs: QuickFix.Group
      {
      public NoNested2PartyIDs() : base(756,757,message_order ) {}
      static int[] message_order = new int[] {757,758,759,806,0};
        public void set(QuickFix.Nested2PartyID value)
        { setField(value); }
        public QuickFix.Nested2PartyID get(QuickFix.Nested2PartyID  value)
        { getField(value); return value; }
        public QuickFix.Nested2PartyID getNested2PartyID()
        { QuickFix.Nested2PartyID value = new QuickFix.Nested2PartyID();
          getField(value); return value; }
        public bool isSet(QuickFix.Nested2PartyID field)
        { return isSetField(field); }
        public bool isSetNested2PartyID()
        { return isSetField(757); }

        public void set(QuickFix.Nested2PartyIDSource value)
        { setField(value); }
        public QuickFix.Nested2PartyIDSource get(QuickFix.Nested2PartyIDSource  value)
        { getField(value); return value; }
        public QuickFix.Nested2PartyIDSource getNested2PartyIDSource()
        { QuickFix.Nested2PartyIDSource value = new QuickFix.Nested2PartyIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.Nested2PartyIDSource field)
        { return isSetField(field); }
        public bool isSetNested2PartyIDSource()
        { return isSetField(758); }

        public void set(QuickFix.Nested2PartyRole value)
        { setField(value); }
        public QuickFix.Nested2PartyRole get(QuickFix.Nested2PartyRole  value)
        { getField(value); return value; }
        public QuickFix.Nested2PartyRole getNested2PartyRole()
        { QuickFix.Nested2PartyRole value = new QuickFix.Nested2PartyRole();
          getField(value); return value; }
        public bool isSet(QuickFix.Nested2PartyRole field)
        { return isSetField(field); }
        public bool isSetNested2PartyRole()
        { return isSetField(759); }

        public void set(QuickFix.NoNested2PartySubIDs value)
        { setField(value); }
        public QuickFix.NoNested2PartySubIDs get(QuickFix.NoNested2PartySubIDs  value)
        { getField(value); return value; }
        public QuickFix.NoNested2PartySubIDs getNoNested2PartySubIDs()
        { QuickFix.NoNested2PartySubIDs value = new QuickFix.NoNested2PartySubIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoNested2PartySubIDs field)
        { return isSetField(field); }
        public bool isSetNoNested2PartySubIDs()
        { return isSetField(806); }

        public class NoNested2PartySubIDs: QuickFix.Group
        {
        public NoNested2PartySubIDs() : base(806,760,message_order ) {}
        static int[] message_order = new int[] {760,807,0};
          public void set(QuickFix.Nested2PartySubID value)
          { setField(value); }
          public QuickFix.Nested2PartySubID get(QuickFix.Nested2PartySubID  value)
          { getField(value); return value; }
          public QuickFix.Nested2PartySubID getNested2PartySubID()
          { QuickFix.Nested2PartySubID value = new QuickFix.Nested2PartySubID();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested2PartySubID field)
          { return isSetField(field); }
          public bool isSetNested2PartySubID()
          { return isSetField(760); }

          public void set(QuickFix.Nested2PartySubIDType value)
          { setField(value); }
          public QuickFix.Nested2PartySubIDType get(QuickFix.Nested2PartySubIDType  value)
          { getField(value); return value; }
          public QuickFix.Nested2PartySubIDType getNested2PartySubIDType()
          { QuickFix.Nested2PartySubIDType value = new QuickFix.Nested2PartySubIDType();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested2PartySubIDType field)
          { return isSetField(field); }
          public bool isSetNested2PartySubIDType()
          { return isSetField(807); }

        };
      };
      public void set(QuickFix.OrderQty value)
      { setField(value); }
      public QuickFix.OrderQty get(QuickFix.OrderQty  value)
      { getField(value); return value; }
      public QuickFix.OrderQty getOrderQty()
      { QuickFix.OrderQty value = new QuickFix.OrderQty();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderQty field)
      { return isSetField(field); }
      public bool isSetOrderQty()
      { return isSetField(38); }

      public void set(QuickFix.OrderAvgPx value)
      { setField(value); }
      public QuickFix.OrderAvgPx get(QuickFix.OrderAvgPx  value)
      { getField(value); return value; }
      public QuickFix.OrderAvgPx getOrderAvgPx()
      { QuickFix.OrderAvgPx value = new QuickFix.OrderAvgPx();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderAvgPx field)
      { return isSetField(field); }
      public bool isSetOrderAvgPx()
      { return isSetField(799); }

      public void set(QuickFix.OrderBookingQty value)
      { setField(value); }
      public QuickFix.OrderBookingQty get(QuickFix.OrderBookingQty  value)
      { getField(value); return value; }
      public QuickFix.OrderBookingQty getOrderBookingQty()
      { QuickFix.OrderBookingQty value = new QuickFix.OrderBookingQty();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderBookingQty field)
      { return isSetField(field); }
      public bool isSetOrderBookingQty()
      { return isSetField(800); }

    };
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

    public void set(QuickFix.AllocAccountType value)
    { setField(value); }
    public QuickFix.AllocAccountType get(QuickFix.AllocAccountType  value)
    { getField(value); return value; }
    public QuickFix.AllocAccountType getAllocAccountType()
    { QuickFix.AllocAccountType value = new QuickFix.AllocAccountType();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocAccountType field)
    { return isSetField(field); }
    public bool isSetAllocAccountType()
    { return isSetField(798); }

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

