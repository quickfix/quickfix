package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ClearingAccount extends StringField 
{ 

  public ClearingAccount() 
  { 
    super(440);
  } 
  public ClearingAccount(String data) 
  { 
    super(440, data);
  } 
} 
