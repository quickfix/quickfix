package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class MassCancelRejectReason extends IntField 
{ 
  public static final int FIELD = 532; 
public static final int MASS_CANCEL_NOT_SUPPORTED = 0; 
public static final int INVALID_OR_UNKNOWN_SECURITY = 1; 
public static final int INVALID_OR_UNKNOWN_UNDERLYING = 2; 
public static final int INVALID_OR_UNKNOWN_PRODUCT = 3; 
public static final int INVALID_OR_UNKNOWN_CFICODE = 4; 
public static final int INVALID_OR_UNKNOWN_SECURITY_TYPE = 5; 
public static final int INVALID_OR_UNKNOWN_TRADING_SESSION = 6; 
public static final int OTHER = 99; 

  public MassCancelRejectReason() 
  { 
    super(532);
  } 
  public MassCancelRejectReason(int data) 
  { 
    super(532, data);
  } 
} 
