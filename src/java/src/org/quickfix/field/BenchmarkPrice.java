package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class BenchmarkPrice extends DoubleField 
{ 
  public static final int FIELD = 662; 

  public BenchmarkPrice() 
  { 
    super(662);
  } 
  public BenchmarkPrice(double data) 
  { 
    super(662, data);
  } 
} 
