package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CFICode extends StringField 
{ 
  public static final int FIELD = 461; 

  public CFICode() 
  { 
    super(461);
  } 
  public CFICode(String data) 
  { 
    super(461, data);
  } 
} 
