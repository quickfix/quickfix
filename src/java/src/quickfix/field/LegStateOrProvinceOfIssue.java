package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegStateOrProvinceOfIssue extends StringField 
{ 
  public static final int FIELD = 597; 

  public LegStateOrProvinceOfIssue() 
  { 
    super(597);
  } 
  public LegStateOrProvinceOfIssue(String data) 
  { 
    super(597, data);
  } 
} 
