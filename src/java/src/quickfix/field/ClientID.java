package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ClientID extends StringField 
{ 
  public static final int FIELD = 109; 

  public ClientID() 
  { 
    super(109);
  } 
  public ClientID(String data) 
  { 
    super(109, data);
  } 
} 
