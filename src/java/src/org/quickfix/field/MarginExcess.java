package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MarginExcess extends DoubleField 
{ 
  public static final int FIELD = 899; 

  public MarginExcess() 
  { 
    super(899);
  } 
  public MarginExcess(double data) 
  { 
    super(899, data);
  } 
} 
