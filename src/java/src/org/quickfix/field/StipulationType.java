package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class StipulationType extends StringField 
{ 

  public StipulationType() 
  { 
    super(233);
  } 
  public StipulationType(String data) 
  { 
    super(233, data);
  } 
} 
