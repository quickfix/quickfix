package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingInstrRegistry extends StringField 
{ 
  public static final int FIELD = 595; 

  public UnderlyingInstrRegistry() 
  { 
    super(595);
  } 
  public UnderlyingInstrRegistry(String data) 
  { 
    super(595, data);
  } 
} 
