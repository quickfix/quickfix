package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class RepurchaseRate extends DoubleField 
{ 
  public static final int FIELD = 227; 

  public RepurchaseRate() 
  { 
    super(227);
  } 
  public RepurchaseRate(double data) 
  { 
    super(227, data);
  } 
} 
