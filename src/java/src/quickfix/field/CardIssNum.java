package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CardIssNum extends StringField 
{ 
  public static final int FIELD = 491; 

  public CardIssNum() 
  { 
    super(491);
  } 
  public CardIssNum(String data) 
  { 
    super(491, data);
  } 
} 
