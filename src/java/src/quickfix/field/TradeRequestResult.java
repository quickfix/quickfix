package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TradeRequestResult extends IntField 
{ 
  public static final int FIELD = 749; 
public static final int SUCCESSFUL = 0; 
public static final int INVALID_OR_UNKNOWN_INSTRUMENT = 1; 
public static final int INVALID_TYPE_OF_TRADE_REQUESTED = 2; 
public static final int INVALID_PARTIES = 3; 
public static final int INVALID_TRANSPORT_TYPE_REQUESTED = 4; 
public static final int INVALID_DESTINATION_REQUESTED = 5; 
public static final int TRADEREQUESTTYPE_NOT_SUPPORTED = 8; 
public static final int UNAUTHORIZED_FOR_TRADE_CAPTURE_REPORT_REQUEST = 9; 

  public TradeRequestResult() 
  { 
    super(749);
  } 
  public TradeRequestResult(int data) 
  { 
    super(749, data);
  } 
} 
