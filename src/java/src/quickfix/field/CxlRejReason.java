package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class CxlRejReason extends IntField 
{ 
  public static final int FIELD = 102; 
public static final int TOO_LATE_TO_CANCEL = 0; 
public static final int UNKNOWN_ORDER = 1; 
public static final int BROKER_EXCHANGE_OPTION = 2; 
public static final int ORDER_ALREADY_IN_PENDING_CANCEL_OR_PENDING_REPLACE_STATUS = 3; 
public static final int UNABLE_TO_PROCESS_ORDER_MASS_CANCEL_REQUEST = 4; 
public static final int ORIGORDMODTIME_DID_NOT_MATCH_LAST_TRANSACTTIME_OF_ORDER = 5; 
public static final int DUPLICATE_CLORDID_RECEIVED = 6; 
public static final int OTHER = 99; 

  public CxlRejReason() 
  { 
    super(102);
  } 
  public CxlRejReason(int data) 
  { 
    super(102, data);
  } 
} 
