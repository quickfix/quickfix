package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class PriceImprovement extends DoubleField 
{ 
  public static final int FIELD = 639; 

  public PriceImprovement() 
  { 
    super(639);
  } 
  public PriceImprovement(double data) 
  { 
    super(639, data);
  } 
} 
