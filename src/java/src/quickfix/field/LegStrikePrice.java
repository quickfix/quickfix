package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LegStrikePrice extends DoubleField 
{ 
  public static final int FIELD = 612; 

  public LegStrikePrice() 
  { 
    super(612);
  } 
  public LegStrikePrice(double data) 
  { 
    super(612, data);
  } 
} 
