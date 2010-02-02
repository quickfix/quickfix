package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RefApplVerID extends StringField 
{ 
  public static final int FIELD = 1130; 

  public RefApplVerID() 
  { 
    super(1130);
  } 
  public RefApplVerID(String data) 
  { 
    super(1130, data);
  } 
} 
