package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EncodedUnderlyingSecurityDesc extends StringField 
{ 
  public static final int FIELD = 365; 

  public EncodedUnderlyingSecurityDesc() 
  { 
    super(365);
  } 
  public EncodedUnderlyingSecurityDesc(String data) 
  { 
    super(365, data);
  } 
} 
