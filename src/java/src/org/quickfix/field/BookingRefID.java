package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BookingRefID extends StringField 
{ 

  public BookingRefID() 
  { 
    super(466);
  } 
  public BookingRefID(String data) 
  { 
    super(466, data);
  } 
} 
