package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MDEntryOriginator extends StringField 
{ 
  public static final int FIELD = 282; 

  public MDEntryOriginator() 
  { 
    super(282);
  } 
  public MDEntryOriginator(String data) 
  { 
    super(282, data);
  } 
} 
