package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class StatusValue extends IntField 
{ 
  public static final int FIELD = 928; 
public static final int CONNECTED = 1; 
public static final int NOT_CONNECTED_DOWN_EXPECTED_UP = 2; 
public static final int NOT_CONNECTED_DOWN_EXPECTED_DOWN = 3; 
public static final int IN_PROCESS = 4; 

  public StatusValue() 
  { 
    super(928);
  } 
  public StatusValue(int data) 
  { 
    super(928, data);
  } 
} 
