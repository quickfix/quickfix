package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class OrderCapacityQty extends DoubleField 
{ 
  public static final int FIELD = 863; 

  public OrderCapacityQty() 
  { 
    super(863);
  } 
  public OrderCapacityQty(double data) 
  { 
    super(863, data);
  } 
} 
