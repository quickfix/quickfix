package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecurityExchange extends StringField 
{ 
  public static final int FIELD = 207; 

  public SecurityExchange() 
  { 
    super(207);
  } 
  public SecurityExchange(String data) 
  { 
    super(207, data);
  } 
} 
