package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class DayAvgPx extends DoubleField 
{ 
  public static final int FIELD = 426; 

  public DayAvgPx() 
  { 
    super(426);
  } 
  public DayAvgPx(double data) 
  { 
    super(426, data);
  } 
} 
