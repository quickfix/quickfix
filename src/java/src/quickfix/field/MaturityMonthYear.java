package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MaturityMonthYear extends StringField 
{ 
  public static final int FIELD = 200; 

  public MaturityMonthYear() 
  { 
    super(200);
  } 
  public MaturityMonthYear(String data) 
  { 
    super(200, data);
  } 
} 
