package org.quickfix.fix40; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class Heartbeat extends Message 
{ 

  public Heartbeat() 
  { 
    getHeader().setField(new MsgType("0")); 
  } 

  public void set(org.quickfix.field.TestReqID value) 
  { setField(value); } 
  public org.quickfix.field.TestReqID get(org.quickfix.field.TestReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TestReqID getTestReqID() throws FieldNotFound 
  { org.quickfix.field.TestReqID value = new org.quickfix.field.TestReqID(); 
    getField(value); return value; } 
} 
