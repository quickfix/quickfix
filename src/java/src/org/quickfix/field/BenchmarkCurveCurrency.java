package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BenchmarkCurveCurrency extends StringField 
{ 

  public BenchmarkCurveCurrency() 
  { 
    super(220);
  } 
  public BenchmarkCurveCurrency(String data) 
  { 
    super(220, data);
  } 
} 
