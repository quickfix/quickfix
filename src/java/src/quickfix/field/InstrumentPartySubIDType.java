package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class InstrumentPartySubIDType extends IntField 
{ 
  public static final int FIELD = 1054; 

  public InstrumentPartySubIDType() 
  { 
    super(1054);
  } 
  public InstrumentPartySubIDType(int data) 
  { 
    super(1054, data);
  } 
} 
