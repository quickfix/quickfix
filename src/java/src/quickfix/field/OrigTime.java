package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class OrigTime extends UtcTimeStampField 
{ 
  public static final int FIELD = 42; 

  public OrigTime() 
  { 
    super(42);
  } 
  public OrigTime(Date data) 
  { 
    super(42, data);
  } 
} 
