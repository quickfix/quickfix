package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class NoLegSecurityAltID extends StringField 
{ 

  public NoLegSecurityAltID() 
  { 
    super(604);
  } 
  public NoLegSecurityAltID(String data) 
  { 
    super(604, data);
  } 
} 
