package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecuritySettlAgentCode extends StringField 
{ 

  public SecuritySettlAgentCode() 
  { 
    super(177);
  } 
  public SecuritySettlAgentCode(String data) 
  { 
    super(177, data);
  } 
} 
