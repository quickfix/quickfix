package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingCPRegType extends StringField 
{ 
  public static final int FIELD = 878; 

  public UnderlyingCPRegType() 
  { 
    super(878);
  } 
  public UnderlyingCPRegType(String data) 
  { 
    super(878, data);
  } 
} 
