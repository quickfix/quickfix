namespace QuickFix40
{

  public class News : Message
  {
    public News() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("B"); }

    public News(
      QuickFix.LinesOfText aLinesOfText,
      QuickFix.Text aText )
    : base(MsgType()) {
      set(aLinesOfText);
      set(aText);
    }

    public void set(QuickFix.OrigTime value)
    { setField(value); }
    public QuickFix.OrigTime get(QuickFix.OrigTime  value)
    { getField(value); return value; }
    public QuickFix.OrigTime getOrigTime()
    { QuickFix.OrigTime value = new QuickFix.OrigTime();
      getField(value); return value; }
    public bool isSet(QuickFix.OrigTime field)
    { return isSetField(field); }
    public bool isSetOrigTime()
    { return isSetField(42); }

    public void set(QuickFix.Urgency value)
    { setField(value); }
    public QuickFix.Urgency get(QuickFix.Urgency  value)
    { getField(value); return value; }
    public QuickFix.Urgency getUrgency()
    { QuickFix.Urgency value = new QuickFix.Urgency();
      getField(value); return value; }
    public bool isSet(QuickFix.Urgency field)
    { return isSetField(field); }
    public bool isSetUrgency()
    { return isSetField(61); }

    public void set(QuickFix.RelatdSym value)
    { setField(value); }
    public QuickFix.RelatdSym get(QuickFix.RelatdSym  value)
    { getField(value); return value; }
    public QuickFix.RelatdSym getRelatdSym()
    { QuickFix.RelatdSym value = new QuickFix.RelatdSym();
      getField(value); return value; }
    public bool isSet(QuickFix.RelatdSym field)
    { return isSetField(field); }
    public bool isSetRelatdSym()
    { return isSetField(46); }

    public void set(QuickFix.LinesOfText value)
    { setField(value); }
    public QuickFix.LinesOfText get(QuickFix.LinesOfText  value)
    { getField(value); return value; }
    public QuickFix.LinesOfText getLinesOfText()
    { QuickFix.LinesOfText value = new QuickFix.LinesOfText();
      getField(value); return value; }
    public bool isSet(QuickFix.LinesOfText field)
    { return isSetField(field); }
    public bool isSetLinesOfText()
    { return isSetField(33); }

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

    public void set(QuickFix.RawDataLength value)
    { setField(value); }
    public QuickFix.RawDataLength get(QuickFix.RawDataLength  value)
    { getField(value); return value; }
    public QuickFix.RawDataLength getRawDataLength()
    { QuickFix.RawDataLength value = new QuickFix.RawDataLength();
      getField(value); return value; }
    public bool isSet(QuickFix.RawDataLength field)
    { return isSetField(field); }
    public bool isSetRawDataLength()
    { return isSetField(95); }

    public void set(QuickFix.RawData value)
    { setField(value); }
    public QuickFix.RawData get(QuickFix.RawData  value)
    { getField(value); return value; }
    public QuickFix.RawData getRawData()
    { QuickFix.RawData value = new QuickFix.RawData();
      getField(value); return value; }
    public bool isSet(QuickFix.RawData field)
    { return isSetField(field); }
    public bool isSetRawData()
    { return isSetField(96); }

  };

}

