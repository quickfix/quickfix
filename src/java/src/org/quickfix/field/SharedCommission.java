package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class SharedCommission extends DoubleField 
{ 
  public static final int FIELD = 858; 

  public SharedCommission() 
  { 
    super(858);
  } 
  public SharedCommission(double data) 
  { 
    super(858, data);
  } 
} 
