package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class SubscriptionRequestType extends CharField 
{ 
  public static final int FIELD = 263; 
public static final char SNAPSHOT = '0'; 
public static final char SNAPSHOT_PLUS_UPDATES = '1'; 
public static final char DISABLE_PREVIOUS_SNAPSHOT_PLUS_UPDATE_REQUEST = '2'; 

  public SubscriptionRequestType() 
  { 
    super(263);
  } 
  public SubscriptionRequestType(char data) 
  { 
    super(263, data);
  } 
} 
