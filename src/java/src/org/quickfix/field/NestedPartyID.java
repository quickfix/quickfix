package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class NestedPartyID extends StringField 
{ 

  public NestedPartyID() 
  { 
    super(524);
  } 
  public NestedPartyID(String data) 
  { 
    super(524, data);
  } 
} 
