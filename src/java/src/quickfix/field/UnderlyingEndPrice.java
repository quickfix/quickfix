package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingEndPrice extends DoubleField 
{ 
  public static final int FIELD = 883; 

  public UnderlyingEndPrice() 
  { 
    super(883);
  } 
  public UnderlyingEndPrice(double data) 
  { 
    super(883, data);
  } 
} 
