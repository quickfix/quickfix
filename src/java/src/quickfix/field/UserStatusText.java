package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UserStatusText extends StringField 
{ 
  public static final int FIELD = 927; 

  public UserStatusText() 
  { 
    super(927);
  } 
  public UserStatusText(String data) 
  { 
    super(927, data);
  } 
} 
