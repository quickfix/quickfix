package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class TriggerOrderType extends CharField 
{ 
  public static final int FIELD = 1111; 
public static final char MARKET = '1'; 
public static final char LIMIT = '2'; 

  public TriggerOrderType() 
  { 
    super(1111);
  } 
  public TriggerOrderType(char data) 
  { 
    super(1111, data);
  } 
} 
