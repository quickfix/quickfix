package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MDEntryOriginator extends StringField 
{ 

  public MDEntryOriginator() 
  { 
    super(282);
  } 
  public MDEntryOriginator(String data) 
  { 
    super(282, data);
  } 
} 
