package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EncodedSecurityDesc extends StringField 
{ 
  public static final int FIELD = 351; 

  public EncodedSecurityDesc() 
  { 
    super(351);
  } 
  public EncodedSecurityDesc(String data) 
  { 
    super(351, data);
  } 
} 
