package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NumberOfOrders extends IntField 
{ 

  public NumberOfOrders() 
  { 
    super(346);
  } 
  public NumberOfOrders(int data) 
  { 
    super(346, data);
  } 
} 
