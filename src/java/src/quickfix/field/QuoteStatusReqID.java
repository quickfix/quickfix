package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class QuoteStatusReqID extends StringField 
{ 
  public static final int FIELD = 649; 

  public QuoteStatusReqID() 
  { 
    super(649);
  } 
  public QuoteStatusReqID(String data) 
  { 
    super(649, data);
  } 
} 
