package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BenchmarkCurveName extends StringField 
{ 

  public BenchmarkCurveName() 
  { 
    super(221);
  } 
  public BenchmarkCurveName(String data) 
  { 
    super(221, data);
  } 
} 
