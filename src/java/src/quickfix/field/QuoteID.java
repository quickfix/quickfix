package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class QuoteID extends StringField 
{ 
  public static final int FIELD = 117; 

  public QuoteID() 
  { 
    super(117);
  } 
  public QuoteID(String data) 
  { 
    super(117, data);
  } 
} 
