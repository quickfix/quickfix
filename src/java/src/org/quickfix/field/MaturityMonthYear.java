package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MaturityMonthYear extends StringField 
{ 

  public MaturityMonthYear() 
  { 
    super(200);
  } 
  public MaturityMonthYear(String data) 
  { 
    super(200, data);
  } 
} 
