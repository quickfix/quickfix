package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CPRegType extends StringField 
{ 
  public static final int FIELD = 876; 

  public CPRegType() 
  { 
    super(876);
  } 
  public CPRegType(String data) 
  { 
    super(876, data);
  } 
} 
