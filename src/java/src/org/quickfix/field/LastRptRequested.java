package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class LastRptRequested extends BooleanField 
{ 
  public static final int FIELD = 912; 

  public LastRptRequested() 
  { 
    super(912);
  } 
  public LastRptRequested(boolean data) 
  { 
    super(912, data);
  } 
} 
