package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegStrikeCurrency extends StringField 
{ 
  public static final int FIELD = 942; 

  public LegStrikeCurrency() 
  { 
    super(942);
  } 
  public LegStrikeCurrency(String data) 
  { 
    super(942, data);
  } 
} 
