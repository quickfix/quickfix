package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CardIssNo extends StringField 
{ 
  public static final int FIELD = 491; 

  public CardIssNo() 
  { 
    super(491);
  } 
  public CardIssNo(String data) 
  { 
    super(491, data);
  } 
} 
