package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecondaryExecID extends StringField 
{ 

  public SecondaryExecID() 
  { 
    super(527);
  } 
  public SecondaryExecID(String data) 
  { 
    super(527, data);
  } 
} 
