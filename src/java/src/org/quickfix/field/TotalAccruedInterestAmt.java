package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class TotalAccruedInterestAmt extends DoubleField 
{ 

  public TotalAccruedInterestAmt() 
  { 
    super(540);
  } 
  public TotalAccruedInterestAmt(double data) 
  { 
    super(540, data);
  } 
} 
