package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class BidYield extends DoubleField 
{ 

  public BidYield() 
  { 
    super(632);
  } 
  public BidYield(double data) 
  { 
    super(632, data);
  } 
} 
