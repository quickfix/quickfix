package quickfix.fix40;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class SequenceReset extends Message
{
  public SequenceReset()
  {
    getHeader().setField(new MsgType("4"));
  }
  public SequenceReset(
    quickfix.field.NewSeqNo aNewSeqNo ) {

    getHeader().setField(new MsgType("4"));
    set(aNewSeqNo);
  }

  public void set(quickfix.field.GapFillFlag value)
  { setField(value); }
  public quickfix.field.GapFillFlag get(quickfix.field.GapFillFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.GapFillFlag getGapFillFlag() throws FieldNotFound
  { quickfix.field.GapFillFlag value = new quickfix.field.GapFillFlag();
    getField(value); return value; }
  public boolean isSet(quickfix.field.GapFillFlag field)
  { return isSetField(field); }
  public boolean isSetGapFillFlag()
  { return isSetField(123); }
  public void set(quickfix.field.NewSeqNo value)
  { setField(value); }
  public quickfix.field.NewSeqNo get(quickfix.field.NewSeqNo  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NewSeqNo getNewSeqNo() throws FieldNotFound
  { quickfix.field.NewSeqNo value = new quickfix.field.NewSeqNo();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NewSeqNo field)
  { return isSetField(field); }
  public boolean isSetNewSeqNo()
  { return isSetField(36); }
}

