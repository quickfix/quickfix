package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class PctAtRisk extends DoubleField 
{ 
  public static final int FIELD = 869; 

  public PctAtRisk() 
  { 
    super(869);
  } 
  public PctAtRisk(double data) 
  { 
    super(869, data);
  } 
} 
