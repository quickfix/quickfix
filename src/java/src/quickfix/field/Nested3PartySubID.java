package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class Nested3PartySubID extends StringField 
{ 
  public static final int FIELD = 953; 

  public Nested3PartySubID() 
  { 
    super(953);
  } 
  public Nested3PartySubID(String data) 
  { 
    super(953, data);
  } 
} 
