package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SettlPartySubIDType extends IntField 
{ 
  public static final int FIELD = 786; 

  public SettlPartySubIDType() 
  { 
    super(786);
  } 
  public SettlPartySubIDType(int data) 
  { 
    super(786, data);
  } 
} 
