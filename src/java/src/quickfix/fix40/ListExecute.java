package org.quickfix.fix40;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class ListExecute extends Message
{
  public ListExecute()
  {
    getHeader().setField(new MsgType("L"));
  }
  public ListExecute(
    org.quickfix.field.ListID aListID ) {

    getHeader().setField(new MsgType("L"));
    set(aListID);
  }

  public void set(org.quickfix.field.ListID value)
  { setField(value); }
  public org.quickfix.field.ListID get(org.quickfix.field.ListID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ListID getListID() throws FieldNotFound
  { org.quickfix.field.ListID value = new org.quickfix.field.ListID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ListID field)
  { return isSetField(field); }
  public boolean isSetListID()
  { return isSetField(66); }
  public void set(org.quickfix.field.WaveNo value)
  { setField(value); }
  public org.quickfix.field.WaveNo get(org.quickfix.field.WaveNo  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.WaveNo getWaveNo() throws FieldNotFound
  { org.quickfix.field.WaveNo value = new org.quickfix.field.WaveNo();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.WaveNo field)
  { return isSetField(field); }
  public boolean isSetWaveNo()
  { return isSetField(105); }
  public void set(org.quickfix.field.Text value)
  { setField(value); }
  public org.quickfix.field.Text get(org.quickfix.field.Text  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Text getText() throws FieldNotFound
  { org.quickfix.field.Text value = new org.quickfix.field.Text();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Text field)
  { return isSetField(field); }
  public boolean isSetText()
  { return isSetField(58); }
}

