package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSecurityIDSource extends StringField 
{ 
  public static final int FIELD = 305; 

  public UnderlyingSecurityIDSource() 
  { 
    super(305);
  } 
  public UnderlyingSecurityIDSource(String data) 
  { 
    super(305, data);
  } 
} 
