package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegSymbol extends StringField 
{ 

  public LegSymbol() 
  { 
    super(600);
  } 
  public LegSymbol(String data) 
  { 
    super(600, data);
  } 
} 
