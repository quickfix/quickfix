package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class DeskID extends StringField 
{ 
  public static final int FIELD = 284; 

  public DeskID() 
  { 
    super(284);
  } 
  public DeskID(String data) 
  { 
    super(284, data);
  } 
} 
