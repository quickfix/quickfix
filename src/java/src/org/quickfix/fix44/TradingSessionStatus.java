package org.quickfix.fix44;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class TradingSessionStatus extends Message
{
  public TradingSessionStatus()
  {
    getHeader().setField(new MsgType("h"));
  }
  public TradingSessionStatus(
    org.quickfix.field.TradingSessionID aTradingSessionID,
    org.quickfix.field.TradSesStatus aTradSesStatus ) {

    getHeader().setField(new MsgType("h"));
    set(aTradingSessionID);
    set(aTradSesStatus);
  }

  public void set(org.quickfix.field.TradSesReqID value)
  { setField(value); }
  public org.quickfix.field.TradSesReqID get(org.quickfix.field.TradSesReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradSesReqID getTradSesReqID() throws FieldNotFound
  { org.quickfix.field.TradSesReqID value = new org.quickfix.field.TradSesReqID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradSesReqID field)
  { return isSetField(field); }
  public boolean isSetTradSesReqID()
  { return isSetField(335); }
  public void set(org.quickfix.field.TradingSessionID value)
  { setField(value); }
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradingSessionID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionID()
  { return isSetField(336); }
  public void set(org.quickfix.field.TradingSessionSubID value)
  { setField(value); }
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradingSessionSubID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionSubID()
  { return isSetField(625); }
  public void set(org.quickfix.field.TradSesMethod value)
  { setField(value); }
  public org.quickfix.field.TradSesMethod get(org.quickfix.field.TradSesMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradSesMethod getTradSesMethod() throws FieldNotFound
  { org.quickfix.field.TradSesMethod value = new org.quickfix.field.TradSesMethod();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradSesMethod field)
  { return isSetField(field); }
  public boolean isSetTradSesMethod()
  { return isSetField(338); }
  public void set(org.quickfix.field.TradSesMode value)
  { setField(value); }
  public org.quickfix.field.TradSesMode get(org.quickfix.field.TradSesMode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradSesMode getTradSesMode() throws FieldNotFound
  { org.quickfix.field.TradSesMode value = new org.quickfix.field.TradSesMode();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradSesMode field)
  { return isSetField(field); }
  public boolean isSetTradSesMode()
  { return isSetField(339); }
  public void set(org.quickfix.field.UnsolicitedIndicator value)
  { setField(value); }
  public org.quickfix.field.UnsolicitedIndicator get(org.quickfix.field.UnsolicitedIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnsolicitedIndicator getUnsolicitedIndicator() throws FieldNotFound
  { org.quickfix.field.UnsolicitedIndicator value = new org.quickfix.field.UnsolicitedIndicator();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnsolicitedIndicator field)
  { return isSetField(field); }
  public boolean isSetUnsolicitedIndicator()
  { return isSetField(325); }
  public void set(org.quickfix.field.TradSesStatus value)
  { setField(value); }
  public org.quickfix.field.TradSesStatus get(org.quickfix.field.TradSesStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradSesStatus getTradSesStatus() throws FieldNotFound
  { org.quickfix.field.TradSesStatus value = new org.quickfix.field.TradSesStatus();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradSesStatus field)
  { return isSetField(field); }
  public boolean isSetTradSesStatus()
  { return isSetField(340); }
  public void set(org.quickfix.field.TradSesStatusRejReason value)
  { setField(value); }
  public org.quickfix.field.TradSesStatusRejReason get(org.quickfix.field.TradSesStatusRejReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradSesStatusRejReason getTradSesStatusRejReason() throws FieldNotFound
  { org.quickfix.field.TradSesStatusRejReason value = new org.quickfix.field.TradSesStatusRejReason();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradSesStatusRejReason field)
  { return isSetField(field); }
  public boolean isSetTradSesStatusRejReason()
  { return isSetField(567); }
  public void set(org.quickfix.field.TradSesStartTime value)
  { setField(value); }
  public org.quickfix.field.TradSesStartTime get(org.quickfix.field.TradSesStartTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradSesStartTime getTradSesStartTime() throws FieldNotFound
  { org.quickfix.field.TradSesStartTime value = new org.quickfix.field.TradSesStartTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradSesStartTime field)
  { return isSetField(field); }
  public boolean isSetTradSesStartTime()
  { return isSetField(341); }
  public void set(org.quickfix.field.TradSesOpenTime value)
  { setField(value); }
  public org.quickfix.field.TradSesOpenTime get(org.quickfix.field.TradSesOpenTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradSesOpenTime getTradSesOpenTime() throws FieldNotFound
  { org.quickfix.field.TradSesOpenTime value = new org.quickfix.field.TradSesOpenTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradSesOpenTime field)
  { return isSetField(field); }
  public boolean isSetTradSesOpenTime()
  { return isSetField(342); }
  public void set(org.quickfix.field.TradSesPreCloseTime value)
  { setField(value); }
  public org.quickfix.field.TradSesPreCloseTime get(org.quickfix.field.TradSesPreCloseTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradSesPreCloseTime getTradSesPreCloseTime() throws FieldNotFound
  { org.quickfix.field.TradSesPreCloseTime value = new org.quickfix.field.TradSesPreCloseTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradSesPreCloseTime field)
  { return isSetField(field); }
  public boolean isSetTradSesPreCloseTime()
  { return isSetField(343); }
  public void set(org.quickfix.field.TradSesCloseTime value)
  { setField(value); }
  public org.quickfix.field.TradSesCloseTime get(org.quickfix.field.TradSesCloseTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradSesCloseTime getTradSesCloseTime() throws FieldNotFound
  { org.quickfix.field.TradSesCloseTime value = new org.quickfix.field.TradSesCloseTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradSesCloseTime field)
  { return isSetField(field); }
  public boolean isSetTradSesCloseTime()
  { return isSetField(344); }
  public void set(org.quickfix.field.TradSesEndTime value)
  { setField(value); }
  public org.quickfix.field.TradSesEndTime get(org.quickfix.field.TradSesEndTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradSesEndTime getTradSesEndTime() throws FieldNotFound
  { org.quickfix.field.TradSesEndTime value = new org.quickfix.field.TradSesEndTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradSesEndTime field)
  { return isSetField(field); }
  public boolean isSetTradSesEndTime()
  { return isSetField(345); }
  public void set(org.quickfix.field.TotalVolumeTraded value)
  { setField(value); }
  public org.quickfix.field.TotalVolumeTraded get(org.quickfix.field.TotalVolumeTraded  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TotalVolumeTraded getTotalVolumeTraded() throws FieldNotFound
  { org.quickfix.field.TotalVolumeTraded value = new org.quickfix.field.TotalVolumeTraded();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TotalVolumeTraded field)
  { return isSetField(field); }
  public boolean isSetTotalVolumeTraded()
  { return isSetField(387); }
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
  public void set(org.quickfix.field.EncodedTextLen value)
  { setField(value); }
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound
  { org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedTextLen()
  { return isSetField(354); }
  public void set(org.quickfix.field.EncodedText value)
  { setField(value); }
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedText field)
  { return isSetField(field); }
  public boolean isSetEncodedText()
  { return isSetField(355); }
}

