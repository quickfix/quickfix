package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TradeOriginationDate extends StringField 
{ 
  public static final int FIELD = 229; 

  public TradeOriginationDate() 
  { 
    super(229);
  } 
  public TradeOriginationDate(String data) 
  { 
    super(229, data);
  } 
} 
