package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoInstrumentParties extends IntField 
{ 
  public static final int FIELD = 1018; 

  public NoInstrumentParties() 
  { 
    super(1018);
  } 
  public NoInstrumentParties(int data) 
  { 
    super(1018, data);
  } 
} 
