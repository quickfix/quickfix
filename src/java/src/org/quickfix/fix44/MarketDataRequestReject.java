package org.quickfix.fix44; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class MarketDataRequestReject extends Message 
{ 

  public MarketDataRequestReject() 
  { 
    getHeader().setField(new MsgType("Y")); 
  } 
  public MarketDataRequestReject(    
    org.quickfix.field.MDReqID aMDReqID ) 
  {  
    getHeader().setField(new MsgType("Y")); 
    set(aMDReqID);  
  } 

  public void set(org.quickfix.field.MDReqID value) 
  { setField(value); } 
  public org.quickfix.field.MDReqID get(org.quickfix.field.MDReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDReqID getMDReqID() throws FieldNotFound 
  { org.quickfix.field.MDReqID value = new org.quickfix.field.MDReqID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MDReqID field) 
  { return isSetField(field); } 
  public boolean isSetMDReqID() 
  { return isSetField(262); } 

  public void set(org.quickfix.field.MDReqRejReason value) 
  { setField(value); } 
  public org.quickfix.field.MDReqRejReason get(org.quickfix.field.MDReqRejReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDReqRejReason getMDReqRejReason() throws FieldNotFound 
  { org.quickfix.field.MDReqRejReason value = new org.quickfix.field.MDReqRejReason(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MDReqRejReason field) 
  { return isSetField(field); } 
  public boolean isSetMDReqRejReason() 
  { return isSetField(281); } 
  public void set(org.quickfix.field.NoAltMDSource value) 
  { setField(value); } 
  public org.quickfix.field.NoAltMDSource get(org.quickfix.field.NoAltMDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoAltMDSource getNoAltMDSource() throws FieldNotFound 
  { org.quickfix.field.NoAltMDSource value = new org.quickfix.field.NoAltMDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoAltMDSource field) 
  { return isSetField(field); } 
  public boolean isSetNoAltMDSource() 
  { return isSetField(816); } 

public static class NoAltMDSource extends Group { 
  public NoAltMDSource() { 
    super(816, 817, 
    new int[] { 
               817, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.AltMDSourceID value) 
  { setField(value); } 
  public org.quickfix.field.AltMDSourceID get(org.quickfix.field.AltMDSourceID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AltMDSourceID getAltMDSourceID() throws FieldNotFound 
  { org.quickfix.field.AltMDSourceID value = new org.quickfix.field.AltMDSourceID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AltMDSourceID field) 
  { return isSetField(field); } 
  public boolean isSetAltMDSourceID() 
  { return isSetField(817); } 

} 

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
