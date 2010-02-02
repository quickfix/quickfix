package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class InstrumentPartyRole extends IntField 
{ 
  public static final int FIELD = 1051; 

  public InstrumentPartyRole() 
  { 
    super(1051);
  } 
  public InstrumentPartyRole(int data) 
  { 
    super(1051, data);
  } 
} 
