package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class QuoteReqID extends StringField 
{ 
  public static final int FIELD = 131; 

  public QuoteReqID() 
  { 
    super(131);
  } 
  public QuoteReqID(String data) 
  { 
    super(131, data);
  } 
} 
