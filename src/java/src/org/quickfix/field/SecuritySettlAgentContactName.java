package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecuritySettlAgentContactName extends StringField 
{ 

  public SecuritySettlAgentContactName() 
  { 
    super(180);
  } 
  public SecuritySettlAgentContactName(String data) 
  { 
    super(180, data);
  } 
} 
