package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingStipType extends StringField 
{ 
  public static final int FIELD = 888; 

  public UnderlyingStipType() 
  { 
    super(888);
  } 
  public UnderlyingStipType(String data) 
  { 
    super(888, data);
  } 
} 
