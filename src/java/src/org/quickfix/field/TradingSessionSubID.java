package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TradingSessionSubID extends StringField 
{ 

  public TradingSessionSubID() 
  { 
    super(625);
  } 
  public TradingSessionSubID(String data) 
  { 
    super(625, data);
  } 
} 
