package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class OrderPercent extends DoubleField 
{ 

  public OrderPercent() 
  { 
    super(516);
  } 
  public OrderPercent(double data) 
  { 
    super(516, data);
  } 
} 
