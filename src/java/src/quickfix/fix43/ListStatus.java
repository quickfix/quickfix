package quickfix.fix43;
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
    quickfix.field.ListStatusType aListStatusType,
    quickfix.field.NoRpts aNoRpts,
    quickfix.field.ListOrderStatus aListOrderStatus,
    quickfix.field.RptSeq aRptSeq,
    quickfix.field.TotNoOrders aTotNoOrders ) {

    getHeader().setField(new MsgType("N"));
    set(aListID);
    set(aListStatusType);
    set(aNoRpts);
    set(aListOrderStatus);
    set(aRptSeq);
    set(aTotNoOrders);
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
  public void set(quickfix.field.ListStatusType value)
  { setField(value); }
  public quickfix.field.ListStatusType get(quickfix.field.ListStatusType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ListStatusType getListStatusType() throws FieldNotFound
  { quickfix.field.ListStatusType value = new quickfix.field.ListStatusType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ListStatusType field)
  { return isSetField(field); }
  public boolean isSetListStatusType()
  { return isSetField(429); }
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
  public void set(quickfix.field.ListOrderStatus value)
  { setField(value); }
  public quickfix.field.ListOrderStatus get(quickfix.field.ListOrderStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ListOrderStatus getListOrderStatus() throws FieldNotFound
  { quickfix.field.ListOrderStatus value = new quickfix.field.ListOrderStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ListOrderStatus field)
  { return isSetField(field); }
  public boolean isSetListOrderStatus()
  { return isSetField(431); }
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
  public void set(quickfix.field.ListStatusText value)
  { setField(value); }
  public quickfix.field.ListStatusText get(quickfix.field.ListStatusText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ListStatusText getListStatusText() throws FieldNotFound
  { quickfix.field.ListStatusText value = new quickfix.field.ListStatusText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ListStatusText field)
  { return isSetField(field); }
  public boolean isSetListStatusText()
  { return isSetField(444); }
  public void set(quickfix.field.EncodedListStatusTextLen value)
  { setField(value); }
  public quickfix.field.EncodedListStatusTextLen get(quickfix.field.EncodedListStatusTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedListStatusTextLen getEncodedListStatusTextLen() throws FieldNotFound
  { quickfix.field.EncodedListStatusTextLen value = new quickfix.field.EncodedListStatusTextLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedListStatusTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedListStatusTextLen()
  { return isSetField(445); }
  public void set(quickfix.field.EncodedListStatusText value)
  { setField(value); }
  public quickfix.field.EncodedListStatusText get(quickfix.field.EncodedListStatusText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedListStatusText getEncodedListStatusText() throws FieldNotFound
  { quickfix.field.EncodedListStatusText value = new quickfix.field.EncodedListStatusText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedListStatusText field)
  { return isSetField(field); }
  public boolean isSetEncodedListStatusText()
  { return isSetField(446); }
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
  public void set(quickfix.field.TotNoOrders value)
  { setField(value); }
  public quickfix.field.TotNoOrders get(quickfix.field.TotNoOrders  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotNoOrders getTotNoOrders() throws FieldNotFound
  { quickfix.field.TotNoOrders value = new quickfix.field.TotNoOrders();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotNoOrders field)
  { return isSetField(field); }
  public boolean isSetTotNoOrders()
  { return isSetField(68); }
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
      new int[] {11,526,14,39,636,151,84,6,103,58,354,355,0 } ); }
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
  public void set(quickfix.field.SecondaryClOrdID value)
  { setField(value); }
  public quickfix.field.SecondaryClOrdID get(quickfix.field.SecondaryClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryClOrdID getSecondaryClOrdID() throws FieldNotFound
  { quickfix.field.SecondaryClOrdID value = new quickfix.field.SecondaryClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryClOrdID field)
  { return isSetField(field); }
  public boolean isSetSecondaryClOrdID()
  { return isSetField(526); }
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
  public void set(quickfix.field.WorkingIndicator value)
  { setField(value); }
  public quickfix.field.WorkingIndicator get(quickfix.field.WorkingIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.WorkingIndicator getWorkingIndicator() throws FieldNotFound
  { quickfix.field.WorkingIndicator value = new quickfix.field.WorkingIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.WorkingIndicator field)
  { return isSetField(field); }
  public boolean isSetWorkingIndicator()
  { return isSetField(636); }
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
  public void set(quickfix.field.OrdRejReason value)
  { setField(value); }
  public quickfix.field.OrdRejReason get(quickfix.field.OrdRejReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrdRejReason getOrdRejReason() throws FieldNotFound
  { quickfix.field.OrdRejReason value = new quickfix.field.OrdRejReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrdRejReason field)
  { return isSetField(field); }
  public boolean isSetOrdRejReason()
  { return isSetField(103); }
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
}

