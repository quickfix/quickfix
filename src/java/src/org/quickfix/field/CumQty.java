package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class CumQty extends DoubleField 
{ 

  public CumQty() 
  { 
    super(14);
  } 
  public CumQty(double data) 
  { 
    super(14, data);
  } 
} 
