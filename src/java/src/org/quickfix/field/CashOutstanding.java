package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class CashOutstanding extends DoubleField 
{ 
  public static final int FIELD = 901; 

  public CashOutstanding() 
  { 
    super(901);
  } 
  public CashOutstanding(double data) 
  { 
    super(901, data);
  } 
} 
