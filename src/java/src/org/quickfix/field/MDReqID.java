package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MDReqID extends StringField 
{ 

  public MDReqID() 
  { 
    super(262);
  } 
  public MDReqID(String data) 
  { 
    super(262, data);
  } 
} 
