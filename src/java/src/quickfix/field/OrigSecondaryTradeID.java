package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class OrigSecondaryTradeID extends StringField 
{ 
  public static final int FIELD = 1127; 

  public OrigSecondaryTradeID() 
  { 
    super(1127);
  } 
  public OrigSecondaryTradeID(String data) 
  { 
    super(1127, data);
  } 
} 
