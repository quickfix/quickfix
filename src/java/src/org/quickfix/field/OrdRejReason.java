package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class OrdRejReason extends IntField 
{ 
  public static final int FIELD = 103; 
public static final int BROKER_OPT = 0; 
public static final int UNKNOWN_SYM = 1; 
public static final int EXCH_CLOSED = 2; 
public static final int EXCEEDS_LIM = 3; 
public static final int TOO_LATE = 4; 
public static final int UNKNOWN = 5; 
public static final int DUPLICATE = 6; 
public static final int DUPLICATE_VERBAL = 7; 
public static final int STALE = 8; 
public static final int TRADE_ALONG_REQ = 9; 
public static final int INV_INV_ID = 10; 
public static final int UNSUPP_ORDER_CHAR = 11; 
public static final int SURVEILLENCE = 12; 
public static final int INCORRECT_QUANTITY = 13; 
public static final int INCORRECT_ALLOCATED_QUANTITY = 14; 
public static final int UNKNOWN_ACCOUNTS = 15; 
public static final int OTHER = 99; 

  public OrdRejReason() 
  { 
    super(103);
  } 
  public OrdRejReason(int data) 
  { 
    super(103, data);
  } 
} 
