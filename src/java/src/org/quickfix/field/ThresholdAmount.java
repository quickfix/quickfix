package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class ThresholdAmount extends DoubleField 
{ 
  public static final int FIELD = 834; 

  public ThresholdAmount() 
  { 
    super(834);
  } 
  public ThresholdAmount(double data) 
  { 
    super(834, data);
  } 
} 
