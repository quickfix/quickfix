package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TZTransactTime extends StringField 
{ 
  public static final int FIELD = 1132; 

  public TZTransactTime() 
  { 
    super(1132);
  } 
  public TZTransactTime(String data) 
  { 
    super(1132, data);
  } 
} 
