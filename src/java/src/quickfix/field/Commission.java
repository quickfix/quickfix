package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class Commission extends DoubleField 
{ 
  public static final int FIELD = 12; 

  public Commission() 
  { 
    super(12);
  } 
  public Commission(double data) 
  { 
    super(12, data);
  } 
} 
