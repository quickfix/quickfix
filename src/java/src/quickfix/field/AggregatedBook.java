package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class AggregatedBook extends BooleanField 
{ 
  public static final int FIELD = 266; 

  public AggregatedBook() 
  { 
    super(266);
  } 
  public AggregatedBook(boolean data) 
  { 
    super(266, data);
  } 
} 
