package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MDFeedType extends StringField 
{ 
  public static final int FIELD = 1022; 

  public MDFeedType() 
  { 
    super(1022);
  } 
  public MDFeedType(String data) 
  { 
    super(1022, data);
  } 
} 
