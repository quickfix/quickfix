package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class SettlCurrBidFxRate extends DoubleField 
{ 

  public SettlCurrBidFxRate() 
  { 
    super(656);
  } 
  public SettlCurrBidFxRate(double data) 
  { 
    super(656, data);
  } 
} 
