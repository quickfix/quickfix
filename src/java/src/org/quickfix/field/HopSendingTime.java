package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class HopSendingTime extends UtcTimeStampField 
{ 

  public HopSendingTime() 
  { 
    super(629);
  } 
  public HopSendingTime(Date data) 
  { 
    super(629, data);
  } 
} 
