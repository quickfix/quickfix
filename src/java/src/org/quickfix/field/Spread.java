package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class Spread extends DoubleField 
{ 

  public Spread() 
  { 
    super(218);
  } 
  public Spread(double data) 
  { 
    super(218, data);
  } 
} 
