package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class SellVolume extends DoubleField 
{ 

  public SellVolume() 
  { 
    super(331);
  } 
  public SellVolume(double data) 
  { 
    super(331, data);
  } 
} 
