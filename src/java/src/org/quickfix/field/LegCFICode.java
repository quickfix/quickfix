package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegCFICode extends StringField 
{ 

  public LegCFICode() 
  { 
    super(608);
  } 
  public LegCFICode(String data) 
  { 
    super(608, data);
  } 
} 
