namespace QuickFix50Sp2
{

  public class NetworkCounterpartySystemStatusResponse : Message
  {
    public NetworkCounterpartySystemStatusResponse() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BD"); }

    public NetworkCounterpartySystemStatusResponse(
      QuickFix.NetworkStatusResponseType aNetworkStatusResponseType,
      QuickFix.NetworkResponseID aNetworkResponseID )
    : base(MsgType()) {
      set(aNetworkStatusResponseType);
      set(aNetworkResponseID);
    }

    public void set(QuickFix.NetworkStatusResponseType value)
    { setField(value); }
    public QuickFix.NetworkStatusResponseType get(QuickFix.NetworkStatusResponseType  value)
    { getField(value); return value; }
    public QuickFix.NetworkStatusResponseType getNetworkStatusResponseType()
    { QuickFix.NetworkStatusResponseType value = new QuickFix.NetworkStatusResponseType();
      getField(value); return value; }
    public bool isSet(QuickFix.NetworkStatusResponseType field)
    { return isSetField(field); }
    public bool isSetNetworkStatusResponseType()
    { return isSetField(937); }

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

    public void set(QuickFix.NetworkResponseID value)
    { setField(value); }
    public QuickFix.NetworkResponseID get(QuickFix.NetworkResponseID  value)
    { getField(value); return value; }
    public QuickFix.NetworkResponseID getNetworkResponseID()
    { QuickFix.NetworkResponseID value = new QuickFix.NetworkResponseID();
      getField(value); return value; }
    public bool isSet(QuickFix.NetworkResponseID field)
    { return isSetField(field); }
    public bool isSetNetworkResponseID()
    { return isSetField(932); }

    public void set(QuickFix.LastNetworkResponseID value)
    { setField(value); }
    public QuickFix.LastNetworkResponseID get(QuickFix.LastNetworkResponseID  value)
    { getField(value); return value; }
    public QuickFix.LastNetworkResponseID getLastNetworkResponseID()
    { QuickFix.LastNetworkResponseID value = new QuickFix.LastNetworkResponseID();
      getField(value); return value; }
    public bool isSet(QuickFix.LastNetworkResponseID field)
    { return isSetField(field); }
    public bool isSetLastNetworkResponseID()
    { return isSetField(934); }

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
    static int[] message_order = new int[] {930,931,283,284,928,929,0};
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

      public void set(QuickFix.StatusValue value)
      { setField(value); }
      public QuickFix.StatusValue get(QuickFix.StatusValue  value)
      { getField(value); return value; }
      public QuickFix.StatusValue getStatusValue()
      { QuickFix.StatusValue value = new QuickFix.StatusValue();
        getField(value); return value; }
      public bool isSet(QuickFix.StatusValue field)
      { return isSetField(field); }
      public bool isSetStatusValue()
      { return isSetField(928); }

      public void set(QuickFix.StatusText value)
      { setField(value); }
      public QuickFix.StatusText get(QuickFix.StatusText  value)
      { getField(value); return value; }
      public QuickFix.StatusText getStatusText()
      { QuickFix.StatusText value = new QuickFix.StatusText();
        getField(value); return value; }
      public bool isSet(QuickFix.StatusText field)
      { return isSetField(field); }
      public bool isSetStatusText()
      { return isSetField(929); }

    };
  };

}

