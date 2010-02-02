package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class TriggerType extends CharField 
{ 
  public static final int FIELD = 1100; 
public static final char PARTIAL_EXECUTION = '1'; 
public static final char SPECIFIED_TRADING_SESSION = '2'; 
public static final char NEXT_AUCTION = '3'; 
public static final char PRICE_MOVEMENT = '4'; 

  public TriggerType() 
  { 
    super(1100);
  } 
  public TriggerType(char data) 
  { 
    super(1100, data);
  } 
} 
