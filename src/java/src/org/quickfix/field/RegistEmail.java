package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class RegistEmail extends StringField 
{ 

  public RegistEmail() 
  { 
    super(511);
  } 
  public RegistEmail(String data) 
  { 
    super(511, data);
  } 
} 
