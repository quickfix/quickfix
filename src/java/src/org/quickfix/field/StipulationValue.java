package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class StipulationValue extends StringField 
{ 
  public static final int FIELD = 234; 

  public StipulationValue() 
  { 
    super(234);
  } 
  public StipulationValue(String data) 
  { 
    super(234, data);
  } 
} 
