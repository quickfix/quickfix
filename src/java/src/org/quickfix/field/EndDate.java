package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EndDate extends StringField 
{ 
  public static final int FIELD = 917; 

  public EndDate() 
  { 
    super(917);
  } 
  public EndDate(String data) 
  { 
    super(917, data);
  } 
} 
