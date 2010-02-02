package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class InputSource extends StringField 
{ 
  public static final int FIELD = 979; 

  public InputSource() 
  { 
    super(979);
  } 
  public InputSource(String data) 
  { 
    super(979, data);
  } 
} 
