package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingTradingSessionID extends StringField 
{ 
  public static final int FIELD = 822; 

  public UnderlyingTradingSessionID() 
  { 
    super(822);
  } 
  public UnderlyingTradingSessionID(String data) 
  { 
    super(822, data);
  } 
} 
