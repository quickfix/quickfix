package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class Issuer extends StringField 
{ 
  public static final int FIELD = 106; 

  public Issuer() 
  { 
    super(106);
  } 
  public Issuer(String data) 
  { 
    super(106, data);
  } 
} 
