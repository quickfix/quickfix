package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingSettlPrice extends DoubleField 
{ 
  public static final int FIELD = 732; 

  public UnderlyingSettlPrice() 
  { 
    super(732);
  } 
  public UnderlyingSettlPrice(double data) 
  { 
    super(732, data);
  } 
} 
