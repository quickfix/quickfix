package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class IOIQualifier extends CharField 
{ 
  public static final int FIELD = 104; 
public static final char ALL_OR_NONE = 'A'; 
public static final char MARKET_ON_CLOSE = 'B'; 
public static final char AT_THE_CLOSE = 'C'; 
public static final char VWAP = 'D'; 
public static final char IN_TOUCH_WITH = 'I'; 
public static final char LIMIT = 'L'; 
public static final char MORE_BEHIND = 'M'; 
public static final char AT_THE_OPEN = 'O'; 
public static final char TAKING_A_POSITION = 'P'; 
public static final char AT_THE_MARKET = 'Q'; 
public static final char READY_TO_TRADE = 'R'; 
public static final char PORTFOLIO_SHOWN = 'S'; 
public static final char THROUGH_THE_DAY = 'T'; 
public static final char VERSUS = 'V'; 
public static final char INDICATION_WORKING_AWAY = 'W'; 
public static final char CROSSING_OPPORTUNITY = 'X'; 
public static final char AT_THE_MIDPOINT = 'Y'; 
public static final char PRE_OPEN = 'Z'; 

  public IOIQualifier() 
  { 
    super(104);
  } 
  public IOIQualifier(char data) 
  { 
    super(104, data);
  } 
} 
