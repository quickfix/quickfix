package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class Nested2PartySubIDType extends IntField 
{ 
  public static final int FIELD = 807; 

  public Nested2PartySubIDType() 
  { 
    super(807);
  } 
  public Nested2PartySubIDType(int data) 
  { 
    super(807, data);
  } 
} 
