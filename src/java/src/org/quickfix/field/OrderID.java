package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class OrderID extends StringField 
{ 

  public OrderID() 
  { 
    super(37);
  } 
  public OrderID(String data) 
  { 
    super(37, data);
  } 
} 
