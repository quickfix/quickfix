package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ClearingBusinessDate extends StringField 
{ 
  public static final int FIELD = 715; 

  public ClearingBusinessDate() 
  { 
    super(715);
  } 
  public ClearingBusinessDate(String data) 
  { 
    super(715, data);
  } 
} 
