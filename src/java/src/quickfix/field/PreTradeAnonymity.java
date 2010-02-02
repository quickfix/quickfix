package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class PreTradeAnonymity extends BooleanField 
{ 
  public static final int FIELD = 1091; 

  public PreTradeAnonymity() 
  { 
    super(1091);
  } 
  public PreTradeAnonymity(boolean data) 
  { 
    super(1091, data);
  } 
} 
