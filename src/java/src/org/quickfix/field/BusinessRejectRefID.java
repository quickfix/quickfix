package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BusinessRejectRefID extends StringField 
{ 
  public static final int FIELD = 379; 

  public BusinessRejectRefID() 
  { 
    super(379);
  } 
  public BusinessRejectRefID(String data) 
  { 
    super(379, data);
  } 
} 
