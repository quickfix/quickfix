package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecurityResponseID extends StringField 
{ 

  public SecurityResponseID() 
  { 
    super(322);
  } 
  public SecurityResponseID(String data) 
  { 
    super(322, data);
  } 
} 
