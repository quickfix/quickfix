package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class CollRptID extends StringField 
{ 
  public static final int FIELD = 908; 

  public CollRptID() 
  { 
    super(908);
  } 
  public CollRptID(String data) 
  { 
    super(908, data);
  } 
} 
