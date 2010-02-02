package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TriggerTradingSessionSubID extends StringField 
{ 
  public static final int FIELD = 1114; 

  public TriggerTradingSessionSubID() 
  { 
    super(1114);
  } 
  public TriggerTradingSessionSubID(String data) 
  { 
    super(1114, data);
  } 
} 
