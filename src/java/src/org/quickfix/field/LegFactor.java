package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LegFactor extends DoubleField 
{ 

  public LegFactor() 
  { 
    super(253);
  } 
  public LegFactor(double data) 
  { 
    super(253, data);
  } 
} 
