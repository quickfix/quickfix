package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SecurityTradingStatus extends IntField 
{ 
  public static final int FIELD = 326; 
public static final int OPN_DELAY = 1; 
public static final int TRD_HALT = 2; 
public static final int RESUME = 3; 
public static final int NO_OPEN = 4; 
public static final int PX_IND = 5; 
public static final int TRD_RNG_IND = 6; 
public static final int MKT_IMB_BUY = 7; 
public static final int MKT_BAL_SELL = 8; 
public static final int MKT_ON_CLS_IMB_BUY = 9; 
public static final int MKT_ON_CLS_IMB_SELL = 10; 
public static final int NA = 11; 
public static final int NO_MKT_IMB = 12; 
public static final int NO_MKT_ON_CLS_IMB = 13; 
public static final int ITSPRE_OPN = 14; 
public static final int NEW_PX_IND = 15; 
public static final int TRD_DIS_TIME = 16; 
public static final int READY = 17; 
public static final int NOT_AVAIL = 18; 
public static final int NOT_TRADED = 19; 
public static final int UNKNOWN = 20; 
public static final int PRE_OPEN = 21; 
public static final int OPENING_ROTATION = 22; 
public static final int FAST_MARKET = 23; 

  public SecurityTradingStatus() 
  { 
    super(326);
  } 
  public SecurityTradingStatus(int data) 
  { 
    super(326, data);
  } 
} 
