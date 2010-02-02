package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoUndlyInstrumentParties extends IntField 
{ 
  public static final int FIELD = 1058; 

  public NoUndlyInstrumentParties() 
  { 
    super(1058);
  } 
  public NoUndlyInstrumentParties(int data) 
  { 
    super(1058, data);
  } 
} 
