namespace QuickFix41
{

  public class Logout : Message
  {
    public Logout() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("5"); }

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

