package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class EventText extends StringField 
{ 
  public static final int FIELD = 868; 

  public EventText() 
  { 
    super(868);
  } 
  public EventText(String data) 
  { 
    super(868, data);
  } 
} 
