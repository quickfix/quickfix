package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class OfferForwardPoints2 extends DoubleField 
{ 
  public static final int FIELD = 643; 

  public OfferForwardPoints2() 
  { 
    super(643);
  } 
  public OfferForwardPoints2(double data) 
  { 
    super(643, data);
  } 
} 
