package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LastQty extends DoubleField 
{ 
  public static final int FIELD = 3; 

  public LastQty() 
  { 
    super(3);
  } 
  public LastQty(double data) 
  { 
    super(3, data);
  } 
} 
