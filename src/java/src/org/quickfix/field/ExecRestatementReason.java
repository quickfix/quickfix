package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ExecRestatementReason extends IntField 
{ 
  public static final int FIELD = 378; 
public static final int GTCORP_ACT = 0; 
public static final int GTRENEW = 1; 
public static final int VERBAL = 2; 
public static final int RE_PX = 3; 
public static final int BRKR_OPT = 4; 
public static final int PART_DEC = 5; 
public static final int CXL_TRADING_HALT = 6; 
public static final int CXL_SYSTEM_FAILURE = 7; 
public static final int MRKT_OPTION = 8; 
public static final int CANCELED_NOT_BEST = 9; 
public static final int WAREHOUSE_RECAP = 10; 
public static final int OTHER = 99; 

  public ExecRestatementReason() 
  { 
    super(378);
  } 
  public ExecRestatementReason(int data) 
  { 
    super(378, data);
  } 
} 
