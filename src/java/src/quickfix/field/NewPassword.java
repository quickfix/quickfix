package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class NewPassword extends StringField 
{ 
  public static final int FIELD = 925; 

  public NewPassword() 
  { 
    super(925);
  } 
  public NewPassword(String data) 
  { 
    super(925, data);
  } 
} 
