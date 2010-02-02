package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SideTrdRegTimestampType extends IntField 
{ 
  public static final int FIELD = 1013; 

  public SideTrdRegTimestampType() 
  { 
    super(1013);
  } 
  public SideTrdRegTimestampType(int data) 
  { 
    super(1013, data);
  } 
} 
