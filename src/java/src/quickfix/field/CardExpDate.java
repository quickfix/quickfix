package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CardExpDate extends StringField 
{ 
  public static final int FIELD = 490; 

  public CardExpDate() 
  { 
    super(490);
  } 
  public CardExpDate(String data) 
  { 
    super(490, data);
  } 
} 
