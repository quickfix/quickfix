package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class CumQty extends DoubleField 
{ 
  public static final int FIELD = 14; 

  public CumQty() 
  { 
    super(14);
  } 
  public CumQty(double data) 
  { 
    super(14, data);
  } 
} 
