package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegBenchmarkCurvePoint extends StringField 
{ 
  public static final int FIELD = 678; 

  public LegBenchmarkCurvePoint() 
  { 
    super(678);
  } 
  public LegBenchmarkCurvePoint(String data) 
  { 
    super(678, data);
  } 
} 
