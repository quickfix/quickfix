package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class MassCancelRequestType extends CharField 
{ 
  public static final int FIELD = 530; 
public static final char CANCEL_ORDERS_FOR_A_SECURITY = '1'; 
public static final char CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = '2'; 
public static final char CANCEL_ORDERS_FOR_A_PRODUCT = '3'; 
public static final char CANCEL_ORDERS_FOR_A_CFICODE = '4'; 
public static final char CANCEL_ORDERS_FOR_A_SECURITYTYPE = '5'; 
public static final char CANCEL_ORDERS_FOR_A_TRADING_SESSION = '6'; 
public static final char CANCEL_ALL_ORDERS = '7'; 

  public MassCancelRequestType() 
  { 
    super(530);
  } 
  public MassCancelRequestType(char data) 
  { 
    super(530, data);
  } 
} 
