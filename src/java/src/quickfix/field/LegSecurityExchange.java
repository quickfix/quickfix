package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegSecurityExchange extends StringField 
{ 
  public static final int FIELD = 616; 

  public LegSecurityExchange() 
  { 
    super(616);
  } 
  public LegSecurityExchange(String data) 
  { 
    super(616, data);
  } 
} 
