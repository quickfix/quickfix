package quickfix.fix44;
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
  public void set(quickfix.field.RefTagID value)
  { setField(value); }
  public quickfix.field.RefTagID get(quickfix.field.RefTagID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RefTagID getRefTagID() throws FieldNotFound
  { quickfix.field.RefTagID value = new quickfix.field.RefTagID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RefTagID field)
  { return isSetField(field); }
  public boolean isSetRefTagID()
  { return isSetField(371); }
  public void set(quickfix.field.RefMsgType value)
  { setField(value); }
  public quickfix.field.RefMsgType get(quickfix.field.RefMsgType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RefMsgType getRefMsgType() throws FieldNotFound
  { quickfix.field.RefMsgType value = new quickfix.field.RefMsgType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RefMsgType field)
  { return isSetField(field); }
  public boolean isSetRefMsgType()
  { return isSetField(372); }
  public void set(quickfix.field.SessionRejectReason value)
  { setField(value); }
  public quickfix.field.SessionRejectReason get(quickfix.field.SessionRejectReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SessionRejectReason getSessionRejectReason() throws FieldNotFound
  { quickfix.field.SessionRejectReason value = new quickfix.field.SessionRejectReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SessionRejectReason field)
  { return isSetField(field); }
  public boolean isSetSessionRejectReason()
  { return isSetField(373); }
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
  public void set(quickfix.field.EncodedTextLen value)
  { setField(value); }
  public quickfix.field.EncodedTextLen get(quickfix.field.EncodedTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound
  { quickfix.field.EncodedTextLen value = new quickfix.field.EncodedTextLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedTextLen()
  { return isSetField(354); }
  public void set(quickfix.field.EncodedText value)
  { setField(value); }
  public quickfix.field.EncodedText get(quickfix.field.EncodedText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { quickfix.field.EncodedText value = new quickfix.field.EncodedText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedText field)
  { return isSetField(field); }
  public boolean isSetEncodedText()
  { return isSetField(355); }
}

