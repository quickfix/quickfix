package quickfix.fix41;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class TestRequest extends Message
{
  public TestRequest()
  {
    getHeader().setField(new MsgType("1"));
  }
  public TestRequest(
    quickfix.field.TestReqID aTestReqID ) {

    getHeader().setField(new MsgType("1"));
    set(aTestReqID);
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

