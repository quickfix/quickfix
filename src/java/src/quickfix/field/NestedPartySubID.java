package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class NestedPartySubID extends StringField 
{ 
  public static final int FIELD = 545; 

  public NestedPartySubID() 
  { 
    super(545);
  } 
  public NestedPartySubID(String data) 
  { 
    super(545, data);
  } 
} 
