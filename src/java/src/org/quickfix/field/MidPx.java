package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MidPx extends DoubleField 
{ 

  public MidPx() 
  { 
    super(631);
  } 
  public MidPx(double data) 
  { 
    super(631, data);
  } 
} 
