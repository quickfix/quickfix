package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class OrderAvgPx extends DoubleField 
{ 
  public static final int FIELD = 799; 

  public OrderAvgPx() 
  { 
    super(799);
  } 
  public OrderAvgPx(double data) 
  { 
    super(799, data);
  } 
} 
