package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CommCurrency extends StringField 
{ 

  public CommCurrency() 
  { 
    super(479);
  } 
  public CommCurrency(String data) 
  { 
    super(479, data);
  } 
} 
