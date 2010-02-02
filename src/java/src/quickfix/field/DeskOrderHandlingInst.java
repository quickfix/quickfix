package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class DeskOrderHandlingInst extends StringField 
{ 
  public static final int FIELD = 1035; 
public static final String ADD_ON_ORDER = "ADD"; 
public static final String ALL_OR_NONE = "AON"; 
public static final String CASH_NOT_HELD = "CNH"; 
public static final String DIRECTED_ORDER = "DIR"; 
public static final String EXCHANGE_FOR_PHYSICAL_TRANSACTION = "E.W"; 
public static final String FILL_OR_KILL = "FOK"; 
public static final String IMBALANCE_ONLY = "IO"; 
public static final String IMMEDIATE_OR_CANCEL = "IOC"; 
public static final String LIMIT_ON_OPEN = "LOO"; 
public static final String LIMIT_ON_CLOSE = "LOC"; 
public static final String MARKET_AT_OPEN = "MAO"; 
public static final String MARKET_AT_CLOSE = "MAC"; 
public static final String MARKET_ON_OPEN = "MOO"; 
public static final String MARKET_ON_CLOSE = "MOC"; 
public static final String MINIMUM_QUANTITY = "MQT"; 
public static final String NOT_HELD = "NH"; 
public static final String OVER_THE_DAY = "OVD"; 
public static final String PEGGED = "PEG"; 
public static final String RESERVE_SIZE_ORDER = "RSV"; 
public static final String STOP_STOCK_TRANSACTION = "S.W"; 
public static final String SCALE = "SCL"; 
public static final String TIME_ORDER = "TMO"; 
public static final String TRAILING_STOP = "TS"; 
public static final String WORK = "WRK"; 

  public DeskOrderHandlingInst() 
  { 
    super(1035);
  } 
  public DeskOrderHandlingInst(String data) 
  { 
    super(1035, data);
  } 
} 
