package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LocationID extends StringField 
{ 
  public static final int FIELD = 283; 

  public LocationID() 
  { 
    super(283);
  } 
  public LocationID(String data) 
  { 
    super(283, data);
  } 
} 
