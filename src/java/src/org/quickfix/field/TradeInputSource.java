package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TradeInputSource extends StringField 
{ 
  public static final int FIELD = 578; 

  public TradeInputSource() 
  { 
    super(578);
  } 
  public TradeInputSource(String data) 
  { 
    super(578, data);
  } 
} 
