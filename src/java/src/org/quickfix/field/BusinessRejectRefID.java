package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BusinessRejectRefID extends StringField 
{ 

  public BusinessRejectRefID() 
  { 
    super(379);
  } 
  public BusinessRejectRefID(String data) 
  { 
    super(379, data);
  } 
} 
