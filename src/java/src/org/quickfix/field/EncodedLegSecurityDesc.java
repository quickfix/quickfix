package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EncodedLegSecurityDesc extends StringField 
{ 

  public EncodedLegSecurityDesc() 
  { 
    super(622);
  } 
  public EncodedLegSecurityDesc(String data) 
  { 
    super(622, data);
  } 
} 
