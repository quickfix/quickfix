package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LegAllocQty extends DoubleField 
{ 
  public static final int FIELD = 673; 

  public LegAllocQty() 
  { 
    super(673);
  } 
  public LegAllocQty(double data) 
  { 
    super(673, data);
  } 
} 
