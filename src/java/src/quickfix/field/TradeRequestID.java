package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TradeRequestID extends StringField 
{ 
  public static final int FIELD = 568; 

  public TradeRequestID() 
  { 
    super(568);
  } 
  public TradeRequestID(String data) 
  { 
    super(568, data);
  } 
} 
