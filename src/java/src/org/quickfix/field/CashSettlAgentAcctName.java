package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CashSettlAgentAcctName extends StringField 
{ 

  public CashSettlAgentAcctName() 
  { 
    super(185);
  } 
  public CashSettlAgentAcctName(String data) 
  { 
    super(185, data);
  } 
} 
