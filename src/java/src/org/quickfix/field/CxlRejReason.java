package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class CxlRejReason extends IntField 
{ 
  public static final int FIELD = 102; 
public static final int TOO_LATE = 0; 
public static final int UNKNOWN = 1; 
public static final int BROKER_OPT = 2; 
public static final int ALREADY_PENDING_CXL = 3; 
public static final int UNABLE_TO_PROCESS = 4; 
public static final int ORIG_ORD_MOD_TIME_MISMATCH = 5; 
public static final int DUP_CL_ORD_ID = 6; 
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
