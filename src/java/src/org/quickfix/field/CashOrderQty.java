package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class CashOrderQty extends DoubleField 
{ 
  public static final int FIELD = 152; 

  public CashOrderQty() 
  { 
    super(152);
  } 
  public CashOrderQty(double data) 
  { 
    super(152, data);
  } 
} 
