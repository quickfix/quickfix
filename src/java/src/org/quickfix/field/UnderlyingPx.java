package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingPx extends DoubleField 
{ 
  public static final int FIELD = 810; 

  public UnderlyingPx() 
  { 
    super(810);
  } 
  public UnderlyingPx(double data) 
  { 
    super(810, data);
  } 
} 
