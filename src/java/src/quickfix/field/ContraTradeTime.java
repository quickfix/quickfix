package org.quickfix.field; 
import org.quickfix.UtcTimeStampField; 
import java.util.Date; 

public class ContraTradeTime extends UtcTimeStampField 
{ 
  public static final int FIELD = 438; 

  public ContraTradeTime() 
  { 
    super(438);
  } 
  public ContraTradeTime(Date data) 
  { 
    super(438, data);
  } 
} 
