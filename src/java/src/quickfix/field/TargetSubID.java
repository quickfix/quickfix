package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TargetSubID extends StringField 
{ 
  public static final int FIELD = 57; 

  public TargetSubID() 
  { 
    super(57);
  } 
  public TargetSubID(String data) 
  { 
    super(57, data);
  } 
} 
