package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LegOfferPx extends DoubleField 
{ 
  public static final int FIELD = 684; 

  public LegOfferPx() 
  { 
    super(684);
  } 
  public LegOfferPx(double data) 
  { 
    super(684, data);
  } 
} 
