namespace QuickFix44
{

  public class ResendRequest : Message
  {
    public ResendRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("2"); }

    public ResendRequest(
      QuickFix.BeginSeqNo aBeginSeqNo,
      QuickFix.EndSeqNo aEndSeqNo )
    : base(MsgType()) {
      set(aBeginSeqNo);
      set(aEndSeqNo);
    }

    public void set(QuickFix.BeginSeqNo value)
    { setField(value); }
    public QuickFix.BeginSeqNo get(QuickFix.BeginSeqNo  value)
    { getField(value); return value; }
    public QuickFix.BeginSeqNo getBeginSeqNo()
    { QuickFix.BeginSeqNo value = new QuickFix.BeginSeqNo();
      getField(value); return value; }
    public bool isSet(QuickFix.BeginSeqNo field)
    { return isSetField(field); }
    public bool isSetBeginSeqNo()
    { return isSetField(7); }

    public void set(QuickFix.EndSeqNo value)
    { setField(value); }
    public QuickFix.EndSeqNo get(QuickFix.EndSeqNo  value)
    { getField(value); return value; }
    public QuickFix.EndSeqNo getEndSeqNo()
    { QuickFix.EndSeqNo value = new QuickFix.EndSeqNo();
      getField(value); return value; }
    public bool isSet(QuickFix.EndSeqNo field)
    { return isSetField(field); }
    public bool isSetEndSeqNo()
    { return isSetField(16); }

  };

}

