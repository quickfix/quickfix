package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class OrdRejReason extends IntField 
{ 
public static final int BROKER_OPTION = 0; 
public static final int UNKNOWN_SYMBOL = 1; 
public static final int EXCHANGE_CLOSED = 2; 
public static final int ORDER_EXCEEDS_LIMIT = 3; 
public static final int TOO_LATE_TO_ENTER = 4; 
public static final int UNKNOWN_ORDER = 5; 
public static final int DUPLICATE_ORDER = 6; 
public static final int DUPLICATE_VERBALYES = 7; 
public static final int STALE_ORDER = 8; 

  public OrdRejReason() 
  { 
    super(103);
  } 
  public OrdRejReason(int data) 
  { 
    super(103, data);
  } 
} 
