package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegMaturityDate extends StringField 
{ 

  public LegMaturityDate() 
  { 
    super(611);
  } 
  public LegMaturityDate(String data) 
  { 
    super(611, data);
  } 
} 
