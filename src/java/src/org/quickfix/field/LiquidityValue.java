package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LiquidityValue extends DoubleField 
{ 

  public LiquidityValue() 
  { 
    super(404);
  } 
  public LiquidityValue(double data) 
  { 
    super(404, data);
  } 
} 
