package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegSecurityAltIDSource extends StringField 
{ 

  public LegSecurityAltIDSource() 
  { 
    super(606);
  } 
  public LegSecurityAltIDSource(String data) 
  { 
    super(606, data);
  } 
} 
