package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class PegDifference extends DoubleField 
{ 
  public static final int FIELD = 211; 

  public PegDifference() 
  { 
    super(211);
  } 
  public PegDifference(double data) 
  { 
    super(211, data);
  } 
} 
