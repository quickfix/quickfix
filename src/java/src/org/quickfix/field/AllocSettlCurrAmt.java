package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class AllocSettlCurrAmt extends DoubleField 
{ 
  public static final int FIELD = 737; 

  public AllocSettlCurrAmt() 
  { 
    super(737);
  } 
  public AllocSettlCurrAmt(double data) 
  { 
    super(737, data);
  } 
} 
