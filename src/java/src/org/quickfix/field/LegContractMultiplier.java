package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LegContractMultiplier extends DoubleField 
{ 

  public LegContractMultiplier() 
  { 
    super(614);
  } 
  public LegContractMultiplier(double data) 
  { 
    super(614, data);
  } 
} 
