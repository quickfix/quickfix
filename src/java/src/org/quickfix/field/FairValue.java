package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class FairValue extends DoubleField 
{ 

  public FairValue() 
  { 
    super(406);
  } 
  public FairValue(double data) 
  { 
    super(406, data);
  } 
} 
