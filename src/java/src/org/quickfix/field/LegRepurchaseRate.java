package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LegRepurchaseRate extends DoubleField 
{ 
  public static final int FIELD = 252; 

  public LegRepurchaseRate() 
  { 
    super(252);
  } 
  public LegRepurchaseRate(double data) 
  { 
    super(252, data);
  } 
} 
