package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TradingSessionSubID extends StringField 
{ 
  public static final int FIELD = 625; 

  public TradingSessionSubID() 
  { 
    super(625);
  } 
  public TradingSessionSubID(String data) 
  { 
    super(625, data);
  } 
} 
