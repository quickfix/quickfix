package org.quickfix.fix44; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class ConfirmationRequest extends Message 
{ 

  public ConfirmationRequest() 
  { 
    getHeader().setField(new MsgType("BS")); 
  } 
  public ConfirmationRequest(    
    org.quickfix.field.ConfirmReqID aConfirmReqID,    
    org.quickfix.field.ConfirmType aConfirmType,    
    org.quickfix.field.TransactTime aTransactTime ) 
  {  
    getHeader().setField(new MsgType("BS")); 
    set(aConfirmReqID); 
    set(aConfirmType); 
    set(aTransactTime);  
  } 

  public void set(org.quickfix.field.ConfirmReqID value) 
  { setField(value); } 
  public org.quickfix.field.ConfirmReqID get(org.quickfix.field.ConfirmReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ConfirmReqID getConfirmReqID() throws FieldNotFound 
  { org.quickfix.field.ConfirmReqID value = new org.quickfix.field.ConfirmReqID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ConfirmReqID field) 
  { return isSetField(field); } 
  public boolean isSetConfirmReqID() 
  { return isSetField(859); } 

  public void set(org.quickfix.field.ConfirmType value) 
  { setField(value); } 
  public org.quickfix.field.ConfirmType get(org.quickfix.field.ConfirmType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ConfirmType getConfirmType() throws FieldNotFound 
  { org.quickfix.field.ConfirmType value = new org.quickfix.field.ConfirmType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ConfirmType field) 
  { return isSetField(field); } 
  public boolean isSetConfirmType() 
  { return isSetField(773); } 
  public void set(org.quickfix.field.NoOrders value) 
  { setField(value); } 
  public org.quickfix.field.NoOrders get(org.quickfix.field.NoOrders value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoOrders getNoOrders() throws FieldNotFound 
  { org.quickfix.field.NoOrders value = new org.quickfix.field.NoOrders(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoOrders field) 
  { return isSetField(field); } 
  public boolean isSetNoOrders() 
  { return isSetField(73); } 

public static class NoOrders extends Group { 
  public NoOrders() { 
    super(73, 11, 
    new int[] { 
               11, 
               37, 
               198, 
               526, 
               66, 
               38, 
               799, 
               800, 
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
  public boolean isSet(org.quickfix.field.ClOrdID field) 
  { return isSetField(field); } 
  public boolean isSetClOrdID() 
  { return isSetField(11); } 

  public void set(org.quickfix.field.OrderID value) 
  { setField(value); } 
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound 
  { org.quickfix.field.OrderID value = new org.quickfix.field.OrderID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderID field) 
  { return isSetField(field); } 
  public boolean isSetOrderID() 
  { return isSetField(37); } 

  public void set(org.quickfix.field.SecondaryOrderID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryOrderID get(org.quickfix.field.SecondaryOrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound 
  { org.quickfix.field.SecondaryOrderID value = new org.quickfix.field.SecondaryOrderID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecondaryOrderID field) 
  { return isSetField(field); } 
  public boolean isSetSecondaryOrderID() 
  { return isSetField(198); } 

  public void set(org.quickfix.field.SecondaryClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryClOrdID get(org.quickfix.field.SecondaryClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryClOrdID getSecondaryClOrdID() throws FieldNotFound 
  { org.quickfix.field.SecondaryClOrdID value = new org.quickfix.field.SecondaryClOrdID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecondaryClOrdID field) 
  { return isSetField(field); } 
  public boolean isSetSecondaryClOrdID() 
  { return isSetField(526); } 

  public void set(org.quickfix.field.ListID value) 
  { setField(value); } 
  public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ListID getListID() throws FieldNotFound 
  { org.quickfix.field.ListID value = new org.quickfix.field.ListID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ListID field) 
  { return isSetField(field); } 
  public boolean isSetListID() 
  { return isSetField(66); } 

  public void set(org.quickfix.field.OrderQty value) 
  { setField(value); } 
  public org.quickfix.field.OrderQty get(org.quickfix.field.OrderQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderQty getOrderQty() throws FieldNotFound 
  { org.quickfix.field.OrderQty value = new org.quickfix.field.OrderQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderQty field) 
  { return isSetField(field); } 
  public boolean isSetOrderQty() 
  { return isSetField(38); } 

  public void set(org.quickfix.field.OrderAvgPx value) 
  { setField(value); } 
  public org.quickfix.field.OrderAvgPx get(org.quickfix.field.OrderAvgPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderAvgPx getOrderAvgPx() throws FieldNotFound 
  { org.quickfix.field.OrderAvgPx value = new org.quickfix.field.OrderAvgPx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderAvgPx field) 
  { return isSetField(field); } 
  public boolean isSetOrderAvgPx() 
  { return isSetField(799); } 

  public void set(org.quickfix.field.OrderBookingQty value) 
  { setField(value); } 
  public org.quickfix.field.OrderBookingQty get(org.quickfix.field.OrderBookingQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderBookingQty getOrderBookingQty() throws FieldNotFound 
  { org.quickfix.field.OrderBookingQty value = new org.quickfix.field.OrderBookingQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderBookingQty field) 
  { return isSetField(field); } 
  public boolean isSetOrderBookingQty() 
  { return isSetField(800); } 

  public void set(org.quickfix.field.NoNested2PartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoNested2PartyIDs get(org.quickfix.field.NoNested2PartyIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoNested2PartyIDs getNoNested2PartyIDs() throws FieldNotFound 
  { org.quickfix.field.NoNested2PartyIDs value = new org.quickfix.field.NoNested2PartyIDs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoNested2PartyIDs field) 
  { return isSetField(field); } 
  public boolean isSetNoNested2PartyIDs() 
  { return isSetField(756); } 

public static class NoNested2PartyIDs extends Group { 
  public NoNested2PartyIDs() { 
    super(756, 757, 
    new int[] { 
               757, 
               758, 
               759, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.Nested2PartyID value) 
  { setField(value); } 
  public org.quickfix.field.Nested2PartyID get(org.quickfix.field.Nested2PartyID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Nested2PartyID getNested2PartyID() throws FieldNotFound 
  { org.quickfix.field.Nested2PartyID value = new org.quickfix.field.Nested2PartyID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Nested2PartyID field) 
  { return isSetField(field); } 
  public boolean isSetNested2PartyID() 
  { return isSetField(757); } 

  public void set(org.quickfix.field.Nested2PartyIDSource value) 
  { setField(value); } 
  public org.quickfix.field.Nested2PartyIDSource get(org.quickfix.field.Nested2PartyIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Nested2PartyIDSource getNested2PartyIDSource() throws FieldNotFound 
  { org.quickfix.field.Nested2PartyIDSource value = new org.quickfix.field.Nested2PartyIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Nested2PartyIDSource field) 
  { return isSetField(field); } 
  public boolean isSetNested2PartyIDSource() 
  { return isSetField(758); } 

  public void set(org.quickfix.field.Nested2PartyRole value) 
  { setField(value); } 
  public org.quickfix.field.Nested2PartyRole get(org.quickfix.field.Nested2PartyRole value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Nested2PartyRole getNested2PartyRole() throws FieldNotFound 
  { org.quickfix.field.Nested2PartyRole value = new org.quickfix.field.Nested2PartyRole(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Nested2PartyRole field) 
  { return isSetField(field); } 
  public boolean isSetNested2PartyRole() 
  { return isSetField(759); } 

  public void set(org.quickfix.field.NoNested2PartySubIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoNested2PartySubIDs get(org.quickfix.field.NoNested2PartySubIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoNested2PartySubIDs getNoNested2PartySubIDs() throws FieldNotFound 
  { org.quickfix.field.NoNested2PartySubIDs value = new org.quickfix.field.NoNested2PartySubIDs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoNested2PartySubIDs field) 
  { return isSetField(field); } 
  public boolean isSetNoNested2PartySubIDs() 
  { return isSetField(806); } 

public static class NoNested2PartySubIDs extends Group { 
  public NoNested2PartySubIDs() { 
    super(806, 760, 
    new int[] { 
               760, 
               807, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.Nested2PartySubID value) 
  { setField(value); } 
  public org.quickfix.field.Nested2PartySubID get(org.quickfix.field.Nested2PartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Nested2PartySubID getNested2PartySubID() throws FieldNotFound 
  { org.quickfix.field.Nested2PartySubID value = new org.quickfix.field.Nested2PartySubID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Nested2PartySubID field) 
  { return isSetField(field); } 
  public boolean isSetNested2PartySubID() 
  { return isSetField(760); } 

  public void set(org.quickfix.field.Nested2PartySubIDType value) 
  { setField(value); } 
  public org.quickfix.field.Nested2PartySubIDType get(org.quickfix.field.Nested2PartySubIDType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Nested2PartySubIDType getNested2PartySubIDType() throws FieldNotFound 
  { org.quickfix.field.Nested2PartySubIDType value = new org.quickfix.field.Nested2PartySubIDType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Nested2PartySubIDType field) 
  { return isSetField(field); } 
  public boolean isSetNested2PartySubIDType() 
  { return isSetField(807); } 

} 
} 
} 

  public void set(org.quickfix.field.AllocID value) 
  { setField(value); } 
  public org.quickfix.field.AllocID get(org.quickfix.field.AllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocID getAllocID() throws FieldNotFound 
  { org.quickfix.field.AllocID value = new org.quickfix.field.AllocID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocID field) 
  { return isSetField(field); } 
  public boolean isSetAllocID() 
  { return isSetField(70); } 

  public void set(org.quickfix.field.SecondaryAllocID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryAllocID get(org.quickfix.field.SecondaryAllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryAllocID getSecondaryAllocID() throws FieldNotFound 
  { org.quickfix.field.SecondaryAllocID value = new org.quickfix.field.SecondaryAllocID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecondaryAllocID field) 
  { return isSetField(field); } 
  public boolean isSetSecondaryAllocID() 
  { return isSetField(793); } 

  public void set(org.quickfix.field.IndividualAllocID value) 
  { setField(value); } 
  public org.quickfix.field.IndividualAllocID get(org.quickfix.field.IndividualAllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IndividualAllocID getIndividualAllocID() throws FieldNotFound 
  { org.quickfix.field.IndividualAllocID value = new org.quickfix.field.IndividualAllocID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.IndividualAllocID field) 
  { return isSetField(field); } 
  public boolean isSetIndividualAllocID() 
  { return isSetField(467); } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TransactTime field) 
  { return isSetField(field); } 
  public boolean isSetTransactTime() 
  { return isSetField(60); } 

  public void set(org.quickfix.field.AllocAccount value) 
  { setField(value); } 
  public org.quickfix.field.AllocAccount get(org.quickfix.field.AllocAccount value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound 
  { org.quickfix.field.AllocAccount value = new org.quickfix.field.AllocAccount(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocAccount field) 
  { return isSetField(field); } 
  public boolean isSetAllocAccount() 
  { return isSetField(79); } 

  public void set(org.quickfix.field.AllocAcctIDSource value) 
  { setField(value); } 
  public org.quickfix.field.AllocAcctIDSource get(org.quickfix.field.AllocAcctIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocAcctIDSource getAllocAcctIDSource() throws FieldNotFound 
  { org.quickfix.field.AllocAcctIDSource value = new org.quickfix.field.AllocAcctIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocAcctIDSource field) 
  { return isSetField(field); } 
  public boolean isSetAllocAcctIDSource() 
  { return isSetField(661); } 

  public void set(org.quickfix.field.AllocAccountType value) 
  { setField(value); } 
  public org.quickfix.field.AllocAccountType get(org.quickfix.field.AllocAccountType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocAccountType getAllocAccountType() throws FieldNotFound 
  { org.quickfix.field.AllocAccountType value = new org.quickfix.field.AllocAccountType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocAccountType field) 
  { return isSetField(field); } 
  public boolean isSetAllocAccountType() 
  { return isSetField(798); } 

  public void set(org.quickfix.field.Text value) 
  { setField(value); } 
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound 
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedText field) 
  { return isSetField(field); } 
  public boolean isSetEncodedText() 
  { return isSetField(355); } 
} 
