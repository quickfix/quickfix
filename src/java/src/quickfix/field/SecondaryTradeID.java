package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecondaryTradeID extends StringField 
{ 
  public static final int FIELD = 1040; 

  public SecondaryTradeID() 
  { 
    super(1040);
  } 
  public SecondaryTradeID(String data) 
  { 
    super(1040, data);
  } 
} 
