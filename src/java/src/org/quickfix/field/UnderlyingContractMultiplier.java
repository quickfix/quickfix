package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingContractMultiplier extends DoubleField 
{ 
  public static final int FIELD = 436; 

  public UnderlyingContractMultiplier() 
  { 
    super(436);
  } 
  public UnderlyingContractMultiplier(double data) 
  { 
    super(436, data);
  } 
} 
