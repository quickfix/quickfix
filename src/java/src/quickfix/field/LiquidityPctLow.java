package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LiquidityPctLow extends DoubleField 
{ 
  public static final int FIELD = 402; 

  public LiquidityPctLow() 
  { 
    super(402);
  } 
  public LiquidityPctLow(double data) 
  { 
    super(402, data);
  } 
} 
