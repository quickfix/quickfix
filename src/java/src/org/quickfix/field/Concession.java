package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class Concession extends DoubleField 
{ 

  public Concession() 
  { 
    super(238);
  } 
  public Concession(double data) 
  { 
    super(238, data);
  } 
} 
