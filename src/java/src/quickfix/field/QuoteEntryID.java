package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class QuoteEntryID extends StringField 
{ 
  public static final int FIELD = 299; 

  public QuoteEntryID() 
  { 
    super(299);
  } 
  public QuoteEntryID(String data) 
  { 
    super(299, data);
  } 
} 
