package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MDReqID extends StringField 
{ 
  public static final int FIELD = 262; 

  public MDReqID() 
  { 
    super(262);
  } 
  public MDReqID(String data) 
  { 
    super(262, data);
  } 
} 
