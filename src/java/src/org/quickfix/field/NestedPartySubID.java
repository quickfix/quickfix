package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class NestedPartySubID extends StringField 
{ 

  public NestedPartySubID() 
  { 
    super(545);
  } 
  public NestedPartySubID(String data) 
  { 
    super(545, data);
  } 
} 
