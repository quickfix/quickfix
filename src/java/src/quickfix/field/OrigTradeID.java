package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class OrigTradeID extends StringField 
{ 
  public static final int FIELD = 1126; 

  public OrigTradeID() 
  { 
    super(1126);
  } 
  public OrigTradeID(String data) 
  { 
    super(1126, data);
  } 
} 
