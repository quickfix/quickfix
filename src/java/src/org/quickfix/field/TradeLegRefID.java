package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TradeLegRefID extends StringField 
{ 
  public static final int FIELD = 824; 

  public TradeLegRefID() 
  { 
    super(824);
  } 
  public TradeLegRefID(String data) 
  { 
    super(824, data);
  } 
} 
