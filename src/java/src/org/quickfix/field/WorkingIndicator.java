package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class WorkingIndicator extends BooleanField 
{ 
public static final boolean ORDER_IS_CURRENTLY_BEING_WORKED = true; 
public static final boolean ORDER_HAS_BEEN_ACCEPTED_BUT_NOT_YET_IN_A_WORKING_STATE = false; 

  public WorkingIndicator() 
  { 
    super(636);
  } 
  public WorkingIndicator(boolean data) 
  { 
    super(636, data);
  } 
} 
