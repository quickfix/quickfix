package quickfix.fix42;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class OrderCancelReject extends Message
{
  public OrderCancelReject()
  {
    getHeader().setField(new MsgType("9"));
  }
  public OrderCancelReject(
    quickfix.field.OrderID aOrderID,
    quickfix.field.ClOrdID aClOrdID,
    quickfix.field.OrigClOrdID aOrigClOrdID,
    quickfix.field.OrdStatus aOrdStatus,
    quickfix.field.CxlRejResponseTo aCxlRejResponseTo ) {

    getHeader().setField(new MsgType("9"));
    set(aOrderID);
    set(aClOrdID);
    set(aOrigClOrdID);
    set(aOrdStatus);
    set(aCxlRejResponseTo);
  }

  public void set(quickfix.field.OrderID value)
  { setField(value); }
  public quickfix.field.OrderID get(quickfix.field.OrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderID getOrderID() throws FieldNotFound
  { quickfix.field.OrderID value = new quickfix.field.OrderID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderID field)
  { return isSetField(field); }
  public boolean isSetOrderID()
  { return isSetField(37); }
  public void set(quickfix.field.SecondaryOrderID value)
  { setField(value); }
  public quickfix.field.SecondaryOrderID get(quickfix.field.SecondaryOrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound
  { quickfix.field.SecondaryOrderID value = new quickfix.field.SecondaryOrderID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryOrderID field)
  { return isSetField(field); }
  public boolean isSetSecondaryOrderID()
  { return isSetField(198); }
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
  public void set(quickfix.field.OrigClOrdID value)
  { setField(value); }
  public quickfix.field.OrigClOrdID get(quickfix.field.OrigClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound
  { quickfix.field.OrigClOrdID value = new quickfix.field.OrigClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigClOrdID field)
  { return isSetField(field); }
  public boolean isSetOrigClOrdID()
  { return isSetField(41); }
  public void set(quickfix.field.OrdStatus value)
  { setField(value); }
  public quickfix.field.OrdStatus get(quickfix.field.OrdStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrdStatus getOrdStatus() throws FieldNotFound
  { quickfix.field.OrdStatus value = new quickfix.field.OrdStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrdStatus field)
  { return isSetField(field); }
  public boolean isSetOrdStatus()
  { return isSetField(39); }
  public void set(quickfix.field.ClientID value)
  { setField(value); }
  public quickfix.field.ClientID get(quickfix.field.ClientID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClientID getClientID() throws FieldNotFound
  { quickfix.field.ClientID value = new quickfix.field.ClientID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClientID field)
  { return isSetField(field); }
  public boolean isSetClientID()
  { return isSetField(109); }
  public void set(quickfix.field.ExecBroker value)
  { setField(value); }
  public quickfix.field.ExecBroker get(quickfix.field.ExecBroker  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecBroker getExecBroker() throws FieldNotFound
  { quickfix.field.ExecBroker value = new quickfix.field.ExecBroker();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecBroker field)
  { return isSetField(field); }
  public boolean isSetExecBroker()
  { return isSetField(76); }
  public void set(quickfix.field.ListID value)
  { setField(value); }
  public quickfix.field.ListID get(quickfix.field.ListID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ListID getListID() throws FieldNotFound
  { quickfix.field.ListID value = new quickfix.field.ListID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ListID field)
  { return isSetField(field); }
  public boolean isSetListID()
  { return isSetField(66); }
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
  public void set(quickfix.field.CxlRejResponseTo value)
  { setField(value); }
  public quickfix.field.CxlRejResponseTo get(quickfix.field.CxlRejResponseTo  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CxlRejResponseTo getCxlRejResponseTo() throws FieldNotFound
  { quickfix.field.CxlRejResponseTo value = new quickfix.field.CxlRejResponseTo();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CxlRejResponseTo field)
  { return isSetField(field); }
  public boolean isSetCxlRejResponseTo()
  { return isSetField(434); }
  public void set(quickfix.field.CxlRejReason value)
  { setField(value); }
  public quickfix.field.CxlRejReason get(quickfix.field.CxlRejReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CxlRejReason getCxlRejReason() throws FieldNotFound
  { quickfix.field.CxlRejReason value = new quickfix.field.CxlRejReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CxlRejReason field)
  { return isSetField(field); }
  public boolean isSetCxlRejReason()
  { return isSetField(102); }
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

