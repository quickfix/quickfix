package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class Password extends StringField 
{ 

  public Password() 
  { 
    super(554);
  } 
  public Password(String data) 
  { 
    super(554, data);
  } 
} 
