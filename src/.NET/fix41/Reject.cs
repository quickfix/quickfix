namespace QuickFix41
{

  public class Reject : Message
  {
    public Reject() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("3"); }

    public Reject(
      QuickFix.RefSeqNum aRefSeqNum )
    : base(MsgType()) {
      set(aRefSeqNum);
    }

    public void set(QuickFix.RefSeqNum value)
    { setField(value); }
    public QuickFix.RefSeqNum get(QuickFix.RefSeqNum  value)
    { getField(value); return value; }
    public QuickFix.RefSeqNum getRefSeqNum()
    { QuickFix.RefSeqNum value = new QuickFix.RefSeqNum();
      getField(value); return value; }
    public bool isSet(QuickFix.RefSeqNum field)
    { return isSetField(field); }
    public bool isSetRefSeqNum()
    { return isSetField(45); }

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

  };

}

