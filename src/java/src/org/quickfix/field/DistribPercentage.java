package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class DistribPercentage extends DoubleField 
{ 

  public DistribPercentage() 
  { 
    super(512);
  } 
  public DistribPercentage(double data) 
  { 
    super(512, data);
  } 
} 
