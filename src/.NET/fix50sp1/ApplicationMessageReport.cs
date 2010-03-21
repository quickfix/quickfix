namespace QuickFix50Sp1
{

  public class ApplicationMessageReport : Message
  {
    public ApplicationMessageReport() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BY"); }

    public ApplicationMessageReport(
      QuickFix.ApplReportID aApplReportID,
      QuickFix.ApplReportType aApplReportType )
    : base(MsgType()) {
      set(aApplReportID);
      set(aApplReportType);
    }

    public void set(QuickFix.ApplReportID value)
    { setField(value); }
    public QuickFix.ApplReportID get(QuickFix.ApplReportID  value)
    { getField(value); return value; }
    public QuickFix.ApplReportID getApplReportID()
    { QuickFix.ApplReportID value = new QuickFix.ApplReportID();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplReportID field)
    { return isSetField(field); }
    public bool isSetApplReportID()
    { return isSetField(1356); }

    public void set(QuickFix.ApplReportType value)
    { setField(value); }
    public QuickFix.ApplReportType get(QuickFix.ApplReportType  value)
    { getField(value); return value; }
    public QuickFix.ApplReportType getApplReportType()
    { QuickFix.ApplReportType value = new QuickFix.ApplReportType();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplReportType field)
    { return isSetField(field); }
    public bool isSetApplReportType()
    { return isSetField(1426); }

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
    static int[] message_order = new int[] {1355,1399,1357,0};
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

      public void set(QuickFix.ApplNewSeqNum value)
      { setField(value); }
      public QuickFix.ApplNewSeqNum get(QuickFix.ApplNewSeqNum  value)
      { getField(value); return value; }
      public QuickFix.ApplNewSeqNum getApplNewSeqNum()
      { QuickFix.ApplNewSeqNum value = new QuickFix.ApplNewSeqNum();
        getField(value); return value; }
      public bool isSet(QuickFix.ApplNewSeqNum field)
      { return isSetField(field); }
      public bool isSetApplNewSeqNum()
      { return isSetField(1399); }

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

