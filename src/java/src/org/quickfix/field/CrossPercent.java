package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class CrossPercent extends DoubleField 
{ 

  public CrossPercent() 
  { 
    super(413);
  } 
  public CrossPercent(double data) 
  { 
    super(413, data);
  } 
} 
