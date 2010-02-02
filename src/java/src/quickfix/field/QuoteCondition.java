package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class QuoteCondition extends StringField 
{ 
  public static final int FIELD = 276; 
public static final String OPEN_ACTIVE = "A"; 
public static final String CLOSED_INACTIVE = "B"; 
public static final String EXCHANGE_BEST = "C"; 
public static final String CONSOLIDATED_BEST = "D"; 
public static final String LOCKED = "E"; 
public static final String CROSSED = "F"; 
public static final String DEPTH = "G"; 
public static final String FAST_TRADING = "H"; 
public static final String NON_FIRM = "I"; 
public static final String MANUAL_SLOW_QUOTE = "L"; 
public static final String OUTRIGHT_PRICE = "J"; 
public static final String IMPLIED_PRICE = "K"; 
public static final String DEPTH_ON_OFFER = "M"; 
public static final String DEPTH_ON_BID = "N"; 
public static final String CLOSING = "O"; 
public static final String NEWS_DISSEMINATION = "P"; 
public static final String TRADING_RANGE = "Q"; 
public static final String ORDER_INFLUX = "R"; 
public static final String DUE_TO_RELATED = "S"; 
public static final String NEWS_PENDING = "T"; 
public static final String ADDITIONAL_INFO = "U"; 
public static final String ADDITIONAL_INFO_DUE_TO_RELATED = "V"; 
public static final String RESUME = "W"; 
public static final String VIEW_OF_COMMON = "X"; 
public static final String VOLUME_ALERT = "Y"; 
public static final String ORDER_IMBALANCE = "Z"; 
public static final String EQUIPMENT_CHANGEOVER = "a"; 
public static final String NO_OPEN = "b"; 
public static final String REGULAR_ETH = "c"; 
public static final String AUTOMATIC_EXECUTION = "d"; 
public static final String AUTOMATIC_EXECUTION_ETH = "e"; 
public static final String FAST_MARKET_ETH = "f"; 
public static final String INACTIVE_ETH = "g"; 
public static final String ROTATION = "h"; 
public static final String ROTATION_ETH = "i"; 
public static final String HALT = "j"; 
public static final String HALT_ETH = "k"; 
public static final String DUE_TO_NEWS_DISSEMINATION = "l"; 
public static final String DUE_TO_NEWS_PENDING = "m"; 
public static final String TRADING_RESUME = "n"; 
public static final String OUT_OF_SEQUENCE = "o"; 
public static final String BID_SPECIALIST = "p"; 
public static final String OFFER_SPECIALIST = "q"; 
public static final String BID_OFFER_SPECIALIST = "r"; 
public static final String END_OF_DAY_SAM = "s"; 
public static final String FORBIDDEN_SAM = "t"; 
public static final String FROZEN_SAM = "u"; 
public static final String PREOPENING_SAM = "v"; 
public static final String OPENING_SAM = "w"; 
public static final String OPEN_SAM = "x"; 
public static final String SURVEILLANCE_SAM = "y"; 
public static final String SUSPENDED_SAM = "z"; 
public static final String RESERVED_SAM = "0"; 
public static final String NO_ACTIVE_SAM = "1"; 
public static final String RESTRICTED = "2"; 
public static final String NO_MARKET_ACTIVITY = "1000"; 
public static final String NO_DATA_AVAILABLE = "1001"; 
public static final String NOT_APPLICABLE = "1002"; 
public static final String AMOUNT_THRESHOLD_EXCEEDED = "1003"; 

  public QuoteCondition() 
  { 
    super(276);
  } 
  public QuoteCondition(String data) 
  { 
    super(276, data);
  } 
} 
