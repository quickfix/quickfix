package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class QuoteRespID extends StringField 
{ 
  public static final int FIELD = 693; 

  public QuoteRespID() 
  { 
    super(693);
  } 
  public QuoteRespID(String data) 
  { 
    super(693, data);
  } 
} 
