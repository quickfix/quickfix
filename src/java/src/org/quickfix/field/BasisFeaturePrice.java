package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class BasisFeaturePrice extends DoubleField 
{ 

  public BasisFeaturePrice() 
  { 
    super(260);
  } 
  public BasisFeaturePrice(double data) 
  { 
    super(260, data);
  } 
} 
