package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteStatus extends IntField 
{ 
  public static final int FIELD = 297; 
public static final int ACCPT = 0; 
public static final int CXL_SYM = 1; 
public static final int CXL_SEC_TYPE = 2; 
public static final int CXL_UNDER = 3; 
public static final int CXL_ALL = 4; 
public static final int REJ = 5; 
public static final int REMOVED = 6; 
public static final int EXPIRED = 7; 
public static final int QUERY = 8; 
public static final int QUOTE_NOT_FOUND = 9; 
public static final int PENDING = 10; 
public static final int PASS = 11; 
public static final int LOCKED_MARKET_WARNING = 12; 
public static final int CROSS_MARKET_WARNING = 13; 
public static final int CANCELED_DUE_TO_LOCK_MARKET = 14; 
public static final int CANCELED_DUE_TO_CROSS_MARKET = 15; 

  public QuoteStatus() 
  { 
    super(297);
  } 
  public QuoteStatus(int data) 
  { 
    super(297, data);
  } 
} 
