package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ComplianceID extends StringField 
{ 

  public ComplianceID() 
  { 
    super(376);
  } 
  public ComplianceID(String data) 
  { 
    super(376, data);
  } 
} 
