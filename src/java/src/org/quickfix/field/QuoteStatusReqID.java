package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class QuoteStatusReqID extends StringField 
{ 

  public QuoteStatusReqID() 
  { 
    super(649);
  } 
  public QuoteStatusReqID(String data) 
  { 
    super(649, data);
  } 
} 
