package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecondaryOrderID extends StringField 
{ 

  public SecondaryOrderID() 
  { 
    super(198);
  } 
  public SecondaryOrderID(String data) 
  { 
    super(198, data);
  } 
} 
