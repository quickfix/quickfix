package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class PartySubID extends StringField 
{ 
  public static final int FIELD = 523; 

  public PartySubID() 
  { 
    super(523);
  } 
  public PartySubID(String data) 
  { 
    super(523, data);
  } 
} 
