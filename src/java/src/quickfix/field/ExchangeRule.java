package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ExchangeRule extends StringField 
{ 
  public static final int FIELD = 825; 

  public ExchangeRule() 
  { 
    super(825);
  } 
  public ExchangeRule(String data) 
  { 
    super(825, data);
  } 
} 
