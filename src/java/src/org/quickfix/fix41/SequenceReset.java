package org.quickfix.fix41; 
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
  public boolean isSet(org.quickfix.field.GapFillFlag field) 
  { return isSetField(field); } 
  public boolean isSetGapFillFlag() 
  { return isSetField(123); } 

  public void set(org.quickfix.field.NewSeqNo value) 
  { setField(value); } 
  public org.quickfix.field.NewSeqNo get(org.quickfix.field.NewSeqNo value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NewSeqNo getNewSeqNo() throws FieldNotFound 
  { org.quickfix.field.NewSeqNo value = new org.quickfix.field.NewSeqNo(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NewSeqNo field) 
  { return isSetField(field); } 
  public boolean isSetNewSeqNo() 
  { return isSetField(36); } 
} 
