package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class Quantity extends DoubleField 
{ 

  public Quantity() 
  { 
    super(53);
  } 
  public Quantity(double data) 
  { 
    super(53, data);
  } 
} 
