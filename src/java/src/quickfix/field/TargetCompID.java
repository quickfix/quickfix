package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TargetCompID extends StringField 
{ 
  public static final int FIELD = 56; 

  public TargetCompID() 
  { 
    super(56);
  } 
  public TargetCompID(String data) 
  { 
    super(56, data);
  } 
} 
