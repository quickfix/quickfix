package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EncodedIssuer extends StringField 
{ 
  public static final int FIELD = 349; 

  public EncodedIssuer() 
  { 
    super(349);
  } 
  public EncodedIssuer(String data) 
  { 
    super(349, data);
  } 
} 
