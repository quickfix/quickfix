package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class PartyID extends StringField 
{ 
  public static final int FIELD = 448; 

  public PartyID() 
  { 
    super(448);
  } 
  public PartyID(String data) 
  { 
    super(448, data);
  } 
} 
