package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BeginString extends StringField 
{ 

  public BeginString() 
  { 
    super(8);
  } 
  public BeginString(String data) 
  { 
    super(8, data);
  } 
} 
