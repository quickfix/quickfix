package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class QuoteQualifier extends CharField 
{ 
  public static final int FIELD = 695; 

  public QuoteQualifier() 
  { 
    super(695);
  } 
  public QuoteQualifier(char data) 
  { 
    super(695, data);
  } 
} 
