package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class AllocQty extends DoubleField 
{ 
  public static final int FIELD = 80; 

  public AllocQty() 
  { 
    super(80);
  } 
  public AllocQty(double data) 
  { 
    super(80, data);
  } 
} 
