package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RoutingID extends StringField 
{ 
  public static final int FIELD = 217; 

  public RoutingID() 
  { 
    super(217);
  } 
  public RoutingID(String data) 
  { 
    super(217, data);
  } 
} 
