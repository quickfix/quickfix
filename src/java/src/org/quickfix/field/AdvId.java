package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class AdvId extends StringField 
{ 

  public AdvId() 
  { 
    super(2);
  } 
  public AdvId(String data) 
  { 
    super(2, data);
  } 
} 
