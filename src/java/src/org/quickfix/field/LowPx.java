package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LowPx extends DoubleField 
{ 

  public LowPx() 
  { 
    super(333);
  } 
  public LowPx(double data) 
  { 
    super(333, data);
  } 
} 
