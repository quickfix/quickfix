package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class OrdStatus extends CharField 
{ 
  public static final int FIELD = 39; 
public static final char NEW = '0'; 
public static final char PARTIALLY_FILLED = '1'; 
public static final char FILLED = '2'; 
public static final char DONE_FOR_DAY = '3'; 
public static final char CANCELED = '4'; 
public static final char REPLACED = '5'; 
public static final char PENDING_CANCEL = '6'; 
public static final char STOPPED = '7'; 
public static final char REJECTED = '8'; 
public static final char SUSPENDED = '9'; 
public static final char PENDING_NEW = 'A'; 
public static final char CALCULATED = 'B'; 
public static final char EXPIRED = 'C'; 
public static final char ACCEPTED_FOR_BIDDING = 'D'; 
public static final char PENDING_REPLACE = 'E'; 

  public OrdStatus() 
  { 
    super(39);
  } 
  public OrdStatus(char data) 
  { 
    super(39, data);
  } 
} 
