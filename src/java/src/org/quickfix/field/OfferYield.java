package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class OfferYield extends DoubleField 
{ 
  public static final int FIELD = 634; 

  public OfferYield() 
  { 
    super(634);
  } 
  public OfferYield(double data) 
  { 
    super(634, data);
  } 
} 
