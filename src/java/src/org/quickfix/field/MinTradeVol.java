package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class MinTradeVol extends DoubleField 
{ 

  public MinTradeVol() 
  { 
    super(562);
  } 
  public MinTradeVol(double data) 
  { 
    super(562, data);
  } 
} 
