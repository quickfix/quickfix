package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingStrikeCurrency extends StringField 
{ 
  public static final int FIELD = 941; 

  public UnderlyingStrikeCurrency() 
  { 
    super(941);
  } 
  public UnderlyingStrikeCurrency(String data) 
  { 
    super(941, data);
  } 
} 
