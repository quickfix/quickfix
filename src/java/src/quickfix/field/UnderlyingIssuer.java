package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingIssuer extends StringField 
{ 
  public static final int FIELD = 306; 

  public UnderlyingIssuer() 
  { 
    super(306);
  } 
  public UnderlyingIssuer(String data) 
  { 
    super(306, data);
  } 
} 
