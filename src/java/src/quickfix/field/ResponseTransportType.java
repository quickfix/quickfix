package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class ResponseTransportType extends IntField 
{ 
  public static final int FIELD = 725; 
public static final int INBAND = 0; 
public static final int OUT_OF_BAND = 1; 

  public ResponseTransportType() 
  { 
    super(725);
  } 
  public ResponseTransportType(int data) 
  { 
    super(725, data);
  } 
} 
