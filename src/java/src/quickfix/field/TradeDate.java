package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TradeDate extends StringField 
{ 
  public static final int FIELD = 75; 

  public TradeDate() 
  { 
    super(75);
  } 
  public TradeDate(String data) 
  { 
    super(75, data);
  } 
} 
