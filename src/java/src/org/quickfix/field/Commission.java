package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class Commission extends DoubleField 
{ 

  public Commission() 
  { 
    super(12);
  } 
  public Commission(double data) 
  { 
    super(12, data);
  } 
} 
