package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MinOfferSize extends DoubleField 
{ 

  public MinOfferSize() 
  { 
    super(648);
  } 
  public MinOfferSize(double data) 
  { 
    super(648, data);
  } 
} 
