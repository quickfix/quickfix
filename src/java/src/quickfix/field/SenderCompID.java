package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SenderCompID extends StringField 
{ 
  public static final int FIELD = 49; 

  public SenderCompID() 
  { 
    super(49);
  } 
  public SenderCompID(String data) 
  { 
    super(49, data);
  } 
} 
