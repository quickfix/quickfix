package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class ApplQueueDepth extends IntField 
{ 
  public static final int FIELD = 813; 

  public ApplQueueDepth() 
  { 
    super(813);
  } 
  public ApplQueueDepth(int data) 
  { 
    super(813, data);
  } 
} 
