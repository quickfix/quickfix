package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CashDistribAgentAcctNumber extends StringField 
{ 

  public CashDistribAgentAcctNumber() 
  { 
    super(500);
  } 
  public CashDistribAgentAcctNumber(String data) 
  { 
    super(500, data);
  } 
} 
