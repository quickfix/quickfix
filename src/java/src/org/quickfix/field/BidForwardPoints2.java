package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class BidForwardPoints2 extends DoubleField 
{ 
  public static final int FIELD = 642; 

  public BidForwardPoints2() 
  { 
    super(642);
  } 
  public BidForwardPoints2(double data) 
  { 
    super(642, data);
  } 
} 
