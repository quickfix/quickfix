package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class MassCancelRejectReason extends CharField 
{ 
  public static final int FIELD = 532; 
public static final char MASS_CANCEL_NOT_SUPPORTED = '0'; 
public static final char INVALID_OR_UNKNOWN_SECURITY = '1'; 
public static final char INVALID_OR_UNKNOWN_UNDERLYING = '2'; 
public static final char INVALID_OR_UNKNOWN_PRODUCT = '3'; 
public static final char INVALID_OR_UNKNOWN_CFICODE = '4'; 
public static final char INVALID_OR_UNKNOWN_SECURITY_TYPE = '5'; 
public static final char INVALID_OR_UNKNOWN_TRADING_SESSION = '6'; 

  public MassCancelRejectReason() 
  { 
    super(532);
  } 
  public MassCancelRejectReason(char data) 
  { 
    super(532, data);
  } 
} 
