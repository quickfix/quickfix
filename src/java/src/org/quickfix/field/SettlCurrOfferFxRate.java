package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class SettlCurrOfferFxRate extends DoubleField 
{ 
  public static final int FIELD = 657; 

  public SettlCurrOfferFxRate() 
  { 
    super(657);
  } 
  public SettlCurrOfferFxRate(double data) 
  { 
    super(657, data);
  } 
} 
