package quickfix.fix40;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class Reject extends Message
{
  public Reject()
  {
    getHeader().setField(new MsgType("3"));
  }
  public Reject(
    quickfix.field.RefSeqNum aRefSeqNum ) {

    getHeader().setField(new MsgType("3"));
    set(aRefSeqNum);
  }

  public void set(quickfix.field.RefSeqNum value)
  { setField(value); }
  public quickfix.field.RefSeqNum get(quickfix.field.RefSeqNum  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RefSeqNum getRefSeqNum() throws FieldNotFound
  { quickfix.field.RefSeqNum value = new quickfix.field.RefSeqNum();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RefSeqNum field)
  { return isSetField(field); }
  public boolean isSetRefSeqNum()
  { return isSetField(45); }
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

