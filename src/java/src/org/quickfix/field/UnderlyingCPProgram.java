package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingCPProgram extends StringField 
{ 
  public static final int FIELD = 877; 

  public UnderlyingCPProgram() 
  { 
    super(877);
  } 
  public UnderlyingCPProgram(String data) 
  { 
    super(877, data);
  } 
} 
