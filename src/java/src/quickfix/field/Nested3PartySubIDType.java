package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class Nested3PartySubIDType extends IntField 
{ 
  public static final int FIELD = 954; 

  public Nested3PartySubIDType() 
  { 
    super(954);
  } 
  public Nested3PartySubIDType(int data) 
  { 
    super(954, data);
  } 
} 
