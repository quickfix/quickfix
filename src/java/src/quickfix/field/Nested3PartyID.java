package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class Nested3PartyID extends StringField 
{ 
  public static final int FIELD = 949; 

  public Nested3PartyID() 
  { 
    super(949);
  } 
  public Nested3PartyID(String data) 
  { 
    super(949, data);
  } 
} 
