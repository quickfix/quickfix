package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class QuoteQualifier extends CharField 
{ 
  public static final int FIELD = 695; 
public static final char AON = 'A'; 
public static final char MOC = 'B'; 
public static final char AT_CLOSE = 'C'; 
public static final char VWAP = 'D'; 
public static final char IN_TOUCH = 'I'; 
public static final char LIMIT = 'L'; 
public static final char MORE_BEHIND = 'M'; 
public static final char AT_OPEN = 'O'; 
public static final char TAKE_POSITION = 'P'; 
public static final char AT_MARKET = 'Q'; 
public static final char READY_TRADE = 'R'; 
public static final char PORT_SHOW = 'S'; 
public static final char THROUGH_DAY = 'T'; 
public static final char VERSUS = 'V'; 
public static final char IND_WRK_AWAY = 'W'; 
public static final char CROSS_OPP = 'X'; 
public static final char AT_MID = 'Y'; 
public static final char PRE_OPEN = 'Z'; 

  public QuoteQualifier() 
  { 
    super(695);
  } 
  public QuoteQualifier(char data) 
  { 
    super(695, data);
  } 
} 
