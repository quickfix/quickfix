package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegSecurityAltID extends StringField 
{ 

  public LegSecurityAltID() 
  { 
    super(605);
  } 
  public LegSecurityAltID(String data) 
  { 
    super(605, data);
  } 
} 
