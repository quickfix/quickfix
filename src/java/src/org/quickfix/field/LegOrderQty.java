package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LegOrderQty extends DoubleField 
{ 
  public static final int FIELD = 685; 

  public LegOrderQty() 
  { 
    super(685);
  } 
  public LegOrderQty(double data) 
  { 
    super(685, data);
  } 
} 
