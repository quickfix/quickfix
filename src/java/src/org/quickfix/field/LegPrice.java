package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LegPrice extends DoubleField 
{ 

  public LegPrice() 
  { 
    super(566);
  } 
  public LegPrice(double data) 
  { 
    super(566, data);
  } 
} 
