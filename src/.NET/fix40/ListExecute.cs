namespace QuickFix40
{

  public class ListExecute : Message
  {
    public ListExecute() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("L"); }

    public ListExecute(
      QuickFix.ListID aListID )
    : base(MsgType()) {
      set(aListID);
    }

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

    public void set(QuickFix.WaveNo value)
    { setField(value); }
    public QuickFix.WaveNo get(QuickFix.WaveNo  value)
    { getField(value); return value; }
    public QuickFix.WaveNo getWaveNo()
    { QuickFix.WaveNo value = new QuickFix.WaveNo();
      getField(value); return value; }
    public bool isSet(QuickFix.WaveNo field)
    { return isSetField(field); }
    public bool isSetWaveNo()
    { return isSetField(105); }

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

