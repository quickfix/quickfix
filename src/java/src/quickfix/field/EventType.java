package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class EventType extends IntField 
{ 
  public static final int FIELD = 865; 
public static final int PUT = 1; 
public static final int CALL = 2; 
public static final int TENDER = 3; 
public static final int SINKING_FUND_CALL = 4; 

  public EventType() 
  { 
    super(865);
  } 
  public EventType(int data) 
  { 
    super(865, data);
  } 
} 
