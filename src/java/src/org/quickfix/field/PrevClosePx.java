package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class PrevClosePx extends DoubleField 
{ 
  public static final int FIELD = 140; 

  public PrevClosePx() 
  { 
    super(140);
  } 
  public PrevClosePx(double data) 
  { 
    super(140, data);
  } 
} 
