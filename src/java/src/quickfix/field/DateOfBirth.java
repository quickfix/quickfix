package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class DateOfBirth extends StringField 
{ 
  public static final int FIELD = 486; 

  public DateOfBirth() 
  { 
    super(486);
  } 
  public DateOfBirth(String data) 
  { 
    super(486, data);
  } 
} 
