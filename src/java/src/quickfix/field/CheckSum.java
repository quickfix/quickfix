package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CheckSum extends StringField 
{ 
  public static final int FIELD = 10; 

  public CheckSum() 
  { 
    super(10);
  } 
  public CheckSum(String data) 
  { 
    super(10, data);
  } 
} 
