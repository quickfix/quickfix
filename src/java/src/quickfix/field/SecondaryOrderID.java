package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecondaryOrderID extends StringField 
{ 
  public static final int FIELD = 198; 

  public SecondaryOrderID() 
  { 
    super(198);
  } 
  public SecondaryOrderID(String data) 
  { 
    super(198, data);
  } 
} 
