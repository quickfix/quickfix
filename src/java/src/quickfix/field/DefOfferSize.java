package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class DefOfferSize extends DoubleField 
{ 
  public static final int FIELD = 294; 

  public DefOfferSize() 
  { 
    super(294);
  } 
  public DefOfferSize(double data) 
  { 
    super(294, data);
  } 
} 
