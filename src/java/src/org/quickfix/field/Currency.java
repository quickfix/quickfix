package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class Currency extends StringField 
{ 

  public Currency() 
  { 
    super(15);
  } 
  public Currency(String data) 
  { 
    super(15, data);
  } 
} 
