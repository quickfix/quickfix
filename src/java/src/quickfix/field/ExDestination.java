package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ExDestination extends StringField 
{ 
  public static final int FIELD = 100; 

  public ExDestination() 
  { 
    super(100);
  } 
  public ExDestination(String data) 
  { 
    super(100, data);
  } 
} 
