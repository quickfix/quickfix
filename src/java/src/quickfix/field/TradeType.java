package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class TradeType extends CharField 
{ 
  public static final int FIELD = 418; 

  public TradeType() 
  { 
    super(418);
  } 
  public TradeType(char data) 
  { 
    super(418, data);
  } 
} 
