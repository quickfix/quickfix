package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MDEntryRefID extends StringField 
{ 

  public MDEntryRefID() 
  { 
    super(280);
  } 
  public MDEntryRefID(String data) 
  { 
    super(280, data);
  } 
} 
