package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class UnsolicitedIndicator extends BooleanField 
{ 
  public static final int FIELD = 325; 

  public UnsolicitedIndicator() 
  { 
    super(325);
  } 
  public UnsolicitedIndicator(boolean data) 
  { 
    super(325, data);
  } 
} 
