package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlSessID extends StringField 
{ 
  public static final int FIELD = 716; 

  public SettlSessID() 
  { 
    super(716);
  } 
  public SettlSessID(String data) 
  { 
    super(716, data);
  } 
} 
