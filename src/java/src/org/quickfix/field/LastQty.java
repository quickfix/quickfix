package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LastQty extends DoubleField 
{ 

  public LastQty() 
  { 
    super(32);
  } 
  public LastQty(double data) 
  { 
    super(32, data);
  } 
} 
