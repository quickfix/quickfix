package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class OrigOrdModTime extends UtcTimeStampField 
{ 

  public OrigOrdModTime() 
  { 
    super(586);
  } 
  public OrigOrdModTime(Date data) 
  { 
    super(586, data);
  } 
} 
