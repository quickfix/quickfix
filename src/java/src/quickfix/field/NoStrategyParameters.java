package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoStrategyParameters extends IntField 
{ 
  public static final int FIELD = 957; 

  public NoStrategyParameters() 
  { 
    super(957);
  } 
  public NoStrategyParameters(int data) 
  { 
    super(957, data);
  } 
} 
