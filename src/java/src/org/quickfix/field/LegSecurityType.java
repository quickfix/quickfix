package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegSecurityType extends StringField 
{ 

  public LegSecurityType() 
  { 
    super(609);
  } 
  public LegSecurityType(String data) 
  { 
    super(609, data);
  } 
} 
