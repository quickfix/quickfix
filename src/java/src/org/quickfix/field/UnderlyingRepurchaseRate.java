package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingRepurchaseRate extends DoubleField 
{ 

  public UnderlyingRepurchaseRate() 
  { 
    super(245);
  } 
  public UnderlyingRepurchaseRate(double data) 
  { 
    super(245, data);
  } 
} 
