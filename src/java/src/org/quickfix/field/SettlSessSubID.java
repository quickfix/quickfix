package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlSessSubID extends StringField 
{ 
  public static final int FIELD = 717; 

  public SettlSessSubID() 
  { 
    super(717);
  } 
  public SettlSessSubID(String data) 
  { 
    super(717, data);
  } 
} 
