package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class EndAccruedInterestAmt extends DoubleField 
{ 
  public static final int FIELD = 920; 

  public EndAccruedInterestAmt() 
  { 
    super(920);
  } 
  public EndAccruedInterestAmt(double data) 
  { 
    super(920, data);
  } 
} 
