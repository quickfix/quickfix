package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class GapFillFlag extends BooleanField 
{ 
  public static final int FIELD = 123; 

  public GapFillFlag() 
  { 
    super(123);
  } 
  public GapFillFlag(boolean data) 
  { 
    super(123, data);
  } 
} 
