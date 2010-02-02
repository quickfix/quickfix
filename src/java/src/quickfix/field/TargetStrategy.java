package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TargetStrategy extends IntField 
{ 
  public static final int FIELD = 847; 
public static final int VWAP = 1; 
public static final int PARTICIPATE = 2; 
public static final int MININIZE_MARKET_IMPACT = 3; 

  public TargetStrategy() 
  { 
    super(847);
  } 
  public TargetStrategy(int data) 
  { 
    super(847, data);
  } 
} 
