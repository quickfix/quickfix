package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSecurityExchange extends StringField 
{ 

  public UnderlyingSecurityExchange() 
  { 
    super(308);
  } 
  public UnderlyingSecurityExchange(String data) 
  { 
    super(308, data);
  } 
} 
