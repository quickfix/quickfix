package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MiscFeeAmt extends DoubleField 
{ 
  public static final int FIELD = 137; 

  public MiscFeeAmt() 
  { 
    super(137);
  } 
  public MiscFeeAmt(double data) 
  { 
    super(137, data);
  } 
} 
