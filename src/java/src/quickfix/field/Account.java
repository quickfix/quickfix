package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class Account extends StringField 
{ 
  public static final int FIELD = 1; 

  public Account() 
  { 
    super(1);
  } 
  public Account(String data) 
  { 
    super(1, data);
  } 
} 
