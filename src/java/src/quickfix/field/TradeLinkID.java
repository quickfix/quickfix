package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TradeLinkID extends StringField 
{ 
  public static final int FIELD = 820; 

  public TradeLinkID() 
  { 
    super(820);
  } 
  public TradeLinkID(String data) 
  { 
    super(820, data);
  } 
} 
