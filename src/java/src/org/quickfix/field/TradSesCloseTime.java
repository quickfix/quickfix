package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class TradSesCloseTime extends UtcTimeStampField 
{ 

  public TradSesCloseTime() 
  { 
    super(344);
  } 
  public TradSesCloseTime(Date data) 
  { 
    super(344, data);
  } 
} 
