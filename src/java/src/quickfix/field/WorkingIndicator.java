package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class WorkingIndicator extends BooleanField 
{ 
  public static final int FIELD = 636; 

  public WorkingIndicator() 
  { 
    super(636);
  } 
  public WorkingIndicator(boolean data) 
  { 
    super(636, data);
  } 
} 
