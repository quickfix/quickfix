package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class PriceDelta extends DoubleField 
{ 
  public static final int FIELD = 811; 

  public PriceDelta() 
  { 
    super(811);
  } 
  public PriceDelta(double data) 
  { 
    super(811, data);
  } 
} 
