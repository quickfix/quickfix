namespace QuickFix50Sp1
{

  public class NetworkCounterpartySystemStatusRequest : Message
  {
    public NetworkCounterpartySystemStatusRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BC"); }

    public NetworkCounterpartySystemStatusRequest(
      QuickFix.NetworkRequestType aNetworkRequestType,
      QuickFix.NetworkRequestID aNetworkRequestID )
    : base(MsgType()) {
      set(aNetworkRequestType);
      set(aNetworkRequestID);
    }

    public void set(QuickFix.NetworkRequestType value)
    { setField(value); }
    public QuickFix.NetworkRequestType get(QuickFix.NetworkRequestType  value)
    { getField(value); return value; }
    public QuickFix.NetworkRequestType getNetworkRequestType()
    { QuickFix.NetworkRequestType value = new QuickFix.NetworkRequestType();
      getField(value); return value; }
    public bool isSet(QuickFix.NetworkRequestType field)
    { return isSetField(field); }
    public bool isSetNetworkRequestType()
    { return isSetField(935); }

    public void set(QuickFix.NetworkRequestID value)
    { setField(value); }
    public QuickFix.NetworkRequestID get(QuickFix.NetworkRequestID  value)
    { getField(value); return value; }
    public QuickFix.NetworkRequestID getNetworkRequestID()
    { QuickFix.NetworkRequestID value = new QuickFix.NetworkRequestID();
      getField(value); return value; }
    public bool isSet(QuickFix.NetworkRequestID field)
    { return isSetField(field); }
    public bool isSetNetworkRequestID()
    { return isSetField(933); }

    public void set(QuickFix.NoCompIDs value)
    { setField(value); }
    public QuickFix.NoCompIDs get(QuickFix.NoCompIDs  value)
    { getField(value); return value; }
    public QuickFix.NoCompIDs getNoCompIDs()
    { QuickFix.NoCompIDs value = new QuickFix.NoCompIDs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoCompIDs field)
    { return isSetField(field); }
    public bool isSetNoCompIDs()
    { return isSetField(936); }

    public class NoCompIDs: QuickFix.Group
    {
    public NoCompIDs() : base(936,930,message_order ) {}
    static int[] message_order = new int[] {930,931,283,284,0};
      public void set(QuickFix.RefCompID value)
      { setField(value); }
      public QuickFix.RefCompID get(QuickFix.RefCompID  value)
      { getField(value); return value; }
      public QuickFix.RefCompID getRefCompID()
      { QuickFix.RefCompID value = new QuickFix.RefCompID();
        getField(value); return value; }
      public bool isSet(QuickFix.RefCompID field)
      { return isSetField(field); }
      public bool isSetRefCompID()
      { return isSetField(930); }

      public void set(QuickFix.RefSubID value)
      { setField(value); }
      public QuickFix.RefSubID get(QuickFix.RefSubID  value)
      { getField(value); return value; }
      public QuickFix.RefSubID getRefSubID()
      { QuickFix.RefSubID value = new QuickFix.RefSubID();
        getField(value); return value; }
      public bool isSet(QuickFix.RefSubID field)
      { return isSetField(field); }
      public bool isSetRefSubID()
      { return isSetField(931); }

      public void set(QuickFix.LocationID value)
      { setField(value); }
      public QuickFix.LocationID get(QuickFix.LocationID  value)
      { getField(value); return value; }
      public QuickFix.LocationID getLocationID()
      { QuickFix.LocationID value = new QuickFix.LocationID();
        getField(value); return value; }
      public bool isSet(QuickFix.LocationID field)
      { return isSetField(field); }
      public bool isSetLocationID()
      { return isSetField(283); }

      public void set(QuickFix.DeskID value)
      { setField(value); }
      public QuickFix.DeskID get(QuickFix.DeskID  value)
      { getField(value); return value; }
      public QuickFix.DeskID getDeskID()
      { QuickFix.DeskID value = new QuickFix.DeskID();
        getField(value); return value; }
      public bool isSet(QuickFix.DeskID field)
      { return isSetField(field); }
      public bool isSetDeskID()
      { return isSetField(284); }

    };
  };

}

