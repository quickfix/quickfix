package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class Username extends StringField 
{ 

  public Username() 
  { 
    super(553);
  } 
  public Username(String data) 
  { 
    super(553, data);
  } 
} 
