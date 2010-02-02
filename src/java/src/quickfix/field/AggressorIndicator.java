package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class AggressorIndicator extends BooleanField 
{ 
  public static final int FIELD = 1057; 

  public AggressorIndicator() 
  { 
    super(1057);
  } 
  public AggressorIndicator(boolean data) 
  { 
    super(1057, data);
  } 
} 
