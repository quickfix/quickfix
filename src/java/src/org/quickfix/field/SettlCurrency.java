package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlCurrency extends StringField 
{ 

  public SettlCurrency() 
  { 
    super(120);
  } 
  public SettlCurrency(String data) 
  { 
    super(120, data);
  } 
} 
