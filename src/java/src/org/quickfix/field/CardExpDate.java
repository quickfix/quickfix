package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CardExpDate extends StringField 
{ 

  public CardExpDate() 
  { 
    super(490);
  } 
  public CardExpDate(String data) 
  { 
    super(490, data);
  } 
} 
