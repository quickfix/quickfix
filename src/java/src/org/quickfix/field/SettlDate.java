package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlDate extends StringField 
{ 
  public static final int FIELD = 193; 

  public SettlDate() 
  { 
    super(193);
  } 
  public SettlDate(String data) 
  { 
    super(193, data);
  } 
} 
