package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingCreditRating extends StringField 
{ 

  public UnderlyingCreditRating() 
  { 
    super(256);
  } 
  public UnderlyingCreditRating(String data) 
  { 
    super(256, data);
  } 
} 
