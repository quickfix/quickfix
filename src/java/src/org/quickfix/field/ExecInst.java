package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ExecInst extends StringField 
{ 
  public static final int FIELD = 18; 
public static final char NOT_HELD = '1'; 
public static final char WORK = '2'; 
public static final char GO_ALONG = '3'; 
public static final char OVER_DAY = '4'; 
public static final char HELD = '5'; 
public static final char PART_NOT_INIT = '6'; 
public static final char STRICT_SCALE = '7'; 
public static final char TRY_TO_SCALE = '8'; 
public static final char STAY_BID = '9'; 
public static final char STAY_OFFER = '0'; 
public static final char NO_CROSS = 'A'; 
public static final char OK_CROSS = 'B'; 
public static final char CALL_FIRST = 'C'; 
public static final char PERC_VOL = 'D'; 
public static final char DNI = 'E'; 
public static final char DNR = 'F'; 
public static final char AON = 'G'; 
public static final char RESTATE_ON_SYS_FAIL = 'H'; 
public static final char INSTIT_ONLY = 'I'; 
public static final char RESTATE_ON_TRADING_HALT = 'J'; 
public static final char CANCEL_ON_TRADING_HALT = 'K'; 
public static final char LAST_PEG = 'L'; 
public static final char MID_PRC_PEG = 'M'; 
public static final char NON_NEGO = 'N'; 
public static final char OPEN_PEG = 'O'; 
public static final char MARK_PEG = 'P'; 
public static final char CANCEL_ON_SYS_FAIL = 'Q'; 
public static final char PRIM_PEG = 'R'; 
public static final char SUSPEND = 'S'; 
public static final char CUST_DISP_INST = 'U'; 
public static final char NETTING = 'V'; 
public static final char PEG_VWAP = 'W'; 
public static final char TRADE_ALONG = 'X'; 
public static final char TRY_TO_STOP = 'Y'; 
public static final char CXLIF_NOT_BEST = 'Z'; 
public static final char TRAIL_STOP_PEG = 'a'; 
public static final char STRICT_LIMIT = 'b'; 
public static final char IGNORE_PRICE_CHK = 'c'; 
public static final char PEG_TO_LIMIT = 'd'; 
public static final char WORK_TO_STRATEGY = 'e'; 

  public ExecInst() 
  { 
    super(18);
  } 
  public ExecInst(String data) 
  { 
    super(18, data);
  } 
} 
