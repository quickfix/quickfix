package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ReceivedDeptID extends StringField 
{ 
  public static final int FIELD = 1030; 

  public ReceivedDeptID() 
  { 
    super(1030);
  } 
  public ReceivedDeptID(String data) 
  { 
    super(1030, data);
  } 
} 
