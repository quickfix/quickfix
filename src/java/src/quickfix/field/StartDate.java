package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class StartDate extends StringField 
{ 
  public static final int FIELD = 916; 

  public StartDate() 
  { 
    super(916);
  } 
  public StartDate(String data) 
  { 
    super(916, data);
  } 
} 
