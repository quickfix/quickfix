package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TradeID extends StringField 
{ 
  public static final int FIELD = 1003; 

  public TradeID() 
  { 
    super(1003);
  } 
  public TradeID(String data) 
  { 
    super(1003, data);
  } 
} 
