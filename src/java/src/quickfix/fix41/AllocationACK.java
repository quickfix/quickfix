package quickfix.fix41;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class AllocationACK extends Message
{
  public AllocationACK()
  {
    getHeader().setField(new MsgType("P"));
  }
  public AllocationACK(
    quickfix.field.AllocID aAllocID,
    quickfix.field.TradeDate aTradeDate,
    quickfix.field.AllocStatus aAllocStatus ) {

    getHeader().setField(new MsgType("P"));
    set(aAllocID);
    set(aTradeDate);
    set(aAllocStatus);
  }

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
  public void set(quickfix.field.AllocID value)
  { setField(value); }
  public quickfix.field.AllocID get(quickfix.field.AllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocID getAllocID() throws FieldNotFound
  { quickfix.field.AllocID value = new quickfix.field.AllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocID field)
  { return isSetField(field); }
  public boolean isSetAllocID()
  { return isSetField(70); }
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
  public void set(quickfix.field.AllocStatus value)
  { setField(value); }
  public quickfix.field.AllocStatus get(quickfix.field.AllocStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocStatus getAllocStatus() throws FieldNotFound
  { quickfix.field.AllocStatus value = new quickfix.field.AllocStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocStatus field)
  { return isSetField(field); }
  public boolean isSetAllocStatus()
  { return isSetField(87); }
  public void set(quickfix.field.AllocRejCode value)
  { setField(value); }
  public quickfix.field.AllocRejCode get(quickfix.field.AllocRejCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocRejCode getAllocRejCode() throws FieldNotFound
  { quickfix.field.AllocRejCode value = new quickfix.field.AllocRejCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocRejCode field)
  { return isSetField(field); }
  public boolean isSetAllocRejCode()
  { return isSetField(88); }
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
}

