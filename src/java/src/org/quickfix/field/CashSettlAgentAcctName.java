package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CashSettlAgentAcctName extends StringField 
{ 
  public static final int FIELD = 185; 

  public CashSettlAgentAcctName() 
  { 
    super(185);
  } 
  public CashSettlAgentAcctName(String data) 
  { 
    super(185, data);
  } 
} 
