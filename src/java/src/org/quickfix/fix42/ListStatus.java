package org.quickfix.fix42; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class ListStatus extends Message 
{ 

  public ListStatus() 
  { 
    getHeader().setField(new MsgType("N")); 
  } 
  public ListStatus(    
    org.quickfix.field.ListID aListID,    
    org.quickfix.field.ListStatusType aListStatusType,    
    org.quickfix.field.NoRpts aNoRpts,    
    org.quickfix.field.ListOrderStatus aListOrderStatus,    
    org.quickfix.field.RptSeq aRptSeq,    
    org.quickfix.field.TotNoOrders aTotNoOrders ) 
  {  
    getHeader().setField(new MsgType("N")); 
    set(aListID); 
    set(aListStatusType); 
    set(aNoRpts); 
    set(aListOrderStatus); 
    set(aRptSeq); 
    set(aTotNoOrders);  
  } 

  public void set(org.quickfix.field.ListID value) 
  { setField(value); } 
  public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ListID getListID() throws FieldNotFound 
  { org.quickfix.field.ListID value = new org.quickfix.field.ListID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ListStatusType value) 
  { setField(value); } 
  public org.quickfix.field.ListStatusType get(org.quickfix.field.ListStatusType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ListStatusType getListStatusType() throws FieldNotFound 
  { org.quickfix.field.ListStatusType value = new org.quickfix.field.ListStatusType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NoRpts value) 
  { setField(value); } 
  public org.quickfix.field.NoRpts get(org.quickfix.field.NoRpts value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoRpts getNoRpts() throws FieldNotFound 
  { org.quickfix.field.NoRpts value = new org.quickfix.field.NoRpts(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ListOrderStatus value) 
  { setField(value); } 
  public org.quickfix.field.ListOrderStatus get(org.quickfix.field.ListOrderStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ListOrderStatus getListOrderStatus() throws FieldNotFound 
  { org.quickfix.field.ListOrderStatus value = new org.quickfix.field.ListOrderStatus(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.RptSeq value) 
  { setField(value); } 
  public org.quickfix.field.RptSeq get(org.quickfix.field.RptSeq value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RptSeq getRptSeq() throws FieldNotFound 
  { org.quickfix.field.RptSeq value = new org.quickfix.field.RptSeq(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ListStatusText value) 
  { setField(value); } 
  public org.quickfix.field.ListStatusText get(org.quickfix.field.ListStatusText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ListStatusText getListStatusText() throws FieldNotFound 
  { org.quickfix.field.ListStatusText value = new org.quickfix.field.ListStatusText(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EncodedListStatusTextLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedListStatusTextLen get(org.quickfix.field.EncodedListStatusTextLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedListStatusTextLen getEncodedListStatusTextLen() throws FieldNotFound 
  { org.quickfix.field.EncodedListStatusTextLen value = new org.quickfix.field.EncodedListStatusTextLen(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EncodedListStatusText value) 
  { setField(value); } 
  public org.quickfix.field.EncodedListStatusText get(org.quickfix.field.EncodedListStatusText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedListStatusText getEncodedListStatusText() throws FieldNotFound 
  { org.quickfix.field.EncodedListStatusText value = new org.quickfix.field.EncodedListStatusText(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TotNoOrders value) 
  { setField(value); } 
  public org.quickfix.field.TotNoOrders get(org.quickfix.field.TotNoOrders value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotNoOrders getTotNoOrders() throws FieldNotFound 
  { org.quickfix.field.TotNoOrders value = new org.quickfix.field.TotNoOrders(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NoOrders value) 
  { setField(value); } 
  public org.quickfix.field.NoOrders get(org.quickfix.field.NoOrders value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoOrders getNoOrders() throws FieldNotFound 
  { org.quickfix.field.NoOrders value = new org.quickfix.field.NoOrders(); 
    getField(value); return value; } 

public static class NoOrders extends Group { 
  public NoOrders() { 
    super(73, 6, 
    new int[] { 
               11, 
               14, 
               39, 
               151, 
               84, 
               6, 
               103, 
               58, 
               354, 
               355, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CumQty value) 
  { setField(value); } 
  public org.quickfix.field.CumQty get(org.quickfix.field.CumQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CumQty getCumQty() throws FieldNotFound 
  { org.quickfix.field.CumQty value = new org.quickfix.field.CumQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrdStatus value) 
  { setField(value); } 
  public org.quickfix.field.OrdStatus get(org.quickfix.field.OrdStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrdStatus getOrdStatus() throws FieldNotFound 
  { org.quickfix.field.OrdStatus value = new org.quickfix.field.OrdStatus(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LeavesQty value) 
  { setField(value); } 
  public org.quickfix.field.LeavesQty get(org.quickfix.field.LeavesQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LeavesQty getLeavesQty() throws FieldNotFound 
  { org.quickfix.field.LeavesQty value = new org.quickfix.field.LeavesQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CxlQty value) 
  { setField(value); } 
  public org.quickfix.field.CxlQty get(org.quickfix.field.CxlQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CxlQty getCxlQty() throws FieldNotFound 
  { org.quickfix.field.CxlQty value = new org.quickfix.field.CxlQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AvgPx value) 
  { setField(value); } 
  public org.quickfix.field.AvgPx get(org.quickfix.field.AvgPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AvgPx getAvgPx() throws FieldNotFound 
  { org.quickfix.field.AvgPx value = new org.quickfix.field.AvgPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrdRejReason value) 
  { setField(value); } 
  public org.quickfix.field.OrdRejReason get(org.quickfix.field.OrdRejReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrdRejReason getOrdRejReason() throws FieldNotFound 
  { org.quickfix.field.OrdRejReason value = new org.quickfix.field.OrdRejReason(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Text value) 
  { setField(value); } 
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Text getText() throws FieldNotFound 
  { org.quickfix.field.Text value = new org.quickfix.field.Text(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EncodedTextLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound 
  { org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EncodedText value) 
  { setField(value); } 
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound 
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText(); 
    getField(value); return value; } 

} 
} 
