package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingIDSource extends StringField 
{ 
  public static final int FIELD = 305; 

  public UnderlyingIDSource() 
  { 
    super(305);
  } 
  public UnderlyingIDSource(String data) 
  { 
    super(305, data);
  } 
} 
