package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class OfferForwardPoints extends DoubleField 
{ 
  public static final int FIELD = 191; 

  public OfferForwardPoints() 
  { 
    super(191);
  } 
  public OfferForwardPoints(double data) 
  { 
    super(191, data);
  } 
} 
