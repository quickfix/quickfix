package quickfix.fix40;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class DontKnowTrade extends Message
{
  public DontKnowTrade()
  {
    getHeader().setField(new MsgType("Q"));
  }
  public DontKnowTrade(
    quickfix.field.DKReason aDKReason,
    quickfix.field.Symbol aSymbol,
    quickfix.field.Side aSide,
    quickfix.field.OrderQty aOrderQty,
    quickfix.field.LastShares aLastShares,
    quickfix.field.LastPx aLastPx ) {

    getHeader().setField(new MsgType("Q"));
    set(aDKReason);
    set(aSymbol);
    set(aSide);
    set(aOrderQty);
    set(aLastShares);
    set(aLastPx);
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
  public void set(quickfix.field.ExecID value)
  { setField(value); }
  public quickfix.field.ExecID get(quickfix.field.ExecID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecID getExecID() throws FieldNotFound
  { quickfix.field.ExecID value = new quickfix.field.ExecID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecID field)
  { return isSetField(field); }
  public boolean isSetExecID()
  { return isSetField(17); }
  public void set(quickfix.field.DKReason value)
  { setField(value); }
  public quickfix.field.DKReason get(quickfix.field.DKReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DKReason getDKReason() throws FieldNotFound
  { quickfix.field.DKReason value = new quickfix.field.DKReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DKReason field)
  { return isSetField(field); }
  public boolean isSetDKReason()
  { return isSetField(127); }
  public void set(quickfix.field.Symbol value)
  { setField(value); }
  public quickfix.field.Symbol get(quickfix.field.Symbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Symbol getSymbol() throws FieldNotFound
  { quickfix.field.Symbol value = new quickfix.field.Symbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Symbol field)
  { return isSetField(field); }
  public boolean isSetSymbol()
  { return isSetField(55); }
  public void set(quickfix.field.Side value)
  { setField(value); }
  public quickfix.field.Side get(quickfix.field.Side  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Side getSide() throws FieldNotFound
  { quickfix.field.Side value = new quickfix.field.Side();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Side field)
  { return isSetField(field); }
  public boolean isSetSide()
  { return isSetField(54); }
  public void set(quickfix.field.OrderQty value)
  { setField(value); }
  public quickfix.field.OrderQty get(quickfix.field.OrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderQty getOrderQty() throws FieldNotFound
  { quickfix.field.OrderQty value = new quickfix.field.OrderQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderQty field)
  { return isSetField(field); }
  public boolean isSetOrderQty()
  { return isSetField(38); }
  public void set(quickfix.field.LastShares value)
  { setField(value); }
  public quickfix.field.LastShares get(quickfix.field.LastShares  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastShares getLastShares() throws FieldNotFound
  { quickfix.field.LastShares value = new quickfix.field.LastShares();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastShares field)
  { return isSetField(field); }
  public boolean isSetLastShares()
  { return isSetField(32); }
  public void set(quickfix.field.LastPx value)
  { setField(value); }
  public quickfix.field.LastPx get(quickfix.field.LastPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastPx getLastPx() throws FieldNotFound
  { quickfix.field.LastPx value = new quickfix.field.LastPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastPx field)
  { return isSetField(field); }
  public boolean isSetLastPx()
  { return isSetField(31); }
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

