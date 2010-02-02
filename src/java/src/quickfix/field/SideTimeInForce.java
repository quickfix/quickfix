package quickfix.field; 
import quickfix.UtcTimeStampField; 
import java.util.Date; 

public class SideTimeInForce extends UtcTimeStampField 
{ 
  public static final int FIELD = 962; 

  public SideTimeInForce() 
  { 
    super(962);
  } 
  public SideTimeInForce(Date data) 
  { 
    super(962, data);
  } 
} 
