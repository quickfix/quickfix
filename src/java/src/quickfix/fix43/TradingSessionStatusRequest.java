package quickfix.fix43;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class TradingSessionStatusRequest extends Message
{
  public TradingSessionStatusRequest()
  {
    getHeader().setField(new MsgType("g"));
  }
  public TradingSessionStatusRequest(
    quickfix.field.TradSesReqID aTradSesReqID,
    quickfix.field.SubscriptionRequestType aSubscriptionRequestType ) {

    getHeader().setField(new MsgType("g"));
    set(aTradSesReqID);
    set(aSubscriptionRequestType);
  }

  public void set(quickfix.field.TradSesReqID value)
  { setField(value); }
  public quickfix.field.TradSesReqID get(quickfix.field.TradSesReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradSesReqID getTradSesReqID() throws FieldNotFound
  { quickfix.field.TradSesReqID value = new quickfix.field.TradSesReqID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradSesReqID field)
  { return isSetField(field); }
  public boolean isSetTradSesReqID()
  { return isSetField(335); }
  public void set(quickfix.field.TradingSessionID value)
  { setField(value); }
  public quickfix.field.TradingSessionID get(quickfix.field.TradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound
  { quickfix.field.TradingSessionID value = new quickfix.field.TradingSessionID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradingSessionID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionID()
  { return isSetField(336); }
  public void set(quickfix.field.TradingSessionSubID value)
  { setField(value); }
  public quickfix.field.TradingSessionSubID get(quickfix.field.TradingSessionSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound
  { quickfix.field.TradingSessionSubID value = new quickfix.field.TradingSessionSubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradingSessionSubID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionSubID()
  { return isSetField(625); }
  public void set(quickfix.field.TradSesMethod value)
  { setField(value); }
  public quickfix.field.TradSesMethod get(quickfix.field.TradSesMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradSesMethod getTradSesMethod() throws FieldNotFound
  { quickfix.field.TradSesMethod value = new quickfix.field.TradSesMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradSesMethod field)
  { return isSetField(field); }
  public boolean isSetTradSesMethod()
  { return isSetField(338); }
  public void set(quickfix.field.TradSesMode value)
  { setField(value); }
  public quickfix.field.TradSesMode get(quickfix.field.TradSesMode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradSesMode getTradSesMode() throws FieldNotFound
  { quickfix.field.TradSesMode value = new quickfix.field.TradSesMode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradSesMode field)
  { return isSetField(field); }
  public boolean isSetTradSesMode()
  { return isSetField(339); }
  public void set(quickfix.field.SubscriptionRequestType value)
  { setField(value); }
  public quickfix.field.SubscriptionRequestType get(quickfix.field.SubscriptionRequestType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SubscriptionRequestType getSubscriptionRequestType() throws FieldNotFound
  { quickfix.field.SubscriptionRequestType value = new quickfix.field.SubscriptionRequestType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SubscriptionRequestType field)
  { return isSetField(field); }
  public boolean isSetSubscriptionRequestType()
  { return isSetField(263); }
}

