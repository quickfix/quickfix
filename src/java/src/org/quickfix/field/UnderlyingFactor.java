package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingFactor extends DoubleField 
{ 

  public UnderlyingFactor() 
  { 
    super(246);
  } 
  public UnderlyingFactor(double data) 
  { 
    super(246, data);
  } 
} 
