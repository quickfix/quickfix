package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class InViewOfCommon extends BooleanField 
{ 
  public static final int FIELD = 328; 

  public InViewOfCommon() 
  { 
    super(328);
  } 
  public InViewOfCommon(boolean data) 
  { 
    super(328, data);
  } 
} 
