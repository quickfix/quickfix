package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LastParPx extends DoubleField 
{ 
  public static final int FIELD = 669; 

  public LastParPx() 
  { 
    super(669);
  } 
  public LastParPx(double data) 
  { 
    super(669, data);
  } 
} 
