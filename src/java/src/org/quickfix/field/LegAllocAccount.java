package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegAllocAccount extends StringField 
{ 
  public static final int FIELD = 671; 

  public LegAllocAccount() 
  { 
    super(671);
  } 
  public LegAllocAccount(String data) 
  { 
    super(671, data);
  } 
} 
