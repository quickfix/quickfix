package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingCreditRating extends StringField 
{ 
  public static final int FIELD = 256; 

  public UnderlyingCreditRating() 
  { 
    super(256);
  } 
  public UnderlyingCreditRating(String data) 
  { 
    super(256, data);
  } 
} 
