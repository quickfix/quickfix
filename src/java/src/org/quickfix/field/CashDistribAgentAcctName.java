package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CashDistribAgentAcctName extends StringField 
{ 

  public CashDistribAgentAcctName() 
  { 
    super(502);
  } 
  public CashDistribAgentAcctName(String data) 
  { 
    super(502, data);
  } 
} 
