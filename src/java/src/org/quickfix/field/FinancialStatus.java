package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class FinancialStatus extends StringField 
{ 
public static final char BANKRUPT = '1'; 
public static final char PENDING_DELISTING = '2'; 

  public FinancialStatus() 
  { 
    super(291);
  } 
  public FinancialStatus(String data) 
  { 
    super(291, data);
  } 
} 
