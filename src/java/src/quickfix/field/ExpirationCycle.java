package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class ExpirationCycle extends IntField 
{ 
  public static final int FIELD = 827; 
public static final int EXPIRE_ON_TRADING_SESSION_CLOSE = 0; 
public static final int EXPIRE_ON_TRADING_SESSION_OPEN = 1; 

  public ExpirationCycle() 
  { 
    super(827);
  } 
  public ExpirationCycle(int data) 
  { 
    super(827, data);
  } 
} 
