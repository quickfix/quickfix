package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class PriorSettlPrice extends DoubleField 
{ 
  public static final int FIELD = 734; 

  public PriorSettlPrice() 
  { 
    super(734);
  } 
  public PriorSettlPrice(double data) 
  { 
    super(734, data);
  } 
} 
