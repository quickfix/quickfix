package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TradeAllocIndicator extends IntField 
{ 
  public static final int FIELD = 826; 
public static final int ALLOCATION_NOT_REQUIRED = 0; 
public static final int ALLOCATION_REQUIRED = 1; 
public static final int USE_ALLOCATION_PROVIDED_WITH_THE_TRADE = 2; 
public static final int ALLOCATION_GIVE_UP_EXECUTOR = 3; 
public static final int ALLOCATION_FROM_EXECUTOR = 4; 
public static final int ALLOCATION_TO_CLAIM_ACCOUNT = 5; 

  public TradeAllocIndicator() 
  { 
    super(826);
  } 
  public TradeAllocIndicator(int data) 
  { 
    super(826, data);
  } 
} 
