package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class RegistDetls extends StringField 
{ 

  public RegistDetls() 
  { 
    super(509);
  } 
  public RegistDetls(String data) 
  { 
    super(509, data);
  } 
} 
