package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class HopCompID extends StringField 
{ 

  public HopCompID() 
  { 
    super(628);
  } 
  public HopCompID(String data) 
  { 
    super(628, data);
  } 
} 
