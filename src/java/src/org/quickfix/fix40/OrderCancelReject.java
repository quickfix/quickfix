package org.quickfix.fix40; 
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
    org.quickfix.field.ClOrdID aClOrdID ) 
  {  
    getHeader().setField(new MsgType("9")); 
    set(aOrderID); 
    set(aClOrdID);  
  } 

  public void set(org.quickfix.field.OrderID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound
  { 
    org.quickfix.field.OrderID value = new org.quickfix.field.OrderID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ClOrdID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound
  { 
    org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ClientID value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ClientID get(org.quickfix.field.ClientID value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ClientID getClientID() throws FieldNotFound
  { 
    org.quickfix.field.ClientID value = new org.quickfix.field.ClientID();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.ExecBroker value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.ExecBroker get(org.quickfix.field.ExecBroker value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.ExecBroker getExecBroker() throws FieldNotFound
  { 
    org.quickfix.field.ExecBroker value = new org.quickfix.field.ExecBroker();  
    getField(value);  
    return value;  
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

  public void set(org.quickfix.field.CxlRejReason value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.CxlRejReason get(org.quickfix.field.CxlRejReason value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.CxlRejReason getCxlRejReason() throws FieldNotFound
  { 
    org.quickfix.field.CxlRejReason value = new org.quickfix.field.CxlRejReason();  
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
} 
