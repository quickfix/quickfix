package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BenchmarkCurvePoint extends StringField 
{ 
  public static final int FIELD = 222; 

  public BenchmarkCurvePoint() 
  { 
    super(222);
  } 
  public BenchmarkCurvePoint(String data) 
  { 
    super(222, data);
  } 
} 
