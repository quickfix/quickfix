package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class DatedDate extends StringField 
{ 
  public static final int FIELD = 873; 

  public DatedDate() 
  { 
    super(873);
  } 
  public DatedDate(String data) 
  { 
    super(873, data);
  } 
} 
