package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MaturityDay extends StringField 
{ 
  public static final int FIELD = 205; 

  public MaturityDay() 
  { 
    super(205);
  } 
  public MaturityDay(String data) 
  { 
    super(205, data);
  } 
} 
