package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MktBidPx extends DoubleField 
{ 

  public MktBidPx() 
  { 
    super(645);
  } 
  public MktBidPx(double data) 
  { 
    super(645, data);
  } 
} 
