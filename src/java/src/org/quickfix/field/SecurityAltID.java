package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecurityAltID extends StringField 
{ 

  public SecurityAltID() 
  { 
    super(455);
  } 
  public SecurityAltID(String data) 
  { 
    super(455, data);
  } 
} 
