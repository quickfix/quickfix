package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSecurityExchange extends StringField 
{ 
  public static final int FIELD = 308; 

  public UnderlyingSecurityExchange() 
  { 
    super(308);
  } 
  public UnderlyingSecurityExchange(String data) 
  { 
    super(308, data);
  } 
} 
