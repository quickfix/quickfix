package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class MassStatusReqType extends IntField 
{ 
  public static final int FIELD = 585; 
public static final int STATUS_SECURITY = 1; 
public static final int STATUS_UNDERLYING_SECURITY = 2; 
public static final int STATUS_PRODUCT = 3; 
public static final int STATUS_CFICODE = 4; 
public static final int STATUS_SECURITY_TYPE = 5; 
public static final int STATUS_TRD_SESSION = 6; 
public static final int STATUS_ALL_ORDERS = 7; 
public static final int STATUS_PARTY_ID = 8; 

  public MassStatusReqType() 
  { 
    super(585);
  } 
  public MassStatusReqType(int data) 
  { 
    super(585, data);
  } 
} 
