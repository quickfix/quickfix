package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class LastUpdateTime extends UtcTimeStampField 
{ 
  public static final int FIELD = 779; 

  public LastUpdateTime() 
  { 
    super(779);
  } 
  public LastUpdateTime(Date data) 
  { 
    super(779, data);
  } 
} 
