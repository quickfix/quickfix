package org.quickfix.fix40; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class AllocationACK extends Message 
{ 

  public AllocationACK() 
  { 
    getHeader().setField(new MsgType("P")); 
  } 
  public AllocationACK(    
    org.quickfix.field.AllocID aAllocID,    
    org.quickfix.field.TradeDate aTradeDate,    
    org.quickfix.field.AllocStatus aAllocStatus ) 
  {  
    getHeader().setField(new MsgType("P")); 
    set(aAllocID); 
    set(aTradeDate); 
    set(aAllocStatus);  
  } 

  public void set(org.quickfix.field.ClientID value) 
  { setField(value); } 
  public org.quickfix.field.ClientID get(org.quickfix.field.ClientID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClientID getClientID() throws FieldNotFound 
  { org.quickfix.field.ClientID value = new org.quickfix.field.ClientID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ClientID field) 
  { return isSetField(field); } 
  public boolean isSetClientID() 
  { return isSetField(109); } 

  public void set(org.quickfix.field.ExecBroker value) 
  { setField(value); } 
  public org.quickfix.field.ExecBroker get(org.quickfix.field.ExecBroker value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecBroker getExecBroker() throws FieldNotFound 
  { org.quickfix.field.ExecBroker value = new org.quickfix.field.ExecBroker(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExecBroker field) 
  { return isSetField(field); } 
  public boolean isSetExecBroker() 
  { return isSetField(76); } 

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

  public void set(org.quickfix.field.TradeDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeDate get(org.quickfix.field.TradeDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeDate getTradeDate() throws FieldNotFound 
  { org.quickfix.field.TradeDate value = new org.quickfix.field.TradeDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradeDate field) 
  { return isSetField(field); } 
  public boolean isSetTradeDate() 
  { return isSetField(75); } 

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

  public void set(org.quickfix.field.AllocStatus value) 
  { setField(value); } 
  public org.quickfix.field.AllocStatus get(org.quickfix.field.AllocStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocStatus getAllocStatus() throws FieldNotFound 
  { org.quickfix.field.AllocStatus value = new org.quickfix.field.AllocStatus(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocStatus field) 
  { return isSetField(field); } 
  public boolean isSetAllocStatus() 
  { return isSetField(87); } 

  public void set(org.quickfix.field.AllocRejCode value) 
  { setField(value); } 
  public org.quickfix.field.AllocRejCode get(org.quickfix.field.AllocRejCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocRejCode getAllocRejCode() throws FieldNotFound 
  { org.quickfix.field.AllocRejCode value = new org.quickfix.field.AllocRejCode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocRejCode field) 
  { return isSetField(field); } 
  public boolean isSetAllocRejCode() 
  { return isSetField(88); } 

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
} 
