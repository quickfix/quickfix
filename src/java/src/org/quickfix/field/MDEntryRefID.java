package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MDEntryRefID extends StringField 
{ 
  public static final int FIELD = 280; 

  public MDEntryRefID() 
  { 
    super(280);
  } 
  public MDEntryRefID(String data) 
  { 
    super(280, data);
  } 
} 
