package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EncodedLegIssuer extends StringField 
{ 

  public EncodedLegIssuer() 
  { 
    super(619);
  } 
  public EncodedLegIssuer(String data) 
  { 
    super(619, data);
  } 
} 
