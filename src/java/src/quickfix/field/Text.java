package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class Text extends StringField 
{ 
  public static final int FIELD = 58; 

  public Text() 
  { 
    super(58);
  } 
  public Text(String data) 
  { 
    super(58, data);
  } 
} 
