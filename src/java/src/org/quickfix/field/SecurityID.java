package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecurityID extends StringField 
{ 

  public SecurityID() 
  { 
    super(48);
  } 
  public SecurityID(String data) 
  { 
    super(48, data);
  } 
} 
