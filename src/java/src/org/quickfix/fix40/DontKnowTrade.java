package org.quickfix.fix40; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class DontKnowTrade extends Message 
{ 

  public DontKnowTrade() 
  { 
    getHeader().setField(new MsgType("Q")); 
  } 
  public DontKnowTrade(    
    org.quickfix.field.DKReason aDKReason,    
    org.quickfix.field.Symbol aSymbol,    
    org.quickfix.field.Side aSide,    
    org.quickfix.field.OrderQty aOrderQty,    
    org.quickfix.field.LastShares aLastShares,    
    org.quickfix.field.LastPx aLastPx ) 
  {  
    getHeader().setField(new MsgType("Q")); 
    set(aDKReason); 
    set(aSymbol); 
    set(aSide); 
    set(aOrderQty); 
    set(aLastShares); 
    set(aLastPx);  
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

  public void set(org.quickfix.field.ExecID value) 
  { setField(value); } 
  public org.quickfix.field.ExecID get(org.quickfix.field.ExecID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecID getExecID() throws FieldNotFound 
  { org.quickfix.field.ExecID value = new org.quickfix.field.ExecID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExecID field) 
  { return isSetField(field); } 
  public boolean isSetExecID() 
  { return isSetField(17); } 

  public void set(org.quickfix.field.DKReason value) 
  { setField(value); } 
  public org.quickfix.field.DKReason get(org.quickfix.field.DKReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DKReason getDKReason() throws FieldNotFound 
  { org.quickfix.field.DKReason value = new org.quickfix.field.DKReason(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DKReason field) 
  { return isSetField(field); } 
  public boolean isSetDKReason() 
  { return isSetField(127); } 

  public void set(org.quickfix.field.Symbol value) 
  { setField(value); } 
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Symbol getSymbol() throws FieldNotFound 
  { org.quickfix.field.Symbol value = new org.quickfix.field.Symbol(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Symbol field) 
  { return isSetField(field); } 
  public boolean isSetSymbol() 
  { return isSetField(55); } 

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Side field) 
  { return isSetField(field); } 
  public boolean isSetSide() 
  { return isSetField(54); } 

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

  public void set(org.quickfix.field.LastShares value) 
  { setField(value); } 
  public org.quickfix.field.LastShares get(org.quickfix.field.LastShares value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastShares getLastShares() throws FieldNotFound 
  { org.quickfix.field.LastShares value = new org.quickfix.field.LastShares(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LastShares field) 
  { return isSetField(field); } 
  public boolean isSetLastShares() 
  { return isSetField(32); } 

  public void set(org.quickfix.field.LastPx value) 
  { setField(value); } 
  public org.quickfix.field.LastPx get(org.quickfix.field.LastPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastPx getLastPx() throws FieldNotFound 
  { org.quickfix.field.LastPx value = new org.quickfix.field.LastPx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LastPx field) 
  { return isSetField(field); } 
  public boolean isSetLastPx() 
  { return isSetField(31); } 

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
