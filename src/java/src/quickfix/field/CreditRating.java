package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CreditRating extends StringField 
{ 
  public static final int FIELD = 255; 

  public CreditRating() 
  { 
    super(255);
  } 
  public CreditRating(String data) 
  { 
    super(255, data);
  } 
} 
