package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegCreditRating extends StringField 
{ 
  public static final int FIELD = 257; 

  public LegCreditRating() 
  { 
    super(257);
  } 
  public LegCreditRating(String data) 
  { 
    super(257, data);
  } 
} 
