package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class TradSesOpenTime extends UtcTimeStampField 
{ 
  public static final int FIELD = 342; 

  public TradSesOpenTime() 
  { 
    super(342);
  } 
  public TradSesOpenTime(Date data) 
  { 
    super(342, data);
  } 
} 
