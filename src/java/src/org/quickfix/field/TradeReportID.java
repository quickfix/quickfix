package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TradeReportID extends StringField 
{ 

  public TradeReportID() 
  { 
    super(571);
  } 
  public TradeReportID(String data) 
  { 
    super(571, data);
  } 
} 
