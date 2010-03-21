namespace QuickFix50Sp1
{

  public class ApplicationMessageRequest : Message
  {
    public ApplicationMessageRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BW"); }

    public ApplicationMessageRequest(
      QuickFix.ApplReqID aApplReqID,
      QuickFix.ApplReqType aApplReqType )
    : base(MsgType()) {
      set(aApplReqID);
      set(aApplReqType);
    }

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
    static int[] message_order = new int[] {1355,1182,1183,0};
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

