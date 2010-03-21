namespace QuickFix50Sp2
{

  public class PartyDetailsListReport : Message
  {
    public PartyDetailsListReport() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("CG"); }

    public PartyDetailsListReport(
      QuickFix.PartyDetailsListReportID aPartyDetailsListReportID )
    : base(MsgType()) {
      set(aPartyDetailsListReportID);
    }

    public void set(QuickFix.ApplID value)
    { setField(value); }
    public QuickFix.ApplID get(QuickFix.ApplID  value)
    { getField(value); return value; }
    public QuickFix.ApplID getApplID()
    { QuickFix.ApplID value = new QuickFix.ApplID();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplID field)
    { return isSetField(field); }
    public bool isSetApplID()
    { return isSetField(1180); }

    public void set(QuickFix.ApplSeqNum value)
    { setField(value); }
    public QuickFix.ApplSeqNum get(QuickFix.ApplSeqNum  value)
    { getField(value); return value; }
    public QuickFix.ApplSeqNum getApplSeqNum()
    { QuickFix.ApplSeqNum value = new QuickFix.ApplSeqNum();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplSeqNum field)
    { return isSetField(field); }
    public bool isSetApplSeqNum()
    { return isSetField(1181); }

    public void set(QuickFix.ApplLastSeqNum value)
    { setField(value); }
    public QuickFix.ApplLastSeqNum get(QuickFix.ApplLastSeqNum  value)
    { getField(value); return value; }
    public QuickFix.ApplLastSeqNum getApplLastSeqNum()
    { QuickFix.ApplLastSeqNum value = new QuickFix.ApplLastSeqNum();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplLastSeqNum field)
    { return isSetField(field); }
    public bool isSetApplLastSeqNum()
    { return isSetField(1350); }

    public void set(QuickFix.ApplResendFlag value)
    { setField(value); }
    public QuickFix.ApplResendFlag get(QuickFix.ApplResendFlag  value)
    { getField(value); return value; }
    public QuickFix.ApplResendFlag getApplResendFlag()
    { QuickFix.ApplResendFlag value = new QuickFix.ApplResendFlag();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplResendFlag field)
    { return isSetField(field); }
    public bool isSetApplResendFlag()
    { return isSetField(1352); }

    public void set(QuickFix.PartyDetailsListReportID value)
    { setField(value); }
    public QuickFix.PartyDetailsListReportID get(QuickFix.PartyDetailsListReportID  value)
    { getField(value); return value; }
    public QuickFix.PartyDetailsListReportID getPartyDetailsListReportID()
    { QuickFix.PartyDetailsListReportID value = new QuickFix.PartyDetailsListReportID();
      getField(value); return value; }
    public bool isSet(QuickFix.PartyDetailsListReportID field)
    { return isSetField(field); }
    public bool isSetPartyDetailsListReportID()
    { return isSetField(1510); }

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

    public void set(QuickFix.PartyDetailsRequestResult value)
    { setField(value); }
    public QuickFix.PartyDetailsRequestResult get(QuickFix.PartyDetailsRequestResult  value)
    { getField(value); return value; }
    public QuickFix.PartyDetailsRequestResult getPartyDetailsRequestResult()
    { QuickFix.PartyDetailsRequestResult value = new QuickFix.PartyDetailsRequestResult();
      getField(value); return value; }
    public bool isSet(QuickFix.PartyDetailsRequestResult field)
    { return isSetField(field); }
    public bool isSetPartyDetailsRequestResult()
    { return isSetField(1511); }

    public void set(QuickFix.TotNoPartyList value)
    { setField(value); }
    public QuickFix.TotNoPartyList get(QuickFix.TotNoPartyList  value)
    { getField(value); return value; }
    public QuickFix.TotNoPartyList getTotNoPartyList()
    { QuickFix.TotNoPartyList value = new QuickFix.TotNoPartyList();
      getField(value); return value; }
    public bool isSet(QuickFix.TotNoPartyList field)
    { return isSetField(field); }
    public bool isSetTotNoPartyList()
    { return isSetField(1512); }

    public void set(QuickFix.LastFragment value)
    { setField(value); }
    public QuickFix.LastFragment get(QuickFix.LastFragment  value)
    { getField(value); return value; }
    public QuickFix.LastFragment getLastFragment()
    { QuickFix.LastFragment value = new QuickFix.LastFragment();
      getField(value); return value; }
    public bool isSet(QuickFix.LastFragment field)
    { return isSetField(field); }
    public bool isSetLastFragment()
    { return isSetField(893); }

    public void set(QuickFix.NoPartyList value)
    { setField(value); }
    public QuickFix.NoPartyList get(QuickFix.NoPartyList  value)
    { getField(value); return value; }
    public QuickFix.NoPartyList getNoPartyList()
    { QuickFix.NoPartyList value = new QuickFix.NoPartyList();
      getField(value); return value; }
    public bool isSet(QuickFix.NoPartyList field)
    { return isSetField(field); }
    public bool isSetNoPartyList()
    { return isSetField(1513); }

    public class NoPartyList: QuickFix.Group
    {
    public NoPartyList() : base(1513,448,message_order ) {}
    static int[] message_order = new int[] {448,447,452,1562,0};
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

      public void set(QuickFix.NoRelatedPartyIDs value)
      { setField(value); }
      public QuickFix.NoRelatedPartyIDs get(QuickFix.NoRelatedPartyIDs  value)
      { getField(value); return value; }
      public QuickFix.NoRelatedPartyIDs getNoRelatedPartyIDs()
      { QuickFix.NoRelatedPartyIDs value = new QuickFix.NoRelatedPartyIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoRelatedPartyIDs field)
      { return isSetField(field); }
      public bool isSetNoRelatedPartyIDs()
      { return isSetField(1562); }

      public class NoRelatedPartyIDs: QuickFix.Group
      {
      public NoRelatedPartyIDs() : base(1562,1563,message_order ) {}
      static int[] message_order = new int[] {1563,1564,1565,1514,0};
        public void set(QuickFix.RelatedPartyID value)
        { setField(value); }
        public QuickFix.RelatedPartyID get(QuickFix.RelatedPartyID  value)
        { getField(value); return value; }
        public QuickFix.RelatedPartyID getRelatedPartyID()
        { QuickFix.RelatedPartyID value = new QuickFix.RelatedPartyID();
          getField(value); return value; }
        public bool isSet(QuickFix.RelatedPartyID field)
        { return isSetField(field); }
        public bool isSetRelatedPartyID()
        { return isSetField(1563); }

        public void set(QuickFix.RelatedPartyIDSource value)
        { setField(value); }
        public QuickFix.RelatedPartyIDSource get(QuickFix.RelatedPartyIDSource  value)
        { getField(value); return value; }
        public QuickFix.RelatedPartyIDSource getRelatedPartyIDSource()
        { QuickFix.RelatedPartyIDSource value = new QuickFix.RelatedPartyIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.RelatedPartyIDSource field)
        { return isSetField(field); }
        public bool isSetRelatedPartyIDSource()
        { return isSetField(1564); }

        public void set(QuickFix.RelatedPartyRole value)
        { setField(value); }
        public QuickFix.RelatedPartyRole get(QuickFix.RelatedPartyRole  value)
        { getField(value); return value; }
        public QuickFix.RelatedPartyRole getRelatedPartyRole()
        { QuickFix.RelatedPartyRole value = new QuickFix.RelatedPartyRole();
          getField(value); return value; }
        public bool isSet(QuickFix.RelatedPartyRole field)
        { return isSetField(field); }
        public bool isSetRelatedPartyRole()
        { return isSetField(1565); }

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
      };
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

  };

}

