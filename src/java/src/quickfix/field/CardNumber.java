package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CardNumber extends StringField 
{ 
  public static final int FIELD = 489; 

  public CardNumber() 
  { 
    super(489);
  } 
  public CardNumber(String data) 
  { 
    super(489, data);
  } 
} 
