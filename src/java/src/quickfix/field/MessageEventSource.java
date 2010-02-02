package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MessageEventSource extends StringField 
{ 
  public static final int FIELD = 1011; 

  public MessageEventSource() 
  { 
    super(1011);
  } 
  public MessageEventSource(String data) 
  { 
    super(1011, data);
  } 
} 
