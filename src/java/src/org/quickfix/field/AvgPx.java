package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class AvgPx extends DoubleField 
{ 
  public static final int FIELD = 6; 

  public AvgPx() 
  { 
    super(6);
  } 
  public AvgPx(double data) 
  { 
    super(6, data);
  } 
} 
