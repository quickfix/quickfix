package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class MassCancelResponse extends CharField 
{ 
  public static final int FIELD = 531; 
public static final char CANCEL_REQUEST_REJECTED = '0'; 
public static final char CANCEL_ORDERS_FOR_A_SECURITY = '1'; 
public static final char CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = '2'; 
public static final char CANCEL_ORDERS_FOR_A_PRODUCT = '3'; 
public static final char CANCEL_ORDERS_FOR_A_CFICODE = '4'; 
public static final char CANCEL_ORDERS_FOR_A_SECURITYTYPE = '5'; 
public static final char CANCEL_ORDERS_FOR_A_TRADING_SESSION = '6'; 
public static final char CANCEL_ALL_ORDERS = '7'; 

  public MassCancelResponse() 
  { 
    super(531);
  } 
  public MassCancelResponse(char data) 
  { 
    super(531, data);
  } 
} 
