package quickfix.fix44;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class ConfirmationAck extends Message
{
  public ConfirmationAck()
  {
    getHeader().setField(new MsgType("AU"));
  }
  public ConfirmationAck(
    quickfix.field.ConfirmID aConfirmID,
    quickfix.field.TradeDate aTradeDate,
    quickfix.field.TransactTime aTransactTime,
    quickfix.field.AffirmStatus aAffirmStatus ) {

    getHeader().setField(new MsgType("AU"));
    set(aConfirmID);
    set(aTradeDate);
    set(aTransactTime);
    set(aAffirmStatus);
  }

  public void set(quickfix.field.ConfirmID value)
  { setField(value); }
  public quickfix.field.ConfirmID get(quickfix.field.ConfirmID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ConfirmID getConfirmID() throws FieldNotFound
  { quickfix.field.ConfirmID value = new quickfix.field.ConfirmID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ConfirmID field)
  { return isSetField(field); }
  public boolean isSetConfirmID()
  { return isSetField(664); }
  public void set(quickfix.field.TradeDate value)
  { setField(value); }
  public quickfix.field.TradeDate get(quickfix.field.TradeDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeDate getTradeDate() throws FieldNotFound
  { quickfix.field.TradeDate value = new quickfix.field.TradeDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeDate field)
  { return isSetField(field); }
  public boolean isSetTradeDate()
  { return isSetField(75); }
  public void set(quickfix.field.TransactTime value)
  { setField(value); }
  public quickfix.field.TransactTime get(quickfix.field.TransactTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { quickfix.field.TransactTime value = new quickfix.field.TransactTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TransactTime field)
  { return isSetField(field); }
  public boolean isSetTransactTime()
  { return isSetField(60); }
  public void set(quickfix.field.AffirmStatus value)
  { setField(value); }
  public quickfix.field.AffirmStatus get(quickfix.field.AffirmStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AffirmStatus getAffirmStatus() throws FieldNotFound
  { quickfix.field.AffirmStatus value = new quickfix.field.AffirmStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AffirmStatus field)
  { return isSetField(field); }
  public boolean isSetAffirmStatus()
  { return isSetField(940); }
  public void set(quickfix.field.ConfirmRejReason value)
  { setField(value); }
  public quickfix.field.ConfirmRejReason get(quickfix.field.ConfirmRejReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ConfirmRejReason getConfirmRejReason() throws FieldNotFound
  { quickfix.field.ConfirmRejReason value = new quickfix.field.ConfirmRejReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ConfirmRejReason field)
  { return isSetField(field); }
  public boolean isSetConfirmRejReason()
  { return isSetField(774); }
  public void set(quickfix.field.MatchStatus value)
  { setField(value); }
  public quickfix.field.MatchStatus get(quickfix.field.MatchStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MatchStatus getMatchStatus() throws FieldNotFound
  { quickfix.field.MatchStatus value = new quickfix.field.MatchStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MatchStatus field)
  { return isSetField(field); }
  public boolean isSetMatchStatus()
  { return isSetField(573); }
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
}

