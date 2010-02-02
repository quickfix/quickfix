package quickfix.field; 
import quickfix.UtcTimeStampField; 
import java.util.Date; 

public class SideTrdRegTimestamp extends UtcTimeStampField 
{ 
  public static final int FIELD = 1012; 

  public SideTrdRegTimestamp() 
  { 
    super(1012);
  } 
  public SideTrdRegTimestamp(Date data) 
  { 
    super(1012, data);
  } 
} 
