package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MinBidSize extends DoubleField 
{ 

  public MinBidSize() 
  { 
    super(647);
  } 
  public MinBidSize(double data) 
  { 
    super(647, data);
  } 
} 
