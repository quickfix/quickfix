package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class Nested2PartyID extends StringField 
{ 
  public static final int FIELD = 757; 

  public Nested2PartyID() 
  { 
    super(757);
  } 
  public Nested2PartyID(String data) 
  { 
    super(757, data);
  } 
} 
