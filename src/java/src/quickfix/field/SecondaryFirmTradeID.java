package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecondaryFirmTradeID extends StringField 
{ 
  public static final int FIELD = 1042; 

  public SecondaryFirmTradeID() 
  { 
    super(1042);
  } 
  public SecondaryFirmTradeID(String data) 
  { 
    super(1042, data);
  } 
} 
