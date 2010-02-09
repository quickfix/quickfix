namespace QuickFixT11
{

  public class SequenceReset : Message
  {
    public SequenceReset() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("4"); }

    public SequenceReset(
      QuickFix.NewSeqNo aNewSeqNo )
    : base(MsgType()) {
      set(aNewSeqNo);
    }

    public void set(QuickFix.GapFillFlag value)
    { setField(value); }
    public QuickFix.GapFillFlag get(QuickFix.GapFillFlag  value)
    { getField(value); return value; }
    public QuickFix.GapFillFlag getGapFillFlag()
    { QuickFix.GapFillFlag value = new QuickFix.GapFillFlag();
      getField(value); return value; }
    public bool isSet(QuickFix.GapFillFlag field)
    { return isSetField(field); }
    public bool isSetGapFillFlag()
    { return isSetField(123); }

    public void set(QuickFix.NewSeqNo value)
    { setField(value); }
    public QuickFix.NewSeqNo get(QuickFix.NewSeqNo  value)
    { getField(value); return value; }
    public QuickFix.NewSeqNo getNewSeqNo()
    { QuickFix.NewSeqNo value = new QuickFix.NewSeqNo();
      getField(value); return value; }
    public bool isSet(QuickFix.NewSeqNo field)
    { return isSetField(field); }
    public bool isSetNewSeqNo()
    { return isSetField(36); }

  };

}

