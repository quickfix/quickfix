package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSecurityID extends StringField 
{ 

  public UnderlyingSecurityID() 
  { 
    super(309);
  } 
  public UnderlyingSecurityID(String data) 
  { 
    super(309, data);
  } 
} 
