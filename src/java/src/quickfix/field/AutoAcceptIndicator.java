package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class AutoAcceptIndicator extends BooleanField 
{ 
  public static final int FIELD = 754; 

  public AutoAcceptIndicator() 
  { 
    super(754);
  } 
  public AutoAcceptIndicator(boolean data) 
  { 
    super(754, data);
  } 
} 
