package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RegistDetls extends StringField 
{ 
  public static final int FIELD = 509; 

  public RegistDetls() 
  { 
    super(509);
  } 
  public RegistDetls(String data) 
  { 
    super(509, data);
  } 
} 
