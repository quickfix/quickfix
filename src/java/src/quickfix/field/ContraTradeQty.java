package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class ContraTradeQty extends DoubleField 
{ 
  public static final int FIELD = 437; 

  public ContraTradeQty() 
  { 
    super(437);
  } 
  public ContraTradeQty(double data) 
  { 
    super(437, data);
  } 
} 
