package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AllocText extends StringField 
{ 
  public static final int FIELD = 161; 

  public AllocText() 
  { 
    super(161);
  } 
  public AllocText(String data) 
  { 
    super(161, data);
  } 
} 
