package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class BusinessRejectReason extends IntField 
{ 
  public static final int FIELD = 380; 
public static final int OTHER = 0; 
public static final int UNKN_ID = 1; 
public static final int UNKN_SEC = 2; 
public static final int UNKN_MSG_TYPE = 3; 
public static final int APP_NA = 4; 
public static final int COND_FLD_MISS = 5; 
public static final int NOT_AUTH = 6; 
public static final int NO_DELIV_TO_FIRM = 7; 

  public BusinessRejectReason() 
  { 
    super(380);
  } 
  public BusinessRejectReason(int data) 
  { 
    super(380, data);
  } 
} 
