package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class AllocAccount extends StringField 
{ 
  public static final int FIELD = 79; 

  public AllocAccount() 
  { 
    super(79);
  } 
  public AllocAccount(String data) 
  { 
    super(79, data);
  } 
} 
