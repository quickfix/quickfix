package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LegBidPx extends DoubleField 
{ 
  public static final int FIELD = 681; 

  public LegBidPx() 
  { 
    super(681);
  } 
  public LegBidPx(double data) 
  { 
    super(681, data);
  } 
} 
