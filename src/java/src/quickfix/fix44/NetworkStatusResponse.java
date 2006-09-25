package quickfix.fix44;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class NetworkStatusResponse extends Message
{
  public NetworkStatusResponse()
  {
    getHeader().setField(new MsgType("BD"));
  }
  public NetworkStatusResponse(
    quickfix.field.NetworkStatusResponseType aNetworkStatusResponseType ) {

    getHeader().setField(new MsgType("BD"));
    set(aNetworkStatusResponseType);
  }

  public void set(quickfix.field.NetworkStatusResponseType value)
  { setField(value); }
  public quickfix.field.NetworkStatusResponseType get(quickfix.field.NetworkStatusResponseType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NetworkStatusResponseType getNetworkStatusResponseType() throws FieldNotFound
  { quickfix.field.NetworkStatusResponseType value = new quickfix.field.NetworkStatusResponseType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NetworkStatusResponseType field)
  { return isSetField(field); }
  public boolean isSetNetworkStatusResponseType()
  { return isSetField(937); }
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
  public void set(quickfix.field.NetworkResponseID value)
  { setField(value); }
  public quickfix.field.NetworkResponseID get(quickfix.field.NetworkResponseID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NetworkResponseID getNetworkResponseID() throws FieldNotFound
  { quickfix.field.NetworkResponseID value = new quickfix.field.NetworkResponseID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NetworkResponseID field)
  { return isSetField(field); }
  public boolean isSetNetworkResponseID()
  { return isSetField(932); }
  public void set(quickfix.field.LastNetworkResponseID value)
  { setField(value); }
  public quickfix.field.LastNetworkResponseID get(quickfix.field.LastNetworkResponseID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastNetworkResponseID getLastNetworkResponseID() throws FieldNotFound
  { quickfix.field.LastNetworkResponseID value = new quickfix.field.LastNetworkResponseID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastNetworkResponseID field)
  { return isSetField(field); }
  public boolean isSetLastNetworkResponseID()
  { return isSetField(934); }
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
      new int[] {930,931,283,284,928,929,0 } ); }
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
  public void set(quickfix.field.StatusValue value)
  { setField(value); }
  public quickfix.field.StatusValue get(quickfix.field.StatusValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StatusValue getStatusValue() throws FieldNotFound
  { quickfix.field.StatusValue value = new quickfix.field.StatusValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StatusValue field)
  { return isSetField(field); }
  public boolean isSetStatusValue()
  { return isSetField(928); }
  public void set(quickfix.field.StatusText value)
  { setField(value); }
  public quickfix.field.StatusText get(quickfix.field.StatusText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StatusText getStatusText() throws FieldNotFound
  { quickfix.field.StatusText value = new quickfix.field.StatusText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StatusText field)
  { return isSetField(field); }
  public boolean isSetStatusText()
  { return isSetField(929); }
}
}

