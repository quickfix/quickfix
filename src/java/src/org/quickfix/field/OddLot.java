package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class OddLot extends BooleanField 
{ 

  public OddLot() 
  { 
    super(575);
  } 
  public OddLot(boolean data) 
  { 
    super(575, data);
  } 
} 
