package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class PartySubID extends StringField 
{ 

  public PartySubID() 
  { 
    super(523);
  } 
  public PartySubID(String data) 
  { 
    super(523, data);
  } 
} 
