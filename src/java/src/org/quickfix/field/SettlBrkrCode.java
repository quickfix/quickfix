package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlBrkrCode extends StringField 
{ 

  public SettlBrkrCode() 
  { 
    super(174);
  } 
  public SettlBrkrCode(String data) 
  { 
    super(174, data);
  } 
} 
