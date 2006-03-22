package quickfix.fix44;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class RegistrationInstructionsResponse extends Message
{
  public RegistrationInstructionsResponse()
  {
    getHeader().setField(new MsgType("p"));
  }
  public RegistrationInstructionsResponse(
    quickfix.field.RegistID aRegistID,
    quickfix.field.RegistTransType aRegistTransType,
    quickfix.field.RegistRefID aRegistRefID,
    quickfix.field.RegistStatus aRegistStatus ) {

    getHeader().setField(new MsgType("p"));
    set(aRegistID);
    set(aRegistTransType);
    set(aRegistRefID);
    set(aRegistStatus);
  }

  public void set(quickfix.field.RegistID value)
  { setField(value); }
  public quickfix.field.RegistID get(quickfix.field.RegistID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistID getRegistID() throws FieldNotFound
  { quickfix.field.RegistID value = new quickfix.field.RegistID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistID field)
  { return isSetField(field); }
  public boolean isSetRegistID()
  { return isSetField(513); }
  public void set(quickfix.field.RegistTransType value)
  { setField(value); }
  public quickfix.field.RegistTransType get(quickfix.field.RegistTransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistTransType getRegistTransType() throws FieldNotFound
  { quickfix.field.RegistTransType value = new quickfix.field.RegistTransType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistTransType field)
  { return isSetField(field); }
  public boolean isSetRegistTransType()
  { return isSetField(514); }
  public void set(quickfix.field.RegistRefID value)
  { setField(value); }
  public quickfix.field.RegistRefID get(quickfix.field.RegistRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistRefID getRegistRefID() throws FieldNotFound
  { quickfix.field.RegistRefID value = new quickfix.field.RegistRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistRefID field)
  { return isSetField(field); }
  public boolean isSetRegistRefID()
  { return isSetField(508); }
  public void set(quickfix.field.ClOrdID value)
  { setField(value); }
  public quickfix.field.ClOrdID get(quickfix.field.ClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClOrdID getClOrdID() throws FieldNotFound
  { quickfix.field.ClOrdID value = new quickfix.field.ClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClOrdID field)
  { return isSetField(field); }
  public boolean isSetClOrdID()
  { return isSetField(11); }
  public void set(quickfix.field.NoPartyIDs value)
  { setField(value); }
  public quickfix.field.NoPartyIDs get(quickfix.field.NoPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoPartyIDs getNoPartyIDs() throws FieldNotFound
  { quickfix.field.NoPartyIDs value = new quickfix.field.NoPartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartyIDs()
  { return isSetField(453); }
  public static class NoPartyIDs extends Group {
    public NoPartyIDs() {
      super(453,448,
      new int[] {448,447,452,802,0 } ); }
  public void set(quickfix.field.PartyID value)
  { setField(value); }
  public quickfix.field.PartyID get(quickfix.field.PartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyID getPartyID() throws FieldNotFound
  { quickfix.field.PartyID value = new quickfix.field.PartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyID field)
  { return isSetField(field); }
  public boolean isSetPartyID()
  { return isSetField(448); }
  public void set(quickfix.field.PartyIDSource value)
  { setField(value); }
  public quickfix.field.PartyIDSource get(quickfix.field.PartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyIDSource getPartyIDSource() throws FieldNotFound
  { quickfix.field.PartyIDSource value = new quickfix.field.PartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyIDSource field)
  { return isSetField(field); }
  public boolean isSetPartyIDSource()
  { return isSetField(447); }
  public void set(quickfix.field.PartyRole value)
  { setField(value); }
  public quickfix.field.PartyRole get(quickfix.field.PartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyRole getPartyRole() throws FieldNotFound
  { quickfix.field.PartyRole value = new quickfix.field.PartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyRole field)
  { return isSetField(field); }
  public boolean isSetPartyRole()
  { return isSetField(452); }
  public void set(quickfix.field.NoPartySubIDs value)
  { setField(value); }
  public quickfix.field.NoPartySubIDs get(quickfix.field.NoPartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoPartySubIDs getNoPartySubIDs() throws FieldNotFound
  { quickfix.field.NoPartySubIDs value = new quickfix.field.NoPartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoPartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartySubIDs()
  { return isSetField(802); }
  public static class NoPartySubIDs extends Group {
    public NoPartySubIDs() {
      super(802,523,
      new int[] {523,803,0 } ); }
  public void set(quickfix.field.PartySubID value)
  { setField(value); }
  public quickfix.field.PartySubID get(quickfix.field.PartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartySubID getPartySubID() throws FieldNotFound
  { quickfix.field.PartySubID value = new quickfix.field.PartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartySubID field)
  { return isSetField(field); }
  public boolean isSetPartySubID()
  { return isSetField(523); }
  public void set(quickfix.field.PartySubIDType value)
  { setField(value); }
  public quickfix.field.PartySubIDType get(quickfix.field.PartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartySubIDType getPartySubIDType() throws FieldNotFound
  { quickfix.field.PartySubIDType value = new quickfix.field.PartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartySubIDType field)
  { return isSetField(field); }
  public boolean isSetPartySubIDType()
  { return isSetField(803); }
}
}
  public void set(quickfix.field.Account value)
  { setField(value); }
  public quickfix.field.Account get(quickfix.field.Account  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Account getAccount() throws FieldNotFound
  { quickfix.field.Account value = new quickfix.field.Account();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Account field)
  { return isSetField(field); }
  public boolean isSetAccount()
  { return isSetField(1); }
  public void set(quickfix.field.AcctIDSource value)
  { setField(value); }
  public quickfix.field.AcctIDSource get(quickfix.field.AcctIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AcctIDSource getAcctIDSource() throws FieldNotFound
  { quickfix.field.AcctIDSource value = new quickfix.field.AcctIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AcctIDSource field)
  { return isSetField(field); }
  public boolean isSetAcctIDSource()
  { return isSetField(660); }
  public void set(quickfix.field.RegistStatus value)
  { setField(value); }
  public quickfix.field.RegistStatus get(quickfix.field.RegistStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistStatus getRegistStatus() throws FieldNotFound
  { quickfix.field.RegistStatus value = new quickfix.field.RegistStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistStatus field)
  { return isSetField(field); }
  public boolean isSetRegistStatus()
  { return isSetField(506); }
  public void set(quickfix.field.RegistRejReasonCode value)
  { setField(value); }
  public quickfix.field.RegistRejReasonCode get(quickfix.field.RegistRejReasonCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistRejReasonCode getRegistRejReasonCode() throws FieldNotFound
  { quickfix.field.RegistRejReasonCode value = new quickfix.field.RegistRejReasonCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistRejReasonCode field)
  { return isSetField(field); }
  public boolean isSetRegistRejReasonCode()
  { return isSetField(507); }
  public void set(quickfix.field.RegistRejReasonText value)
  { setField(value); }
  public quickfix.field.RegistRejReasonText get(quickfix.field.RegistRejReasonText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistRejReasonText getRegistRejReasonText() throws FieldNotFound
  { quickfix.field.RegistRejReasonText value = new quickfix.field.RegistRejReasonText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistRejReasonText field)
  { return isSetField(field); }
  public boolean isSetRegistRejReasonText()
  { return isSetField(496); }
}

