package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class OnBehalfOfSubID extends StringField 
{ 
  public static final int FIELD = 116; 

  public OnBehalfOfSubID() 
  { 
    super(116);
  } 
  public OnBehalfOfSubID(String data) 
  { 
    super(116, data);
  } 
} 
