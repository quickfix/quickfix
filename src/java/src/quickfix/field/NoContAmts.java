package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoContAmts extends IntField 
{ 
  public static final int FIELD = 518; 

  public NoContAmts() 
  { 
    super(518);
  } 
  public NoContAmts(int data) 
  { 
    super(518, data);
  } 
} 
