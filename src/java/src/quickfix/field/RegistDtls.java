package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class RegistDtls extends StringField 
{ 
  public static final int FIELD = 509; 

  public RegistDtls() 
  { 
    super(509);
  } 
  public RegistDtls(String data) 
  { 
    super(509, data);
  } 
} 
