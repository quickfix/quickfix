package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class ContraryInstructionIndicator extends BooleanField 
{ 
  public static final int FIELD = 719; 

  public ContraryInstructionIndicator() 
  { 
    super(719);
  } 
  public ContraryInstructionIndicator(boolean data) 
  { 
    super(719, data);
  } 
} 
