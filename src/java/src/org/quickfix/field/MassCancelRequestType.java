package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class MassCancelRequestType extends CharField 
{ 
  public static final int FIELD = 530; 
public static final char CXL_ORDERS_SECURITY = '1'; 
public static final char CXL_ORDERS_UNDERLYING_SECURITY = '2'; 
public static final char CXL_ORDERS_PRODUCT = '3'; 
public static final char CXL_ORDERS_CFICODE = '4'; 
public static final char CXL_ORDERS_SECURITY_TYPE = '5'; 
public static final char CXL_ORDERS_TRD_SESSION = '6'; 
public static final char CXL_ALL_ORDERS = '7'; 

  public MassCancelRequestType() 
  { 
    super(530);
  } 
  public MassCancelRequestType(char data) 
  { 
    super(530, data);
  } 
} 
