package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class UnderlyingLastPx extends DoubleField 
{ 
  public static final int FIELD = 651; 

  public UnderlyingLastPx() 
  { 
    super(651);
  } 
  public UnderlyingLastPx(double data) 
  { 
    super(651, data);
  } 
} 
