package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class OrigSendingTime extends UtcTimeStampField 
{ 

  public OrigSendingTime() 
  { 
    super(122);
  } 
  public OrigSendingTime(Date data) 
  { 
    super(122, data);
  } 
} 
