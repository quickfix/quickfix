package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MinOfferSize extends DoubleField 
{ 
  public static final int FIELD = 648; 

  public MinOfferSize() 
  { 
    super(648);
  } 
  public MinOfferSize(double data) 
  { 
    super(648, data);
  } 
} 
