package org.quickfix.fix42; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class ListExecute extends Message 
{ 

  public ListExecute() 
  { 
    getHeader().setField(new MsgType("L")); 
  } 
  public ListExecute(    
    org.quickfix.field.ListID aListID,    
    org.quickfix.field.TransactTime aTransactTime ) 
  {  
    getHeader().setField(new MsgType("L")); 
    set(aListID); 
    set(aTransactTime);  
  } 

  public void set(org.quickfix.field.ListID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ListID getListID() throws FieldNotFound
  { 
    org.quickfix.field.ListID value = new org.quickfix.field.ListID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ClientBidID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ClientBidID get(org.quickfix.field.ClientBidID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ClientBidID getClientBidID() throws FieldNotFound
  { 
    org.quickfix.field.ClientBidID value = new org.quickfix.field.ClientBidID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.BidID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.BidID get(org.quickfix.field.BidID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.BidID getBidID() throws FieldNotFound
  { 
    org.quickfix.field.BidID value = new org.quickfix.field.BidID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.TransactTime value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { 
    org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Text value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Text getText() throws FieldNotFound
  { 
    org.quickfix.field.Text value = new org.quickfix.field.Text();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.EncodedTextLen value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound
  { 
    org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.EncodedText value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { 
    org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText();  
    getField(value);  
    return value;  
  } 
} 
