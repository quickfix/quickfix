package org.quickfix.fix42; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class SequenceReset extends Message 
{ 

  public SequenceReset() 
  { 
    getHeader().setField(new MsgType("4")); 
  } 
  public SequenceReset(    
    org.quickfix.field.NewSeqNo aNewSeqNo ) 
  {  
    getHeader().setField(new MsgType("4")); 
    set(aNewSeqNo);  
  } 

  public void set(org.quickfix.field.GapFillFlag value) 
  { setField(value); } 
  public org.quickfix.field.GapFillFlag get(org.quickfix.field.GapFillFlag value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.GapFillFlag getGapFillFlag() throws FieldNotFound 
  { org.quickfix.field.GapFillFlag value = new org.quickfix.field.GapFillFlag(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NewSeqNo value) 
  { setField(value); } 
  public org.quickfix.field.NewSeqNo get(org.quickfix.field.NewSeqNo value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NewSeqNo getNewSeqNo() throws FieldNotFound 
  { org.quickfix.field.NewSeqNo value = new org.quickfix.field.NewSeqNo(); 
    getField(value); return value; } 
} 
