package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegSecurityID extends StringField 
{ 

  public LegSecurityID() 
  { 
    super(602);
  } 
  public LegSecurityID(String data) 
  { 
    super(602, data);
  } 
} 
