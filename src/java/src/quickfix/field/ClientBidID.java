package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ClientBidID extends StringField 
{ 
  public static final int FIELD = 391; 

  public ClientBidID() 
  { 
    super(391);
  } 
  public ClientBidID(String data) 
  { 
    super(391, data);
  } 
} 
