package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class DateOfBirth extends StringField 
{ 

  public DateOfBirth() 
  { 
    super(486);
  } 
  public DateOfBirth(String data) 
  { 
    super(486, data);
  } 
} 
