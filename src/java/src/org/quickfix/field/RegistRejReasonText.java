package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class RegistRejReasonText extends StringField 
{ 
  public static final int FIELD = 496; 

  public RegistRejReasonText() 
  { 
    super(496);
  } 
  public RegistRejReasonText(String data) 
  { 
    super(496, data);
  } 
} 
