package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegSecurityDesc extends StringField 
{ 

  public LegSecurityDesc() 
  { 
    super(620);
  } 
  public LegSecurityDesc(String data) 
  { 
    super(620, data);
  } 
} 
