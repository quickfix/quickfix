package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class RootPartySubIDType extends IntField 
{ 
  public static final int FIELD = 1122; 

  public RootPartySubIDType() 
  { 
    super(1122);
  } 
  public RootPartySubIDType(int data) 
  { 
    super(1122, data);
  } 
} 
