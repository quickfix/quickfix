package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class OrderMassCancelReport extends Message 
{ 

  public OrderMassCancelReport() 
  { 
    getHeader().setField(new MsgType("r")); 
  } 
  public OrderMassCancelReport(    
    org.quickfix.field.OrderID aOrderID,    
    org.quickfix.field.MassCancelRequestType aMassCancelRequestType,    
    org.quickfix.field.MassCancelResponse aMassCancelResponse ) 
  {  
    getHeader().setField(new MsgType("r")); 
    set(aOrderID); 
    set(aMassCancelRequestType); 
    set(aMassCancelResponse);  
  } 

  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecondaryClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryClOrdID get(org.quickfix.field.SecondaryClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryClOrdID getSecondaryClOrdID() throws FieldNotFound 
  { org.quickfix.field.SecondaryClOrdID value = new org.quickfix.field.SecondaryClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrderID value) 
  { setField(value); } 
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound 
  { org.quickfix.field.OrderID value = new org.quickfix.field.OrderID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecondaryOrderID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryOrderID get(org.quickfix.field.SecondaryOrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound 
  { org.quickfix.field.SecondaryOrderID value = new org.quickfix.field.SecondaryOrderID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MassCancelRequestType value) 
  { setField(value); } 
  public org.quickfix.field.MassCancelRequestType get(org.quickfix.field.MassCancelRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MassCancelRequestType getMassCancelRequestType() throws FieldNotFound 
  { org.quickfix.field.MassCancelRequestType value = new org.quickfix.field.MassCancelRequestType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MassCancelResponse value) 
  { setField(value); } 
  public org.quickfix.field.MassCancelResponse get(org.quickfix.field.MassCancelResponse value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MassCancelResponse getMassCancelResponse() throws FieldNotFound 
  { org.quickfix.field.MassCancelResponse value = new org.quickfix.field.MassCancelResponse(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MassCancelRejectReason value) 
  { setField(value); } 
  public org.quickfix.field.MassCancelRejectReason get(org.quickfix.field.MassCancelRejectReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MassCancelRejectReason getMassCancelRejectReason() throws FieldNotFound 
  { org.quickfix.field.MassCancelRejectReason value = new org.quickfix.field.MassCancelRejectReason(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TotalAffectedOrders value) 
  { setField(value); } 
  public org.quickfix.field.TotalAffectedOrders get(org.quickfix.field.TotalAffectedOrders value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotalAffectedOrders getTotalAffectedOrders() throws FieldNotFound 
  { org.quickfix.field.TotalAffectedOrders value = new org.quickfix.field.TotalAffectedOrders(); 
    getField(value); return value; } 

public static class NoAffectedOrders extends Group { 
  public NoAffectedOrders() { 
    super(534, 41, 
    new int[] { 
               41, 
               535, 
               536, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.OrigClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.OrigClOrdID get(org.quickfix.field.OrigClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound 
  { org.quickfix.field.OrigClOrdID value = new org.quickfix.field.OrigClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AffectedOrderID value) 
  { setField(value); } 
  public org.quickfix.field.AffectedOrderID get(org.quickfix.field.AffectedOrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AffectedOrderID getAffectedOrderID() throws FieldNotFound 
  { org.quickfix.field.AffectedOrderID value = new org.quickfix.field.AffectedOrderID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AffectedSecondaryOrderID value) 
  { setField(value); } 
  public org.quickfix.field.AffectedSecondaryOrderID get(org.quickfix.field.AffectedSecondaryOrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AffectedSecondaryOrderID getAffectedSecondaryOrderID() throws FieldNotFound 
  { org.quickfix.field.AffectedSecondaryOrderID value = new org.quickfix.field.AffectedSecondaryOrderID(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.TradingSessionID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradingSessionSubID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
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
