  package quickfix.fix40;
  import quickfix.FieldNotFound;
  import quickfix.Group;
  import quickfix.field.*;

  public class Heartbeat extends Message
  {
    public Heartbeat()
    {
      getHeader().setField(new MsgType("0"));
    }

    public void set(quickfix.field.TestReqID value)
    { setField(value); }
    public quickfix.field.TestReqID get(quickfix.field.TestReqID  value)
      throws FieldNotFound
    { getField(value); return value; }
    public quickfix.field.TestReqID getTestReqID() throws FieldNotFound
    { quickfix.field.TestReqID value = new quickfix.field.TestReqID();
      getField(value); return value; }
    public boolean isSet(quickfix.field.TestReqID field)
    { return isSetField(field); }
    public boolean isSetTestReqID()
    { return isSetField(112); }
}

