package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegIssuer extends StringField 
{ 
  public static final int FIELD = 617; 

  public LegIssuer() 
  { 
    super(617);
  } 
  public LegIssuer(String data) 
  { 
    super(617, data);
  } 
} 
