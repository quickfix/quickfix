package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class PriorSpreadIndicator extends BooleanField 
{ 
  public static final int FIELD = 720; 

  public PriorSpreadIndicator() 
  { 
    super(720);
  } 
  public PriorSpreadIndicator(boolean data) 
  { 
    super(720, data);
  } 
} 
