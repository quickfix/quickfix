package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ListID extends StringField 
{ 
  public static final int FIELD = 66; 

  public ListID() 
  { 
    super(66);
  } 
  public ListID(String data) 
  { 
    super(66, data);
  } 
} 
