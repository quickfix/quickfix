package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class AllocAccruedInterestAmt extends DoubleField 
{ 
  public static final int FIELD = 742; 

  public AllocAccruedInterestAmt() 
  { 
    super(742);
  } 
  public AllocAccruedInterestAmt(double data) 
  { 
    super(742, data);
  } 
} 
