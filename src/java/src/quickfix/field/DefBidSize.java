package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class DefBidSize extends DoubleField 
{ 
  public static final int FIELD = 293; 

  public DefBidSize() 
  { 
    super(293);
  } 
  public DefBidSize(double data) 
  { 
    super(293, data);
  } 
} 
