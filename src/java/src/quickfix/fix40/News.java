package quickfix.fix40;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class News extends Message
{
  public News()
  {
    getHeader().setField(new MsgType("B"));
  }

  public void set(quickfix.field.OrigTime value)
  { setField(value); }
  public quickfix.field.OrigTime get(quickfix.field.OrigTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigTime getOrigTime() throws FieldNotFound
  { quickfix.field.OrigTime value = new quickfix.field.OrigTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigTime field)
  { return isSetField(field); }
  public boolean isSetOrigTime()
  { return isSetField(42); }
  public void set(quickfix.field.Urgency value)
  { setField(value); }
  public quickfix.field.Urgency get(quickfix.field.Urgency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Urgency getUrgency() throws FieldNotFound
  { quickfix.field.Urgency value = new quickfix.field.Urgency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Urgency field)
  { return isSetField(field); }
  public boolean isSetUrgency()
  { return isSetField(61); }
  public void set(quickfix.field.RelatdSym value)
  { setField(value); }
  public quickfix.field.RelatdSym get(quickfix.field.RelatdSym  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RelatdSym getRelatdSym() throws FieldNotFound
  { quickfix.field.RelatdSym value = new quickfix.field.RelatdSym();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RelatdSym field)
  { return isSetField(field); }
  public boolean isSetRelatdSym()
  { return isSetField(46); }
  public void set(quickfix.field.RawDataLength value)
  { setField(value); }
  public quickfix.field.RawDataLength get(quickfix.field.RawDataLength  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RawDataLength getRawDataLength() throws FieldNotFound
  { quickfix.field.RawDataLength value = new quickfix.field.RawDataLength();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RawDataLength field)
  { return isSetField(field); }
  public boolean isSetRawDataLength()
  { return isSetField(95); }
  public void set(quickfix.field.RawData value)
  { setField(value); }
  public quickfix.field.RawData get(quickfix.field.RawData  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RawData getRawData() throws FieldNotFound
  { quickfix.field.RawData value = new quickfix.field.RawData();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RawData field)
  { return isSetField(field); }
  public boolean isSetRawData()
  { return isSetField(96); }
  public void set(quickfix.field.LinesOfText value)
  { setField(value); }
  public quickfix.field.LinesOfText get(quickfix.field.LinesOfText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LinesOfText getLinesOfText() throws FieldNotFound
  { quickfix.field.LinesOfText value = new quickfix.field.LinesOfText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LinesOfText field)
  { return isSetField(field); }
  public boolean isSetLinesOfText()
  { return isSetField(33); }
  public static class LinesOfText extends Group {
    public LinesOfText() {
      super(33,58,
      new int[] {58,0 } ); }
  public void set(quickfix.field.Text value)
  { setField(value); }
  public quickfix.field.Text get(quickfix.field.Text  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Text getText() throws FieldNotFound
  { quickfix.field.Text value = new quickfix.field.Text();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Text field)
  { return isSetField(field); }
  public boolean isSetText()
  { return isSetField(58); }
}
}

