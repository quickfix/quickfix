package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingCountryOfIssue extends StringField 
{ 
  public static final int FIELD = 592; 

  public UnderlyingCountryOfIssue() 
  { 
    super(592);
  } 
  public UnderlyingCountryOfIssue(String data) 
  { 
    super(592, data);
  } 
} 
