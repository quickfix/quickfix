package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BidID extends StringField 
{ 

  public BidID() 
  { 
    super(390);
  } 
  public BidID(String data) 
  { 
    super(390, data);
  } 
} 
