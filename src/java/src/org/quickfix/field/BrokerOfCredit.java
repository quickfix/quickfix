package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BrokerOfCredit extends StringField 
{ 

  public BrokerOfCredit() 
  { 
    super(92);
  } 
  public BrokerOfCredit(String data) 
  { 
    super(92, data);
  } 
} 
