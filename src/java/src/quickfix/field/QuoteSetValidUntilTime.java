package quickfix.field; 
import quickfix.UtcTimeStampField; 
import java.util.Date; 

public class QuoteSetValidUntilTime extends UtcTimeStampField 
{ 
  public static final int FIELD = 367; 

  public QuoteSetValidUntilTime() 
  { 
    super(367);
  } 
  public QuoteSetValidUntilTime(Date data) 
  { 
    super(367, data);
  } 
} 
