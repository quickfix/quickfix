package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegRefID extends StringField 
{ 

  public LegRefID() 
  { 
    super(654);
  } 
  public LegRefID(String data) 
  { 
    super(654, data);
  } 
} 
