package org.quickfix.fix40; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class Email extends Message 
{ 

  public Email() 
  { 
    getHeader().setField(new MsgType("C")); 
  } 
  public Email(    
    org.quickfix.field.EmailType aEmailType,    
    org.quickfix.field.LinesOfText aLinesOfText ) 
  {  
    getHeader().setField(new MsgType("C")); 
    set(aEmailType); 
    set(aLinesOfText);  
  } 

  public void set(org.quickfix.field.EmailType value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EmailType get(org.quickfix.field.EmailType value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EmailType getEmailType() throws FieldNotFound
  { 
    org.quickfix.field.EmailType value = new org.quickfix.field.EmailType();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.OrigTime value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OrigTime get(org.quickfix.field.OrigTime value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OrigTime getOrigTime() throws FieldNotFound
  { 
    org.quickfix.field.OrigTime value = new org.quickfix.field.OrigTime();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.RelatdSym value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.RelatdSym get(org.quickfix.field.RelatdSym value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.RelatdSym getRelatdSym() throws FieldNotFound
  { 
    org.quickfix.field.RelatdSym value = new org.quickfix.field.RelatdSym();  
    getField(value);  
    return value;  
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

  public void set(org.quickfix.field.LinesOfText value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.LinesOfText get(org.quickfix.field.LinesOfText value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.LinesOfText getLinesOfText() throws FieldNotFound
  { 
    org.quickfix.field.LinesOfText value = new org.quickfix.field.LinesOfText();  
    getField(value);  
    return value;  
  } 

public class LinesOfText extends Group { 
  public LinesOfText() { 
    super(33,58, new int[]{58,0}); 
  } 
  void set(org.quickfix.field.Text value) 
  { setField(value); } 
  org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.Text getText() throws FieldNotFound 
  { org.quickfix.field.Text value = new org.quickfix.field.Text(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.RawDataLength value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.RawDataLength get(org.quickfix.field.RawDataLength value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.RawDataLength getRawDataLength() throws FieldNotFound
  { 
    org.quickfix.field.RawDataLength value = new org.quickfix.field.RawDataLength();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.RawData value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.RawData get(org.quickfix.field.RawData value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.RawData getRawData() throws FieldNotFound
  { 
    org.quickfix.field.RawData value = new org.quickfix.field.RawData();  
    getField(value);  
    return value;  
  } 
} 
