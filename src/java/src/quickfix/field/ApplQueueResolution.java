package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class ApplQueueResolution extends IntField 
{ 
  public static final int FIELD = 814; 
public static final int NO_ACTION_TAKEN = 0; 
public static final int QUEUE_FLUSHED = 1; 
public static final int OVERLAY_LAST = 2; 
public static final int END_SESSION = 3; 

  public ApplQueueResolution() 
  { 
    super(814);
  } 
  public ApplQueueResolution(int data) 
  { 
    super(814, data);
  } 
} 
