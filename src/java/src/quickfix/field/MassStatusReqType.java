package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class MassStatusReqType extends IntField 
{ 
  public static final int FIELD = 585; 
public static final int STATUS_FOR_ORDERS_FOR_A_SECURITY = 1; 
public static final int STATUS_FOR_ORDERS_FOR_AN_UNDERLYING_SECURITY = 2; 
public static final int STATUS_FOR_ORDERS_FOR_A_PRODUCT = 3; 
public static final int STATUS_FOR_ORDERS_FOR_A_CFICODE = 4; 
public static final int STATUS_FOR_ORDERS_FOR_A_SECURITYTYPE = 5; 
public static final int STATUS_FOR_ORDERS_FOR_A_TRADING_SESSION = 6; 
public static final int STATUS_FOR_ALL_ORDERS = 7; 
public static final int STATUS_FOR_ORDERS_FOR_A_PARTYID = 8; 

  public MassStatusReqType() 
  { 
    super(585);
  } 
  public MassStatusReqType(int data) 
  { 
    super(585, data);
  } 
} 
