package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class RegistRefID extends StringField 
{ 

  public RegistRefID() 
  { 
    super(508);
  } 
  public RegistRefID(String data) 
  { 
    super(508, data);
  } 
} 
