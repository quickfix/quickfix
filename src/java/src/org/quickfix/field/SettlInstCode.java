package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlInstCode extends StringField 
{ 

  public SettlInstCode() 
  { 
    super(175);
  } 
  public SettlInstCode(String data) 
  { 
    super(175, data);
  } 
} 
