package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SideComplianceID extends StringField 
{ 

  public SideComplianceID() 
  { 
    super(659);
  } 
  public SideComplianceID(String data) 
  { 
    super(659, data);
  } 
} 
