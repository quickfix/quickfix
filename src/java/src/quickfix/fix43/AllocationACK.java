package org.quickfix.fix43;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class AllocationACK extends Message
{
  public AllocationACK()
  {
    getHeader().setField(new MsgType("P"));
  }
  public AllocationACK(
    org.quickfix.field.AllocID aAllocID,
    org.quickfix.field.TradeDate aTradeDate,
    org.quickfix.field.AllocStatus aAllocStatus ) {

    getHeader().setField(new MsgType("P"));
    set(aAllocID);
    set(aTradeDate);
    set(aAllocStatus);
  }

  public void set(org.quickfix.field.NoPartyIDs value)
  { setField(value); }
  public org.quickfix.field.NoPartyIDs get(org.quickfix.field.NoPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoPartyIDs getNoPartyIDs() throws FieldNotFound
  { org.quickfix.field.NoPartyIDs value = new org.quickfix.field.NoPartyIDs();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartyIDs()
  { return isSetField(453); }
  public static class NoPartyIDs extends Group {
    public NoPartyIDs() {
      super(453,448,
      new int[] {448,447,452,523,0 } ); }
  public void set(org.quickfix.field.PartyID value)
  { setField(value); }
  public org.quickfix.field.PartyID get(org.quickfix.field.PartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartyID getPartyID() throws FieldNotFound
  { org.quickfix.field.PartyID value = new org.quickfix.field.PartyID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartyID field)
  { return isSetField(field); }
  public boolean isSetPartyID()
  { return isSetField(448); }
  public void set(org.quickfix.field.PartyIDSource value)
  { setField(value); }
  public org.quickfix.field.PartyIDSource get(org.quickfix.field.PartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartyIDSource getPartyIDSource() throws FieldNotFound
  { org.quickfix.field.PartyIDSource value = new org.quickfix.field.PartyIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartyIDSource field)
  { return isSetField(field); }
  public boolean isSetPartyIDSource()
  { return isSetField(447); }
  public void set(org.quickfix.field.PartyRole value)
  { setField(value); }
  public org.quickfix.field.PartyRole get(org.quickfix.field.PartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartyRole getPartyRole() throws FieldNotFound
  { org.quickfix.field.PartyRole value = new org.quickfix.field.PartyRole();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartyRole field)
  { return isSetField(field); }
  public boolean isSetPartyRole()
  { return isSetField(452); }
  public void set(org.quickfix.field.PartySubID value)
  { setField(value); }
  public org.quickfix.field.PartySubID get(org.quickfix.field.PartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartySubID getPartySubID() throws FieldNotFound
  { org.quickfix.field.PartySubID value = new org.quickfix.field.PartySubID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartySubID field)
  { return isSetField(field); }
  public boolean isSetPartySubID()
  { return isSetField(523); }
}
  public void set(org.quickfix.field.AllocID value)
  { setField(value); }
  public org.quickfix.field.AllocID get(org.quickfix.field.AllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocID getAllocID() throws FieldNotFound
  { org.quickfix.field.AllocID value = new org.quickfix.field.AllocID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocID field)
  { return isSetField(field); }
  public boolean isSetAllocID()
  { return isSetField(70); }
  public void set(org.quickfix.field.TradeDate value)
  { setField(value); }
  public org.quickfix.field.TradeDate get(org.quickfix.field.TradeDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeDate getTradeDate() throws FieldNotFound
  { org.quickfix.field.TradeDate value = new org.quickfix.field.TradeDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeDate field)
  { return isSetField(field); }
  public boolean isSetTradeDate()
  { return isSetField(75); }
  public void set(org.quickfix.field.TransactTime value)
  { setField(value); }
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TransactTime field)
  { return isSetField(field); }
  public boolean isSetTransactTime()
  { return isSetField(60); }
  public void set(org.quickfix.field.AllocStatus value)
  { setField(value); }
  public org.quickfix.field.AllocStatus get(org.quickfix.field.AllocStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocStatus getAllocStatus() throws FieldNotFound
  { org.quickfix.field.AllocStatus value = new org.quickfix.field.AllocStatus();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocStatus field)
  { return isSetField(field); }
  public boolean isSetAllocStatus()
  { return isSetField(87); }
  public void set(org.quickfix.field.AllocRejCode value)
  { setField(value); }
  public org.quickfix.field.AllocRejCode get(org.quickfix.field.AllocRejCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocRejCode getAllocRejCode() throws FieldNotFound
  { org.quickfix.field.AllocRejCode value = new org.quickfix.field.AllocRejCode();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocRejCode field)
  { return isSetField(field); }
  public boolean isSetAllocRejCode()
  { return isSetField(88); }
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
  public void set(org.quickfix.field.LegalConfirm value)
  { setField(value); }
  public org.quickfix.field.LegalConfirm get(org.quickfix.field.LegalConfirm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegalConfirm getLegalConfirm() throws FieldNotFound
  { org.quickfix.field.LegalConfirm value = new org.quickfix.field.LegalConfirm();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegalConfirm field)
  { return isSetField(field); }
  public boolean isSetLegalConfirm()
  { return isSetField(650); }
}

