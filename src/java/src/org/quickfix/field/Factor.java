package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class Factor extends DoubleField 
{ 

  public Factor() 
  { 
    super(228);
  } 
  public Factor(double data) 
  { 
    super(228, data);
  } 
} 
