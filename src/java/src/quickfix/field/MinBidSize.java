package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MinBidSize extends DoubleField 
{ 
  public static final int FIELD = 647; 

  public MinBidSize() 
  { 
    super(647);
  } 
  public MinBidSize(double data) 
  { 
    super(647, data);
  } 
} 
