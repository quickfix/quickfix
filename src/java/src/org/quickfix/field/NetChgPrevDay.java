package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class NetChgPrevDay extends DoubleField 
{ 

  public NetChgPrevDay() 
  { 
    super(451);
  } 
  public NetChgPrevDay(double data) 
  { 
    super(451, data);
  } 
} 
