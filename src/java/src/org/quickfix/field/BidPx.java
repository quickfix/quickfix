package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class BidPx extends DoubleField 
{ 

  public BidPx() 
  { 
    super(132);
  } 
  public BidPx(double data) 
  { 
    super(132, data);
  } 
} 
