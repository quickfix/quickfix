package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MaturityDay extends StringField 
{ 

  public MaturityDay() 
  { 
    super(205);
  } 
  public MaturityDay(String data) 
  { 
    super(205, data);
  } 
} 
