package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class SettlCurrFxRate extends DoubleField 
{ 

  public SettlCurrFxRate() 
  { 
    super(155);
  } 
  public SettlCurrFxRate(double data) 
  { 
    super(155, data);
  } 
} 
