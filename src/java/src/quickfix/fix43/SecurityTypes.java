package quickfix.fix43;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class SecurityTypes extends Message
{
  public SecurityTypes()
  {
    getHeader().setField(new MsgType("w"));
  }
  public SecurityTypes(
    quickfix.field.SecurityReqID aSecurityReqID,
    quickfix.field.SecurityResponseID aSecurityResponseID,
    quickfix.field.SecurityResponseType aSecurityResponseType ) {

    getHeader().setField(new MsgType("w"));
    set(aSecurityReqID);
    set(aSecurityResponseID);
    set(aSecurityResponseType);
  }

  public void set(quickfix.field.SecurityReqID value)
  { setField(value); }
  public quickfix.field.SecurityReqID get(quickfix.field.SecurityReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityReqID getSecurityReqID() throws FieldNotFound
  { quickfix.field.SecurityReqID value = new quickfix.field.SecurityReqID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityReqID field)
  { return isSetField(field); }
  public boolean isSetSecurityReqID()
  { return isSetField(320); }
  public void set(quickfix.field.SecurityResponseID value)
  { setField(value); }
  public quickfix.field.SecurityResponseID get(quickfix.field.SecurityResponseID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityResponseID getSecurityResponseID() throws FieldNotFound
  { quickfix.field.SecurityResponseID value = new quickfix.field.SecurityResponseID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityResponseID field)
  { return isSetField(field); }
  public boolean isSetSecurityResponseID()
  { return isSetField(322); }
  public void set(quickfix.field.SecurityResponseType value)
  { setField(value); }
  public quickfix.field.SecurityResponseType get(quickfix.field.SecurityResponseType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityResponseType getSecurityResponseType() throws FieldNotFound
  { quickfix.field.SecurityResponseType value = new quickfix.field.SecurityResponseType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityResponseType field)
  { return isSetField(field); }
  public boolean isSetSecurityResponseType()
  { return isSetField(323); }
  public void set(quickfix.field.TotalNumSecurityTypes value)
  { setField(value); }
  public quickfix.field.TotalNumSecurityTypes get(quickfix.field.TotalNumSecurityTypes  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotalNumSecurityTypes getTotalNumSecurityTypes() throws FieldNotFound
  { quickfix.field.TotalNumSecurityTypes value = new quickfix.field.TotalNumSecurityTypes();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotalNumSecurityTypes field)
  { return isSetField(field); }
  public boolean isSetTotalNumSecurityTypes()
  { return isSetField(557); }
  public void set(quickfix.field.Text value)
  { setField(value); }
  public quickfix.field.Text get(quickfix.field.Text  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Text getText() throws FieldNotFound
  { quickfix.field.Text value = new quickfix.field.Text();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Text field)
  { return isSetField(field); }
  public boolean isSetText()
  { return isSetField(58); }
  public void set(quickfix.field.EncodedTextLen value)
  { setField(value); }
  public quickfix.field.EncodedTextLen get(quickfix.field.EncodedTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound
  { quickfix.field.EncodedTextLen value = new quickfix.field.EncodedTextLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedTextLen()
  { return isSetField(354); }
  public void set(quickfix.field.EncodedText value)
  { setField(value); }
  public quickfix.field.EncodedText get(quickfix.field.EncodedText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { quickfix.field.EncodedText value = new quickfix.field.EncodedText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedText field)
  { return isSetField(field); }
  public boolean isSetEncodedText()
  { return isSetField(355); }
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
  public void set(quickfix.field.NoSecurityTypes value)
  { setField(value); }
  public quickfix.field.NoSecurityTypes get(quickfix.field.NoSecurityTypes  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoSecurityTypes getNoSecurityTypes() throws FieldNotFound
  { quickfix.field.NoSecurityTypes value = new quickfix.field.NoSecurityTypes();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoSecurityTypes field)
  { return isSetField(field); }
  public boolean isSetNoSecurityTypes()
  { return isSetField(558); }
  public static class NoSecurityTypes extends Group {
    public NoSecurityTypes() {
      super(558,167,
      new int[] {167,460,461,0 } ); }
  public void set(quickfix.field.SecurityType value)
  { setField(value); }
  public quickfix.field.SecurityType get(quickfix.field.SecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityType getSecurityType() throws FieldNotFound
  { quickfix.field.SecurityType value = new quickfix.field.SecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityType field)
  { return isSetField(field); }
  public boolean isSetSecurityType()
  { return isSetField(167); }
  public void set(quickfix.field.Product value)
  { setField(value); }
  public quickfix.field.Product get(quickfix.field.Product  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Product getProduct() throws FieldNotFound
  { quickfix.field.Product value = new quickfix.field.Product();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Product field)
  { return isSetField(field); }
  public boolean isSetProduct()
  { return isSetField(460); }
  public void set(quickfix.field.CFICode value)
  { setField(value); }
  public quickfix.field.CFICode get(quickfix.field.CFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CFICode getCFICode() throws FieldNotFound
  { quickfix.field.CFICode value = new quickfix.field.CFICode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CFICode field)
  { return isSetField(field); }
  public boolean isSetCFICode()
  { return isSetField(461); }
}
}

