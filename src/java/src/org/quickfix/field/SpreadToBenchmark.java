package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class SpreadToBenchmark extends DoubleField 
{ 

  public SpreadToBenchmark() 
  { 
    super(218);
  } 
  public SpreadToBenchmark(double data) 
  { 
    super(218, data);
  } 
} 
