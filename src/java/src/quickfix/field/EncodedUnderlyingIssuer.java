package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EncodedUnderlyingIssuer extends StringField 
{ 
  public static final int FIELD = 363; 

  public EncodedUnderlyingIssuer() 
  { 
    super(363);
  } 
  public EncodedUnderlyingIssuer(String data) 
  { 
    super(363, data);
  } 
} 
