package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TradSesReqID extends StringField 
{ 
  public static final int FIELD = 335; 

  public TradSesReqID() 
  { 
    super(335);
  } 
  public TradSesReqID(String data) 
  { 
    super(335, data);
  } 
} 
