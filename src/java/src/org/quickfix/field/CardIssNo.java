package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CardIssNo extends StringField 
{ 

  public CardIssNo() 
  { 
    super(491);
  } 
  public CardIssNo(String data) 
  { 
    super(491, data);
  } 
} 
