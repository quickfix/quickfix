package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NetworkStatusResponseType extends IntField 
{ 
  public static final int FIELD = 937; 
public static final int FULL = 1; 
public static final int INCREMENTAL_UPDATE = 2; 

  public NetworkStatusResponseType() 
  { 
    super(937);
  } 
  public NetworkStatusResponseType(int data) 
  { 
    super(937, data);
  } 
} 
