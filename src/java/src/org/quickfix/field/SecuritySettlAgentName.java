package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecuritySettlAgentName extends StringField 
{ 
  public static final int FIELD = 176; 

  public SecuritySettlAgentName() 
  { 
    super(176);
  } 
  public SecuritySettlAgentName(String data) 
  { 
    super(176, data);
  } 
} 
