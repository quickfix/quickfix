package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TradeInputDevice extends StringField 
{ 
  public static final int FIELD = 579; 

  public TradeInputDevice() 
  { 
    super(579);
  } 
  public TradeInputDevice(String data) 
  { 
    super(579, data);
  } 
} 
