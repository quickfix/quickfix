package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class NotifyBrokerOfCredit extends BooleanField 
{ 
  public static final int FIELD = 208; 
public static final boolean DETAILS_SHOULD_BE_COMMUNICATED = true; 
public static final boolean DETAILS_SHOULD_NOT_BE_COMMUNICATED = false; 

  public NotifyBrokerOfCredit() 
  { 
    super(208);
  } 
  public NotifyBrokerOfCredit(boolean data) 
  { 
    super(208, data);
  } 
} 
