package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class DueToRelated extends BooleanField 
{ 
  public static final int FIELD = 329; 

  public DueToRelated() 
  { 
    super(329);
  } 
  public DueToRelated(boolean data) 
  { 
    super(329, data);
  } 
} 
