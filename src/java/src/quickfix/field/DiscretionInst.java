package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class DiscretionInst extends CharField 
{ 
  public static final int FIELD = 388; 
public static final char RELATED_TO_DISPLAYED_PRICE = '0'; 
public static final char RELATED_TO_MARKET_PRICE = '1'; 
public static final char RELATED_TO_PRIMARY_PRICE = '2'; 
public static final char RELATED_TO_LOCAL_PRIMARY_PRICE = '3'; 
public static final char RELATED_TO_MIDPOINT_PRICE = '4'; 
public static final char RELATED_TO_LAST_TRADE_PRICE = '5'; 
public static final char RELATED_TO_VWAP = '6'; 

  public DiscretionInst() 
  { 
    super(388);
  } 
  public DiscretionInst(char data) 
  { 
    super(388, data);
  } 
} 
