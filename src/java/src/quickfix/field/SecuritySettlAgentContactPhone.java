package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecuritySettlAgentContactPhone extends StringField 
{ 
  public static final int FIELD = 181; 

  public SecuritySettlAgentContactPhone() 
  { 
    super(181);
  } 
  public SecuritySettlAgentContactPhone(String data) 
  { 
    super(181, data);
  } 
} 
