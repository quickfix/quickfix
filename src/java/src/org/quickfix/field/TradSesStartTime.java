package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class TradSesStartTime extends UtcTimeStampField 
{ 

  public TradSesStartTime() 
  { 
    super(341);
  } 
  public TradSesStartTime(Date data) 
  { 
    super(341, data);
  } 
} 
