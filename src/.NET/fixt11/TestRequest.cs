namespace QuickFixT11
{

  public class TestRequest : Message
  {
    public TestRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("1"); }

    public TestRequest(
      QuickFix.TestReqID aTestReqID )
    : base(MsgType()) {
      set(aTestReqID);
    }

    public void set(QuickFix.TestReqID value)
    { setField(value); }
    public QuickFix.TestReqID get(QuickFix.TestReqID  value)
    { getField(value); return value; }
    public QuickFix.TestReqID getTestReqID()
    { QuickFix.TestReqID value = new QuickFix.TestReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.TestReqID field)
    { return isSetField(field); }
    public bool isSetTestReqID()
    { return isSetField(112); }

  };

}

