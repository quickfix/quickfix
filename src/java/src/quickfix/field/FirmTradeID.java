package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class FirmTradeID extends StringField 
{ 
  public static final int FIELD = 1041; 

  public FirmTradeID() 
  { 
    super(1041);
  } 
  public FirmTradeID(String data) 
  { 
    super(1041, data);
  } 
} 
