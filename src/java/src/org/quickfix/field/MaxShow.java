package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MaxShow extends DoubleField 
{ 

  public MaxShow() 
  { 
    super(210);
  } 
  public MaxShow(double data) 
  { 
    super(210, data);
  } 
} 
