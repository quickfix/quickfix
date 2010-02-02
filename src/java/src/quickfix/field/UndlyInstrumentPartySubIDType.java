package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class UndlyInstrumentPartySubIDType extends IntField 
{ 
  public static final int FIELD = 1064; 

  public UndlyInstrumentPartySubIDType() 
  { 
    super(1064);
  } 
  public UndlyInstrumentPartySubIDType(int data) 
  { 
    super(1064, data);
  } 
} 
