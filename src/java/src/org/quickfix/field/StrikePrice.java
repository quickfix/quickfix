package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class StrikePrice extends DoubleField 
{ 

  public StrikePrice() 
  { 
    super(202);
  } 
  public StrikePrice(double data) 
  { 
    super(202, data);
  } 
} 
