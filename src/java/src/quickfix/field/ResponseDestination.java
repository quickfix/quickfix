package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ResponseDestination extends StringField 
{ 
  public static final int FIELD = 726; 

  public ResponseDestination() 
  { 
    super(726);
  } 
  public ResponseDestination(String data) 
  { 
    super(726, data);
  } 
} 
