package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class Username extends StringField 
{ 
  public static final int FIELD = 553; 

  public Username() 
  { 
    super(553);
  } 
  public Username(String data) 
  { 
    super(553, data);
  } 
} 
