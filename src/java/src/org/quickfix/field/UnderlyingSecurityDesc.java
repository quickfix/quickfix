package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSecurityDesc extends StringField 
{ 
  public static final int FIELD = 307; 

  public UnderlyingSecurityDesc() 
  { 
    super(307);
  } 
  public UnderlyingSecurityDesc(String data) 
  { 
    super(307, data);
  } 
} 
