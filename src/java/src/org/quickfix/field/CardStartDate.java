package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CardStartDate extends StringField 
{ 
  public static final int FIELD = 503; 

  public CardStartDate() 
  { 
    super(503);
  } 
  public CardStartDate(String data) 
  { 
    super(503, data);
  } 
} 
