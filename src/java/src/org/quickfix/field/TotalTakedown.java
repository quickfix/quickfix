package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class TotalTakedown extends DoubleField 
{ 

  public TotalTakedown() 
  { 
    super(237);
  } 
  public TotalTakedown(double data) 
  { 
    super(237, data);
  } 
} 
