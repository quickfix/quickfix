package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class OrigTradeDate extends StringField 
{ 
  public static final int FIELD = 1125; 

  public OrigTradeDate() 
  { 
    super(1125);
  } 
  public OrigTradeDate(String data) 
  { 
    super(1125, data);
  } 
} 
