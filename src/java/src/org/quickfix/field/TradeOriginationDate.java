package org.quickfix.field; 
import org.quickfix.UtcDateField; 
import java.util.Date; 

public class TradeOriginationDate extends UtcDateField 
{ 

  public TradeOriginationDate() 
  { 
    super(229);
  } 
  public TradeOriginationDate(Date data) 
  { 
    super(229, data);
  } 
} 
