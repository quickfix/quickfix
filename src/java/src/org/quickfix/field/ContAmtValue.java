package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class ContAmtValue extends DoubleField 
{ 

  public ContAmtValue() 
  { 
    super(520);
  } 
  public ContAmtValue(double data) 
  { 
    super(520, data);
  } 
} 
