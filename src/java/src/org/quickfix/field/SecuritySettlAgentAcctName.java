package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecuritySettlAgentAcctName extends StringField 
{ 
  public static final int FIELD = 179; 

  public SecuritySettlAgentAcctName() 
  { 
    super(179);
  } 
  public SecuritySettlAgentAcctName(String data) 
  { 
    super(179, data);
  } 
} 
