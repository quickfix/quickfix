package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class TargetStrategyPerformance extends DoubleField 
{ 
  public static final int FIELD = 850; 

  public TargetStrategyPerformance() 
  { 
    super(850);
  } 
  public TargetStrategyPerformance(double data) 
  { 
    super(850, data);
  } 
} 
