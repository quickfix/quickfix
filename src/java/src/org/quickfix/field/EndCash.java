package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class EndCash extends DoubleField 
{ 
  public static final int FIELD = 922; 

  public EndCash() 
  { 
    super(922);
  } 
  public EndCash(double data) 
  { 
    super(922, data);
  } 
} 
