package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class RegistID extends StringField 
{ 

  public RegistID() 
  { 
    super(513);
  } 
  public RegistID(String data) 
  { 
    super(513, data);
  } 
} 
