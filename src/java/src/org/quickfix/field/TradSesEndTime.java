package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class TradSesEndTime extends UtcTimeStampField 
{ 

  public TradSesEndTime() 
  { 
    super(345);
  } 
  public TradSesEndTime(Date data) 
  { 
    super(345, data);
  } 
} 
