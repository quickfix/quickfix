package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegInstrRegistry extends StringField 
{ 

  public LegInstrRegistry() 
  { 
    super(599);
  } 
  public LegInstrRegistry(String data) 
  { 
    super(599, data);
  } 
} 
