package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TradeReportRefID extends StringField 
{ 

  public TradeReportRefID() 
  { 
    super(572);
  } 
  public TradeReportRefID(String data) 
  { 
    super(572, data);
  } 
} 
