package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ClOrdID extends StringField 
{ 
  public static final int FIELD = 11; 

  public ClOrdID() 
  { 
    super(11);
  } 
  public ClOrdID(String data) 
  { 
    super(11, data);
  } 
} 
