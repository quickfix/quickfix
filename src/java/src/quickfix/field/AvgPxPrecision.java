package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class AvgPxPrecision extends IntField 
{ 
  public static final int FIELD = 74; 

  public AvgPxPrecision() 
  { 
    super(74);
  } 
  public AvgPxPrecision(int data) 
  { 
    super(74, data);
  } 
} 
