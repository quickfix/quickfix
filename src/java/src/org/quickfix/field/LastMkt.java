package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LastMkt extends StringField 
{ 

  public LastMkt() 
  { 
    super(30);
  } 
  public LastMkt(String data) 
  { 
    super(30, data);
  } 
} 
