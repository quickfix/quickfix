package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SettlDepositoryCode extends StringField 
{ 
  public static final int FIELD = 173; 

  public SettlDepositoryCode() 
  { 
    super(173);
  } 
  public SettlDepositoryCode(String data) 
  { 
    super(173, data);
  } 
} 
