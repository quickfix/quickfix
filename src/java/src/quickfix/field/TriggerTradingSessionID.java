package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TriggerTradingSessionID extends StringField 
{ 
  public static final int FIELD = 1113; 

  public TriggerTradingSessionID() 
  { 
    super(1113);
  } 
  public TriggerTradingSessionID(String data) 
  { 
    super(1113, data);
  } 
} 
