package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class InViewOfCommon extends BooleanField 
{ 
  public static final int FIELD = 328; 
public static final boolean HALT_WAS_DUE_TO_COMMON_STOCK_BEING_HALTED = true; 
public static final boolean HALT_WAS_NOT_RELATED_TO_A_HALT_OF_THE_COMMON_STOCK = false; 

  public InViewOfCommon() 
  { 
    super(328);
  } 
  public InViewOfCommon(boolean data) 
  { 
    super(328, data);
  } 
} 
