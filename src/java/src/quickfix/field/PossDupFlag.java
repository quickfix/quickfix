package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class PossDupFlag extends BooleanField 
{ 
  public static final int FIELD = 43; 

  public PossDupFlag() 
  { 
    super(43);
  } 
  public PossDupFlag(boolean data) 
  { 
    super(43, data);
  } 
} 
