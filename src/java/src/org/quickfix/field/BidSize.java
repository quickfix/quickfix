package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class BidSize extends DoubleField 
{ 

  public BidSize() 
  { 
    super(134);
  } 
  public BidSize(double data) 
  { 
    super(134, data);
  } 
} 
