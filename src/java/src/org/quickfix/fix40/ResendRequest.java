package org.quickfix.fix40;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class ResendRequest extends Message
{
  public ResendRequest()
  {
    getHeader().setField(new MsgType("2"));
  }
  public ResendRequest(
    org.quickfix.field.BeginSeqNo aBeginSeqNo,
    org.quickfix.field.EndSeqNo aEndSeqNo ) {

    getHeader().setField(new MsgType("2"));
    set(aBeginSeqNo);
    set(aEndSeqNo);
  }

  public void set(org.quickfix.field.BeginSeqNo value)
  { setField(value); }
  public org.quickfix.field.BeginSeqNo get(org.quickfix.field.BeginSeqNo  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BeginSeqNo getBeginSeqNo() throws FieldNotFound
  { org.quickfix.field.BeginSeqNo value = new org.quickfix.field.BeginSeqNo();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BeginSeqNo field)
  { return isSetField(field); }
  public boolean isSetBeginSeqNo()
  { return isSetField(7); }
  public void set(org.quickfix.field.EndSeqNo value)
  { setField(value); }
  public org.quickfix.field.EndSeqNo get(org.quickfix.field.EndSeqNo  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EndSeqNo getEndSeqNo() throws FieldNotFound
  { org.quickfix.field.EndSeqNo value = new org.quickfix.field.EndSeqNo();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EndSeqNo field)
  { return isSetField(field); }
  public boolean isSetEndSeqNo()
  { return isSetField(16); }
}

