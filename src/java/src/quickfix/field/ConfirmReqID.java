package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ConfirmReqID extends StringField 
{ 
  public static final int FIELD = 859; 

  public ConfirmReqID() 
  { 
    super(859);
  } 
  public ConfirmReqID(String data) 
  { 
    super(859, data);
  } 
} 
