package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LegLastPx extends DoubleField 
{ 

  public LegLastPx() 
  { 
    super(637);
  } 
  public LegLastPx(double data) 
  { 
    super(637, data);
  } 
} 
