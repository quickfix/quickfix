package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AvgPrxPrecision extends IntField 
{ 
  public static final int FIELD = 74; 

  public AvgPrxPrecision() 
  { 
    super(74);
  } 
  public AvgPrxPrecision(int data) 
  { 
    super(74, data);
  } 
} 
