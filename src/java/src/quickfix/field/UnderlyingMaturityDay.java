package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingMaturityDay extends StringField 
{ 
  public static final int FIELD = 314; 

  public UnderlyingMaturityDay() 
  { 
    super(314);
  } 
  public UnderlyingMaturityDay(String data) 
  { 
    super(314, data);
  } 
} 
