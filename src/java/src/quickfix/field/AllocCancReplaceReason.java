package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class AllocCancReplaceReason extends IntField 
{ 
  public static final int FIELD = 796; 
public static final int ORIGINAL_DETAILS_INCOMPLETE_INCORRECT = 1; 
public static final int CHANGE_IN_UNDERLYING_ORDER_DETAILS = 2; 

  public AllocCancReplaceReason() 
  { 
    super(796);
  } 
  public AllocCancReplaceReason(int data) 
  { 
    super(796, data);
  } 
} 
