package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class StateOrProvinceOfIssue extends StringField 
{ 
  public static final int FIELD = 471; 

  public StateOrProvinceOfIssue() 
  { 
    super(471);
  } 
  public StateOrProvinceOfIssue(String data) 
  { 
    super(471, data);
  } 
} 
