package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecurityAltIDSource extends StringField 
{ 

  public SecurityAltIDSource() 
  { 
    super(456);
  } 
  public SecurityAltIDSource(String data) 
  { 
    super(456, data);
  } 
} 
