package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class MassCancelResponse extends CharField 
{ 
  public static final int FIELD = 531; 
public static final char CXL_REQ_REJ = '0'; 
public static final char CXL_ORDERS_SECURITY = '1'; 
public static final char CXL_ORDERS_UNDERLYING_SECURITY = '2'; 
public static final char CXL_ORDERS_PRODUCT = '3'; 
public static final char CXL_ORDERS_CFICODE = '4'; 
public static final char CXL_ORDERS_SECURITY_TYPE = '5'; 
public static final char CXL_ORDERS_TRD_SESSION = '6'; 
public static final char CXL_ALL_ORDERS = '7'; 

  public MassCancelResponse() 
  { 
    super(531);
  } 
  public MassCancelResponse(char data) 
  { 
    super(531, data);
  } 
} 
