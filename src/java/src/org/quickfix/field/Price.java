package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class Price extends DoubleField 
{ 

  public Price() 
  { 
    super(44);
  } 
  public Price(double data) 
  { 
    super(44, data);
  } 
} 
