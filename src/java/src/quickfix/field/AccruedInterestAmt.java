package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class AccruedInterestAmt extends DoubleField 
{ 
  public static final int FIELD = 159; 

  public AccruedInterestAmt() 
  { 
    super(159);
  } 
  public AccruedInterestAmt(double data) 
  { 
    super(159, data);
  } 
} 
