package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegIssuer extends StringField 
{ 

  public LegIssuer() 
  { 
    super(617);
  } 
  public LegIssuer(String data) 
  { 
    super(617, data);
  } 
} 
