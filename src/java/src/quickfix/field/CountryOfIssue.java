package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CountryOfIssue extends StringField 
{ 
  public static final int FIELD = 470; 

  public CountryOfIssue() 
  { 
    super(470);
  } 
  public CountryOfIssue(String data) 
  { 
    super(470, data);
  } 
} 
