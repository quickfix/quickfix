package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class ValueOfFutures extends DoubleField 
{ 

  public ValueOfFutures() 
  { 
    super(408);
  } 
  public ValueOfFutures(double data) 
  { 
    super(408, data);
  } 
} 
