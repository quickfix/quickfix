package org.quickfix.fix44;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class ConfirmationAck extends Message
{
  public ConfirmationAck()
  {
    getHeader().setField(new MsgType("AU"));
  }
  public ConfirmationAck(
    org.quickfix.field.ConfirmID aConfirmID,
    org.quickfix.field.TradeDate aTradeDate,
    org.quickfix.field.TransactTime aTransactTime,
    org.quickfix.field.AffirmStatus aAffirmStatus ) {

    getHeader().setField(new MsgType("AU"));
    set(aConfirmID);
    set(aTradeDate);
    set(aTransactTime);
    set(aAffirmStatus);
  }

  public void set(org.quickfix.field.ConfirmID value)
  { setField(value); }
  public org.quickfix.field.ConfirmID get(org.quickfix.field.ConfirmID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ConfirmID getConfirmID() throws FieldNotFound
  { org.quickfix.field.ConfirmID value = new org.quickfix.field.ConfirmID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ConfirmID field)
  { return isSetField(field); }
  public boolean isSetConfirmID()
  { return isSetField(664); }
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
  public void set(org.quickfix.field.AffirmStatus value)
  { setField(value); }
  public org.quickfix.field.AffirmStatus get(org.quickfix.field.AffirmStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AffirmStatus getAffirmStatus() throws FieldNotFound
  { org.quickfix.field.AffirmStatus value = new org.quickfix.field.AffirmStatus();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AffirmStatus field)
  { return isSetField(field); }
  public boolean isSetAffirmStatus()
  { return isSetField(940); }
  public void set(org.quickfix.field.ConfirmRejReason value)
  { setField(value); }
  public org.quickfix.field.ConfirmRejReason get(org.quickfix.field.ConfirmRejReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ConfirmRejReason getConfirmRejReason() throws FieldNotFound
  { org.quickfix.field.ConfirmRejReason value = new org.quickfix.field.ConfirmRejReason();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ConfirmRejReason field)
  { return isSetField(field); }
  public boolean isSetConfirmRejReason()
  { return isSetField(774); }
  public void set(org.quickfix.field.MatchStatus value)
  { setField(value); }
  public org.quickfix.field.MatchStatus get(org.quickfix.field.MatchStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MatchStatus getMatchStatus() throws FieldNotFound
  { org.quickfix.field.MatchStatus value = new org.quickfix.field.MatchStatus();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MatchStatus field)
  { return isSetField(field); }
  public boolean isSetMatchStatus()
  { return isSetField(573); }
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

