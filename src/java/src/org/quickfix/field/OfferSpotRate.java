package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class OfferSpotRate extends DoubleField 
{ 

  public OfferSpotRate() 
  { 
    super(190);
  } 
  public OfferSpotRate(double data) 
  { 
    super(190, data);
  } 
} 
