package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegSecurityExchange extends StringField 
{ 

  public LegSecurityExchange() 
  { 
    super(616);
  } 
  public LegSecurityExchange(String data) 
  { 
    super(616, data);
  } 
} 
