package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class OrdType extends CharField 
{ 
  public static final int FIELD = 40; 
public static final char MARKET = '1'; 
public static final char LIMIT = '2'; 
public static final char STOP = '3'; 
public static final char STOP_LIMIT = '4'; 
public static final char MARKET_ON_CLOSE = '5'; 
public static final char WITH_OR_WITHOUT = '6'; 
public static final char LIMIT_OR_BETTER = '7'; 
public static final char LIMIT_WITH_OR_WITHOUT = '8'; 
public static final char ON_BASIS = '9'; 
public static final char ON_CLOSE = 'A'; 
public static final char LIMIT_ON_CLOSE = 'B'; 
public static final char FOREX_MARKET = 'C'; 
public static final char PREVIOUSLY_QUOTED = 'D'; 
public static final char PREVIOUSLY_INDICATED = 'E'; 
public static final char FOREX_LIMIT = 'F'; 
public static final char FOREX_SWAP = 'G'; 
public static final char FOREX_PREVIOUSLY_QUOTED = 'H'; 
public static final char FUNARI = 'I'; 
public static final char MARKET_IF_TOUCHED = 'J'; 
public static final char MARKET_WITH_LEFTOVER_AS_LIMIT = 'K'; 
public static final char PREVIOUS_FUND_VALUATION_POINT = 'L'; 
public static final char NEXT_FUND_VALUATION_POINT = 'M'; 
public static final char PEGGED = 'P'; 

  public OrdType() 
  { 
    super(40);
  } 
  public OrdType(char data) 
  { 
    super(40, data);
  } 
} 
