namespace QuickFix50Sp2
{

  public class ApplicationMessageRequestAck : Message
  {
    public ApplicationMessageRequestAck() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BX"); }

    public ApplicationMessageRequestAck(
      QuickFix.ApplResponseID aApplResponseID )
    : base(MsgType()) {
      set(aApplResponseID);
    }

    public void set(QuickFix.ApplResponseID value)
    { setField(value); }
    public QuickFix.ApplResponseID get(QuickFix.ApplResponseID  value)
    { getField(value); return value; }
    public QuickFix.ApplResponseID getApplResponseID()
    { QuickFix.ApplResponseID value = new QuickFix.ApplResponseID();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplResponseID field)
    { return isSetField(field); }
    public bool isSetApplResponseID()
    { return isSetField(1353); }

    public void set(QuickFix.ApplReqID value)
    { setField(value); }
    public QuickFix.ApplReqID get(QuickFix.ApplReqID  value)
    { getField(value); return value; }
    public QuickFix.ApplReqID getApplReqID()
    { QuickFix.ApplReqID value = new QuickFix.ApplReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplReqID field)
    { return isSetField(field); }
    public bool isSetApplReqID()
    { return isSetField(1346); }

    public void set(QuickFix.ApplReqType value)
    { setField(value); }
    public QuickFix.ApplReqType get(QuickFix.ApplReqType  value)
    { getField(value); return value; }
    public QuickFix.ApplReqType getApplReqType()
    { QuickFix.ApplReqType value = new QuickFix.ApplReqType();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplReqType field)
    { return isSetField(field); }
    public bool isSetApplReqType()
    { return isSetField(1347); }

    public void set(QuickFix.ApplResponseType value)
    { setField(value); }
    public QuickFix.ApplResponseType get(QuickFix.ApplResponseType  value)
    { getField(value); return value; }
    public QuickFix.ApplResponseType getApplResponseType()
    { QuickFix.ApplResponseType value = new QuickFix.ApplResponseType();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplResponseType field)
    { return isSetField(field); }
    public bool isSetApplResponseType()
    { return isSetField(1348); }

    public void set(QuickFix.ApplTotalMessageCount value)
    { setField(value); }
    public QuickFix.ApplTotalMessageCount get(QuickFix.ApplTotalMessageCount  value)
    { getField(value); return value; }
    public QuickFix.ApplTotalMessageCount getApplTotalMessageCount()
    { QuickFix.ApplTotalMessageCount value = new QuickFix.ApplTotalMessageCount();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplTotalMessageCount field)
    { return isSetField(field); }
    public bool isSetApplTotalMessageCount()
    { return isSetField(1349); }

    public void set(QuickFix.NoApplIDs value)
    { setField(value); }
    public QuickFix.NoApplIDs get(QuickFix.NoApplIDs  value)
    { getField(value); return value; }
    public QuickFix.NoApplIDs getNoApplIDs()
    { QuickFix.NoApplIDs value = new QuickFix.NoApplIDs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoApplIDs field)
    { return isSetField(field); }
    public bool isSetNoApplIDs()
    { return isSetField(1351); }

    public class NoApplIDs: QuickFix.Group
    {
    public NoApplIDs() : base(1351,1355,message_order ) {}
    static int[] message_order = new int[] {1355,1182,1183,1357,1354,539,1433,0};
      public void set(QuickFix.RefApplID value)
      { setField(value); }
      public QuickFix.RefApplID get(QuickFix.RefApplID  value)
      { getField(value); return value; }
      public QuickFix.RefApplID getRefApplID()
      { QuickFix.RefApplID value = new QuickFix.RefApplID();
        getField(value); return value; }
      public bool isSet(QuickFix.RefApplID field)
      { return isSetField(field); }
      public bool isSetRefApplID()
      { return isSetField(1355); }

      public void set(QuickFix.ApplBegSeqNum value)
      { setField(value); }
      public QuickFix.ApplBegSeqNum get(QuickFix.ApplBegSeqNum  value)
      { getField(value); return value; }
      public QuickFix.ApplBegSeqNum getApplBegSeqNum()
      { QuickFix.ApplBegSeqNum value = new QuickFix.ApplBegSeqNum();
        getField(value); return value; }
      public bool isSet(QuickFix.ApplBegSeqNum field)
      { return isSetField(field); }
      public bool isSetApplBegSeqNum()
      { return isSetField(1182); }

      public void set(QuickFix.ApplEndSeqNum value)
      { setField(value); }
      public QuickFix.ApplEndSeqNum get(QuickFix.ApplEndSeqNum  value)
      { getField(value); return value; }
      public QuickFix.ApplEndSeqNum getApplEndSeqNum()
      { QuickFix.ApplEndSeqNum value = new QuickFix.ApplEndSeqNum();
        getField(value); return value; }
      public bool isSet(QuickFix.ApplEndSeqNum field)
      { return isSetField(field); }
      public bool isSetApplEndSeqNum()
      { return isSetField(1183); }

      public void set(QuickFix.RefApplLastSeqNum value)
      { setField(value); }
      public QuickFix.RefApplLastSeqNum get(QuickFix.RefApplLastSeqNum  value)
      { getField(value); return value; }
      public QuickFix.RefApplLastSeqNum getRefApplLastSeqNum()
      { QuickFix.RefApplLastSeqNum value = new QuickFix.RefApplLastSeqNum();
        getField(value); return value; }
      public bool isSet(QuickFix.RefApplLastSeqNum field)
      { return isSetField(field); }
      public bool isSetRefApplLastSeqNum()
      { return isSetField(1357); }

      public void set(QuickFix.ApplResponseError value)
      { setField(value); }
      public QuickFix.ApplResponseError get(QuickFix.ApplResponseError  value)
      { getField(value); return value; }
      public QuickFix.ApplResponseError getApplResponseError()
      { QuickFix.ApplResponseError value = new QuickFix.ApplResponseError();
        getField(value); return value; }
      public bool isSet(QuickFix.ApplResponseError field)
      { return isSetField(field); }
      public bool isSetApplResponseError()
      { return isSetField(1354); }

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
      public void set(QuickFix.RefApplReqID value)
      { setField(value); }
      public QuickFix.RefApplReqID get(QuickFix.RefApplReqID  value)
      { getField(value); return value; }
      public QuickFix.RefApplReqID getRefApplReqID()
      { QuickFix.RefApplReqID value = new QuickFix.RefApplReqID();
        getField(value); return value; }
      public bool isSet(QuickFix.RefApplReqID field)
      { return isSetField(field); }
      public bool isSetRefApplReqID()
      { return isSetField(1433); }

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

