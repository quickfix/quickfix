package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class OrigCrossID extends StringField 
{ 

  public OrigCrossID() 
  { 
    super(551);
  } 
  public OrigCrossID(String data) 
  { 
    super(551, data);
  } 
} 
