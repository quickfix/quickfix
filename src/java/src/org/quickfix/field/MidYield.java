package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MidYield extends DoubleField 
{ 

  public MidYield() 
  { 
    super(633);
  } 
  public MidYield(double data) 
  { 
    super(633, data);
  } 
} 
