package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class Yield extends DoubleField 
{ 

  public Yield() 
  { 
    super(236);
  } 
  public Yield(double data) 
  { 
    super(236, data);
  } 
} 
