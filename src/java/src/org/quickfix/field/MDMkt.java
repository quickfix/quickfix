package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MDMkt extends StringField 
{ 

  public MDMkt() 
  { 
    super(275);
  } 
  public MDMkt(String data) 
  { 
    super(275, data);
  } 
} 
