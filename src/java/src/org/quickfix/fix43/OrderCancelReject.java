package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class OrderCancelReject extends Message 
{ 

  public OrderCancelReject() 
  { 
    getHeader().setField(new MsgType("9")); 
  } 
  public OrderCancelReject(    
    org.quickfix.field.OrderID aOrderID,    
    org.quickfix.field.ClOrdID aClOrdID,    
    org.quickfix.field.OrigClOrdID aOrigClOrdID,    
    org.quickfix.field.OrdStatus aOrdStatus,    
    org.quickfix.field.CxlRejResponseTo aCxlRejResponseTo ) 
  {  
    getHeader().setField(new MsgType("9")); 
    set(aOrderID); 
    set(aClOrdID); 
    set(aOrigClOrdID); 
    set(aOrdStatus); 
    set(aCxlRejResponseTo);  
  } 

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

  public void set(org.quickfix.field.ClOrdLinkID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdLinkID get(org.quickfix.field.ClOrdLinkID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdLinkID getClOrdLinkID() throws FieldNotFound 
  { org.quickfix.field.ClOrdLinkID value = new org.quickfix.field.ClOrdLinkID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ClOrdLinkID field) 
  { return isSetField(field); } 
  public boolean isSetClOrdLinkID() 
  { return isSetField(583); } 

  public void set(org.quickfix.field.OrigClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.OrigClOrdID get(org.quickfix.field.OrigClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound 
  { org.quickfix.field.OrigClOrdID value = new org.quickfix.field.OrigClOrdID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrigClOrdID field) 
  { return isSetField(field); } 
  public boolean isSetOrigClOrdID() 
  { return isSetField(41); } 

  public void set(org.quickfix.field.OrdStatus value) 
  { setField(value); } 
  public org.quickfix.field.OrdStatus get(org.quickfix.field.OrdStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrdStatus getOrdStatus() throws FieldNotFound 
  { org.quickfix.field.OrdStatus value = new org.quickfix.field.OrdStatus(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrdStatus field) 
  { return isSetField(field); } 
  public boolean isSetOrdStatus() 
  { return isSetField(39); } 

  public void set(org.quickfix.field.WorkingIndicator value) 
  { setField(value); } 
  public org.quickfix.field.WorkingIndicator get(org.quickfix.field.WorkingIndicator value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.WorkingIndicator getWorkingIndicator() throws FieldNotFound 
  { org.quickfix.field.WorkingIndicator value = new org.quickfix.field.WorkingIndicator(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.WorkingIndicator field) 
  { return isSetField(field); } 
  public boolean isSetWorkingIndicator() 
  { return isSetField(636); } 

  public void set(org.quickfix.field.OrigOrdModTime value) 
  { setField(value); } 
  public org.quickfix.field.OrigOrdModTime get(org.quickfix.field.OrigOrdModTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigOrdModTime getOrigOrdModTime() throws FieldNotFound 
  { org.quickfix.field.OrigOrdModTime value = new org.quickfix.field.OrigOrdModTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrigOrdModTime field) 
  { return isSetField(field); } 
  public boolean isSetOrigOrdModTime() 
  { return isSetField(586); } 

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

  public void set(org.quickfix.field.Account value) 
  { setField(value); } 
  public org.quickfix.field.Account get(org.quickfix.field.Account value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Account getAccount() throws FieldNotFound 
  { org.quickfix.field.Account value = new org.quickfix.field.Account(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Account field) 
  { return isSetField(field); } 
  public boolean isSetAccount() 
  { return isSetField(1); } 

  public void set(org.quickfix.field.AccountType value) 
  { setField(value); } 
  public org.quickfix.field.AccountType get(org.quickfix.field.AccountType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccountType getAccountType() throws FieldNotFound 
  { org.quickfix.field.AccountType value = new org.quickfix.field.AccountType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AccountType field) 
  { return isSetField(field); } 
  public boolean isSetAccountType() 
  { return isSetField(581); } 

  public void set(org.quickfix.field.TradeOriginationDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeOriginationDate get(org.quickfix.field.TradeOriginationDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeOriginationDate getTradeOriginationDate() throws FieldNotFound 
  { org.quickfix.field.TradeOriginationDate value = new org.quickfix.field.TradeOriginationDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradeOriginationDate field) 
  { return isSetField(field); } 
  public boolean isSetTradeOriginationDate() 
  { return isSetField(229); } 

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

  public void set(org.quickfix.field.CxlRejResponseTo value) 
  { setField(value); } 
  public org.quickfix.field.CxlRejResponseTo get(org.quickfix.field.CxlRejResponseTo value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CxlRejResponseTo getCxlRejResponseTo() throws FieldNotFound 
  { org.quickfix.field.CxlRejResponseTo value = new org.quickfix.field.CxlRejResponseTo(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CxlRejResponseTo field) 
  { return isSetField(field); } 
  public boolean isSetCxlRejResponseTo() 
  { return isSetField(434); } 

  public void set(org.quickfix.field.CxlRejReason value) 
  { setField(value); } 
  public org.quickfix.field.CxlRejReason get(org.quickfix.field.CxlRejReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CxlRejReason getCxlRejReason() throws FieldNotFound 
  { org.quickfix.field.CxlRejReason value = new org.quickfix.field.CxlRejReason(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CxlRejReason field) 
  { return isSetField(field); } 
  public boolean isSetCxlRejReason() 
  { return isSetField(102); } 

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
