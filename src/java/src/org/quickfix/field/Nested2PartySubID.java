package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class Nested2PartySubID extends StringField 
{ 
  public static final int FIELD = 760; 

  public Nested2PartySubID() 
  { 
    super(760);
  } 
  public Nested2PartySubID(String data) 
  { 
    super(760, data);
  } 
} 
