package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class PeggedPrice extends DoubleField 
{ 
  public static final int FIELD = 839; 

  public PeggedPrice() 
  { 
    super(839);
  } 
  public PeggedPrice(double data) 
  { 
    super(839, data);
  } 
} 
