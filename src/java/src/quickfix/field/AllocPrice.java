package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class AllocPrice extends DoubleField 
{ 
  public static final int FIELD = 366; 

  public AllocPrice() 
  { 
    super(366);
  } 
  public AllocPrice(double data) 
  { 
    super(366, data);
  } 
} 
