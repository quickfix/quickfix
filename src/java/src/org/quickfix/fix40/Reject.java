package org.quickfix.fix40; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class Reject extends Message 
{ 

  public Reject() 
  { 
    getHeader().setField(new MsgType("3")); 
  } 
  public Reject(    
    org.quickfix.field.RefSeqNum aRefSeqNum ) 
  {  
    getHeader().setField(new MsgType("3")); 
    set(aRefSeqNum);  
  } 

  public void set(org.quickfix.field.RefSeqNum value) 
  { setField(value); } 
  public org.quickfix.field.RefSeqNum get(org.quickfix.field.RefSeqNum value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RefSeqNum getRefSeqNum() throws FieldNotFound 
  { org.quickfix.field.RefSeqNum value = new org.quickfix.field.RefSeqNum(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RefSeqNum field) 
  { return isSetField(field); } 
  public boolean isSetRefSeqNum() 
  { return isSetField(45); } 

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
