package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingInstrRegistry extends StringField 
{ 

  public UnderlyingInstrRegistry() 
  { 
    super(595);
  } 
  public UnderlyingInstrRegistry(String data) 
  { 
    super(595, data);
  } 
} 
