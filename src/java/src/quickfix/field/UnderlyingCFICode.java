package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingCFICode extends StringField 
{ 
  public static final int FIELD = 463; 

  public UnderlyingCFICode() 
  { 
    super(463);
  } 
  public UnderlyingCFICode(String data) 
  { 
    super(463, data);
  } 
} 
