package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingTradingSessionSubID extends StringField 
{ 
  public static final int FIELD = 823; 

  public UnderlyingTradingSessionSubID() 
  { 
    super(823);
  } 
  public UnderlyingTradingSessionSubID(String data) 
  { 
    super(823, data);
  } 
} 
