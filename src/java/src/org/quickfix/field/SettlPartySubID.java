package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlPartySubID extends StringField 
{ 
  public static final int FIELD = 785; 

  public SettlPartySubID() 
  { 
    super(785);
  } 
  public SettlPartySubID(String data) 
  { 
    super(785, data);
  } 
} 
