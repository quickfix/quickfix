package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LeavesQty extends DoubleField 
{ 
  public static final int FIELD = 151; 

  public LeavesQty() 
  { 
    super(151);
  } 
  public LeavesQty(double data) 
  { 
    super(151, data);
  } 
} 
