package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CashDistribAgentCode extends StringField 
{ 

  public CashDistribAgentCode() 
  { 
    super(499);
  } 
  public CashDistribAgentCode(String data) 
  { 
    super(499, data);
  } 
} 
