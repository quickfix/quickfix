package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class MDReqRejReason extends CharField 
{ 
  public static final int FIELD = 281; 
public static final char UNKNOWN_SYM = '0'; 
public static final char DUP_ID = '1'; 
public static final char INS_BAND = '2'; 
public static final char INS_PERM = '3'; 
public static final char UNSUPP_SUB = '4'; 
public static final char UNSUPP_MKT_DEPTH = '5'; 
public static final char UNSUPP_MDUPDATE = '6'; 
public static final char UNSUPP_AGG_BK = '7'; 
public static final char UNSUPP_ENTRY = '8'; 
public static final char UNSUPP_TRD_SESSION_ID = '9'; 
public static final char UNSUPP_SCOPE = 'A'; 
public static final char UNSUPP_POSITION_EFFECT_SETTLE_FLAG = 'B'; 
public static final char UNSUPP_MDIMPLICIT_DELETE = 'C'; 

  public MDReqRejReason() 
  { 
    super(281);
  } 
  public MDReqRejReason(char data) 
  { 
    super(281, data);
  } 
} 
