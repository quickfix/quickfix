package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegFutSettDate extends StringField 
{ 
  public static final int FIELD = 588; 

  public LegFutSettDate() 
  { 
    super(588);
  } 
  public LegFutSettDate(String data) 
  { 
    super(588, data);
  } 
} 
