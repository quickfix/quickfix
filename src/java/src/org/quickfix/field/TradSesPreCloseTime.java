package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class TradSesPreCloseTime extends UtcTimeStampField 
{ 

  public TradSesPreCloseTime() 
  { 
    super(343);
  } 
  public TradSesPreCloseTime(Date data) 
  { 
    super(343, data);
  } 
} 
