package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class OrderBookingQty extends DoubleField 
{ 
  public static final int FIELD = 800; 

  public OrderBookingQty() 
  { 
    super(800);
  } 
  public OrderBookingQty(double data) 
  { 
    super(800, data);
  } 
} 
