package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class OnBehalfOfLocationID extends StringField 
{ 

  public OnBehalfOfLocationID() 
  { 
    super(144);
  } 
  public OnBehalfOfLocationID(String data) 
  { 
    super(144, data);
  } 
} 
