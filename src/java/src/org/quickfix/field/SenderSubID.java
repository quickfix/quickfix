package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SenderSubID extends StringField 
{ 

  public SenderSubID() 
  { 
    super(50);
  } 
  public SenderSubID(String data) 
  { 
    super(50, data);
  } 
} 
