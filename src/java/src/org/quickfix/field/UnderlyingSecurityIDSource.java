package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSecurityIDSource extends StringField 
{ 

  public UnderlyingSecurityIDSource() 
  { 
    super(305);
  } 
  public UnderlyingSecurityIDSource(String data) 
  { 
    super(305, data);
  } 
} 
