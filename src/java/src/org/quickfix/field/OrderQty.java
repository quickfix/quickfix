package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class OrderQty extends DoubleField 
{ 

  public OrderQty() 
  { 
    super(38);
  } 
  public OrderQty(double data) 
  { 
    super(38, data);
  } 
} 
