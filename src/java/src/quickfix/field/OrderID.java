package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class OrderID extends StringField 
{ 
  public static final int FIELD = 37; 

  public OrderID() 
  { 
    super(37);
  } 
  public OrderID(String data) 
  { 
    super(37, data);
  } 
} 
