package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class StatusText extends StringField 
{ 
  public static final int FIELD = 929; 

  public StatusText() 
  { 
    super(929);
  } 
  public StatusText(String data) 
  { 
    super(929, data);
  } 
} 
