package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EncodedLegSecurityDesc extends StringField 
{ 
  public static final int FIELD = 622; 

  public EncodedLegSecurityDesc() 
  { 
    super(622);
  } 
  public EncodedLegSecurityDesc(String data) 
  { 
    super(622, data);
  } 
} 
