package quickfix.fix41;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class ListStatus extends Message
{
  public ListStatus()
  {
    getHeader().setField(new MsgType("N"));
  }
  public ListStatus(
    quickfix.field.ListID aListID,
    quickfix.field.NoRpts aNoRpts,
    quickfix.field.RptSeq aRptSeq ) {

    getHeader().setField(new MsgType("N"));
    set(aListID);
    set(aNoRpts);
    set(aRptSeq);
  }

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
  public void set(quickfix.field.WaveNo value)
  { setField(value); }
  public quickfix.field.WaveNo get(quickfix.field.WaveNo  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.WaveNo getWaveNo() throws FieldNotFound
  { quickfix.field.WaveNo value = new quickfix.field.WaveNo();
    getField(value); return value; }
  public boolean isSet(quickfix.field.WaveNo field)
  { return isSetField(field); }
  public boolean isSetWaveNo()
  { return isSetField(105); }
  public void set(quickfix.field.NoRpts value)
  { setField(value); }
  public quickfix.field.NoRpts get(quickfix.field.NoRpts  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoRpts getNoRpts() throws FieldNotFound
  { quickfix.field.NoRpts value = new quickfix.field.NoRpts();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoRpts field)
  { return isSetField(field); }
  public boolean isSetNoRpts()
  { return isSetField(82); }
  public void set(quickfix.field.RptSeq value)
  { setField(value); }
  public quickfix.field.RptSeq get(quickfix.field.RptSeq  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RptSeq getRptSeq() throws FieldNotFound
  { quickfix.field.RptSeq value = new quickfix.field.RptSeq();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RptSeq field)
  { return isSetField(field); }
  public boolean isSetRptSeq()
  { return isSetField(83); }
  public void set(quickfix.field.NoOrders value)
  { setField(value); }
  public quickfix.field.NoOrders get(quickfix.field.NoOrders  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoOrders getNoOrders() throws FieldNotFound
  { quickfix.field.NoOrders value = new quickfix.field.NoOrders();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoOrders field)
  { return isSetField(field); }
  public boolean isSetNoOrders()
  { return isSetField(73); }
  public static class NoOrders extends Group {
    public NoOrders() {
      super(73,11,
      new int[] {11,14,151,84,6,0 } ); }
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
  public void set(quickfix.field.CumQty value)
  { setField(value); }
  public quickfix.field.CumQty get(quickfix.field.CumQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CumQty getCumQty() throws FieldNotFound
  { quickfix.field.CumQty value = new quickfix.field.CumQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CumQty field)
  { return isSetField(field); }
  public boolean isSetCumQty()
  { return isSetField(14); }
  public void set(quickfix.field.LeavesQty value)
  { setField(value); }
  public quickfix.field.LeavesQty get(quickfix.field.LeavesQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LeavesQty getLeavesQty() throws FieldNotFound
  { quickfix.field.LeavesQty value = new quickfix.field.LeavesQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LeavesQty field)
  { return isSetField(field); }
  public boolean isSetLeavesQty()
  { return isSetField(151); }
  public void set(quickfix.field.CxlQty value)
  { setField(value); }
  public quickfix.field.CxlQty get(quickfix.field.CxlQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CxlQty getCxlQty() throws FieldNotFound
  { quickfix.field.CxlQty value = new quickfix.field.CxlQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CxlQty field)
  { return isSetField(field); }
  public boolean isSetCxlQty()
  { return isSetField(84); }
  public void set(quickfix.field.AvgPx value)
  { setField(value); }
  public quickfix.field.AvgPx get(quickfix.field.AvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AvgPx getAvgPx() throws FieldNotFound
  { quickfix.field.AvgPx value = new quickfix.field.AvgPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AvgPx field)
  { return isSetField(field); }
  public boolean isSetAvgPx()
  { return isSetField(6); }
}
}

