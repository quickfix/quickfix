package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class PossDupFlag extends BooleanField 
{ 
public static final boolean POSSIBLE_DUPLICATE = true; 
public static final boolean ORIGINAL_TRANSMISSION = false; 

  public PossDupFlag() 
  { 
    super(43);
  } 
  public PossDupFlag(boolean data) 
  { 
    super(43, data);
  } 
} 
