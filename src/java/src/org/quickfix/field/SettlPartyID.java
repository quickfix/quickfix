package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlPartyID extends StringField 
{ 
  public static final int FIELD = 782; 

  public SettlPartyID() 
  { 
    super(782);
  } 
  public SettlPartyID(String data) 
  { 
    super(782, data);
  } 
} 
