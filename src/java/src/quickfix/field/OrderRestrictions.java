package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class OrderRestrictions extends StringField 
{ 
  public static final int FIELD = 529; 
public static final char PROGRAM_TRADE = '1'; 
public static final char INDEX_ARBITRAGE = '2'; 
public static final char NON_INDEX_ARBITRAGE = '3'; 
public static final char COMPETING_MARKET_MAKER = '4'; 
public static final char ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_SECURITY = '5'; 
public static final char ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_UNDERLYING_SECURITY_OF_A_DERIVATIVE_SECURITY = '6'; 
public static final char FOREIGN_ENTITY = '7'; 
public static final char EXTERNAL_MARKET_PARTICIPANT = '8'; 
public static final char EXTERNAL_INTER_CONNECTED_MARKET_LINKAGE = '9'; 
public static final char RISKLESS_ARBITRAGE = 'A'; 

  public OrderRestrictions() 
  { 
    super(529);
  } 
  public OrderRestrictions(String data) 
  { 
    super(529, data);
  } 
} 
