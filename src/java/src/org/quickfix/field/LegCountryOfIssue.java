package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegCountryOfIssue extends StringField 
{ 

  public LegCountryOfIssue() 
  { 
    super(596);
  } 
  public LegCountryOfIssue(String data) 
  { 
    super(596, data);
  } 
} 
