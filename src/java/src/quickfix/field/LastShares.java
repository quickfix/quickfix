package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LastShares extends DoubleField 
{ 
  public static final int FIELD = 32; 

  public LastShares() 
  { 
    super(32);
  } 
  public LastShares(double data) 
  { 
    super(32, data);
  } 
} 
