package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MaxFloor extends DoubleField 
{ 

  public MaxFloor() 
  { 
    super(111);
  } 
  public MaxFloor(double data) 
  { 
    super(111, data);
  } 
} 
