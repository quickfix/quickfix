package quickfix.fix44;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class NetworkStatusRequest extends Message
{
  public NetworkStatusRequest()
  {
    getHeader().setField(new MsgType("BC"));
  }
  public NetworkStatusRequest(
    quickfix.field.NetworkRequestType aNetworkRequestType,
    quickfix.field.NetworkRequestID aNetworkRequestID ) {

    getHeader().setField(new MsgType("BC"));
    set(aNetworkRequestType);
    set(aNetworkRequestID);
  }

  public void set(quickfix.field.NetworkRequestType value)
  { setField(value); }
  public quickfix.field.NetworkRequestType get(quickfix.field.NetworkRequestType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NetworkRequestType getNetworkRequestType() throws FieldNotFound
  { quickfix.field.NetworkRequestType value = new quickfix.field.NetworkRequestType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NetworkRequestType field)
  { return isSetField(field); }
  public boolean isSetNetworkRequestType()
  { return isSetField(935); }
  public void set(quickfix.field.NetworkRequestID value)
  { setField(value); }
  public quickfix.field.NetworkRequestID get(quickfix.field.NetworkRequestID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NetworkRequestID getNetworkRequestID() throws FieldNotFound
  { quickfix.field.NetworkRequestID value = new quickfix.field.NetworkRequestID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NetworkRequestID field)
  { return isSetField(field); }
  public boolean isSetNetworkRequestID()
  { return isSetField(933); }
  public void set(quickfix.field.NoCompIDs value)
  { setField(value); }
  public quickfix.field.NoCompIDs get(quickfix.field.NoCompIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoCompIDs getNoCompIDs() throws FieldNotFound
  { quickfix.field.NoCompIDs value = new quickfix.field.NoCompIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoCompIDs field)
  { return isSetField(field); }
  public boolean isSetNoCompIDs()
  { return isSetField(936); }
  public static class NoCompIDs extends Group {
    public NoCompIDs() {
      super(936,930,
      new int[] {930,931,283,284,0 } ); }
  public void set(quickfix.field.RefCompID value)
  { setField(value); }
  public quickfix.field.RefCompID get(quickfix.field.RefCompID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RefCompID getRefCompID() throws FieldNotFound
  { quickfix.field.RefCompID value = new quickfix.field.RefCompID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RefCompID field)
  { return isSetField(field); }
  public boolean isSetRefCompID()
  { return isSetField(930); }
  public void set(quickfix.field.RefSubID value)
  { setField(value); }
  public quickfix.field.RefSubID get(quickfix.field.RefSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RefSubID getRefSubID() throws FieldNotFound
  { quickfix.field.RefSubID value = new quickfix.field.RefSubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RefSubID field)
  { return isSetField(field); }
  public boolean isSetRefSubID()
  { return isSetField(931); }
  public void set(quickfix.field.LocationID value)
  { setField(value); }
  public quickfix.field.LocationID get(quickfix.field.LocationID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LocationID getLocationID() throws FieldNotFound
  { quickfix.field.LocationID value = new quickfix.field.LocationID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LocationID field)
  { return isSetField(field); }
  public boolean isSetLocationID()
  { return isSetField(283); }
  public void set(quickfix.field.DeskID value)
  { setField(value); }
  public quickfix.field.DeskID get(quickfix.field.DeskID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DeskID getDeskID() throws FieldNotFound
  { quickfix.field.DeskID value = new quickfix.field.DeskID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DeskID field)
  { return isSetField(field); }
  public boolean isSetDeskID()
  { return isSetField(284); }
}
}

