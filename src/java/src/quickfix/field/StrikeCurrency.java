package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class StrikeCurrency extends StringField 
{ 
  public static final int FIELD = 947; 

  public StrikeCurrency() 
  { 
    super(947);
  } 
  public StrikeCurrency(String data) 
  { 
    super(947, data);
  } 
} 
