package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TradeInputSource extends StringField 
{ 

  public TradeInputSource() 
  { 
    super(578);
  } 
  public TradeInputSource(String data) 
  { 
    super(578, data);
  } 
} 
